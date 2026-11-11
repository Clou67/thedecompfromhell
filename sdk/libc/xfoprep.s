# sdk/libc/xfoprep.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

_filep_close_it:   # 0x5c8e64, 0xe8 bytes
  05c8e64  stdu 1, -112(1)
  05c8e68  mflr 0
  05c8e6c  mr 8, 3
  05c8e70  std 0, 128(1)
  05c8e74  lhz 0, 0(3)
  05c8e78  rlwinm 0, 0, 0, 24, 24
  05c8e7c  cmpwi 7, 0, 0
  05c8e80  bt 30, 0x5c8ed4
  05c8e84  lwz 9, -24724(2)
  05c8e88  lwz 0, 0(9)
  05c8e8c  cmpwi 7, 0, 0
  05c8e90  bt 30, 0x5c8eb8
  05c8e94  cmpw 7, 3, 0
  05c8e98  bf 30, 0x5c8ea4
  05c8e9c  b 0x5c8f40
  05c8ea0  bt 26, 0x5c8f34
  05c8ea4  clrldi 9, 0, 32
  05c8ea8  lwz 0, 60(9)
  05c8eac  cmpwi 7, 0, 0
  05c8eb0  cmpw 6, 8, 0
  05c8eb4  bf 30, 0x5c8ea0
  05c8eb8  clrldi 3, 8, 32
  05c8ebc  bl 0x5d580c
  05c8ec0  nop
  05c8ec4  ld 0, 128(1)
  05c8ec8  addi 1, 1, 112
  05c8ecc  mtlr 0
  05c8ed0  blr
  05c8ed4  sth 0, 0(3)
  05c8ed8  li 0, -1
  05c8edc  addi 9, 3, 67
  05c8ee0  sth 0, 4(3)
  05c8ee4  ld 0, 128(1)
  05c8ee8  li 11, 0
  05c8eec  addi 8, 3, 40
  05c8ef0  clrldi 10, 9, 32
  05c8ef4  mtlr 0
  05c8ef8  addi 1, 1, 112
  05c8efc  sth 11, 100(3)
  05c8f00  stw 8, 32(3)
  05c8f04  std 10, 72(3)
  05c8f08  stw 9, 96(3)
  05c8f0c  stw 9, 8(3)
  05c8f10  stw 9, 16(3)
  05c8f14  stw 9, 20(3)
  05c8f18  stw 9, 44(3)
  05c8f1c  stw 9, 24(3)
  05c8f20  stw 9, 48(3)
  05c8f24  stw 9, 28(3)
  05c8f28  std 11, 80(3)
  05c8f2c  std 11, 88(3)
  05c8f30  blr
  05c8f34  lwz 0, 60(3)
  05c8f38  stw 0, 60(9)
  05c8f3c  b 0x5c8eb8
  05c8f40  lwz 0, 60(3)
  05c8f44  stw 0, 0(9)
  05c8f48  b 0x5c8eb8

_Foprep:   # 0x5c8f4c, 0x2a8 bytes
  05c8f4c  cmpwi 7, 5, 0
  05c8f50  mflr 0
  05c8f54  stdu 1, -192(1)
  05c8f58  std 23, 120(1)
  05c8f5c  std 24, 128(1)
  05c8f60  std 26, 144(1)
  05c8f64  std 30, 176(1)
  05c8f68  std 31, 184(1)
  05c8f6c  std 25, 136(1)
  05c8f70  std 27, 152(1)
  05c8f74  std 28, 160(1)
  05c8f78  std 29, 168(1)
  05c8f7c  std 0, 208(1)
  05c8f80  mr 26, 5
  05c8f84  mr 24, 3
  05c8f88  mr 30, 4
  05c8f8c  mr 23, 6
  05c8f90  clrldi 31, 5, 32
  05c8f94  bt 30, 0x5c90f0
  05c8f98  lwz 4, -24720(2)
  05c8f9c  mr 3, 31
  05c8fa0  li 5, 104
  05c8fa4  lbz 29, 2(31)
  05c8fa8  lwz 28, 60(31)
  05c8fac  lwz 27, 68(31)
  05c8fb0  lhz 25, 0(31)
  05c8fb4  bl 0x5c5ad0
  05c8fb8  nop
  05c8fbc  addi 0, 26, 67
  05c8fc0  li 9, 0
  05c8fc4  clrldi 11, 0, 32
  05c8fc8  addi 10, 26, 40
  05c8fcc  sth 9, 100(31)
  05c8fd0  std 9, 80(31)
  05c8fd4  std 9, 88(31)
  05c8fd8  stb 29, 2(31)
  05c8fdc  stw 28, 60(31)
  05c8fe0  stw 27, 68(31)
  05c8fe4  stw 10, 32(31)
  05c8fe8  std 11, 72(31)
  05c8fec  stw 0, 96(31)
  05c8ff0  stw 0, 8(31)
  05c8ff4  stw 0, 16(31)
  05c8ff8  stw 0, 20(31)
  05c8ffc  stw 0, 44(31)
  05c9000  stw 0, 24(31)
  05c9004  stw 0, 48(31)
  05c9008  stw 0, 28(31)
  05c900c  lbz 0, 0(30)
  05c9010  li 9, 1
  05c9014  extsb 0, 0
  05c9018  cmpwi 7, 0, 114
  05c901c  bt 30, 0x5c9044
  05c9020  cmpwi 7, 0, 119
  05c9024  li 9, 26
  05c9028  bt 30, 0x5c9044
  05c902c  xori 0, 0, 97
  05c9030  li 11, 22
  05c9034  cntlzw 0, 0
  05c9038  srwi 0, 0, 5
  05c903c  neg 0, 0
  05c9040  and 9, 0, 11
  05c9044  rlwinm 0, 25, 0, 24, 24
  05c9048  or 0, 0, 9
  05c904c  clrlwi 9, 0, 30
  05c9050  sth 0, 0(31)
  05c9054  cmpwi 7, 9, 0
  05c9058  bt 30, 0x5c9198
  05c905c  lbzu 0, 1(30)
  05c9060  extsb 0, 0
  05c9064  cmpwi 7, 0, 98
  05c9068  cmpwi 6, 0, 43
  05c906c  bt 30, 0x5c90a0
  05c9070  bf 26, 0x5c90b4
  05c9074  lhz 0, 0(31)
  05c9078  clrlwi 9, 0, 30
  05c907c  ori 0, 0, 3
  05c9080  cmpwi 7, 9, 3
  05c9084  bt 30, 0x5c90b4
  05c9088  sth 0, 0(31)
  05c908c  lbzu 0, 1(30)
  05c9090  extsb 0, 0
  05c9094  cmpwi 7, 0, 98
  05c9098  cmpwi 6, 0, 43
  05c909c  bf 30, 0x5c9070
  05c90a0  lhz 0, 0(31)
  05c90a4  rlwinm 9, 0, 0, 26, 26
  05c90a8  ori 0, 0, 32
  05c90ac  cmpwi 7, 9, 0
  05c90b0  bt 30, 0x5c9088
  05c90b4  cmpwi 7, 24, 0
  05c90b8  bt 30, 0x5c9184
  05c90bc  clrldi 3, 24, 32
  05c90c0  lhz 4, 0(31)
  05c90c4  clrldi 5, 30, 32
  05c90c8  bl 0x5d68b0
  05c90cc  nop
  05c90d0  extsh 0, 3
  05c90d4  sth 3, 4(31)
  05c90d8  cmpwi 7, 0, 0
  05c90dc  bt- 28, 0x5c91c0
  05c90e0  lhz 0, 0(31)
  05c90e4  rlwinm 0, 0, 0, 24, 24
  05c90e8  cmpwi 7, 0, 0
  05c90ec  bf 30, 0x5c9128
  05c90f0  ld 0, 208(1)
  05c90f4  mr 3, 31
  05c90f8  ld 23, 120(1)
  05c90fc  ld 24, 128(1)
  05c9100  mtlr 0
  05c9104  ld 25, 136(1)
  05c9108  ld 26, 144(1)
  05c910c  ld 27, 152(1)
  05c9110  ld 28, 160(1)
  05c9114  ld 29, 168(1)
  05c9118  ld 30, 176(1)
  05c911c  ld 31, 184(1)
  05c9120  addi 1, 1, 192
  05c9124  blr
  05c9128  li 3, 40
  05c912c  bl 0x5d5838
  05c9130  nop
  05c9134  cmpwi 7, 3, 0
  05c9138  stw 3, 68(31)
  05c913c  bt 30, 0x5c91d0
  05c9140  clrldi 3, 3, 32
  05c9144  bl 0x5d04b0
  05c9148  nop
  05c914c  ld 0, 208(1)
  05c9150  ld 23, 120(1)
  05c9154  mr 3, 31
  05c9158  ld 24, 128(1)
  05c915c  ld 25, 136(1)
  05c9160  mtlr 0
  05c9164  ld 26, 144(1)
  05c9168  ld 27, 152(1)
  05c916c  ld 28, 160(1)
  05c9170  ld 29, 168(1)
  05c9174  ld 30, 176(1)
  05c9178  ld 31, 184(1)
  05c917c  addi 1, 1, 192
  05c9180  blr
  05c9184  extsh 0, 23
  05c9188  cmpwi 7, 0, 0
  05c918c  bt- 28, 0x5c91c0
  05c9190  sth 23, 4(31)
  05c9194  b 0x5c90e0
  05c9198  mr 3, 31
  05c919c  li 31, 0
  05c91a0  bl 0x5c4f10
  05c91a4  nop
  05c91a8  bl 0x5d5904
  05c91ac  nop
  05c91b0  lis 0, -32767
  05c91b4  ori 0, 0, 2
  05c91b8  stw 0, 0(3)
  05c91bc  b 0x5c90f0
  05c91c0  mr 3, 31
  05c91c4  li 31, 0
  05c91c8  bl 0x5c8e64
  05c91cc  b 0x5c90f0
  05c91d0  mr 3, 31
  05c91d4  li 31, 0
  05c91d8  bl 0x5c8e64
  05c91dc  bl 0x5d5904
  05c91e0  nop
  05c91e4  lis 0, -32767
  05c91e8  ori 0, 0, 4
  05c91ec  stw 0, 0(3)
  05c91f0  b 0x5c90f0
