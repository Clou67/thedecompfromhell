# game/update/camera8.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

SECTION_HEADER_CAMERA_UNK:   # 0x4b624, 0x14 bytes
  004b624  lis 3, 114
  004b628  lis 4, 1
  004b62c  addic 3, 3, -6160
  004b630  stw 4, 72(3)
  004b634  blr

Cam8_UpdateTarget:   # 0x4b660, 0x180 bytes
  004b660  ori 4, 3, 0
  004b664  lis 3, 5
  004b668  lis 5, 151
  004b66c  addi 3, 3, -18888
  004b670  addic 5, 5, -25376
  004b674  lis 6, 151
  004b678  lfs 6, 4(3)
  004b67c  lfs 8, 32(5)
  004b680  lfs 1, 128(5)
  004b684  lwz 4, 112(4)
  004b688  fmadds 8, 8, 6, 1
  004b68c  lfs 5, 0(3)
  004b690  lfs 7, 36(5)
  004b694  lfs 2, 40(5)
  004b698  stfs 8, 128(4)
  004b69c  lfs 1, 132(5)
  004b6a0  lwz 6, -25488(6)
  004b6a4  fmadds 7, 7, 6, 1
  004b6a8  cmpwi 6, 5
  004b6ac  cmpwi 1, 6, 16
  004b6b0  stfs 7, 132(4)
  004b6b4  lfs 1, 136(5)
  004b6b8  fmadds 6, 2, 6, 1
  004b6bc  stfs 6, 136(4)
  004b6c0  lfs 1, 140(5)
  004b6c4  stfs 8, 464(4)
  004b6c8  stfs 1, 140(4)
  004b6cc  stfs 7, 468(4)
  004b6d0  stfs 6, 472(4)
  004b6d4  stfs 1, 476(4)
  004b6d8  lfs 4, 668(5)
  004b6dc  lfs 3, 656(5)
  004b6e0  lfs 2, 660(5)
  004b6e4  lfs 1, 664(5)
  004b6e8  bf 2, 0x4b758
  004b6ec  lfs 9, 12(3)
  004b6f0  lfs 10, 8(3)
  004b6f4  fsubs 7, 9, 7
  004b6f8  fsubs 8, 10, 8
  004b6fc  fmuls 7, 7, 7
  004b700  fmadds 7, 8, 8, 7
  004b704  lfs 8, 16(3)
  004b708  fsqrts 7, 7
  004b70c  fcmpu 0, 7, 8
  004b710  cror 6, 1, 2
  004b714  bt 6, 0x4b738
  004b718  lfs 7, 20(3)
  004b71c  fcmpu 0, 6, 7
  004b720  cror 6, 1, 2
  004b724  bt 6, 0x4b774
  004b728  lis 5, 17017
  004b72c  ori 5, 5, 39322
  004b730  stw 5, 136(4)
  004b734  b 0x4b774
  004b738  lfs 7, 24(3)
  004b73c  fcmpu 0, 6, 7
  004b740  cror 6, 1, 2
  004b744  bt 6, 0x4b774
  004b748  lis 5, 17030
  004b74c  ori 5, 5, 26214
  004b750  stw 5, 136(4)
  004b754  b 0x4b774
  004b758  bf 6, 0x4b774
  004b75c  lfs 7, 28(3)
  004b760  fcmpu 0, 6, 7
  004b764  cror 6, 1, 2
  004b768  bt 6, 0x4b774
  004b76c  lis 5, 17051
  004b770  stw 5, 136(4)
  004b774  fmuls 6, 2, 2
  004b778  lfs 7, 32(3)
  004b77c  stfs 4, 172(4)
  004b780  fmr 4, 7
  004b784  fmadds 6, 3, 3, 6
  004b788  fmadds 6, 1, 1, 6
  004b78c  fsqrts 6, 6
  004b790  fdivs 4, 4, 6
  004b794  fsub 7, 5, 6
  004b798  fsub 8, 5, 6
  004b79c  fsub 9, 5, 6
  004b7a0  fsub 10, 6, 5
  004b7a4  fsub 11, 6, 5
  004b7a8  fsub 6, 6, 5
  004b7ac  fmuls 3, 3, 4
  004b7b0  fmuls 2, 2, 4
  004b7b4  fmuls 1, 1, 4
  004b7b8  fsel 4, 7, 5, 3
  004b7bc  fsel 7, 8, 5, 2
  004b7c0  fsel 5, 9, 5, 1
  004b7c4  fsel 3, 10, 4, 3
  004b7c8  fsel 2, 11, 7, 2
  004b7cc  fsel 1, 6, 5, 1
  004b7d0  stfs 3, 160(4)
  004b7d4  stfs 2, 164(4)
  004b7d8  stfs 1, 168(4)
  004b7dc  blr

Cam8_SetParams:   # 0x4b7f0, 0x58 bytes
  004b7f0  lis 3, 149
  004b7f4  lis 4, 5
  004b7f8  addic 3, 3, 5056
  004b7fc  addi 4, 4, -18464
  004b800  lwz 3, 384(3)
  004b804  lwz 3, 112(3)
  004b808  stfs 1, 388(3)
  004b80c  stfs 2, 392(3)
  004b810  stfs 3, 384(3)
  004b814  stfs 4, 400(3)
  004b818  stfs 5, 404(3)
  004b81c  stfs 6, 396(3)
  004b820  lfs 1, 0(4)
  004b824  lfs 2, 4(4)
  004b828  fsub 3, 7, 1
  004b82c  fsub 1, 8, 1
  004b830  fsel 2, 3, 7, 2
  004b834  stfs 2, 16(3)
  004b838  lfs 2, 8(4)
  004b83c  fsel 1, 1, 8, 2
  004b840  stfs 1, 20(3)
  004b844  blr

Cam8_CalcInitialPos:   # 0x4b858, 0x4d4 bytes
  004b858  stdu 1, -224(1)
  004b85c  mflr 0
  004b860  std 0, 240(1)
  004b864  stfd 22, 144(1)
  004b868  stfd 23, 152(1)
  004b86c  stfd 24, 160(1)
  004b870  stfd 25, 168(1)
  004b874  stfd 26, 176(1)
  004b878  stfd 27, 184(1)
  004b87c  stfd 28, 192(1)
  004b880  stfd 29, 200(1)
  004b884  stfd 30, 208(1)
  004b888  stfd 31, 216(1)
  004b88c  std 31, 136(1)
  004b890  std 29, 120(1)
  004b894  ori 31, 3, 0
  004b898  lis 4, 5
  004b89c  std 30, 128(1)
  004b8a0  addi 29, 4, -18360
  004b8a4  lwz 30, 112(31)
  004b8a8  bl 0x4b660
  004b8ac  lis 3, 151
  004b8b0  addic 3, 3, -25376
  004b8b4  lwz 4, 8320(3)
  004b8b8  lfs 7, 196(4)
  004b8bc  lfs 6, 192(4)
  004b8c0  fmuls 1, 7, 7
  004b8c4  lfs 10, 200(4)
  004b8c8  lfs 8, 0(29)
  004b8cc  fmr 9, 8
  004b8d0  lfs 3, 224(30)
  004b8d4  lfs 4, 128(30)
  004b8d8  fmadds 5, 6, 6, 1
  004b8dc  fmr 1, 9
  004b8e0  fmadds 5, 10, 10, 5
  004b8e4  fmr 2, 1
  004b8e8  fsqrts 11, 5
  004b8ec  fcmpu 0, 11, 2
  004b8f0  bt 2, 0x4b944
  004b8f4  frsqrte 1, 5
  004b8f8  lis 4, 5
  004b8fc  addi 4, 4, -18360
  004b900  lfs 2, 4(4)
  004b904  lfs 9, 8(4)
  004b908  fmuls 11, 5, 1
  004b90c  fmuls 12, 2, 1
  004b910  fnmsubs 11, 11, 1, 9
  004b914  fmadds 1, 11, 12, 1
  004b918  fmuls 11, 5, 1
  004b91c  fmuls 12, 2, 1
  004b920  fnmsubs 11, 11, 1, 9
  004b924  fmadds 1, 11, 12, 1
  004b928  fmuls 5, 5, 1
  004b92c  fmuls 2, 2, 1
  004b930  fnmsubs 5, 5, 1, 9
  004b934  fmadds 2, 5, 2, 1
  004b938  fmuls 9, 6, 2
  004b93c  fmuls 1, 7, 2
  004b940  fmuls 2, 10, 2
  004b944  fmuls 5, 1, 1
  004b948  fmadds 5, 9, 9, 5
  004b94c  fmadds 5, 2, 2, 5
  004b950  fsqrts 5, 5
  004b954  lis 4, 5
  004b958  addi 4, 4, -18360
  004b95c  fdivs 3, 3, 5
  004b960  fsub 6, 8, 5
  004b964  fsub 7, 5, 8
  004b968  fsub 10, 8, 5
  004b96c  fsub 12, 8, 5
  004b970  fsub 11, 5, 8
  004b974  fsub 5, 5, 8
  004b978  fmuls 9, 3, 9
  004b97c  fmuls 1, 3, 1
  004b980  fmuls 2, 3, 2
  004b984  fsel 3, 6, 8, 9
  004b988  fsel 6, 10, 8, 1
  004b98c  fsel 10, 12, 8, 2
  004b990  fsel 3, 7, 3, 9
  004b994  fsel 1, 11, 6, 1
  004b998  fsel 2, 5, 10, 2
  004b99c  fsubs 4, 4, 3
  004b9a0  stfs 4, 48(31)
  004b9a4  lfs 3, 132(30)
  004b9a8  fsubs 5, 3, 1
  004b9ac  stfs 5, 52(31)
  004b9b0  lfs 1, 136(30)
  004b9b4  fsubs 6, 1, 2
  004b9b8  stfs 6, 56(31)
  004b9bc  lfs 1, 140(30)
  004b9c0  stfs 1, 60(31)
  004b9c4  lfs 1, 660(3)
  004b9c8  lfs 2, 656(3)
  004b9cc  fmuls 3, 1, 1
  004b9d0  lfs 9, 664(3)
  004b9d4  lfs 7, 12(4)
  004b9d8  fmadds 3, 2, 2, 3
  004b9dc  lfs 10, 240(30)
  004b9e0  fmadds 3, 9, 9, 3
  004b9e4  fsqrts 3, 3
  004b9e8  fdivs 11, 7, 3
  004b9ec  lfs 7, 668(3)
  004b9f0  fsub 12, 8, 3
  004b9f4  fsub 13, 3, 8
  004b9f8  fsub 0, 8, 3
  004b9fc  fsub 31, 8, 3
  004ba00  fsub 30, 3, 8
  004ba04  fsub 29, 3, 8
  004ba08  fmuls 3, 1, 11
  004ba0c  fmuls 1, 2, 11
  004ba10  fmuls 2, 9, 11
  004ba14  fsel 9, 12, 8, 3
  004ba18  fsel 11, 0, 8, 1
  004ba1c  fsel 12, 31, 8, 2
  004ba20  fsel 3, 13, 9, 3
  004ba24  fsel 1, 30, 11, 1
  004ba28  fsel 2, 29, 12, 2
  004ba2c  fmuls 9, 3, 3
  004ba30  fmadds 9, 1, 1, 9
  004ba34  fmadds 9, 2, 2, 9
  004ba38  fsqrts 9, 9
  004ba3c  fdivs 10, 10, 9
  004ba40  fsub 11, 8, 9
  004ba44  fsub 12, 8, 9
  004ba48  fsub 13, 8, 9
  004ba4c  fsub 0, 9, 8
  004ba50  fsub 31, 9, 8
  004ba54  fsub 30, 9, 8
  004ba58  fsub 29, 8, 9
  004ba5c  fsub 26, 8, 9
  004ba60  fsub 28, 9, 8
  004ba64  fsub 27, 8, 9
  004ba68  fsub 24, 9, 8
  004ba6c  fsub 25, 9, 8
  004ba70  fmuls 23, 10, 2
  004ba74  fmuls 22, 10, 3
  004ba78  fmuls 10, 10, 1
  004ba7c  fsel 11, 11, 8, 23
  004ba80  fsel 12, 12, 8, 22
  004ba84  fsel 13, 13, 8, 10
  004ba88  fsel 11, 0, 11, 23
  004ba8c  fsel 12, 31, 12, 22
  004ba90  fsel 10, 30, 13, 10
  004ba94  fadds 6, 6, 11
  004ba98  fadds 5, 5, 12
  004ba9c  fadds 10, 4, 10
  004baa0  stfs 6, 56(31)
  004baa4  stfs 5, 52(31)
  004baa8  stfs 10, 48(31)
  004baac  lfs 4, 204(30)
  004bab0  fdivs 4, 4, 9
  004bab4  lfs 9, 132(30)
  004bab8  lfs 11, 128(30)
  004babc  lfs 12, 136(30)
  004bac0  fmuls 13, 4, 3
  004bac4  fmuls 0, 4, 1
  004bac8  fmuls 4, 4, 2
  004bacc  fsel 31, 29, 8, 13
  004bad0  fsel 30, 27, 8, 0
  004bad4  fsel 29, 26, 8, 4
  004bad8  fsel 13, 28, 31, 13
  004badc  fsel 0, 25, 30, 0
  004bae0  fsel 4, 24, 29, 4
  004bae4  fadds 9, 13, 9
  004bae8  fadds 11, 0, 11
  004baec  fadds 12, 4, 12
  004baf0  fsubs 4, 9, 5
  004baf4  fsubs 9, 11, 10
  004baf8  fsubs 5, 12, 6
  004bafc  fmuls 6, 4, 4
  004bb00  fmadds 6, 9, 9, 6
  004bb04  fmadds 6, 5, 5, 6
  004bb08  fsqrts 10, 6
  004bb0c  fcmpu 0, 10, 8
  004bb10  bf 2, 0x4bb38
  004bb14  fmr 13, 8
  004bb18  stfs 7, 12(31)
  004bb1c  stfs 9, 0(31)
  004bb20  stfs 4, 4(31)
  004bb24  stfs 5, 8(31)
  004bb28  lfs 9, 12(31)
  004bb2c  fmr 0, 13
  004bb30  fmr 31, 0
  004bb34  b 0x4bb90
  004bb38  frsqrte 10, 6
  004bb3c  lis 3, 5
  004bb40  addi 3, 3, -18360
  004bb44  lfs 11, 4(3)
  004bb48  lfs 12, 8(3)
  004bb4c  stfs 7, 12(31)
  004bb50  fmuls 13, 6, 10
  004bb54  fmuls 0, 11, 10
  004bb58  fnmsubs 13, 13, 10, 12
  004bb5c  fmadds 10, 13, 0, 10
  004bb60  fmuls 13, 6, 10
  004bb64  fmuls 0, 11, 10
  004bb68  fnmsubs 13, 13, 10, 12
  004bb6c  fmadds 10, 13, 0, 10
  004bb70  fmuls 6, 6, 10
  004bb74  fmuls 11, 11, 10
  004bb78  fnmsubs 6, 6, 10, 12
  004bb7c  fmadds 13, 6, 11, 10
  004bb80  fmuls 31, 9, 13
  004bb84  fmuls 0, 4, 13
  004bb88  fmuls 13, 5, 13
  004bb8c  fmr 9, 7
  004bb90  fmr 4, 1
  004bb94  fmuls 1, 2, 0
  004bb98  fmuls 5, 3, 31
  004bb9c  fmr 10, 8
  004bba0  li 3, 0
  004bba4  stfs 31, 0(31)
  004bba8  stfs 0, 4(31)
  004bbac  fmuls 6, 4, 13
  004bbb0  fmsubs 1, 3, 13, 1
  004bbb4  fmsubs 3, 4, 0, 5
  004bbb8  fmr 11, 10
  004bbbc  stfs 13, 8(31)
  004bbc0  stw 3, 28(31)
  004bbc4  stw 3, 44(31)
  004bbc8  fmsubs 2, 2, 31, 6
  004bbcc  fmuls 6, 0, 1
  004bbd0  fmuls 5, 31, 3
  004bbd4  fmr 12, 11
  004bbd8  fmuls 4, 2, 2
  004bbdc  fmsubs 6, 31, 2, 6
  004bbe0  fmsubs 5, 13, 1, 5
  004bbe4  fmadds 7, 1, 1, 4
  004bbe8  fmuls 4, 13, 2
  004bbec  fmadds 7, 3, 3, 7
  004bbf0  fmsubs 4, 0, 3, 4
  004bbf4  fsqrts 30, 7
  004bbf8  fcmpu 0, 30, 12
  004bbfc  bt 2, 0x4bc50
  004bc00  frsqrte 10, 7
  004bc04  lis 3, 5
  004bc08  addi 3, 3, -18360
  004bc0c  lfs 11, 4(3)
  004bc10  lfs 12, 8(3)
  004bc14  fmuls 30, 7, 10
  004bc18  fmuls 29, 11, 10
  004bc1c  fnmsubs 30, 30, 10, 12
  004bc20  fmadds 10, 30, 29, 10
  004bc24  fmuls 30, 7, 10
  004bc28  fmuls 29, 11, 10
  004bc2c  fnmsubs 30, 30, 10, 12
  004bc30  fmadds 10, 30, 29, 10
  004bc34  fmuls 7, 7, 10
  004bc38  fmuls 11, 11, 10
  004bc3c  fnmsubs 7, 7, 10, 12
  004bc40  fmadds 10, 7, 11, 10
  004bc44  fmuls 12, 1, 10
  004bc48  fmuls 11, 2, 10
  004bc4c  fmuls 10, 3, 10
  004bc50  fmuls 1, 5, 5
  004bc54  stfs 10, 24(31)
  004bc58  stfs 12, 16(31)
  004bc5c  stfs 11, 20(31)
  004bc60  fmadds 10, 4, 4, 1
  004bc64  fmr 1, 8
  004bc68  fmadds 10, 6, 6, 10
  004bc6c  fmr 2, 1
  004bc70  fsqrts 3, 10
  004bc74  fcmpu 0, 3, 2
  004bc78  bt 2, 0x4bccc
  004bc7c  frsqrte 1, 10
  004bc80  lis 3, 5
  004bc84  addi 3, 3, -18360
  004bc88  lfs 2, 4(3)
  004bc8c  lfs 3, 8(3)
  004bc90  fmuls 7, 10, 1
  004bc94  fmuls 8, 2, 1
  004bc98  fnmsubs 7, 7, 1, 3
  004bc9c  fmadds 1, 7, 8, 1
  004bca0  fmuls 7, 10, 1
  004bca4  fmuls 8, 2, 1
  004bca8  fnmsubs 7, 7, 1, 3
  004bcac  fmadds 1, 7, 8, 1
  004bcb0  fmuls 7, 10, 1
  004bcb4  fmuls 2, 2, 1
  004bcb8  fnmsubs 3, 7, 1, 3
  004bcbc  fmadds 8, 3, 2, 1
  004bcc0  fmuls 2, 4, 8
  004bcc4  fmuls 1, 5, 8
  004bcc8  fmuls 8, 6, 8
  004bccc  stfs 2, 32(31)
  004bcd0  stfs 1, 36(31)
  004bcd4  stfs 8, 40(31)
  004bcd8  stfs 31, 64(31)
  004bcdc  stfs 0, 68(31)
  004bce0  stfs 13, 72(31)
  004bce4  stfs 9, 76(31)
  004bce8  ld 0, 240(1)
  004bcec  mtlr 0
  004bcf0  lfd 22, 144(1)
  004bcf4  lfd 23, 152(1)
  004bcf8  lfd 24, 160(1)
  004bcfc  lfd 25, 168(1)
  004bd00  lfd 26, 176(1)
  004bd04  lfd 27, 184(1)
  004bd08  lfd 28, 192(1)
  004bd0c  lfd 29, 200(1)
  004bd10  lfd 30, 208(1)
  004bd14  lfd 31, 216(1)
  004bd18  ld 29, 120(1)
  004bd1c  ld 30, 128(1)
  004bd20  ld 31, 136(1)
  004bd24  addi 1, 1, 224
  004bd28  blr

Cam8_InitParams:   # 0x4bd38, 0x23c bytes
  004bd38  stdu 1, -128(1)
  004bd3c  mflr 0
  004bd40  std 0, 144(1)
  004bd44  std 31, 120(1)
  004bd48  ori 31, 3, 0
  004bd4c  lis 3, 149
  004bd50  std 30, 112(1)
  004bd54  lis 4, 5
  004bd58  li 30, 0
  004bd5c  addi 4, 4, -17108
  004bd60  lhz 5, 132(31)
  004bd64  lwz 3, 16468(3)
  004bd68  extsh 5, 5
  004bd6c  sldi 5, 5, 5
  004bd70  lfs 1, 0(4)
  004bd74  lis 6, 151
  004bd78  addc 3, 3, 5
  004bd7c  addic 6, 6, -25376
  004bd80  clrldi 3, 3, 32
  004bd84  li 7, 5
  004bd88  lis 8, 15958
  004bd8c  lis 9, 15076
  004bd90  lwz 3, 28(3)
  004bd94  ori 8, 8, 30544
  004bd98  ori 9, 9, 50056
  004bd9c  stw 30, 72(3)
  004bda0  lwz 5, 112(31)
  004bda4  lfs 2, 40(3)
  004bda8  stfs 2, 388(5)
  004bdac  lfs 2, 44(3)
  004bdb0  stfs 2, 392(5)
  004bdb4  lfs 2, 48(3)
  004bdb8  stfs 2, 384(5)
  004bdbc  lfs 2, 52(3)
  004bdc0  stfs 2, 400(5)
  004bdc4  lfs 2, 56(3)
  004bdc8  stfs 2, 404(5)
  004bdcc  lfs 2, 60(3)
  004bdd0  stw 30, 444(5)
  004bdd4  stfs 2, 396(5)
  004bdd8  stw 30, 440(5)
  004bddc  stw 7, 192(5)
  004bde0  lwz 6, 8320(6)
  004bde4  lis 7, -17522
  004bde8  stw 30, 436(5)
  004bdec  stw 30, 432(5)
  004bdf0  stw 30, 460(5)
  004bdf4  ori 7, 7, 64053
  004bdf8  stw 30, 456(5)
  004bdfc  stw 6, 196(5)
  004be00  stw 30, 452(5)
  004be04  lis 6, 16128
  004be08  stw 30, 448(5)
  004be0c  stw 8, 200(5)
  004be10  lfs 2, 384(5)
  004be14  lwz 8, 112(31)
  004be18  stfs 2, 204(5)
  004be1c  stw 9, 216(5)
  004be20  stw 7, 220(5)
  004be24  lis 9, 15395
  004be28  lfs 2, 388(5)
  004be2c  stw 6, 228(8)
  004be30  stfs 2, 224(8)
  004be34  ori 7, 9, 55050
  004be38  lfs 2, 392(5)
  004be3c  lis 6, 16025
  004be40  lis 5, 15948
  004be44  stfs 2, 240(8)
  004be48  lfs 2, 4(4)
  004be4c  ori 6, 6, 39322
  004be50  stw 7, 16(8)
  004be54  lfs 3, 8(4)
  004be58  ori 4, 5, 52429
  004be5c  sth 30, 28(8)
  004be60  stw 30, 24(8)
  004be64  lis 7, 16298
  004be68  lwz 5, 112(31)
  004be6c  ori 7, 7, 43691
  004be70  stw 4, 20(8)
  004be74  stw 30, 12(8)
  004be78  stw 30, 8(8)
  004be7c  lis 4, 16204
  004be80  stw 30, 4(8)
  004be84  stw 30, 0(8)
  004be88  stw 30, 268(5)
  004be8c  ori 4, 4, 52429
  004be90  stw 30, 264(5)
  004be94  stw 30, 260(5)
  004be98  stw 30, 256(5)
  004be9c  stw 30, 300(5)
  004bea0  stw 30, 296(5)
  004bea4  stw 30, 292(5)
  004bea8  stw 30, 288(5)
  004beac  stw 30, 320(5)
  004beb0  lfs 4, 0(3)
  004beb4  stfs 4, 272(5)
  004beb8  lfs 4, 32(3)
  004bebc  stfs 4, 308(5)
  004bec0  lfs 4, 36(3)
  004bec4  stfs 4, 312(5)
  004bec8  stw 30, 316(5)
  004becc  stw 4, 80(5)
  004bed0  stw 6, 84(5)
  004bed4  lis 4, 149
  004bed8  stw 30, 88(5)
  004bedc  stw 7, 112(5)
  004bee0  stw 30, 60(5)
  004bee4  addic 4, 4, 5056
  004bee8  stw 30, 56(5)
  004beec  stw 30, 52(5)
  004bef0  stw 30, 48(5)
  004bef4  lfs 4, 64(3)
  004bef8  lfs 5, 68(3)
  004befc  fsub 6, 4, 1
  004bf00  fsub 1, 5, 1
  004bf04  sth 30, 92(5)
  004bf08  lfs 7, 40(3)
  004bf0c  lfs 8, 44(3)
  004bf10  lfs 9, 48(3)
  004bf14  lwz 4, 384(4)
  004bf18  lfs 10, 52(3)
  004bf1c  lfs 11, 56(3)
  004bf20  lfs 12, 60(3)
  004bf24  ori 3, 31, 0
  004bf28  fsel 2, 6, 4, 2
  004bf2c  lwz 4, 112(4)
  004bf30  fsel 1, 1, 5, 3
  004bf34  stfs 7, 388(4)
  004bf38  stfs 8, 392(4)
  004bf3c  stfs 9, 384(4)
  004bf40  stfs 10, 400(4)
  004bf44  stfs 11, 404(4)
  004bf48  stfs 12, 396(4)
  004bf4c  stfs 2, 16(4)
  004bf50  stfs 1, 20(4)
  004bf54  bl 0x4b858
  004bf58  sth 30, 126(31)
  004bf5c  ld 0, 144(1)
  004bf60  mtlr 0
  004bf64  ld 30, 112(1)
  004bf68  ld 31, 120(1)
  004bf6c  addi 1, 1, 128
  004bf70  blr

Cam8_UpdateRot:   # 0x4bf90, 0x85c bytes
  004bf90  stdu 1, -336(1)
  004bf94  mflr 0
  004bf98  std 0, 352(1)
  004bf9c  stfd 19, 232(1)
  004bfa0  stfd 20, 240(1)
  004bfa4  stfd 21, 248(1)
  004bfa8  stfd 22, 256(1)
  004bfac  stfd 23, 264(1)
  004bfb0  stfd 24, 272(1)
  004bfb4  stfd 25, 280(1)
  004bfb8  stfd 26, 288(1)
  004bfbc  stfd 27, 296(1)
  004bfc0  stfd 28, 304(1)
  004bfc4  stfd 29, 312(1)
  004bfc8  stfd 30, 320(1)
  004bfcc  stfd 31, 328(1)
  004bfd0  std 28, 200(1)
  004bfd4  lis 28, 151
  004bfd8  addic 28, 28, -25376
  004bfdc  lis 4, 5
  004bfe0  lfs 1, 660(28)
  004bfe4  lfs 2, 656(28)
  004bfe8  fmuls 1, 1, 1
  004bfec  lfs 3, 664(28)
  004bff0  std 31, 224(1)
  004bff4  addi 4, 4, -16524
  004bff8  ori 31, 3, 0
  004bffc  lfs 27, 0(4)
  004c000  std 30, 216(1)
  004c004  fmadds 1, 2, 2, 1
  004c008  lwz 30, 112(3)
  004c00c  fmadds 1, 3, 3, 1
  004c010  fsqrts 1, 1
  004c014  std 29, 208(1)
  004c018  fcmpu 0, 1, 27
  004c01c  bf 2, 0x4c050
  004c020  lfs 1, 660(28)
  004c024  stfs 2, 112(1)
  004c028  li 3, 0
  004c02c  lfs 2, 664(28)
  004c030  stfs 1, 116(1)
  004c034  lfs 1, 668(28)
  004c038  stfs 2, 120(1)
  004c03c  stw 3, 120(1)
  004c040  fmr 2, 1
  004c044  stw 3, 116(1)
  004c048  stw 3, 112(1)
  004c04c  b 0x4c084
  004c050  lis 3, 5
  004c054  addi 3, 3, -16524
  004c058  lfs 3, 4(3)
  004c05c  fdivs 1, 3, 1
  004c060  lfs 3, 660(28)
  004c064  lfs 4, 664(28)
  004c068  fmuls 6, 2, 1
  004c06c  fmuls 3, 3, 1
  004c070  lfs 2, 668(28)
  004c074  fmuls 1, 4, 1
  004c078  stfs 6, 112(1)
  004c07c  stfs 3, 116(1)
  004c080  stfs 1, 120(1)
  004c084  lhz 3, 28(30)
  004c088  stfs 2, 124(1)
  004c08c  cmpwi 3, 0
  004c090  bf 2, 0x4c548
  004c094  lbz 4, 2190(28)
  004c098  cmpwi 4, 0
  004c09c  bt 2, 0x4c548
  004c0a0  li 3, 1
  004c0a4  lwz 4, 8320(28)
  004c0a8  sth 3, 28(30)
  004c0ac  lfs 4, 112(1)
  004c0b0  lfs 3, 120(1)
  004c0b4  lfs 1, 232(4)
  004c0b8  lfs 6, 228(4)
  004c0bc  fmuls 5, 4, 1
  004c0c0  lfs 7, 224(4)
  004c0c4  fmuls 8, 3, 6
  004c0c8  lfs 2, 116(1)
  004c0cc  fmuls 9, 2, 7
  004c0d0  fmr 10, 27
  004c0d4  lfs 31, 48(31)
  004c0d8  fmsubs 5, 3, 7, 5
  004c0dc  fmsubs 1, 2, 1, 8
  004c0e0  fmsubs 6, 4, 6, 9
  004c0e4  fmr 11, 10
  004c0e8  lfs 30, 52(31)
  004c0ec  lfs 29, 56(31)
  004c0f0  fmuls 7, 5, 5
  004c0f4  fmr 12, 11
  004c0f8  fmadds 7, 1, 1, 7
  004c0fc  fmadds 7, 6, 6, 7
  004c100  fsqrts 8, 7
  004c104  fcmpu 0, 8, 12
  004c108  bt 2, 0x4c15c
  004c10c  frsqrte 8, 7
  004c110  lis 3, 5
  004c114  addi 3, 3, -16524
  004c118  lfs 9, 8(3)
  004c11c  lfs 10, 12(3)
  004c120  fmuls 11, 7, 8
  004c124  fmuls 12, 9, 8
  004c128  fnmsubs 11, 11, 8, 10
  004c12c  fmadds 8, 11, 12, 8
  004c130  fmuls 11, 7, 8
  004c134  fmuls 12, 9, 8
  004c138  fnmsubs 11, 11, 8, 10
  004c13c  fmadds 8, 11, 12, 8
  004c140  fmuls 7, 7, 8
  004c144  fmuls 9, 9, 8
  004c148  fnmsubs 7, 7, 8, 10
  004c14c  fmadds 10, 7, 9, 8
  004c150  fmuls 12, 1, 10
  004c154  fmuls 11, 5, 10
  004c158  fmuls 10, 6, 10
  004c15c  fmuls 7, 12, 3
  004c160  fmuls 1, 10, 2
  004c164  fmuls 8, 11, 4
  004c168  fmr 28, 27
  004c16c  li 3, 0
  004c170  fmsubs 7, 10, 4, 7
  004c174  fmsubs 1, 11, 3, 1
  004c178  fmsubs 8, 12, 2, 8
  004c17c  stw 3, 140(1)
  004c180  fmuls 5, 7, 7
  004c184  fmadds 9, 1, 1, 5
  004c188  fmr 5, 28
  004c18c  fmadds 9, 8, 8, 9
  004c190  fmr 6, 5
  004c194  fsqrts 13, 9
  004c198  fcmpu 0, 13, 6
  004c19c  bt 2, 0x4c1f0
  004c1a0  frsqrte 5, 9
  004c1a4  lis 3, 5
  004c1a8  addi 3, 3, -16524
  004c1ac  lfs 6, 8(3)
  004c1b0  lfs 13, 12(3)
  004c1b4  fmuls 0, 9, 5
  004c1b8  fmuls 28, 6, 5
  004c1bc  fnmsubs 0, 0, 5, 13
  004c1c0  fmadds 5, 0, 28, 5
  004c1c4  fmuls 0, 9, 5
  004c1c8  fmuls 28, 6, 5
  004c1cc  fnmsubs 0, 0, 5, 13
  004c1d0  fmadds 5, 0, 28, 5
  004c1d4  fmuls 9, 9, 5
  004c1d8  fmuls 6, 6, 5
  004c1dc  fnmsubs 9, 9, 5, 13
  004c1e0  fmadds 28, 9, 6, 5
  004c1e4  fmuls 6, 1, 28
  004c1e8  fmuls 5, 7, 28
  004c1ec  fmuls 28, 8, 28
  004c1f0  fmuls 1, 2, 2
  004c1f4  stfs 6, 128(1)
  004c1f8  stfs 5, 132(1)
  004c1fc  stfs 28, 136(1)
  004c200  lfs 7, 132(30)
  004c204  fsubs 30, 30, 7
  004c208  lfs 7, 128(30)
  004c20c  fmadds 1, 4, 4, 1
  004c210  fsubs 31, 31, 7
  004c214  lfs 7, 136(30)
  004c218  fsubs 29, 29, 7
  004c21c  fmuls 8, 30, 2
  004c220  fmadds 1, 3, 3, 1
  004c224  fmadds 7, 31, 4, 8
  004c228  fsqrts 1, 1
  004c22c  lis 3, 5
  004c230  addi 3, 3, -16524
  004c234  lfs 25, 16(3)
  004c238  lis 4, 115
  004c23c  addic 29, 4, 22720
  004c240  fmadds 7, 29, 3, 7
  004c244  fdivs 7, 7, 1
  004c248  fsub 8, 27, 1
  004c24c  fsub 13, 27, 1
  004c250  fsub 0, 27, 1
  004c254  fsub 9, 1, 27
  004c258  fsub 26, 1, 27
  004c25c  fsub 1, 1, 27
  004c260  fmuls 2, 2, 7
  004c264  fmuls 4, 4, 7
  004c268  fmuls 3, 3, 7
  004c26c  fsel 7, 8, 27, 2
  004c270  fsel 8, 13, 27, 4
  004c274  fsel 13, 0, 27, 3
  004c278  fsel 2, 9, 7, 2
  004c27c  fsel 4, 26, 8, 4
  004c280  fsel 1, 1, 13, 3
  004c284  lfs 7, 12(3)
  004c288  fsubs 3, 30, 2
  004c28c  fsubs 2, 31, 4
  004c290  fsubs 4, 29, 1
  004c294  fmuls 1, 3, 3
  004c298  fmuls 5, 5, 3
  004c29c  lfs 13, 22720(4)
  004c2a0  fmadds 9, 2, 2, 1
  004c2a4  fmadds 5, 6, 2, 5
  004c2a8  lfs 24, 4(3)
  004c2ac  lfs 0, 4(29)
  004c2b0  fmadds 9, 4, 4, 9
  004c2b4  fmadds 5, 28, 4, 5
  004c2b8  fmr 28, 7
  004c2bc  fsqrts 1, 9
  004c2c0  lfs 23, 8(29)
  004c2c4  lfs 22, 12(29)
  004c2c8  lfs 26, 20(3)
  004c2cc  fsub 6, 27, 1
  004c2d0  fsub 7, 1, 27
  004c2d4  fsel 6, 6, 25, 1
  004c2d8  fsel 6, 7, 6, 1
  004c2dc  fdivs 5, 5, 6
  004c2e0  fmr 6, 27
  004c2e4  fmr 7, 6
  004c2e8  fmr 8, 7
  004c2ec  fcmpu 0, 1, 8
  004c2f0  fabs 1, 5
  004c2f4  fsub 21, 5, 27
  004c2f8  fsel 1, 21, 5, 1
  004c2fc  fsub 5, 5, 27
  004c300  fsubs 21, 28, 1
  004c304  fmadds 13, 1, 0, 13
  004c308  fmuls 20, 1, 1
  004c30c  fsub 19, 21, 27
  004c310  fmuls 1, 20, 1
  004c314  fmadds 13, 20, 23, 13
  004c318  fsel 0, 19, 21, 27
  004c31c  fmadds 1, 1, 22, 13
  004c320  fsel 13, 5, 28, 24
  004c324  fsqrts 0, 0
  004c328  fnmsubs 5, 1, 0, 26
  004c32c  fnmsubs 0, 5, 13, 26
  004c330  bt 2, 0x4c380
  004c334  frsqrte 1, 9
  004c338  lis 3, 5
  004c33c  addi 3, 3, -16524
  004c340  lfs 6, 8(3)
  004c344  fmuls 7, 9, 1
  004c348  fmuls 8, 6, 1
  004c34c  fnmsubs 7, 7, 1, 28
  004c350  fmadds 1, 7, 8, 1
  004c354  fmuls 7, 9, 1
  004c358  fmuls 8, 6, 1
  004c35c  fnmsubs 7, 7, 1, 28
  004c360  fmadds 1, 7, 8, 1
  004c364  fmuls 7, 9, 1
  004c368  fmuls 6, 6, 1
  004c36c  fnmsubs 7, 7, 1, 28
  004c370  fmadds 8, 7, 6, 1
  004c374  fmuls 6, 2, 8
  004c378  fmuls 7, 3, 8
  004c37c  fmuls 8, 4, 8
  004c380  fmuls 1, 11, 7
  004c384  fmsubs 2, 5, 13, 26
  004c388  addic 3, 1, 144
  004c38c  addic 4, 1, 128
  004c390  addic 5, 1, 112
  004c394  fmadds 1, 12, 6, 1
  004c398  fmadds 1, 10, 8, 1
  004c39c  fsub 1, 1, 27
  004c3a0  fsel 1, 1, 0, 2
  004c3a4  stfs 1, 80(31)
  004c3a8  bl 0x1113e0
  004c3ac  nop
  004c3b0  fmuls 1, 30, 30
  004c3b4  lis 3, 115
  004c3b8  fmadds 4, 31, 31, 1
  004c3bc  lfs 1, 148(1)
  004c3c0  lfs 2, 144(1)
  004c3c4  fmuls 1, 1, 30
  004c3c8  lfs 3, 152(1)
  004c3cc  fmadds 4, 29, 29, 4
  004c3d0  fmadds 1, 2, 31, 1
  004c3d4  fsqrts 5, 4
  004c3d8  fmadds 1, 3, 29, 1
  004c3dc  fmr 6, 27
  004c3e0  fmr 7, 6
  004c3e4  fmr 8, 7
  004c3e8  fsub 2, 27, 5
  004c3ec  fsub 3, 5, 27
  004c3f0  fcmpu 0, 5, 8
  004c3f4  fsel 2, 2, 25, 5
  004c3f8  fsel 2, 3, 2, 5
  004c3fc  fdivs 1, 1, 2
  004c400  lfs 2, 4(29)
  004c404  lfs 3, 8(29)
  004c408  lfs 13, 22720(3)
  004c40c  lfs 0, 12(29)
  004c410  lfs 9, 112(1)
  004c414  lfs 10, 116(1)
  004c418  lfs 11, 120(1)
  004c41c  lfs 12, 128(1)
  004c420  fabs 25, 1
  004c424  fsub 23, 1, 27
  004c428  fsel 25, 23, 1, 25
  004c42c  fsubs 23, 28, 25
  004c430  fmuls 22, 25, 25
  004c434  fmadds 2, 25, 2, 13
  004c438  fsub 21, 23, 27
  004c43c  fmadds 2, 22, 3, 2
  004c440  fmuls 25, 22, 25
  004c444  fsel 13, 21, 23, 27
  004c448  fsqrts 3, 13
  004c44c  fsub 13, 1, 27
  004c450  fmadds 1, 25, 0, 2
  004c454  fsel 13, 13, 28, 24
  004c458  fnmsubs 3, 1, 3, 26
  004c45c  fmsubs 2, 3, 13, 26
  004c460  bt 2, 0x4c4b0
  004c464  frsqrte 1, 4
  004c468  lis 3, 5
  004c46c  addi 3, 3, -16524
  004c470  lfs 6, 8(3)
  004c474  fmuls 7, 4, 1
  004c478  fmuls 8, 6, 1
  004c47c  fnmsubs 7, 7, 1, 28
  004c480  fmadds 1, 7, 8, 1
  004c484  fmuls 7, 4, 1
  004c488  fmuls 8, 6, 1
  004c48c  fnmsubs 7, 7, 1, 28
  004c490  fmadds 1, 7, 8, 1
  004c494  fmuls 4, 4, 1
  004c498  fmuls 6, 6, 1
  004c49c  fnmsubs 4, 4, 1, 28
  004c4a0  fmadds 8, 4, 6, 1
  004c4a4  fmuls 6, 31, 8
  004c4a8  fmuls 7, 30, 8
  004c4ac  fmuls 8, 29, 8
  004c4b0  fmuls 1, 10, 7
  004c4b4  fnmsubs 3, 3, 13, 26
  004c4b8  lis 3, 16457
  004c4bc  stfs 5, 88(31)
  004c4c0  lis 4, -16444
  004c4c4  ori 6, 3, 4059
  004c4c8  lis 3, 15267
  004c4cc  ori 4, 4, 38921
  004c4d0  ori 9, 3, 55050
  004c4d4  lhz 3, 28(30)
  004c4d8  lis 5, 16544
  004c4dc  li 7, 0
  004c4e0  fmadds 1, 9, 6, 1
  004c4e4  lis 8, 15948
  004c4e8  ori 8, 8, 52429
  004c4ec  fmadds 1, 11, 8, 1
  004c4f0  fsub 1, 1, 27
  004c4f4  fsel 1, 1, 2, 3
  004c4f8  stfs 1, 84(31)
  004c4fc  stfs 12, 176(30)
  004c500  lfs 1, 132(1)
  004c504  stfs 1, 180(30)
  004c508  lfs 1, 136(1)
  004c50c  stfs 1, 184(30)
  004c510  lfs 1, 140(1)
  004c514  stw 6, 336(30)
  004c518  stfs 1, 188(30)
  004c51c  stw 4, 340(30)
  004c520  stw 5, 344(30)
  004c524  stw 7, 348(30)
  004c528  stw 7, 352(30)
  004c52c  stw 7, 356(30)
  004c530  stw 9, 360(30)
  004c534  stw 8, 372(30)
  004c538  stw 9, 364(30)
  004c53c  stw 8, 376(30)
  004c540  stw 9, 368(30)
  004c544  stw 8, 380(30)
  004c548  cmpwi 3, 1
  004c54c  bf 2, 0x4c798
  004c550  lfs 1, 180(30)
  004c554  lfs 3, 176(30)
  004c558  fmuls 1, 1, 1
  004c55c  lfs 2, 184(30)
  004c560  fmadds 1, 3, 3, 1
  004c564  fmadds 1, 2, 2, 1
  004c568  lfs 2, 88(31)
  004c56c  fsqrts 1, 1
  004c570  fcmpu 0, 1, 27
  004c574  bf 2, 0x4c5a4
  004c578  stfs 3, 160(1)
  004c57c  lfs 1, 180(30)
  004c580  li 3, 0
  004c584  stfs 1, 164(1)
  004c588  lfs 1, 184(30)
  004c58c  stfs 1, 168(1)
  004c590  lfs 1, 188(30)
  004c594  stw 3, 168(1)
  004c598  stw 3, 164(1)
  004c59c  stw 3, 160(1)
  004c5a0  b 0x4c5cc
  004c5a4  fdivs 1, 2, 1
  004c5a8  fmuls 2, 3, 1
  004c5ac  stfs 2, 160(1)
  004c5b0  lfs 2, 180(30)
  004c5b4  fmuls 2, 2, 1
  004c5b8  stfs 2, 164(1)
  004c5bc  lfs 2, 184(30)
  004c5c0  fmuls 1, 2, 1
  004c5c4  stfs 1, 168(1)
  004c5c8  lfs 1, 188(30)
  004c5cc  addic 3, 1, 160
  004c5d0  stfs 1, 172(1)
  004c5d4  lfs 1, 80(31)
  004c5d8  addic 5, 1, 112
  004c5dc  ori 4, 3, 0
  004c5e0  bl 0x1113e0
  004c5e4  nop
  004c5e8  lfs 1, 168(1)
  004c5ec  lfs 3, 112(1)
  004c5f0  lfs 2, 120(1)
  004c5f4  fmuls 4, 3, 1
  004c5f8  lfs 5, 164(1)
  004c5fc  lfs 6, 160(1)
  004c600  fmuls 7, 2, 5
  004c604  lfs 8, 116(1)
  004c608  fmuls 9, 8, 6
  004c60c  fmsubs 2, 2, 6, 4
  004c610  fmsubs 1, 8, 1, 7
  004c614  fmsubs 3, 3, 5, 9
  004c618  fmr 6, 27
  004c61c  fmuls 4, 2, 2
  004c620  li 3, 0
  004c624  stw 3, 188(1)
  004c628  fmr 7, 6
  004c62c  fmadds 4, 1, 1, 4
  004c630  lfs 5, 84(31)
  004c634  fmr 8, 7
  004c638  fmadds 4, 3, 3, 4
  004c63c  fsqrts 9, 4
  004c640  fcmpu 0, 9, 8
  004c644  bt 2, 0x4c698
  004c648  frsqrte 6, 4
  004c64c  lis 3, 5
  004c650  addi 3, 3, -16524
  004c654  lfs 7, 8(3)
  004c658  lfs 8, 12(3)
  004c65c  fmuls 9, 4, 6
  004c660  fmuls 10, 7, 6
  004c664  fnmsubs 9, 9, 6, 8
  004c668  fmadds 6, 9, 10, 6
  004c66c  fmuls 9, 4, 6
  004c670  fmuls 10, 7, 6
  004c674  fnmsubs 9, 9, 6, 8
  004c678  fmadds 6, 9, 10, 6
  004c67c  fmuls 4, 4, 6
  004c680  fmuls 7, 7, 6
  004c684  fnmsubs 4, 4, 6, 8
  004c688  fmadds 6, 4, 7, 6
  004c68c  fmuls 8, 1, 6
  004c690  fmuls 7, 2, 6
  004c694  fmuls 6, 3, 6
  004c698  stfs 8, 176(1)
  004c69c  addic 3, 1, 160
  004c6a0  stfs 7, 180(1)
  004c6a4  fmr 1, 5
  004c6a8  stfs 6, 184(1)
  004c6ac  addic 5, 1, 176
  004c6b0  ori 4, 3, 0
  004c6b4  bl 0x1113e0
  004c6b8  nop
  004c6bc  lfs 1, 128(30)
  004c6c0  lfs 2, 160(1)
  004c6c4  lfs 3, 164(1)
  004c6c8  fadds 2, 1, 2
  004c6cc  lfs 4, 168(1)
  004c6d0  lfs 1, 80(31)
  004c6d4  addic 5, 30, 348
  004c6d8  fmr 5, 27
  004c6dc  stfs 2, 48(31)
  004c6e0  lfs 2, 132(30)
  004c6e4  fadds 2, 2, 3
  004c6e8  stfs 2, 52(31)
  004c6ec  lfs 2, 136(30)
  004c6f0  fadds 2, 2, 4
  004c6f4  stfs 2, 56(31)
  004c6f8  lfs 2, 140(30)
  004c6fc  stfs 2, 60(31)
  004c700  lfs 2, 336(30)
  004c704  lfs 3, 360(30)
  004c708  lfs 4, 372(30)
  004c70c  bl 0x50288
  004c710  nop
  004c714  stfs 1, 80(31)
  004c718  addic 5, 30, 352
  004c71c  lfs 1, 84(31)
  004c720  fmr 5, 27
  004c724  lfs 2, 340(30)
  004c728  lfs 3, 364(30)
  004c72c  lfs 4, 376(30)
  004c730  bl 0x50288
  004c734  nop
  004c738  stfs 1, 84(31)
  004c73c  lfs 1, 88(31)
  004c740  addic 5, 30, 356
  004c744  lfs 2, 344(30)
  004c748  fmr 5, 27
  004c74c  lfs 3, 368(30)
  004c750  lfs 4, 380(30)
  004c754  bl 0x501e8
  004c758  nop
  004c75c  stfs 1, 88(31)
  004c760  lbz 3, 2190(28)
  004c764  cmpwi 3, 0
  004c768  bf 2, 0x4c798
  004c76c  lfs 1, 0(30)
  004c770  li 3, 0
  004c774  lfs 2, 4(30)
  004c778  fneg 1, 1
  004c77c  lfs 3, 8(30)
  004c780  fneg 2, 2
  004c784  sth 3, 28(30)
  004c788  fneg 3, 3
  004c78c  stfs 1, 0(30)
  004c790  stfs 2, 4(30)
  004c794  stfs 3, 8(30)
  004c798  ld 0, 352(1)
  004c79c  mtlr 0
  004c7a0  lfd 19, 232(1)
  004c7a4  lfd 20, 240(1)
  004c7a8  lfd 21, 248(1)
  004c7ac  lfd 22, 256(1)
  004c7b0  lfd 23, 264(1)
  004c7b4  lfd 24, 272(1)
  004c7b8  lfd 25, 280(1)
  004c7bc  lfd 26, 288(1)
  004c7c0  lfd 27, 296(1)
  004c7c4  lfd 28, 304(1)
  004c7c8  lfd 29, 312(1)
  004c7cc  lfd 30, 320(1)
  004c7d0  lfd 31, 328(1)
  004c7d4  ld 28, 200(1)
  004c7d8  ld 29, 208(1)
  004c7dc  ld 30, 216(1)
  004c7e0  ld 31, 224(1)
  004c7e4  addi 1, 1, 336
  004c7e8  blr

Cam8_UpdateCam:   # 0x4c828, 0xcac bytes
  004c828  stdu 1, -352(1)
  004c82c  mflr 0
  004c830  std 0, 368(1)
  004c834  stfd 14, 208(1)
  004c838  stfd 15, 216(1)
  004c83c  stfd 16, 224(1)
  004c840  stfd 17, 232(1)
  004c844  stfd 18, 240(1)
  004c848  stfd 19, 248(1)
  004c84c  stfd 20, 256(1)
  004c850  stfd 21, 264(1)
  004c854  stfd 22, 272(1)
  004c858  stfd 23, 280(1)
  004c85c  stfd 24, 288(1)
  004c860  stfd 25, 296(1)
  004c864  stfd 26, 304(1)
  004c868  stfd 27, 312(1)
  004c86c  stfd 28, 320(1)
  004c870  stfd 29, 328(1)
  004c874  stfd 30, 336(1)
  004c878  stfd 31, 344(1)
  004c87c  std 27, 168(1)
  004c880  lis 27, 151
  004c884  addic 27, 27, -25376
  004c888  lis 4, 5
  004c88c  lfs 5, 660(27)
  004c890  lfs 6, 656(27)
  004c894  fmuls 1, 5, 5
  004c898  lfs 7, 664(27)
  004c89c  std 31, 200(1)
  004c8a0  addi 4, 4, -14356
  004c8a4  ori 31, 3, 0
  004c8a8  lis 3, 149
  004c8ac  lfs 9, 4(4)
  004c8b0  fmadds 1, 6, 6, 1
  004c8b4  lfs 27, 0(4)
  004c8b8  std 29, 184(1)
  004c8bc  lfs 2, 48(31)
  004c8c0  li 29, 0
  004c8c4  lfs 3, 52(31)
  004c8c8  lfs 4, 56(31)
  004c8cc  std 26, 160(1)
  004c8d0  lhz 4, 132(31)
  004c8d4  ori 26, 29, 0
  004c8d8  fmadds 1, 7, 7, 1
  004c8dc  extsh 4, 4
  004c8e0  lwz 3, 16468(3)
  004c8e4  std 28, 176(1)
  004c8e8  sldi 4, 4, 5
  004c8ec  lwz 28, 112(31)
  004c8f0  addc 3, 3, 4
  004c8f4  std 30, 192(1)
  004c8f8  fsqrts 8, 1
  004c8fc  clrldi 30, 3, 32
  004c900  lfs 31, 384(28)
  004c904  lhz 4, 28(28)
  004c908  lfs 30, 128(28)
  004c90c  lwz 30, 28(30)
  004c910  lfs 1, 132(28)
  004c914  cmpwi 4, 0
  004c918  lfs 24, 136(28)
  004c91c  lwz 3, 8320(27)
  004c920  fdivs 9, 9, 8
  004c924  fsub 10, 27, 8
  004c928  fsub 11, 27, 8
  004c92c  fsub 12, 27, 8
  004c930  fsub 23, 8, 27
  004c934  fsub 22, 8, 27
  004c938  fsub 21, 8, 27
  004c93c  fmuls 6, 6, 9
  004c940  fmuls 7, 7, 9
  004c944  fmuls 5, 5, 9
  004c948  fsel 8, 10, 27, 6
  004c94c  fsel 9, 11, 27, 7
  004c950  fsel 10, 12, 27, 5
  004c954  fsel 23, 23, 8, 6
  004c958  fsel 22, 22, 9, 7
  004c95c  std 25, 152(1)
  004c960  fsel 21, 21, 10, 5
  004c964  bf 2, 0x4ce38
  004c968  stfs 23, 136(1)
  004c96c  stfs 22, 132(1)
  004c970  fmr 6, 1
  004c974  stfs 21, 128(1)
  004c978  lfs 1, 164(28)
  004c97c  lfs 5, 160(28)
  004c980  fmuls 7, 1, 1
  004c984  lfs 8, 168(28)
  004c988  fsubs 9, 2, 30
  004c98c  fsubs 4, 4, 24
  004c990  fsubs 3, 3, 6
  004c994  fmadds 7, 5, 5, 7
  004c998  lfs 11, 224(28)
  004c99c  fmuls 10, 3, 1
  004c9a0  fmadds 7, 8, 8, 7
  004c9a4  lfs 12, 240(28)
  004c9a8  fmadds 10, 9, 5, 10
  004c9ac  fsqrts 7, 7
  004c9b0  lfs 20, 432(28)
  004c9b4  lfs 19, 436(28)
  004c9b8  ori 5, 28, 0
  004c9bc  fmadds 10, 4, 8, 10
  004c9c0  fdivs 10, 10, 7
  004c9c4  fsub 13, 27, 7
  004c9c8  fsub 0, 7, 27
  004c9cc  fsub 29, 27, 7
  004c9d0  fsub 28, 27, 7
  004c9d4  fsub 26, 7, 27
  004c9d8  fsub 25, 7, 27
  004c9dc  fdivs 12, 12, 7
  004c9e0  fmuls 18, 1, 10
  004c9e4  fmuls 17, 5, 10
  004c9e8  fmuls 10, 8, 10
  004c9ec  fsel 13, 13, 27, 18
  004c9f0  fsel 29, 29, 27, 17
  004c9f4  fsel 28, 28, 27, 10
  004c9f8  fsel 13, 0, 13, 18
  004c9fc  fsel 0, 26, 29, 17
  004ca00  fsel 10, 25, 28, 10
  004ca04  fmuls 26, 1, 12
  004ca08  fmuls 5, 5, 12
  004ca0c  fsub 1, 27, 7
  004ca10  fsubs 13, 3, 13
  004ca14  fsubs 9, 9, 0
  004ca18  fsubs 10, 4, 10
  004ca1c  fmuls 8, 8, 12
  004ca20  fsel 16, 1, 27, 5
  004ca24  fmr 1, 2
  004ca28  fmuls 3, 13, 13
  004ca2c  fsub 25, 27, 7
  004ca30  fsub 12, 27, 7
  004ca34  fsub 18, 7, 27
  004ca38  fsub 17, 7, 27
  004ca3c  fmadds 3, 9, 9, 3
  004ca40  fsub 7, 7, 27
  004ca44  fsel 25, 25, 27, 8
  004ca48  lfs 0, 440(28)
  004ca4c  fsel 12, 12, 27, 26
  004ca50  lfs 4, 16(28)
  004ca54  fmadds 3, 10, 10, 3
  004ca58  lfs 29, 20(28)
  004ca5c  fsel 7, 7, 25, 8
  004ca60  lfs 28, 24(28)
  004ca64  fsel 18, 18, 16, 5
  004ca68  fsqrts 3, 3
  004ca6c  fsel 12, 17, 12, 26
  004ca70  fmr 5, 28
  004ca74  fdivs 2, 11, 3
  004ca78  fsub 11, 27, 3
  004ca7c  fsub 15, 27, 3
  004ca80  fsub 14, 27, 3
  004ca84  fsub 21, 3, 27
  004ca88  fsub 22, 3, 27
  004ca8c  fsub 23, 3, 27
  004ca90  fmr 3, 4
  004ca94  fmr 4, 29
  004ca98  fmuls 8, 9, 2
  004ca9c  fmuls 9, 13, 2
  004caa0  fmuls 2, 10, 2
  004caa4  fsel 10, 11, 27, 8
  004caa8  fsel 11, 15, 27, 9
  004caac  fsel 13, 14, 27, 2
  004cab0  fsel 8, 21, 10, 8
  004cab4  fsel 9, 22, 11, 9
  004cab8  fsel 2, 23, 13, 2
  004cabc  fadds 8, 8, 30
  004cac0  fadds 6, 9, 6
  004cac4  fadds 2, 2, 24
  004cac8  fadds 8, 8, 18
  004cacc  fadds 6, 6, 12
  004cad0  fadds 2, 2, 7
  004cad4  fadds 7, 8, 20
  004cad8  fadds 30, 6, 19
  004cadc  fadds 29, 2, 0
  004cae0  fmr 2, 7
  004cae4  bl 0x501e8
  004cae8  nop
  004caec  stfs 1, 48(31)
  004caf0  addic 5, 28, 4
  004caf4  lfs 1, 52(31)
  004caf8  fmr 2, 30
  004cafc  lfs 3, 16(28)
  004cb00  lfs 4, 20(28)
  004cb04  lfs 5, 24(28)
  004cb08  bl 0x501e8
  004cb0c  nop
  004cb10  stfs 1, 52(31)
  004cb14  lfs 1, 56(31)
  004cb18  addic 5, 28, 8
  004cb1c  lfs 3, 16(28)
  004cb20  fmr 2, 29
  004cb24  lfs 4, 20(28)
  004cb28  lfs 5, 24(28)
  004cb2c  bl 0x501e8
  004cb30  nop
  004cb34  lfs 30, 100(31)
  004cb38  lis 3, 5
  004cb3c  stfs 1, 56(31)
  004cb40  lfs 29, 104(31)
  004cb44  stfs 30, 112(1)
  004cb48  addi 3, 3, -14356
  004cb4c  lfs 28, 108(31)
  004cb50  stfs 29, 116(1)
  004cb54  stfs 28, 120(1)
  004cb58  fsubs 28, 1, 28
  004cb5c  stw 29, 124(1)
  004cb60  lfs 1, 48(31)
  004cb64  lfs 2, 52(31)
  004cb68  lfs 26, 8(3)
  004cb6c  lfs 25, 12(3)
  004cb70  fsubs 30, 1, 30
  004cb74  lfs 21, 128(1)
  004cb78  fsubs 29, 2, 29
  004cb7c  lfs 22, 132(1)
  004cb80  lfs 23, 136(1)
  004cb84  addic 3, 1, 112
  004cb88  fmr 1, 25
  004cb8c  li 5, 18
  004cb90  li 6, 0
  004cb94  bl 0x59e20
  004cb98  nop
  004cb9c  cmpwi 3, 0
  004cba0  bt 2, 0x4cbe0
  004cba4  lis 3, 161
  004cba8  lfs 1, 240(28)
  004cbac  lis 4, 5
  004cbb0  fmr 5, 27
  004cbb4  addic 3, 3, 2368
  004cbb8  addi 4, 4, -14356
  004cbbc  addic 5, 30, 72
  004cbc0  lfs 2, 56(3)
  004cbc4  lfs 3, 16(4)
  004cbc8  lfs 4, 20(4)
  004cbcc  fsubs 2, 2, 24
  004cbd0  bl 0x501e8
  004cbd4  nop
  004cbd8  stfs 1, 240(28)
  004cbdc  b 0x4cc10
  004cbe0  lfs 1, 112(1)
  004cbe4  lfs 2, 116(1)
  004cbe8  addic 29, 29, 1
  004cbec  fmadds 1, 30, 26, 1
  004cbf0  lfs 3, 120(1)
  004cbf4  fmadds 2, 29, 26, 2
  004cbf8  cmpwi 29, 6
  004cbfc  fmadds 3, 28, 26, 3
  004cc00  stfs 1, 112(1)
  004cc04  stfs 2, 116(1)
  004cc08  stfs 3, 120(1)
  004cc0c  bt 0, 0x4cb84
  004cc10  cmpwi 29, 6
  004cc14  bf 2, 0x4ccc4
  004cc18  lis 3, 5
  004cc1c  lfs 1, 432(28)
  004cc20  addic 5, 28, 448
  004cc24  addi 25, 3, -14356
  004cc28  fmr 2, 27
  004cc2c  lfs 30, 24(25)
  004cc30  lfs 29, 20(25)
  004cc34  lfs 28, 16(25)
  004cc38  fmr 3, 30
  004cc3c  fmr 4, 29
  004cc40  fmr 5, 28
  004cc44  bl 0x501e8
  004cc48  nop
  004cc4c  lfs 3, 436(28)
  004cc50  addic 5, 28, 452
  004cc54  stfs 1, 432(28)
  004cc58  fmr 2, 27
  004cc5c  fmr 1, 3
  004cc60  fmr 3, 30
  004cc64  fmr 4, 29
  004cc68  fmr 5, 28
  004cc6c  bl 0x501e8
  004cc70  nop
  004cc74  lfs 3, 440(28)
  004cc78  addic 5, 28, 456
  004cc7c  stfs 1, 436(28)
  004cc80  fmr 2, 27
  004cc84  fmr 1, 3
  004cc88  fmr 3, 30
  004cc8c  fmr 4, 29
  004cc90  fmr 5, 28
  004cc94  bl 0x501e8
  004cc98  nop
  004cc9c  stfs 1, 440(28)
  004cca0  addic 5, 30, 72
  004cca4  lfs 1, 240(28)
  004cca8  fmr 4, 29
  004ccac  lfs 2, 392(28)
  004ccb0  fmr 5, 27
  004ccb4  lfs 3, 28(25)
  004ccb8  bl 0x501e8
  004ccbc  nop
  004ccc0  stfs 1, 240(28)
  004ccc4  lhz 3, 782(27)
  004ccc8  cmpwi 3, 0
  004cccc  bt 2, 0x4cda0
  004ccd0  lwz 4, 732(27)
  004ccd4  lis 3, 16384
  004ccd8  srawi 5, 4, 31
  004ccdc  cmpwi 1, 29, 6
  004cce0  srwi 6, 5, 1
  004cce4  xor 4, 6, 4
  004cce8  subc 4, 4, 5
  004ccec  cmpw 4, 3
  004ccf0  bf 1, 0x4cda0
  004ccf4  lfs 1, 224(28)
  004ccf8  lis 3, 5
  004ccfc  lfs 2, 400(28)
  004cd00  addi 3, 3, -14356
  004cd04  fsubs 4, 1, 2
  004cd08  fsub 5, 1, 2
  004cd0c  lfs 3, 32(3)
  004cd10  fadds 6, 1, 3
  004cd14  fsubs 1, 1, 3
  004cd18  fabs 4, 4
  004cd1c  fsel 1, 5, 1, 6
  004cd20  fsub 3, 4, 3
  004cd24  fsel 1, 3, 1, 2
  004cd28  stfs 1, 224(28)
  004cd2c  bf 6, 0x4cd68
  004cd30  lfs 1, 240(28)
  004cd34  lfs 2, 404(28)
  004cd38  lis 3, 5
  004cd3c  fsubs 4, 1, 2
  004cd40  addi 3, 3, -14356
  004cd44  fsub 5, 1, 2
  004cd48  lfs 3, 16(3)
  004cd4c  fadds 6, 1, 3
  004cd50  fsubs 1, 1, 3
  004cd54  fabs 4, 4
  004cd58  fsel 1, 5, 1, 6
  004cd5c  fsub 3, 4, 3
  004cd60  fsel 1, 3, 1, 2
  004cd64  stfs 1, 240(28)
  004cd68  lfs 1, 204(28)
  004cd6c  lfs 31, 396(28)
  004cd70  lis 3, 5
  004cd74  fsubs 3, 1, 31
  004cd78  addi 3, 3, -14356
  004cd7c  fsub 4, 1, 31
  004cd80  lfs 2, 24(3)
  004cd84  fadds 5, 1, 2
  004cd88  fsubs 1, 1, 2
  004cd8c  fabs 3, 3
  004cd90  fsel 1, 4, 1, 5
  004cd94  fsub 2, 3, 2
  004cd98  fsel 31, 2, 1, 31
  004cd9c  b 0x4ce30
  004cda0  lfs 1, 224(28)
  004cda4  lfs 2, 388(28)
  004cda8  lis 3, 5
  004cdac  fsubs 4, 1, 2
  004cdb0  addi 3, 3, -14356
  004cdb4  fsub 5, 1, 2
  004cdb8  lfs 3, 36(3)
  004cdbc  lfs 6, 240(28)
  004cdc0  fadds 8, 1, 3
  004cdc4  fsubs 1, 1, 3
  004cdc8  lfs 7, 392(28)
  004cdcc  fabs 4, 4
  004cdd0  fsubs 9, 6, 7
  004cdd4  fsel 1, 5, 1, 8
  004cdd8  fsub 5, 6, 7
  004cddc  fsub 3, 4, 3
  004cde0  fabs 4, 9
  004cde4  fsel 1, 3, 1, 2
  004cde8  lfs 2, 204(28)
  004cdec  fsubs 3, 2, 31
  004cdf0  stfs 1, 224(28)
  004cdf4  lfs 1, 40(3)
  004cdf8  fabs 3, 3
  004cdfc  fadds 8, 6, 1
  004ce00  fsubs 6, 6, 1
  004ce04  fsub 1, 4, 1
  004ce08  fsub 4, 2, 31
  004ce0c  fsel 5, 5, 6, 8
  004ce10  fsel 1, 1, 5, 7
  004ce14  stfs 1, 240(28)
  004ce18  lfs 1, 44(3)
  004ce1c  fadds 5, 2, 1
  004ce20  fsubs 2, 2, 1
  004ce24  fsub 1, 3, 1
  004ce28  fsel 2, 4, 2, 5
  004ce2c  fsel 31, 1, 2, 31
  004ce30  li 29, 1
  004ce34  b 0x4cee8
  004ce38  lfs 1, 224(3)
  004ce3c  lis 4, 5
  004ce40  stfs 1, 416(28)
  004ce44  lfs 1, 228(3)
  004ce48  addi 4, 4, -14356
  004ce4c  stfs 1, 420(28)
  004ce50  lfs 1, 232(3)
  004ce54  lfs 2, 224(28)
  004ce58  stfs 1, 424(28)
  004ce5c  lfs 1, 236(3)
  004ce60  lfs 3, 388(28)
  004ce64  stfs 1, 428(28)
  004ce68  fsubs 1, 2, 3
  004ce6c  lfs 4, 32(4)
  004ce70  fsub 5, 2, 3
  004ce74  lfs 6, 240(28)
  004ce78  fadds 7, 2, 4
  004ce7c  fsubs 2, 2, 4
  004ce80  lfs 8, 392(28)
  004ce84  fabs 1, 1
  004ce88  fsel 2, 5, 2, 7
  004ce8c  fsub 5, 6, 8
  004ce90  fsub 1, 1, 4
  004ce94  fsubs 4, 6, 8
  004ce98  fsel 1, 1, 2, 3
  004ce9c  lfs 3, 204(28)
  004cea0  fabs 2, 4
  004cea4  fsubs 4, 3, 31
  004cea8  stfs 1, 224(28)
  004ceac  lfs 1, 16(4)
  004ceb0  fadds 7, 6, 1
  004ceb4  fsubs 6, 6, 1
  004ceb8  fsub 1, 2, 1
  004cebc  fabs 2, 4
  004cec0  fsub 4, 3, 31
  004cec4  fsel 5, 5, 6, 7
  004cec8  fsel 1, 1, 5, 8
  004cecc  stfs 1, 240(28)
  004ced0  lfs 1, 24(4)
  004ced4  fadds 5, 3, 1
  004ced8  fsubs 3, 3, 1
  004cedc  fsub 1, 2, 1
  004cee0  fsel 2, 4, 3, 5
  004cee4  fsel 31, 1, 2, 31
  004cee8  stfs 31, 204(28)
  004ceec  ori 3, 31, 0
  004cef0  bl 0x4bf90
  004cef4  lfs 7, 164(28)
  004cef8  lfs 8, 160(28)
  004cefc  fmuls 1, 7, 7
  004cf00  lfs 9, 168(28)
  004cf04  lfs 2, 204(28)
  004cf08  lfs 30, 468(28)
  004cf0c  fmadds 1, 8, 8, 1
  004cf10  lfs 31, 464(28)
  004cf14  lfs 29, 472(28)
  004cf18  stfs 31, 128(28)
  004cf1c  fmadds 1, 9, 9, 1
  004cf20  stfs 30, 132(28)
  004cf24  lfs 28, 476(28)
  004cf28  stfs 29, 136(28)
  004cf2c  fsqrts 3, 1
  004cf30  stfs 28, 140(28)
  004cf34  lfs 10, 52(31)
  004cf38  lfs 11, 48(31)
  004cf3c  lfs 12, 56(31)
  004cf40  lfs 1, 0(31)
  004cf44  lfs 5, 4(31)
  004cf48  lfs 6, 8(31)
  004cf4c  fmr 4, 27
  004cf50  fdivs 13, 2, 3
  004cf54  fsub 0, 27, 3
  004cf58  fsub 25, 27, 3
  004cf5c  fsub 26, 3, 27
  004cf60  fsub 20, 3, 27
  004cf64  fsub 24, 27, 3
  004cf68  fsub 19, 3, 27
  004cf6c  fmr 2, 4
  004cf70  fmr 3, 2
  004cf74  fmuls 7, 7, 13
  004cf78  fmuls 8, 8, 13
  004cf7c  fmuls 9, 9, 13
  004cf80  fsel 13, 0, 27, 7
  004cf84  fsel 0, 25, 27, 8
  004cf88  fsel 25, 24, 27, 9
  004cf8c  fsel 7, 26, 13, 7
  004cf90  fsel 8, 20, 0, 8
  004cf94  fsel 9, 19, 25, 9
  004cf98  fadds 30, 30, 7
  004cf9c  fadds 31, 31, 8
  004cfa0  fadds 29, 29, 9
  004cfa4  fsubs 8, 30, 10
  004cfa8  fsubs 7, 31, 11
  004cfac  fsubs 9, 29, 12
  004cfb0  fmuls 10, 8, 8
  004cfb4  fmadds 10, 7, 7, 10
  004cfb8  fmadds 10, 9, 9, 10
  004cfbc  fsqrts 11, 10
  004cfc0  fcmpu 0, 11, 3
  004cfc4  bt 2, 0x4d018
  004cfc8  frsqrte 2, 10
  004cfcc  lis 3, 5
  004cfd0  addi 3, 3, -14356
  004cfd4  lfs 3, 12(3)
  004cfd8  lfs 4, 48(3)
  004cfdc  fmuls 11, 10, 2
  004cfe0  fmuls 12, 3, 2
  004cfe4  fnmsubs 11, 11, 2, 4
  004cfe8  fmadds 2, 11, 12, 2
  004cfec  fmuls 11, 10, 2
  004cff0  fmuls 12, 3, 2
  004cff4  fnmsubs 11, 11, 2, 4
  004cff8  fmadds 2, 11, 12, 2
  004cffc  fmuls 10, 10, 2
  004d000  fmuls 3, 3, 2
  004d004  fnmsubs 4, 10, 2, 4
  004d008  fmadds 3, 4, 3, 2
  004d00c  fmuls 4, 7, 3
  004d010  fmuls 2, 8, 3
  004d014  fmuls 3, 9, 3
  004d018  fmuls 5, 5, 2
  004d01c  fmuls 8, 3, 23
  004d020  fmuls 7, 2, 22
  004d024  fmuls 9, 4, 21
  004d028  fmr 12, 27
  004d02c  stw 26, 28(31)
  004d030  cmpwi 1, 29, 0
  004d034  fmadds 1, 1, 4, 5
  004d038  fmsubs 5, 3, 21, 7
  004d03c  fmsubs 7, 2, 23, 9
  004d040  fmr 13, 12
  004d044  fmadds 1, 6, 3, 1
  004d048  fmsubs 6, 4, 22, 8
  004d04c  fmr 0, 13
  004d050  fmuls 8, 6, 6
  004d054  fmadds 8, 5, 5, 8
  004d058  fmadds 8, 7, 7, 8
  004d05c  fsqrts 9, 8
  004d060  fcmpu 0, 9, 0
  004d064  bt 2, 0x4d0b8
  004d068  frsqrte 9, 8
  004d06c  lis 3, 5
  004d070  addi 3, 3, -14356
  004d074  lfs 10, 12(3)
  004d078  lfs 11, 48(3)
  004d07c  fmuls 12, 8, 9
  004d080  fmuls 13, 10, 9
  004d084  fnmsubs 12, 12, 9, 11
  004d088  fmadds 9, 12, 13, 9
  004d08c  fmuls 12, 8, 9
  004d090  fmuls 13, 10, 9
  004d094  fnmsubs 12, 12, 9, 11
  004d098  fmadds 9, 12, 13, 9
  004d09c  fmuls 8, 8, 9
  004d0a0  fmuls 10, 10, 9
  004d0a4  fnmsubs 8, 8, 9, 11
  004d0a8  fmadds 12, 8, 10, 9
  004d0ac  fmuls 0, 5, 12
  004d0b0  fmuls 13, 6, 12
  004d0b4  fmuls 12, 7, 12
  004d0b8  fmuls 5, 3, 13
  004d0bc  stfs 0, 16(31)
  004d0c0  fmuls 6, 4, 12
  004d0c4  stfs 13, 20(31)
  004d0c8  fmuls 7, 2, 0
  004d0cc  stfs 12, 24(31)
  004d0d0  stw 26, 44(31)
  004d0d4  fmsubs 2, 2, 12, 5
  004d0d8  fmsubs 3, 3, 0, 6
  004d0dc  fmsubs 4, 4, 13, 7
  004d0e0  stfs 2, 32(31)
  004d0e4  stfs 3, 36(31)
  004d0e8  stfs 4, 40(31)
  004d0ec  bt 6, 0x4d114
  004d0f0  fabs 5, 1
  004d0f4  lis 3, 5
  004d0f8  addi 3, 3, -14356
  004d0fc  lfs 1, 12(3)
  004d100  fcmpu 0, 5, 1
  004d104  bt 0, 0x4d114
  004d108  lbz 3, 2189(27)
  004d10c  cmpwi 3, 0
  004d110  bt 2, 0x4d13c
  004d114  lfs 1, 320(28)
  004d118  lfs 3, 308(28)
  004d11c  fmr 2, 27
  004d120  lfs 4, 312(28)
  004d124  addic 5, 28, 288
  004d128  lfs 5, 316(28)
  004d12c  bl 0x501e8
  004d130  nop
  004d134  fmr 2, 1
  004d138  b 0x4d264
  004d13c  lwz 3, 8320(27)
  004d140  fmr 6, 27
  004d144  lfs 10, 196(3)
  004d148  lfs 9, 192(3)
  004d14c  fmuls 5, 10, 10
  004d150  lfs 11, 200(3)
  004d154  fmr 7, 6
  004d158  fmadds 5, 9, 9, 5
  004d15c  fmr 8, 7
  004d160  fmadds 5, 11, 11, 5
  004d164  fsqrts 26, 5
  004d168  fcmpu 0, 26, 8
  004d16c  bt 2, 0x4d1bc
  004d170  frsqrte 6, 5
  004d174  lis 3, 5
  004d178  addi 3, 3, -14356
  004d17c  lfs 7, 48(3)
  004d180  fmuls 8, 5, 6
  004d184  fmuls 26, 1, 6
  004d188  fnmsubs 8, 8, 6, 7
  004d18c  fmadds 6, 8, 26, 6
  004d190  fmuls 8, 5, 6
  004d194  fmuls 26, 1, 6
  004d198  fnmsubs 8, 8, 6, 7
  004d19c  fmadds 6, 8, 26, 6
  004d1a0  fmuls 5, 5, 6
  004d1a4  fmuls 1, 1, 6
  004d1a8  fnmsubs 5, 5, 6, 7
  004d1ac  fmadds 8, 5, 1, 6
  004d1b0  fmuls 6, 9, 8
  004d1b4  fmuls 7, 10, 8
  004d1b8  fmuls 8, 11, 8
  004d1bc  fmr 10, 3
  004d1c0  fmr 9, 4
  004d1c4  lis 3, 114
  004d1c8  fmuls 1, 10, 10
  004d1cc  fmuls 3, 7, 10
  004d1d0  addic 5, 28, 288
  004d1d4  fmadds 1, 2, 2, 1
  004d1d8  fmadds 3, 6, 2, 3
  004d1dc  fmadds 1, 9, 9, 1
  004d1e0  fmadds 11, 8, 9, 3
  004d1e4  fsqrts 26, 1
  004d1e8  lfs 1, 320(28)
  004d1ec  lfs 3, 308(28)
  004d1f0  lfs 4, 312(28)
  004d1f4  lfs 25, -6052(3)
  004d1f8  lfs 5, 316(28)
  004d1fc  fdivs 11, 11, 26
  004d200  fsub 24, 27, 26
  004d204  fsub 20, 26, 27
  004d208  fsub 19, 27, 26
  004d20c  fsub 18, 27, 26
  004d210  fsub 17, 26, 27
  004d214  fsub 26, 26, 27
  004d218  fmuls 10, 10, 11
  004d21c  fmuls 2, 2, 11
  004d220  fmuls 9, 9, 11
  004d224  fsel 11, 24, 27, 10
  004d228  fsel 24, 19, 27, 2
  004d22c  fsel 19, 18, 27, 9
  004d230  fsel 10, 20, 11, 10
  004d234  fsel 2, 17, 24, 2
  004d238  fsel 9, 26, 19, 9
  004d23c  fsubs 7, 7, 10
  004d240  fsubs 2, 6, 2
  004d244  fsubs 6, 8, 9
  004d248  fmuls 7, 7, 13
  004d24c  fmadds 2, 2, 0, 7
  004d250  fmadds 2, 6, 12, 2
  004d254  fmuls 2, 25, 2
  004d258  bl 0x501e8
  004d25c  nop
  004d260  fmr 2, 1
  004d264  fabs 5, 2
  004d268  lis 3, 5
  004d26c  stfs 2, 320(28)
  004d270  addi 3, 3, -14356
  004d274  lfs 6, 52(3)
  004d278  lfs 1, 48(31)
  004d27c  fcmpu 0, 5, 6
  004d280  lfs 3, 52(31)
  004d284  lfs 4, 56(31)
  004d288  cror 6, 0, 2
  004d28c  bt 6, 0x4d2f8
  004d290  lfs 5, 20(31)
  004d294  lfs 6, 16(31)
  004d298  fmuls 7, 5, 5
  004d29c  lfs 8, 24(31)
  004d2a0  fmadds 7, 6, 6, 7
  004d2a4  fmadds 7, 8, 8, 7
  004d2a8  fsqrts 7, 7
  004d2ac  fdivs 2, 2, 7
  004d2b0  fsub 9, 27, 7
  004d2b4  fsub 10, 27, 7
  004d2b8  fsub 11, 27, 7
  004d2bc  fsub 12, 7, 27
  004d2c0  fsub 13, 7, 27
  004d2c4  fsub 7, 7, 27
  004d2c8  fmuls 8, 8, 2
  004d2cc  fmuls 5, 5, 2
  004d2d0  fmuls 2, 6, 2
  004d2d4  fsel 6, 9, 27, 8
  004d2d8  fsel 9, 10, 27, 5
  004d2dc  fsel 10, 11, 27, 2
  004d2e0  fsel 6, 12, 6, 8
  004d2e4  fsel 5, 13, 9, 5
  004d2e8  fsel 2, 7, 10, 2
  004d2ec  fadds 29, 6, 29
  004d2f0  fadds 30, 5, 30
  004d2f4  fadds 31, 2, 31
  004d2f8  fsubs 31, 31, 1
  004d2fc  fsubs 1, 30, 3
  004d300  fsubs 2, 29, 4
  004d304  fmuls 3, 1, 1
  004d308  fmadds 3, 31, 31, 3
  004d30c  fmadds 3, 2, 2, 3
  004d310  fsqrts 4, 3
  004d314  fcmpu 0, 4, 27
  004d318  bf 2, 0x4d33c
  004d31c  stfs 28, 12(31)
  004d320  fmr 28, 27
  004d324  stfs 1, 4(31)
  004d328  stfs 31, 0(31)
  004d32c  stfs 2, 8(31)
  004d330  fmr 1, 28
  004d334  fmr 2, 1
  004d338  b 0x4d394
  004d33c  frsqrte 4, 3
  004d340  lis 3, 5
  004d344  fmr 9, 2
  004d348  addi 3, 3, -14356
  004d34c  lfs 5, 12(3)
  004d350  lfs 6, 48(3)
  004d354  stfs 28, 12(31)
  004d358  fmuls 7, 3, 4
  004d35c  fmuls 8, 5, 4
  004d360  fnmsubs 7, 7, 4, 6
  004d364  fmadds 2, 7, 8, 4
  004d368  fmuls 4, 3, 2
  004d36c  fmuls 7, 5, 2
  004d370  fnmsubs 4, 4, 2, 6
  004d374  fmadds 2, 4, 7, 2
  004d378  fmuls 3, 3, 2
  004d37c  fmuls 4, 5, 2
  004d380  fnmsubs 3, 3, 2, 6
  004d384  fmadds 28, 3, 4, 2
  004d388  fmuls 2, 31, 28
  004d38c  fmuls 1, 1, 28
  004d390  fmuls 28, 9, 28
  004d394  fmuls 3, 23, 28
  004d398  fmuls 4, 22, 1
  004d39c  fmuls 5, 21, 2
  004d3a0  stfs 2, 0(31)
  004d3a4  stfs 1, 4(31)
  004d3a8  stfs 28, 8(31)
  004d3ac  fmsubs 22, 22, 2, 3
  004d3b0  fmsubs 3, 21, 28, 4
  004d3b4  fmsubs 4, 23, 1, 5
  004d3b8  stw 26, 28(31)
  004d3bc  fmuls 5, 22, 22
  004d3c0  fmadds 23, 3, 3, 5
  004d3c4  fmr 5, 27
  004d3c8  fmadds 23, 4, 4, 23
  004d3cc  fmr 6, 5
  004d3d0  fsqrts 7, 23
  004d3d4  fcmpu 0, 7, 6
  004d3d8  bt 2, 0x4d42c
  004d3dc  frsqrte 5, 23
  004d3e0  lis 3, 5
  004d3e4  addi 3, 3, -14356
  004d3e8  lfs 6, 12(3)
  004d3ec  lfs 7, 48(3)
  004d3f0  fmuls 8, 23, 5
  004d3f4  fmuls 9, 6, 5
  004d3f8  fnmsubs 8, 8, 5, 7
  004d3fc  fmadds 5, 8, 9, 5
  004d400  fmuls 8, 23, 5
  004d404  fmuls 9, 6, 5
  004d408  fnmsubs 8, 8, 5, 7
  004d40c  fmadds 5, 8, 9, 5
  004d410  fmuls 8, 23, 5
  004d414  fmuls 6, 6, 5
  004d418  fnmsubs 7, 8, 5, 7
  004d41c  fmadds 27, 7, 6, 5
  004d420  fmuls 6, 3, 27
  004d424  fmuls 5, 22, 27
  004d428  fmuls 27, 4, 27
  004d42c  fmuls 3, 28, 5
  004d430  fmuls 4, 2, 27
  004d434  stfs 6, 16(31)
  004d438  fmuls 7, 1, 6
  004d43c  stfs 5, 20(31)
  004d440  stfs 27, 24(31)
  004d444  stw 26, 44(31)
  004d448  fmsubs 1, 1, 27, 3
  004d44c  fmsubs 3, 28, 6, 4
  004d450  fmsubs 2, 2, 5, 7
  004d454  stfs 1, 32(31)
  004d458  stfs 3, 36(31)
  004d45c  stfs 2, 40(31)
  004d460  ld 0, 368(1)
  004d464  mtlr 0
  004d468  lfd 14, 208(1)
  004d46c  lfd 15, 216(1)
  004d470  lfd 16, 224(1)
  004d474  lfd 17, 232(1)
  004d478  lfd 18, 240(1)
  004d47c  lfd 19, 248(1)
  004d480  lfd 20, 256(1)
  004d484  lfd 21, 264(1)
  004d488  lfd 22, 272(1)
  004d48c  lfd 23, 280(1)
  004d490  lfd 24, 288(1)
  004d494  lfd 25, 296(1)
  004d498  lfd 26, 304(1)
  004d49c  lfd 27, 312(1)
  004d4a0  lfd 28, 320(1)
  004d4a4  lfd 29, 328(1)
  004d4a8  lfd 30, 336(1)
  004d4ac  lfd 31, 344(1)
  004d4b0  ld 25, 152(1)
  004d4b4  ld 26, 160(1)
  004d4b8  ld 27, 168(1)
  004d4bc  ld 28, 176(1)
  004d4c0  ld 29, 184(1)
  004d4c4  ld 30, 192(1)
  004d4c8  ld 31, 200(1)
  004d4cc  addi 1, 1, 352
  004d4d0  blr

ActivateCamera_8:   # 0x4d4d4, 0x8 bytes
  004d4d4  li 3, 0
  004d4d8  blr

InitCamera_8:   # 0x4d4dc, 0xcc bytes
  004d4dc  stdu 1, -128(1)
  004d4e0  mflr 0
  004d4e4  std 0, 144(1)
  004d4e8  std 31, 120(1)
  004d4ec  lis 4, 149
  004d4f0  ori 31, 3, 0
  004d4f4  addic 3, 4, 5056
  004d4f8  ori 4, 31, 0
  004d4fc  lwz 5, 388(3)
  004d500  addic 3, 31, 64
  004d504  lfs 1, 48(5)
  004d508  stfs 1, 48(31)
  004d50c  lfs 1, 52(5)
  004d510  stfs 1, 52(31)
  004d514  lfs 1, 56(5)
  004d518  stfs 1, 56(31)
  004d51c  lfs 1, 60(5)
  004d520  stfs 1, 60(31)
  004d524  lfs 1, 0(5)
  004d528  stfs 1, 0(31)
  004d52c  lfs 1, 4(5)
  004d530  stfs 1, 4(31)
  004d534  lfs 1, 8(5)
  004d538  stfs 1, 8(31)
  004d53c  lfs 1, 12(5)
  004d540  stfs 1, 12(31)
  004d544  lfs 1, 16(5)
  004d548  stfs 1, 16(31)
  004d54c  lfs 1, 20(5)
  004d550  stfs 1, 20(31)
  004d554  lfs 1, 24(5)
  004d558  stfs 1, 24(31)
  004d55c  lfs 1, 28(5)
  004d560  stfs 1, 28(31)
  004d564  lfs 1, 32(5)
  004d568  stfs 1, 32(31)
  004d56c  lfs 1, 36(5)
  004d570  stfs 1, 36(31)
  004d574  lfs 1, 40(5)
  004d578  stfs 1, 40(31)
  004d57c  lfs 1, 44(5)
  004d580  stfs 1, 44(31)
  004d584  bl 0x10bf98
  004d588  nop
  004d58c  ori 3, 31, 0
  004d590  bl 0x4bd38
  004d594  ld 0, 144(1)
  004d598  mtlr 0
  004d59c  ld 31, 120(1)
  004d5a0  addi 1, 1, 128
  004d5a4  blr

UpdateCamera_8:   # 0x4d5a8, 0x34 bytes
  004d5a8  stdu 1, -128(1)
  004d5ac  mflr 0
  004d5b0  std 0, 144(1)
  004d5b4  std 31, 120(1)
  004d5b8  ori 31, 3, 0
  004d5bc  bl 0x4b660
  004d5c0  ori 3, 31, 0
  004d5c4  bl 0x4c828
  004d5c8  ld 0, 144(1)
  004d5cc  mtlr 0
  004d5d0  ld 31, 120(1)
  004d5d4  addi 1, 1, 128
  004d5d8  blr

STUB_0004d5dc:   # 0x4d5dc, 0x4 bytes
  004d5dc  blr
