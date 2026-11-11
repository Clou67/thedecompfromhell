# idol/idol_draw.cpp -- original instructions (NPEA00385), same functions and order as the .cpp

idol_draw::CmdQueue_ResetCounters:   # 0x4f14c8, 0x4c bytes
  04f14c8  lwz 0, 0(3)
  04f14cc  slwi 4, 4, 4
  04f14d0  add 4, 4, 0
  04f14d4  addi 4, 4, 64
  04f14d8  lwsync
  04f14dc  clrldi 4, 4, 32
  04f14e0  li 0, -1
  04f14e4  sth 0, 14(4)
  04f14e8  sth 0, 4(4)
  04f14ec  sth 0, 6(4)
  04f14f0  sth 0, 8(4)
  04f14f4  sth 0, 10(4)
  04f14f8  sth 0, 12(4)
  04f14fc  lwsync
  04f1500  li 0, 0
  04f1504  sth 0, 2(4)
  04f1508  sth 0, 0(4)
  04f150c  lwsync
  04f1510  blr

FUN_004f1514:   # 0x4f1514, 0x90 bytes
  04f1514  slwi 4, 4, 4
  04f1518  lwz 9, 0(3)
  04f151c  add 9, 4, 9
  04f1520  addi 9, 9, 64
  04f1524  clrldi 9, 9, 32
  04f1528  lhz 0, 2(9)
  04f152c  lwsync
  04f1530  clrlwi 0, 0, 16
  04f1534  lhz 11, 4(9)
  04f1538  cmplw 7, 0, 11
  04f153c  bf 29, 0x4f1544
  04f1540  mr 0, 11
  04f1544  lhz 11, 6(9)
  04f1548  cmplw 7, 0, 11
  04f154c  bf 29, 0x4f1554
  04f1550  mr 0, 11
  04f1554  lhz 11, 8(9)
  04f1558  cmplw 7, 0, 11
  04f155c  bf 29, 0x4f1564
  04f1560  mr 0, 11
  04f1564  lhz 11, 10(9)
  04f1568  cmplw 7, 0, 11
  04f156c  bf 29, 0x4f1574
  04f1570  mr 0, 11
  04f1574  lhz 10, 12(9)
  04f1578  mr 11, 0
  04f157c  cmplw 7, 0, 10
  04f1580  bf 29, 0x4f1588
  04f1584  mr 11, 10
  04f1588  lhz 0, 14(9)
  04f158c  cmplw 7, 0, 11
  04f1590  bt 28, 0x4f1598
  04f1594  mr 0, 11
  04f1598  cmplw 7, 0, 5
  04f159c  bt 28, 0x4f1518
  04f15a0  blr

FUN_004f15a4:   # 0x4f15a4, 0x8c bytes
  04f15a4  lwz 0, 0(3)
  04f15a8  slwi 4, 4, 4
  04f15ac  add 4, 4, 0
  04f15b0  addi 4, 4, 64
  04f15b4  clrldi 4, 4, 32
  04f15b8  lhz 0, 2(4)
  04f15bc  lwsync
  04f15c0  clrlwi 0, 0, 16
  04f15c4  lhz 9, 4(4)
  04f15c8  cmplw 7, 0, 9
  04f15cc  bf 29, 0x4f15d4
  04f15d0  mr 0, 9
  04f15d4  lhz 9, 6(4)
  04f15d8  cmplw 7, 0, 9
  04f15dc  bf 29, 0x4f15e4
  04f15e0  mr 0, 9
  04f15e4  lhz 9, 8(4)
  04f15e8  cmplw 7, 0, 9
  04f15ec  bf 29, 0x4f15f4
  04f15f0  mr 0, 9
  04f15f4  lhz 9, 10(4)
  04f15f8  cmplw 7, 0, 9
  04f15fc  bf 29, 0x4f1604
  04f1600  mr 0, 9
  04f1604  lhz 11, 12(4)
  04f1608  mr 9, 0
  04f160c  cmplw 7, 0, 11
  04f1610  bf 29, 0x4f1618
  04f1614  mr 9, 11
  04f1618  lhz 0, 14(4)
  04f161c  cmplw 7, 0, 9
  04f1620  bt 28, 0x4f1628
  04f1624  mr 0, 9
  04f1628  clrldi 3, 0, 48
  04f162c  blr

idol_draw::CmdQueue_HasCapacity:   # 0x4f1630, 0x9c bytes
  04f1630  lwz 0, 0(3)
  04f1634  slwi 4, 4, 4
  04f1638  add 4, 4, 0
  04f163c  addi 4, 4, 64
  04f1640  clrldi 4, 4, 32
  04f1644  lhz 0, 2(4)
  04f1648  lwsync
  04f164c  clrlwi 0, 0, 16
  04f1650  lhz 9, 4(4)
  04f1654  cmplw 7, 9, 0
  04f1658  bf 28, 0x4f1660
  04f165c  mr 0, 9
  04f1660  lhz 9, 6(4)
  04f1664  cmplw 7, 0, 9
  04f1668  bf 29, 0x4f1670
  04f166c  mr 0, 9
  04f1670  lhz 9, 8(4)
  04f1674  cmplw 7, 0, 9
  04f1678  bf 29, 0x4f1680
  04f167c  mr 0, 9
  04f1680  lhz 9, 10(4)
  04f1684  cmplw 7, 0, 9
  04f1688  bf 29, 0x4f1690
  04f168c  mr 0, 9
  04f1690  lhz 11, 12(4)
  04f1694  mr 9, 0
  04f1698  cmplw 7, 0, 11
  04f169c  bf 29, 0x4f16a4
  04f16a0  mr 9, 11
  04f16a4  lhz 0, 14(4)
  04f16a8  cmplw 7, 0, 9
  04f16ac  bt 28, 0x4f16b4
  04f16b0  mr 0, 9
  04f16b4  cmplw 7, 0, 5
  04f16b8  li 3, 1
  04f16bc  bf 28, 0x4f16c4
  04f16c0  li 3, 0
  04f16c4  extsw 3, 3
  04f16c8  blr

FUN_004f16cc:   # 0x4f16cc, 0x68 bytes
  04f16cc  slwi 9, 4, 4
  04f16d0  lwz 11, 0(3)
  04f16d4  slwi 4, 4, 2
  04f16d8  extsw 9, 9
  04f16dc  extsw 4, 4
  04f16e0  add 9, 11, 9
  04f16e4  add 11, 11, 4
  04f16e8  lhz 3, 64(9)
  04f16ec  lwz 10, 48(11)
  04f16f0  slwi 0, 3, 3
  04f16f4  add 10, 10, 0
  04f16f8  clrldi 9, 10, 32
  04f16fc  lhz 0, 2(9)
  04f1700  cmpwi 7, 0, 0
  04f1704  bt 30, 0x4f172c
  04f1708  addi 10, 10, 10
  04f170c  li 11, 0
  04f1710  clrldi 9, 10, 32
  04f1714  addi 11, 11, 1
  04f1718  addi 10, 10, 8
  04f171c  lhz 0, 0(9)
  04f1720  cmpwi 7, 0, 0
  04f1724  bf 30, 0x4f1710
  04f1728  add 3, 3, 11
  04f172c  clrldi 3, 3, 32
  04f1730  blr

FUN_004f1734:   # 0x4f1734, 0x68 bytes
  04f1734  slwi 9, 4, 4
  04f1738  lwz 11, 0(3)
  04f173c  slwi 4, 4, 2
  04f1740  extsw 9, 9
  04f1744  extsw 4, 4
  04f1748  add 9, 11, 9
  04f174c  add 11, 11, 4
  04f1750  lhz 3, 64(9)
  04f1754  lwz 10, 48(11)
  04f1758  slwi 0, 3, 3
  04f175c  add 10, 10, 0
  04f1760  clrldi 9, 10, 32
  04f1764  lhz 0, 2(9)
  04f1768  cmpwi 7, 0, 0
  04f176c  bt 30, 0x4f1794
  04f1770  addi 10, 10, 10
  04f1774  li 11, 0
  04f1778  clrldi 9, 10, 32
  04f177c  addi 11, 11, 1
  04f1780  addi 10, 10, 8
  04f1784  lhz 0, 0(9)
  04f1788  cmpwi 7, 0, 0
  04f178c  bf 30, 0x4f1778
  04f1790  add 3, 3, 11
  04f1794  clrldi 3, 3, 32
  04f1798  blr

FUN_004f179c:   # 0x4f179c, 0x50 bytes
  04f179c  slwi 4, 4, 4
  04f17a0  lwz 0, 0(3)
  04f17a4  slwi 11, 5, 16
  04f17a8  add 4, 4, 0
  04f17ac  addi 4, 4, 64
  04f17b0  clrldi 4, 4, 32
  04f17b4  nop
  04f17b8  lwarx 0, 0, 4
  04f17bc  srwi 3, 0, 16
  04f17c0  clrlwi 9, 0, 16
  04f17c4  cmplw 7, 3, 5
  04f17c8  or 0, 11, 9
  04f17cc  bf 28, 0x4f17e4
  04f17d0  stwcx. 0, 0, 4
  04f17d4  mfocrf 0, 128
  04f17d8  rlwinm 0, 0, 0, 2, 2
  04f17dc  cmpwi 7, 0, 0
  04f17e0  bt 30, 0x4f17b8
  04f17e4  clrldi 3, 3, 48
  04f17e8  blr

FUN_004f17ec:   # 0x4f17ec, 0x174 bytes
  04f17ec  stdu 1, -208(1)
  04f17f0  mflr 0
  04f17f4  std 26, 160(1)
  04f17f8  std 0, 224(1)
  04f17fc  slwi 0, 4, 2
  04f1800  lwz 9, 0(3)
  04f1804  vxor 0, 0, 0
  04f1808  extsw 0, 0
  04f180c  std 25, 152(1)
  04f1810  add 9, 9, 0
  04f1814  lwz 25, 12(3)
  04f1818  li 0, 1
  04f181c  std 27, 168(1)
  04f1820  slw 26, 0, 4
  04f1824  li 0, 112
  04f1828  lwz 27, 32(9)
  04f182c  std 22, 128(1)
  04f1830  std 23, 136(1)
  04f1834  std 24, 144(1)
  04f1838  stvx 0, 1, 0
  04f183c  mr 24, 3
  04f1840  std 28, 176(1)
  04f1844  std 30, 192(1)
  04f1848  mr 23, 5
  04f184c  lwz 28, 48(9)
  04f1850  mr 30, 4
  04f1854  li 22, 1
  04f1858  std 29, 184(1)
  04f185c  std 31, 200(1)
  04f1860  b 0x4f18a0
  04f1864  cmpw 7, 30, 3
  04f1868  bt- 30, 0x4f1954
  04f186c  slwi 0, 3, 2
  04f1870  lwz 9, 0(24)
  04f1874  slw 11, 22, 3
  04f1878  extsw 0, 0
  04f187c  or 26, 26, 11
  04f1880  add 9, 9, 0
  04f1884  lwz 28, 48(9)
  04f1888  lwz 27, 32(9)
  04f188c  extsw 0, 29
  04f1890  addi 11, 31, 1
  04f1894  add 9, 1, 0
  04f1898  mr 30, 3
  04f189c  stw 11, 112(9)
  04f18a0  slwi 29, 30, 2
  04f18a4  extsw 0, 29
  04f18a8  add 9, 1, 0
  04f18ac  lwz 31, 112(9)
  04f18b0  cmplw 7, 27, 31
  04f18b4  bf- 29, 0x4f1938
  04f18b8  slwi 9, 31, 3
  04f18bc  add 9, 9, 28
  04f18c0  clrldi 9, 9, 32
  04f18c4  ld 3, 0(9)
  04f18c8  rldicl 0, 3, 32, 48
  04f18cc  cmpwi 7, 0, 0
  04f18d0  bt 30, 0x4f18f4
  04f18d4  clrldi 4, 23, 32
  04f18d8  clrldi 5, 25, 32
  04f18dc  bl 0x4fcd10
  04f18e0  nop
  04f18e4  cmpwi 7, 3, -1
  04f18e8  bf 30, 0x4f1864
  04f18ec  mr 3, 30
  04f18f0  b 0x4f188c
  04f18f4  slwi 3, 26, 16
  04f18f8  ld 0, 224(1)
  04f18fc  ld 22, 128(1)
  04f1900  or 3, 30, 3
  04f1904  ld 23, 136(1)
  04f1908  ld 24, 144(1)
  04f190c  mtlr 0
  04f1910  clrldi 3, 3, 32
  04f1914  ld 25, 152(1)
  04f1918  ld 26, 160(1)
  04f191c  ld 27, 168(1)
  04f1920  ld 28, 176(1)
  04f1924  ld 29, 184(1)
  04f1928  ld 30, 192(1)
  04f192c  ld 31, 200(1)
  04f1930  addi 1, 1, 208
  04f1934  blr
  04f1938  lwz 6, -32676(2)
  04f193c  li 5, 738
  04f1940  lwz 3, -32684(2)
  04f1944  lwz 4, -32680(2)
  04f1948  bl 0x4f4df0
  04f194c  nop
  04f1950  trap
  04f1954  lwz 6, -32672(2)
  04f1958  li 5, 756
  04f195c  lwz 3, -32684(2)

FUN_004f19e8:   # 0x4f19e8, 0x84 bytes
  04f19e8  stdu 1, -128(1)
  04f19ec  mflr 0
  04f19f0  std 31, 120(1)
  04f19f4  mr 31, 3
  04f19f8  std 0, 144(1)
  04f19fc  lwz 4, 8(3)
  04f1a00  lwz 3, 4(3)
  04f1a04  std 30, 112(1)
  04f1a08  bl 0x64fbe4
  04f1a0c  ld 2, 40(1)
  04f1a10  lis 30, -32703
  04f1a14  lwz 3, 4(31)
  04f1a18  lwz 4, 8(31)
  04f1a1c  ori 30, 30, 2058
  04f1a20  bl 0x64fb44
  04f1a24  ld 2, 40(1)
  04f1a28  lwz 3, 4(31)
  04f1a2c  lwz 4, 8(31)
  04f1a30  bl 0x64fb04
  04f1a34  ld 2, 40(1)
  04f1a38  cmpw 7, 3, 30
  04f1a3c  bt 30, 0x4f1a28
  04f1a40  li 0, 0
  04f1a44  ld 30, 112(1)
  04f1a48  li 9, -1
  04f1a4c  stw 0, 4(31)
  04f1a50  ld 0, 144(1)
  04f1a54  stw 9, 12(31)
  04f1a58  stw 9, 8(31)
  04f1a5c  mtlr 0
  04f1a60  ld 31, 120(1)
  04f1a64  addi 1, 1, 128
  04f1a68  blr

FUN_004f1a6c:   # 0x4f1a6c, 0x30 bytes
  04f1a6c  stdu 1, -112(1)
  04f1a70  mflr 0
  04f1a74  mr 5, 4
  04f1a78  std 0, 128(1)
  04f1a7c  lwz 4, 8(3)
  04f1a80  lwz 3, 4(3)
  04f1a84  bl 0x64fb84
  04f1a88  ld 2, 40(1)
  04f1a8c  ld 0, 128(1)
  04f1a90  addi 1, 1, 112
  04f1a94  mtlr 0
  04f1a98  blr

FUN_004f1a9c:   # 0x4f1a9c, 0xb4 bytes
  04f1a9c  stdu 1, -384(1)
  04f1aa0  mflr 0
  04f1aa4  std 31, 376(1)
  04f1aa8  mr 31, 3
  04f1aac  std 0, 400(1)
  04f1ab0  std 30, 368(1)
  04f1ab4  li 3, 1
  04f1ab8  lwz 0, 4(31)
  04f1abc  cmpwi 7, 0, 0
  04f1ac0  bt 30, 0x4f1af4
  04f1ac4  lwsync
  04f1ac8  addi 0, 1, 112
  04f1acc  lwz 3, 4(31)
  04f1ad0  lwz 4, 8(31)
  04f1ad4  clrldi 30, 0, 32
  04f1ad8  mr 5, 30
  04f1adc  bl 0x64fae4
  04f1ae0  ld 2, 40(1)
  04f1ae4  lbz 0, 147(1)
  04f1ae8  cmpwi 7, 0, 0
  04f1aec  li 3, 0
  04f1af0  bt 30, 0x4f1b10
  04f1af4  ld 0, 400(1)
  04f1af8  extsw 3, 3
  04f1afc  ld 30, 368(1)
  04f1b00  ld 31, 376(1)
  04f1b04  mtlr 0
  04f1b08  addi 1, 1, 384
  04f1b0c  blr
  04f1b10  lwsync
  04f1b14  lwz 4, 8(31)
  04f1b18  mr 5, 30
  04f1b1c  lwz 3, 4(31)
  04f1b20  bl 0x64fae4
  04f1b24  ld 2, 40(1)
  04f1b28  lbz 9, 144(1)
  04f1b2c  ld 0, 400(1)
  04f1b30  addi 9, 9, -1
  04f1b34  ld 30, 368(1)
  04f1b38  ld 31, 376(1)
  04f1b3c  mtlr 0
  04f1b40  rldicl 3, 9, 1, 63
  04f1b44  addi 1, 1, 384
  04f1b48  extsw 3, 3
  04f1b4c  blr

FUN_004f1b50:   # 0x4f1b50, 0x34 bytes
  04f1b50  stdu 1, -368(1)
  04f1b54  mflr 0
  04f1b58  addi 5, 1, 112
  04f1b5c  std 0, 384(1)
  04f1b60  lwz 4, 8(3)
  04f1b64  lwz 3, 4(3)
  04f1b68  bl 0x64fae4
  04f1b6c  ld 2, 40(1)
  04f1b70  ld 0, 384(1)
  04f1b74  lbz 3, 144(1)
  04f1b78  mtlr 0
  04f1b7c  addi 1, 1, 368
  04f1b80  blr

FUN_004f1b84:   # 0x4f1b84, 0x34 bytes
  04f1b84  stdu 1, -368(1)
  04f1b88  mflr 0
  04f1b8c  addi 5, 1, 112
  04f1b90  std 0, 384(1)
  04f1b94  lwz 4, 8(3)
  04f1b98  lwz 3, 4(3)
  04f1b9c  bl 0x64fae4
  04f1ba0  ld 2, 40(1)
  04f1ba4  ld 0, 384(1)
  04f1ba8  lbz 3, 147(1)
  04f1bac  mtlr 0
  04f1bb0  addi 1, 1, 368
  04f1bb4  blr

idol_draw::CmdQueue_Submit:   # 0x4f1bb8, 0x30 bytes
  04f1bb8  stdu 1, -112(1)
  04f1bbc  mflr 0
  04f1bc0  mr 5, 4
  04f1bc4  std 0, 128(1)
  04f1bc8  lwz 4, 8(3)
  04f1bcc  lwz 3, 4(3)
  04f1bd0  bl 0x64fd04
  04f1bd4  ld 2, 40(1)
  04f1bd8  ld 0, 128(1)
  04f1bdc  addi 1, 1, 112
  04f1be0  mtlr 0
  04f1be4  blr

FUN_004f1be8:   # 0x4f1be8, 0x30 bytes
  04f1be8  addi 3, 3, 16
  04f1bec  mflr 0
  04f1bf0  li 5, 16
  04f1bf4  clrldi 3, 3, 32
  04f1bf8  stdu 1, -112(1)
  04f1bfc  std 0, 128(1)
  04f1c00  bl 0x5cccec
  04f1c04  nop
  04f1c08  ld 0, 128(1)
  04f1c0c  addi 1, 1, 112
  04f1c10  mtlr 0
  04f1c14  blr

FUN_004f1c18:   # 0x4f1c18, 0x278 bytes
  04f1c18  cmpwi 7, 7, 16
  04f1c1c  mflr 0
  04f1c20  stdu 1, -1024(1)
  04f1c24  std 20, 928(1)
  04f1c28  std 26, 976(1)
  04f1c2c  std 28, 992(1)
  04f1c30  std 29, 1000(1)
  04f1c34  std 31, 1016(1)
  04f1c38  std 21, 936(1)
  04f1c3c  std 22, 944(1)
  04f1c40  std 23, 952(1)
  04f1c44  std 24, 960(1)
  04f1c48  std 25, 968(1)
  04f1c4c  std 27, 984(1)
  04f1c50  std 30, 1008(1)
  04f1c54  std 0, 1040(1)
  04f1c58  mr 31, 3
  04f1c5c  mr 29, 4
  04f1c60  mr 28, 6
  04f1c64  mr 26, 8
  04f1c68  mr 20, 5
  04f1c6c  bf- 30, 0x4f1e80
  04f1c70  clrldi 30, 4, 32
  04f1c74  addi 4, 1, 128
  04f1c78  mr 3, 30
  04f1c7c  clrldi 22, 31, 32
  04f1c80  bl 0x64fa44
  04f1c84  ld 2, 40(1)
  04f1c88  stw 29, 4(31)
  04f1c8c  lwz 24, 0(31)
  04f1c90  bl 0x4fd358
  04f1c94  nop
  04f1c98  mr 27, 3
  04f1c9c  bl 0x4fd360
  04f1ca0  nop
  04f1ca4  cmpwi 7, 26, 0
  04f1ca8  stw 28, 12(31)
  04f1cac  bt 30, 0x4f1da8
  04f1cb0  lwz 8, 0(26)
  04f1cb4  addi 29, 1, 408
  04f1cb8  clrldi 0, 24, 32
  04f1cbc  clrldi 29, 29, 32
  04f1cc0  sldi 8, 8, 32
  04f1cc4  clrldi 7, 3, 32
  04f1cc8  or 8, 0, 8
  04f1ccc  clrldi 6, 27, 32
  04f1cd0  clrldi 0, 28, 32
  04f1cd4  clrldi 9, 20, 32
  04f1cd8  li 10, 1
  04f1cdc  mr 3, 29
  04f1ce0  li 4, 1
  04f1ce4  lis 5, 49
  04f1ce8  std 0, 112(1)
  04f1cec  bl 0x64fce4
  04f1cf0  ld 2, 40(1)
  04f1cf4  addi 5, 31, 16
  04f1cf8  lwz 4, -32656(2)
  04f1cfc  mr 3, 29
  04f1d00  clrldi 5, 5, 32
  04f1d04  clrldi 28, 26, 32
  04f1d08  bl 0x64faa4
  04f1d0c  ld 2, 40(1)
  04f1d10  addi 4, 31, 8
  04f1d14  mr 5, 29
  04f1d18  clrldi 4, 4, 32
  04f1d1c  mr 3, 30
  04f1d20  bl 0x64fc64
  04f1d24  ld 2, 40(1)
  04f1d28  lwz 4, 8(31)
  04f1d2c  mr 3, 30
  04f1d30  li 5, 7
  04f1d34  bl 0x64fa24
  04f1d38  ld 2, 40(1)
  04f1d3c  lwz 9, -32652(2)
  04f1d40  lwz 4, 8(31)
  04f1d44  mr 6, 22
  04f1d48  mr 3, 30
  04f1d4c  lwz 5, 0(9)
  04f1d50  bl 0x64fcc4
  04f1d54  ld 2, 40(1)
  04f1d58  mr 3, 28
  04f1d5c  mr 4, 22
  04f1d60  bl 0x4f9a0c
  04f1d64  nop
  04f1d68  ld 0, 1040(1)
  04f1d6c  ld 20, 928(1)
  04f1d70  ld 21, 936(1)
  04f1d74  mtlr 0
  04f1d78  ld 22, 944(1)
  04f1d7c  ld 23, 952(1)
  04f1d80  ld 24, 960(1)
  04f1d84  ld 25, 968(1)
  04f1d88  ld 26, 976(1)
  04f1d8c  ld 27, 984(1)
  04f1d90  ld 28, 992(1)
  04f1d94  ld 29, 1000(1)
  04f1d98  ld 30, 1008(1)
  04f1d9c  ld 31, 1016(1)
  04f1da0  addi 1, 1, 1024
  04f1da4  blr
  04f1da8  addi 29, 1, 408
  04f1dac  clrldi 0, 28, 32
  04f1db0  clrldi 29, 29, 32
  04f1db4  clrldi 6, 27, 32
  04f1db8  clrldi 7, 3, 32
  04f1dbc  clrldi 8, 24, 32
  04f1dc0  clrldi 9, 20, 32
  04f1dc4  li 10, 1
  04f1dc8  li 4, 1
  04f1dcc  lis 5, 49
  04f1dd0  mr 3, 29
  04f1dd4  std 0, 112(1)
  04f1dd8  bl 0x64fce4
  04f1ddc  ld 2, 40(1)
  04f1de0  addi 5, 31, 16
  04f1de4  lwz 4, -32656(2)
  04f1de8  mr 3, 29
  04f1dec  clrldi 5, 5, 32
  04f1df0  bl 0x64faa4
  04f1df4  ld 2, 40(1)
  04f1df8  addi 4, 31, 8
  04f1dfc  mr 5, 29
  04f1e00  clrldi 4, 4, 32
  04f1e04  mr 3, 30
  04f1e08  bl 0x64fc64
  04f1e0c  ld 2, 40(1)
  04f1e10  lwz 4, 8(31)
  04f1e14  mr 3, 30
  04f1e18  li 5, 7
  04f1e1c  bl 0x64fa24
  04f1e20  ld 2, 40(1)
  04f1e24  lwz 9, -32652(2)
  04f1e28  lwz 4, 8(31)
  04f1e2c  mr 3, 30
  04f1e30  mr 6, 22
  04f1e34  lwz 5, 0(9)
  04f1e38  bl 0x64fcc4
  04f1e3c  ld 2, 40(1)
  04f1e40  ld 0, 1040(1)
  04f1e44  ld 20, 928(1)
  04f1e48  ld 21, 936(1)
  04f1e4c  mtlr 0
  04f1e50  ld 22, 944(1)
  04f1e54  ld 23, 952(1)
  04f1e58  ld 24, 960(1)
  04f1e5c  ld 25, 968(1)
  04f1e60  ld 26, 976(1)
  04f1e64  ld 27, 984(1)
  04f1e68  ld 28, 992(1)
  04f1e6c  ld 29, 1000(1)
  04f1e70  ld 30, 1008(1)
  04f1e74  ld 31, 1016(1)
  04f1e78  addi 1, 1, 1024
  04f1e7c  blr
  04f1e80  clrldi 4, 7, 32
  04f1e84  lwz 3, -32664(2)
  04f1e88  li 5, 16
  04f1e8c  bl 0x4f4df0

FUN_004f1eb0:   # 0x4f1eb0, 0xb0 bytes
  04f1eb0  mr 10, 3
  04f1eb4  mflr 0
  04f1eb8  stdu 1, -112(1)
  04f1ebc  std 0, 128(1)
  04f1ec0  slwi 9, 4, 4
  04f1ec4  mr 7, 4
  04f1ec8  lwz 0, 0(10)
  04f1ecc  mr 6, 5
  04f1ed0  add 9, 9, 0
  04f1ed4  addi 9, 9, 64
  04f1ed8  lwsync
  04f1edc  clrldi 9, 9, 32
  04f1ee0  li 0, -1
  04f1ee4  sth 0, 14(9)
  04f1ee8  sth 0, 4(9)
  04f1eec  sth 0, 6(9)
  04f1ef0  sth 0, 8(9)
  04f1ef4  sth 0, 10(9)
  04f1ef8  sth 0, 12(9)
  04f1efc  lwsync
  04f1f00  li 0, 0
  04f1f04  sth 0, 2(9)
  04f1f08  sth 0, 0(9)
  04f1f0c  lwsync
  04f1f10  slwi 0, 4, 2
  04f1f14  lwz 11, 0(10)
  04f1f18  lwz 8, 0(5)
  04f1f1c  clrldi 3, 5, 32
  04f1f20  extsw 0, 0
  04f1f24  mr 4, 10
  04f1f28  add 11, 11, 0
  04f1f2c  li 0, 1
  04f1f30  clrldi 5, 7, 32
  04f1f34  stw 0, 16(11)
  04f1f38  lwz 9, 4(6)
  04f1f3c  stw 8, 48(11)
  04f1f40  addi 9, 9, -1
  04f1f44  stw 9, 32(11)
  04f1f48  bl 0x4f2eb8
  04f1f4c  nop
  04f1f50  ld 0, 128(1)
  04f1f54  addi 1, 1, 112
  04f1f58  mtlr 0
  04f1f5c  blr

FUN_004f1f60:   # 0x4f1f60, 0xb0 bytes
  04f1f60  mr 10, 3
  04f1f64  mflr 0
  04f1f68  stdu 1, -112(1)
  04f1f6c  std 0, 128(1)
  04f1f70  slwi 9, 4, 4
  04f1f74  mr 7, 4
  04f1f78  lwz 0, 0(10)
  04f1f7c  mr 6, 5
  04f1f80  add 9, 9, 0
  04f1f84  addi 9, 9, 64
  04f1f88  lwsync
  04f1f8c  clrldi 9, 9, 32
  04f1f90  li 0, -1
  04f1f94  sth 0, 14(9)
  04f1f98  sth 0, 4(9)
  04f1f9c  sth 0, 6(9)
  04f1fa0  sth 0, 8(9)
  04f1fa4  sth 0, 10(9)
  04f1fa8  sth 0, 12(9)
  04f1fac  lwsync
  04f1fb0  li 0, 0
  04f1fb4  sth 0, 2(9)
  04f1fb8  sth 0, 0(9)
  04f1fbc  lwsync
  04f1fc0  slwi 0, 4, 2
  04f1fc4  lwz 11, 0(10)
  04f1fc8  lwz 8, 0(5)
  04f1fcc  clrldi 3, 5, 32
  04f1fd0  extsw 0, 0
  04f1fd4  mr 4, 10
  04f1fd8  add 11, 11, 0
  04f1fdc  li 0, 0
  04f1fe0  clrldi 5, 7, 32
  04f1fe4  stw 0, 16(11)
  04f1fe8  lwz 9, 4(6)
  04f1fec  stw 8, 48(11)
  04f1ff0  addi 9, 9, -1
  04f1ff4  stw 9, 32(11)
  04f1ff8  bl 0x4f2d7c
  04f1ffc  nop
  04f2000  ld 0, 128(1)
  04f2004  addi 1, 1, 112
  04f2008  mtlr 0
  04f200c  blr

FUN_004f2010:   # 0x4f2010, 0xa4 bytes
  04f2010  slwi 11, 4, 4
  04f2014  lwz 0, 0(3)
  04f2018  slwi 4, 4, 2
  04f201c  extsw 9, 11
  04f2020  extsw 4, 4
  04f2024  add 9, 0, 9
  04f2028  add 10, 0, 4
  04f202c  add 11, 11, 0
  04f2030  li 8, 0
  04f2034  addi 6, 11, 64
  04f2038  lhz 7, 64(9)
  04f203c  lwz 0, 48(10)
  04f2040  slwi 9, 7, 3
  04f2044  add 9, 9, 0
  04f2048  clrldi 11, 9, 32
  04f204c  addi 10, 9, 10
  04f2050  lhz 0, 2(11)
  04f2054  cmpwi 7, 0, 0
  04f2058  bt 30, 0x4f207c
  04f205c  nop
  04f2060  clrldi 9, 10, 32
  04f2064  addi 8, 8, 1
  04f2068  addi 10, 10, 8
  04f206c  lhz 0, 0(9)
  04f2070  cmpwi 7, 0, 0
  04f2074  bf 30, 0x4f2060
  04f2078  add 7, 7, 8
  04f207c  lwsync
  04f2080  clrldi 9, 6, 32
  04f2084  sth 7, 2(9)
  04f2088  sth 7, 0(9)
  04f208c  lwsync
  04f2090  li 0, -1
  04f2094  sth 0, 14(9)
  04f2098  sth 0, 4(9)
  04f209c  sth 0, 6(9)
  04f20a0  sth 0, 8(9)
  04f20a4  sth 0, 10(9)
  04f20a8  sth 0, 12(9)
  04f20ac  lwsync
  04f20b0  blr

FUN_004f20b4:   # 0x4f20b4, 0x20c bytes
  04f20b4  stdu 1, -144(1)
  04f20b8  mflr 0
  04f20bc  clrldi 11, 4, 32
  04f20c0  std 0, 160(1)
  04f20c4  li 0, 16
  04f20c8  vxor 0, 0, 0
  04f20cc  std 28, 112(1)
  04f20d0  std 29, 120(1)
  04f20d4  std 31, 136(1)
  04f20d8  stw 4, 0(3)
  04f20dc  li 9, 32
  04f20e0  stvx 0, 11, 0
  04f20e4  li 0, 112
  04f20e8  mr 29, 4
  04f20ec  mr 28, 3
  04f20f0  mr 31, 5
  04f20f4  stvx 0, 11, 9
  04f20f8  li 9, 48
  04f20fc  stvx 0, 11, 0
  04f2100  li 0, 64
  04f2104  stvx 0, 11, 9
  04f2108  li 9, 80
  04f210c  stvx 0, 11, 0
  04f2110  li 0, 96
  04f2114  stvx 0, 11, 9
  04f2118  stvx 0, 11, 0
  04f211c  stvx 0, 0, 11
  04f2120  bl 0x4fd358
  04f2124  nop
  04f2128  stw 3, 0(29)
  04f212c  bl 0x4fd360
  04f2130  nop
  04f2134  li 11, 0
  04f2138  lwz 9, 0(28)
  04f213c  stw 3, 4(29)
  04f2140  stw 11, 8(29)
  04f2144  stw 11, 12(29)
  04f2148  addi 9, 9, 64
  04f214c  mr 3, 28
  04f2150  lwsync
  04f2154  clrldi 9, 9, 32
  04f2158  li 0, -1
  04f215c  sth 0, 4(9)
  04f2160  sth 0, 6(9)
  04f2164  sth 0, 8(9)
  04f2168  sth 0, 10(9)
  04f216c  sth 0, 12(9)
  04f2170  sth 0, 14(9)
  04f2174  lwsync
  04f2178  sth 11, 2(9)
  04f217c  sth 11, 0(9)
  04f2180  lwsync
  04f2184  lwz 9, 0(28)
  04f2188  addi 9, 9, 80
  04f218c  lwsync
  04f2190  clrldi 9, 9, 32
  04f2194  sth 0, 4(9)
  04f2198  sth 0, 6(9)
  04f219c  sth 0, 8(9)
  04f21a0  sth 0, 10(9)
  04f21a4  sth 0, 12(9)
  04f21a8  sth 0, 14(9)
  04f21ac  lwsync
  04f21b0  sth 11, 2(9)
  04f21b4  sth 11, 0(9)
  04f21b8  lwsync
  04f21bc  lwz 9, 0(28)
  04f21c0  addi 9, 9, 96
  04f21c4  lwsync
  04f21c8  clrldi 9, 9, 32
  04f21cc  sth 0, 4(9)
  04f21d0  sth 0, 6(9)
  04f21d4  sth 0, 8(9)
  04f21d8  sth 0, 10(9)
  04f21dc  sth 0, 12(9)
  04f21e0  sth 0, 14(9)
  04f21e4  lwsync
  04f21e8  sth 11, 2(9)
  04f21ec  sth 11, 0(9)
  04f21f0  lwsync
  04f21f4  lwz 9, 0(28)
  04f21f8  addi 9, 9, 112
  04f21fc  lwsync
  04f2200  clrldi 9, 9, 32
  04f2204  sth 0, 14(9)
  04f2208  sth 0, 4(9)
  04f220c  sth 0, 6(9)
  04f2210  sth 0, 8(9)
  04f2214  sth 0, 10(9)
  04f2218  sth 0, 12(9)
  04f221c  lwsync
  04f2220  sth 11, 2(9)
  04f2224  sth 11, 0(9)
  04f2228  lwsync
  04f222c  cmpwi 7, 31, 0
  04f2230  stw 11, 28(29)
  04f2234  stw 11, 32(29)
  04f2238  stw 11, 16(29)
  04f223c  stw 11, 36(29)
  04f2240  stw 11, 20(29)
  04f2244  stw 11, 40(29)
  04f2248  stw 11, 24(29)
  04f224c  stw 11, 44(29)
  04f2250  bt 30, 0x4f2288
  04f2254  addi 3, 3, 16
  04f2258  clrldi 4, 31, 32
  04f225c  clrldi 3, 3, 32
  04f2260  li 5, 16
  04f2264  bl 0x5cccec
  04f2268  nop
  04f226c  ld 0, 160(1)
  04f2270  ld 28, 112(1)
  04f2274  ld 29, 120(1)
  04f2278  mtlr 0
  04f227c  ld 31, 136(1)
  04f2280  addi 1, 1, 144
  04f2284  blr
  04f2288  lwz 31, -32648(2)
  04f228c  addi 3, 3, 16
  04f2290  li 5, 16
  04f2294  clrldi 4, 31, 32
  04f2298  clrldi 3, 3, 32
  04f229c  bl 0x5cccec
  04f22a0  nop
  04f22a4  ld 0, 160(1)
  04f22a8  ld 28, 112(1)
  04f22ac  ld 29, 120(1)
  04f22b0  mtlr 0
  04f22b4  ld 31, 136(1)
  04f22b8  addi 1, 1, 144
  04f22bc  blr

idol_draw::Spurs_WaitWorkloadIdle:   # 0x4f22c0, 0x8c bytes
  04f22c0  stdu 1, -384(1)
  04f22c4  mflr 0
  04f22c8  std 30, 368(1)
  04f22cc  std 0, 400(1)
  04f22d0  addi 0, 1, 112
  04f22d4  std 31, 376(1)
  04f22d8  clrldi 30, 0, 32
  04f22dc  mr 31, 3
  04f22e0  lwz 0, 4(31)
  04f22e4  cmpwi 7, 0, 0
  04f22e8  bt 30, 0x4f2334
  04f22ec  lwsync
  04f22f0  lwz 3, 4(31)
  04f22f4  mr 5, 30
  04f22f8  lwz 4, 8(31)
  04f22fc  bl 0x64fae4
  04f2300  ld 2, 40(1)
  04f2304  lbz 0, 147(1)
  04f2308  cmpwi 7, 0, 0
  04f230c  bf 30, 0x4f22e0
  04f2310  lwsync
  04f2314  lwz 3, 4(31)
  04f2318  mr 5, 30
  04f231c  lwz 4, 8(31)
  04f2320  bl 0x64fae4
  04f2324  ld 2, 40(1)
  04f2328  lbz 0, 144(1)
  04f232c  cmpwi 7, 0, 0
  04f2330  bf 30, 0x4f22e0
  04f2334  ld 0, 400(1)
  04f2338  ld 30, 368(1)
  04f233c  ld 31, 376(1)
  04f2340  mtlr 0
  04f2344  addi 1, 1, 384
  04f2348  blr

FUN_004f234c:   # 0x4f234c, 0x204 bytes
  04f234c  stdu 1, -384(1)
  04f2350  mflr 0
  04f2354  std 31, 376(1)
  04f2358  mr 31, 3
  04f235c  std 0, 400(1)
  04f2360  slwi 3, 4, 4
  04f2364  slwi 12, 4, 2
  04f2368  extsw 10, 3
  04f236c  lwz 5, 0(31)
  04f2370  extsw 0, 12
  04f2374  std 30, 368(1)
  04f2378  clrldi 11, 5, 32
  04f237c  li 7, 0
  04f2380  add 10, 11, 10
  04f2384  add 11, 11, 0
  04f2388  lhz 6, 64(10)
  04f238c  lwz 9, 48(11)
  04f2390  slwi 0, 6, 3
  04f2394  add 9, 9, 0
  04f2398  clrldi 11, 9, 32
  04f239c  addi 8, 9, 10
  04f23a0  lhz 0, 2(11)
  04f23a4  cmpwi 7, 0, 0
  04f23a8  bt 30, 0x4f23cc
  04f23ac  nop
  04f23b0  clrldi 9, 8, 32
  04f23b4  addi 7, 7, 1
  04f23b8  addi 8, 8, 8
  04f23bc  lhz 0, 0(9)
  04f23c0  cmpwi 7, 0, 0
  04f23c4  bf 30, 0x4f23b0
  04f23c8  add 6, 6, 7
  04f23cc  add 9, 5, 3
  04f23d0  addi 9, 9, 64
  04f23d4  clrldi 9, 9, 32
  04f23d8  lhz 0, 2(9)
  04f23dc  lwsync
  04f23e0  clrlwi 0, 0, 16
  04f23e4  lhz 11, 4(9)
  04f23e8  cmplw 7, 0, 11
  04f23ec  bf 29, 0x4f23f4
  04f23f0  mr 0, 11
  04f23f4  lhz 11, 6(9)
  04f23f8  cmplw 7, 11, 0
  04f23fc  bf 28, 0x4f2404
  04f2400  mr 0, 11
  04f2404  lhz 11, 8(9)
  04f2408  cmplw 7, 0, 11
  04f240c  bf 29, 0x4f2414
  04f2410  mr 0, 11
  04f2414  lhz 11, 10(9)
  04f2418  cmplw 7, 11, 0
  04f241c  bf 28, 0x4f2424
  04f2420  mr 0, 11
  04f2424  lhz 11, 12(9)
  04f2428  mr 8, 0
  04f242c  cmplw 7, 0, 11
  04f2430  bf 29, 0x4f2438
  04f2434  mr 8, 11
  04f2438  lhz 0, 14(9)
  04f243c  cmplw 7, 0, 8
  04f2440  bt 28, 0x4f2448
  04f2444  mr 0, 8
  04f2448  cmplw 7, 0, 6
  04f244c  bt 28, 0x4f24b4
  04f2450  lwz 11, 0(31)
  04f2454  extsw 9, 3
  04f2458  extsw 0, 12
  04f245c  add 9, 11, 9
  04f2460  add 11, 11, 0
  04f2464  li 7, 0
  04f2468  lhz 10, 64(9)
  04f246c  lwz 0, 48(11)
  04f2470  slwi 9, 10, 3
  04f2474  add 9, 9, 0
  04f2478  clrldi 11, 9, 32
  04f247c  addi 8, 9, 10
  04f2480  lhz 0, 2(11)
  04f2484  cmpwi 7, 0, 0
  04f2488  bt 30, 0x4f24ac
  04f248c  nop
  04f2490  clrldi 9, 8, 32
  04f2494  addi 7, 7, 1
  04f2498  addi 8, 8, 8
  04f249c  lhz 0, 0(9)
  04f24a0  cmpwi 7, 0, 0
  04f24a4  bf 30, 0x4f2490
  04f24a8  add 10, 10, 7
  04f24ac  cmpw 7, 10, 6
  04f24b0  bt 30, 0x4f24d4
  04f24b4  li 3, 0
  04f24b8  ld 0, 400(1)
  04f24bc  extsw 3, 3
  04f24c0  ld 30, 368(1)
  04f24c4  ld 31, 376(1)
  04f24c8  mtlr 0
  04f24cc  addi 1, 1, 384
  04f24d0  blr
  04f24d4  lwsync
  04f24d8  lwz 9, 0(31)
  04f24dc  li 3, 1
  04f24e0  lwz 0, 8(9)
  04f24e4  cmpw 7, 0, 4
  04f24e8  bf 30, 0x4f24b8
  04f24ec  lwz 0, 4(31)
  04f24f0  cmpwi 7, 0, 0
  04f24f4  bt 30, 0x4f24b8
  04f24f8  lwsync
  04f24fc  addi 0, 1, 112
  04f2500  lwz 3, 4(31)
  04f2504  lwz 4, 8(31)
  04f2508  clrldi 30, 0, 32
  04f250c  mr 5, 30
  04f2510  bl 0x64fae4
  04f2514  ld 2, 40(1)
  04f2518  lbz 0, 147(1)
  04f251c  cmpwi 7, 0, 0
  04f2520  li 3, 0
  04f2524  bf 30, 0x4f24b8
  04f2528  lwsync
  04f252c  lwz 4, 8(31)
  04f2530  mr 5, 30
  04f2534  lwz 3, 4(31)
  04f2538  bl 0x64fae4
  04f253c  ld 2, 40(1)
  04f2540  lbz 9, 144(1)
  04f2544  addi 9, 9, -1
  04f2548  rldicl 3, 9, 1, 63
  04f254c  b 0x4f24b8

FUN_004f2550:   # 0x4f2550, 0x200 bytes
  04f2550  stdu 1, -384(1)
  04f2554  mflr 0
  04f2558  std 31, 376(1)
  04f255c  mr 31, 3
  04f2560  std 0, 400(1)
  04f2564  slwi 3, 4, 4
  04f2568  std 30, 368(1)
  04f256c  extsw 11, 3
  04f2570  lwz 7, 0(31)
  04f2574  slwi 30, 4, 2
  04f2578  clrldi 9, 7, 32
  04f257c  extsw 0, 30
  04f2580  add 11, 9, 11
  04f2584  add 9, 9, 0
  04f2588  lhz 5, 64(11)
  04f258c  lwz 10, 48(9)
  04f2590  slwi 0, 5, 3
  04f2594  add 11, 0, 10
  04f2598  clrldi 9, 11, 32
  04f259c  lhz 0, 2(9)
  04f25a0  cmpwi 7, 0, 0
  04f25a4  bt 30, 0x4f25d4
  04f25a8  addi 11, 11, 10
  04f25ac  li 10, 0
  04f25b0  clrldi 9, 11, 32
  04f25b4  addi 10, 10, 1
  04f25b8  addi 11, 11, 8
  04f25bc  lhz 0, 0(9)
  04f25c0  cmpwi 7, 0, 0
  04f25c4  bf 30, 0x4f25b0
  04f25c8  add 5, 5, 10
  04f25cc  b 0x4f25d4
  04f25d0  lwz 7, 0(31)
  04f25d4  add 9, 3, 7
  04f25d8  addi 9, 9, 64
  04f25dc  clrldi 9, 9, 32
  04f25e0  lhz 0, 2(9)
  04f25e4  lwsync
  04f25e8  clrlwi 0, 0, 16
  04f25ec  lhz 11, 4(9)
  04f25f0  cmplw 7, 0, 11
  04f25f4  bf 29, 0x4f25fc
  04f25f8  mr 0, 11
  04f25fc  lhz 11, 6(9)
  04f2600  cmplw 7, 11, 0
  04f2604  bf 28, 0x4f260c
  04f2608  mr 0, 11
  04f260c  lhz 11, 8(9)
  04f2610  cmplw 7, 0, 11
  04f2614  bf 29, 0x4f261c
  04f2618  mr 0, 11
  04f261c  lhz 11, 10(9)
  04f2620  cmplw 7, 11, 0
  04f2624  bf 28, 0x4f262c
  04f2628  mr 0, 11
  04f262c  lhz 11, 12(9)
  04f2630  mr 10, 0
  04f2634  cmplw 7, 0, 11
  04f2638  bf 29, 0x4f2640
  04f263c  mr 10, 11
  04f2640  lhz 0, 14(9)
  04f2644  cmplw 7, 10, 0
  04f2648  bt 29, 0x4f2650
  04f264c  mr 0, 10
  04f2650  cmplw 7, 0, 5
  04f2654  bt 28, 0x4f25d0
  04f2658  lwz 7, 0(31)
  04f265c  extsw 10, 3
  04f2660  extsw 0, 30
  04f2664  clrldi 11, 7, 32
  04f2668  li 8, 0
  04f266c  add 10, 11, 10
  04f2670  add 11, 11, 0
  04f2674  lhz 6, 64(10)
  04f2678  lwz 9, 48(11)
  04f267c  slwi 0, 6, 3
  04f2680  add 9, 9, 0
  04f2684  clrldi 11, 9, 32
  04f2688  addi 10, 9, 10
  04f268c  lhz 0, 2(11)
  04f2690  cmpwi 7, 0, 0
  04f2694  bt 30, 0x4f26b4
  04f2698  clrldi 9, 10, 32
  04f269c  addi 8, 8, 1
  04f26a0  addi 10, 10, 8
  04f26a4  lhz 0, 0(9)
  04f26a8  cmpwi 7, 0, 0
  04f26ac  bf 30, 0x4f2698
  04f26b0  add 6, 6, 8
  04f26b4  cmpw 7, 5, 6
  04f26b8  bt 30, 0x4f26c4
  04f26bc  mr 5, 6
  04f26c0  b 0x4f25d4
  04f26c4  lwsync
  04f26c8  lwz 11, 0(31)
  04f26cc  addi 0, 1, 112
  04f26d0  clrldi 30, 0, 32
  04f26d4  lwz 9, 8(11)
  04f26d8  cmpw 7, 9, 4
  04f26dc  bt 30, 0x4f271c
  04f26e0  ld 0, 400(1)
  04f26e4  ld 30, 368(1)
  04f26e8  ld 31, 376(1)
  04f26ec  mtlr 0
  04f26f0  addi 1, 1, 384
  04f26f4  blr
  04f26f8  lwsync
  04f26fc  lwz 3, 4(31)
  04f2700  mr 5, 30
  04f2704  lwz 4, 8(31)
  04f2708  bl 0x64fae4
  04f270c  ld 2, 40(1)
  04f2710  lbz 0, 144(1)
  04f2714  cmpwi 7, 0, 0
  04f2718  bt 30, 0x4f26e0
  04f271c  lwz 0, 4(31)
  04f2720  cmpwi 7, 0, 0
  04f2724  bt 30, 0x4f26e0
  04f2728  lwsync
  04f272c  lwz 3, 4(31)
  04f2730  mr 5, 30
  04f2734  lwz 4, 8(31)
  04f2738  bl 0x64fae4
  04f273c  ld 2, 40(1)
  04f2740  lbz 0, 147(1)
  04f2744  cmpwi 7, 0, 0
  04f2748  bf 30, 0x4f271c
  04f274c  b 0x4f26f8

FUN_004f2750:   # 0x4f2750, 0x2c0 bytes
  04f2750  stdu 1, -432(1)
  04f2754  mflr 0
  04f2758  std 30, 416(1)
  04f275c  std 0, 448(1)
  04f2760  lwz 0, 0(3)
  04f2764  slwi 30, 4, 4
  04f2768  std 28, 400(1)
  04f276c  clrldi 9, 0, 32
  04f2770  slwi 28, 4, 2
  04f2774  extsw 10, 30
  04f2778  extsw 11, 28
  04f277c  add 10, 9, 10
  04f2780  add 9, 9, 11
  04f2784  std 24, 368(1)
  04f2788  mr 24, 5
  04f278c  mr 7, 0
  04f2790  lhz 5, 64(10)
  04f2794  lwz 11, 48(9)
  04f2798  slwi 0, 5, 3
  04f279c  std 25, 376(1)
  04f27a0  add 11, 11, 0
  04f27a4  std 26, 384(1)
  04f27a8  clrldi 9, 11, 32
  04f27ac  std 27, 392(1)
  04f27b0  std 31, 424(1)
  04f27b4  std 29, 408(1)
  04f27b8  mr 26, 3
  04f27bc  lhz 0, 2(9)
  04f27c0  mr 27, 4
  04f27c4  mr 25, 3
  04f27c8  cmpwi 7, 0, 0
  04f27cc  mr 31, 3
  04f27d0  bt 30, 0x4f2808
  04f27d4  addi 11, 11, 10
  04f27d8  li 10, 0
  04f27dc  nop
  04f27e0  clrldi 9, 11, 32
  04f27e4  addi 10, 10, 1
  04f27e8  addi 11, 11, 8
  04f27ec  lhz 0, 0(9)
  04f27f0  cmpwi 7, 0, 0
  04f27f4  bf 30, 0x4f27e0
  04f27f8  add 5, 5, 10
  04f27fc  lwz 7, 0(31)
  04f2800  b 0x4f2808
  04f2804  lwz 7, 0(31)
  04f2808  add 9, 30, 7
  04f280c  addi 9, 9, 64
  04f2810  clrldi 9, 9, 32
  04f2814  lhz 0, 2(9)
  04f2818  lwsync
  04f281c  clrlwi 0, 0, 16
  04f2820  lhz 11, 4(9)
  04f2824  cmplw 7, 0, 11
  04f2828  bf 29, 0x4f2830
  04f282c  mr 0, 11
  04f2830  lhz 11, 6(9)
  04f2834  cmplw 7, 11, 0
  04f2838  bf 28, 0x4f2840
  04f283c  mr 0, 11
  04f2840  lhz 11, 8(9)
  04f2844  cmplw 7, 0, 11
  04f2848  bf 29, 0x4f2850
  04f284c  mr 0, 11
  04f2850  lhz 11, 10(9)
  04f2854  cmplw 7, 11, 0
  04f2858  bf 28, 0x4f2860
  04f285c  mr 0, 11
  04f2860  lhz 11, 12(9)
  04f2864  mr 10, 0
  04f2868  cmplw 7, 11, 0
  04f286c  bf 28, 0x4f2874
  04f2870  mr 10, 11
  04f2874  lhz 0, 14(9)
  04f2878  cmplw 7, 10, 0
  04f287c  bt 29, 0x4f2884
  04f2880  mr 0, 10
  04f2884  cmplw 7, 0, 5
  04f2888  bt 28, 0x4f2804
  04f288c  lwz 7, 0(31)
  04f2890  extsw 9, 30
  04f2894  extsw 0, 28
  04f2898  clrldi 11, 7, 32
  04f289c  li 8, 0
  04f28a0  add 9, 11, 9
  04f28a4  add 11, 11, 0
  04f28a8  lhz 6, 64(9)
  04f28ac  lwz 0, 48(11)
  04f28b0  slwi 9, 6, 3
  04f28b4  add 9, 9, 0
  04f28b8  clrldi 11, 9, 32
  04f28bc  addi 10, 9, 10
  04f28c0  lhz 0, 2(11)
  04f28c4  cmpwi 7, 0, 0
  04f28c8  bt 30, 0x4f28ec
  04f28cc  nop
  04f28d0  clrldi 9, 10, 32
  04f28d4  addi 8, 8, 1
  04f28d8  addi 10, 10, 8
  04f28dc  lhz 0, 0(9)
  04f28e0  cmpwi 7, 0, 0
  04f28e4  bf 30, 0x4f28d0
  04f28e8  add 6, 6, 8
  04f28ec  cmpw 7, 5, 6
  04f28f0  bt 30, 0x4f28fc
  04f28f4  mr 5, 6
  04f28f8  b 0x4f2808
  04f28fc  lwsync
  04f2900  lwz 11, 0(31)
  04f2904  addi 0, 1, 112
  04f2908  clrldi 29, 0, 32
  04f290c  lwz 9, 8(11)
  04f2910  cmpw 7, 9, 27
  04f2914  bt 30, 0x4f29dc
  04f2918  clrldi 3, 24, 32
  04f291c  clrldi 4, 25, 32
  04f2920  clrldi 5, 27, 32
  04f2924  bl 0x4f2ec4
  04f2928  nop
  04f292c  lwz 9, 0(26)
  04f2930  extsw 0, 28
  04f2934  clrldi 11, 9, 32
  04f2938  li 10, 0
  04f293c  add 11, 11, 0
  04f2940  add 9, 30, 9
  04f2944  addi 9, 9, 64
  04f2948  stw 10, 16(11)
  04f294c  stw 10, 48(11)
  04f2950  stw 10, 32(11)
  04f2954  lwsync
  04f2958  clrldi 9, 9, 32
  04f295c  li 0, -1
  04f2960  sth 0, 14(9)
  04f2964  sth 0, 4(9)
  04f2968  sth 0, 6(9)
  04f296c  sth 0, 8(9)
  04f2970  sth 0, 10(9)
  04f2974  sth 0, 12(9)
  04f2978  lwsync
  04f297c  sth 10, 2(9)
  04f2980  sth 10, 0(9)
  04f2984  lwsync
  04f2988  ld 0, 448(1)
  04f298c  ld 24, 368(1)
  04f2990  ld 25, 376(1)
  04f2994  mtlr 0
  04f2998  ld 26, 384(1)
  04f299c  ld 27, 392(1)
  04f29a0  ld 28, 400(1)
  04f29a4  ld 29, 408(1)
  04f29a8  ld 30, 416(1)
  04f29ac  ld 31, 424(1)
  04f29b0  addi 1, 1, 432
  04f29b4  blr
  04f29b8  lwsync
  04f29bc  lwz 3, 4(31)
  04f29c0  mr 5, 29
  04f29c4  lwz 4, 8(31)
  04f29c8  bl 0x64fae4
  04f29cc  ld 2, 40(1)
  04f29d0  lbz 0, 144(1)
  04f29d4  cmpwi 7, 0, 0
  04f29d8  bt 30, 0x4f2918
  04f29dc  lwz 0, 4(31)
  04f29e0  cmpwi 7, 0, 0
  04f29e4  bt 30, 0x4f2918
  04f29e8  lwsync
  04f29ec  lwz 3, 4(31)
  04f29f0  mr 5, 29
  04f29f4  lwz 4, 8(31)
  04f29f8  bl 0x64fae4
  04f29fc  ld 2, 40(1)
  04f2a00  lbz 0, 147(1)
  04f2a04  cmpwi 7, 0, 0
  04f2a08  bf 30, 0x4f29dc
  04f2a0c  b 0x4f29b8

FUN_004f2a10:   # 0x4f2a10, 0x2c0 bytes
  04f2a10  stdu 1, -432(1)
  04f2a14  mflr 0
  04f2a18  std 30, 416(1)
  04f2a1c  std 0, 448(1)
  04f2a20  lwz 0, 0(3)
  04f2a24  slwi 30, 4, 4
  04f2a28  std 28, 400(1)
  04f2a2c  clrldi 9, 0, 32
  04f2a30  slwi 28, 4, 2
  04f2a34  extsw 10, 30
  04f2a38  extsw 11, 28
  04f2a3c  add 10, 9, 10
  04f2a40  add 9, 9, 11
  04f2a44  std 24, 368(1)
  04f2a48  mr 24, 5
  04f2a4c  mr 7, 0
  04f2a50  lhz 5, 64(10)
  04f2a54  lwz 11, 48(9)
  04f2a58  slwi 0, 5, 3
  04f2a5c  std 25, 376(1)
  04f2a60  add 11, 11, 0
  04f2a64  std 26, 384(1)
  04f2a68  clrldi 9, 11, 32
  04f2a6c  std 27, 392(1)
  04f2a70  std 31, 424(1)
  04f2a74  std 29, 408(1)
  04f2a78  mr 26, 3
  04f2a7c  lhz 0, 2(9)
  04f2a80  mr 27, 4
  04f2a84  mr 25, 3
  04f2a88  cmpwi 7, 0, 0
  04f2a8c  mr 31, 3
  04f2a90  bt 30, 0x4f2ac8
  04f2a94  addi 11, 11, 10
  04f2a98  li 10, 0
  04f2a9c  nop
  04f2aa0  clrldi 9, 11, 32
  04f2aa4  addi 10, 10, 1
  04f2aa8  addi 11, 11, 8
  04f2aac  lhz 0, 0(9)
  04f2ab0  cmpwi 7, 0, 0
  04f2ab4  bf 30, 0x4f2aa0
  04f2ab8  add 5, 5, 10
  04f2abc  lwz 7, 0(31)
  04f2ac0  b 0x4f2ac8
  04f2ac4  lwz 7, 0(31)
  04f2ac8  add 9, 30, 7
  04f2acc  addi 9, 9, 64
  04f2ad0  clrldi 9, 9, 32
  04f2ad4  lhz 0, 2(9)
  04f2ad8  lwsync
  04f2adc  clrlwi 0, 0, 16
  04f2ae0  lhz 11, 4(9)
  04f2ae4  cmplw 7, 0, 11
  04f2ae8  bf 29, 0x4f2af0
  04f2aec  mr 0, 11
  04f2af0  lhz 11, 6(9)
  04f2af4  cmplw 7, 11, 0
  04f2af8  bf 28, 0x4f2b00
  04f2afc  mr 0, 11
  04f2b00  lhz 11, 8(9)
  04f2b04  cmplw 7, 0, 11
  04f2b08  bf 29, 0x4f2b10
  04f2b0c  mr 0, 11
  04f2b10  lhz 11, 10(9)
  04f2b14  cmplw 7, 11, 0
  04f2b18  bf 28, 0x4f2b20
  04f2b1c  mr 0, 11
  04f2b20  lhz 11, 12(9)
  04f2b24  mr 10, 0
  04f2b28  cmplw 7, 11, 0
  04f2b2c  bf 28, 0x4f2b34
  04f2b30  mr 10, 11
  04f2b34  lhz 0, 14(9)
  04f2b38  cmplw 7, 10, 0
  04f2b3c  bt 29, 0x4f2b44
  04f2b40  mr 0, 10
  04f2b44  cmplw 7, 0, 5
  04f2b48  bt 28, 0x4f2ac4
  04f2b4c  lwz 7, 0(31)
  04f2b50  extsw 9, 30
  04f2b54  extsw 0, 28
  04f2b58  clrldi 11, 7, 32
  04f2b5c  li 8, 0
  04f2b60  add 9, 11, 9
  04f2b64  add 11, 11, 0
  04f2b68  lhz 6, 64(9)
  04f2b6c  lwz 0, 48(11)
  04f2b70  slwi 9, 6, 3
  04f2b74  add 9, 9, 0
  04f2b78  clrldi 11, 9, 32
  04f2b7c  addi 10, 9, 10
  04f2b80  lhz 0, 2(11)
  04f2b84  cmpwi 7, 0, 0
  04f2b88  bt 30, 0x4f2bac
  04f2b8c  nop
  04f2b90  clrldi 9, 10, 32
  04f2b94  addi 8, 8, 1
  04f2b98  addi 10, 10, 8
  04f2b9c  lhz 0, 0(9)
  04f2ba0  cmpwi 7, 0, 0
  04f2ba4  bf 30, 0x4f2b90
  04f2ba8  add 6, 6, 8
  04f2bac  cmpw 7, 5, 6
  04f2bb0  bt 30, 0x4f2bbc
  04f2bb4  mr 5, 6
  04f2bb8  b 0x4f2ac8
  04f2bbc  lwsync
  04f2bc0  lwz 11, 0(31)
  04f2bc4  addi 0, 1, 112
  04f2bc8  clrldi 29, 0, 32
  04f2bcc  lwz 9, 8(11)
  04f2bd0  cmpw 7, 9, 27
  04f2bd4  bt 30, 0x4f2c9c
  04f2bd8  clrldi 3, 24, 32
  04f2bdc  clrldi 4, 25, 32
  04f2be0  clrldi 5, 27, 32
  04f2be4  bl 0x4f2d88
  04f2be8  nop
  04f2bec  lwz 9, 0(26)
  04f2bf0  extsw 0, 28
  04f2bf4  clrldi 11, 9, 32
  04f2bf8  li 10, 0
  04f2bfc  add 11, 11, 0
  04f2c00  add 9, 30, 9
  04f2c04  addi 9, 9, 64
  04f2c08  stw 10, 16(11)
  04f2c0c  stw 10, 48(11)
  04f2c10  stw 10, 32(11)
  04f2c14  lwsync
  04f2c18  clrldi 9, 9, 32
  04f2c1c  li 0, -1
  04f2c20  sth 0, 14(9)
  04f2c24  sth 0, 4(9)
  04f2c28  sth 0, 6(9)
  04f2c2c  sth 0, 8(9)
  04f2c30  sth 0, 10(9)
  04f2c34  sth 0, 12(9)
  04f2c38  lwsync
  04f2c3c  sth 10, 2(9)
  04f2c40  sth 10, 0(9)
  04f2c44  lwsync
  04f2c48  ld 0, 448(1)
  04f2c4c  ld 24, 368(1)
  04f2c50  ld 25, 376(1)
  04f2c54  mtlr 0
  04f2c58  ld 26, 384(1)
  04f2c5c  ld 27, 392(1)
  04f2c60  ld 28, 400(1)
  04f2c64  ld 29, 408(1)
  04f2c68  ld 30, 416(1)
  04f2c6c  ld 31, 424(1)
  04f2c70  addi 1, 1, 432
  04f2c74  blr
  04f2c78  lwsync
  04f2c7c  lwz 3, 4(31)
  04f2c80  mr 5, 29
  04f2c84  lwz 4, 8(31)
  04f2c88  bl 0x64fae4
  04f2c8c  ld 2, 40(1)
  04f2c90  lbz 0, 144(1)
  04f2c94  cmpwi 7, 0, 0
  04f2c98  bt 30, 0x4f2bd8
  04f2c9c  lwz 0, 4(31)
  04f2ca0  cmpwi 7, 0, 0
  04f2ca4  bt 30, 0x4f2bd8
  04f2ca8  lwsync
  04f2cac  lwz 3, 4(31)
  04f2cb0  mr 5, 29
  04f2cb4  lwz 4, 8(31)
  04f2cb8  bl 0x64fae4
  04f2cbc  ld 2, 40(1)
  04f2cc0  lbz 0, 147(1)
  04f2cc4  cmpwi 7, 0, 0
  04f2cc8  bf 30, 0x4f2c9c
  04f2ccc  b 0x4f2c78

FUN_004f2cd0:   # 0x4f2cd0, 0xc bytes
  04f2cd0  li 0, 0
  04f2cd4  stw 0, 0(3)
  04f2cd8  blr

idol_draw::CmdQueue_ZeroCacheLines:   # 0x4f2cdc, 0x38 bytes
  04f2cdc  lwz 9, 4(3)
  04f2ce0  li 0, 0
  04f2ce4  rldicl 9, 9, 60, 39
  04f2ce8  stw 0, 8(3)
  04f2cec  cmpwi 7, 9, 0
  04f2cf0  lwz 3, 0(3)
  04f2cf4  bclr 12, 30
  04f2cf8  clrldi 9, 9, 32
  04f2cfc  mtctr 9
  04f2d00  clrldi 9, 3, 32
  04f2d04  dcbz 0, 9
  04f2d08  addi 3, 3, 128
  04f2d0c  bdnz 0x4f2d00
  04f2d10  blr

idol_draw::RingBuffer_PushEntry:   # 0x4f2d14, 0x34 bytes
  04f2d14  mr 11, 3
  04f2d18  lwsync
  04f2d1c  lwz 3, 8(3)
  04f2d20  lwz 0, 0(11)
  04f2d24  slwi 9, 3, 3
  04f2d28  addi 3, 3, 1
  04f2d2c  add 9, 9, 0
  04f2d30  stw 3, 8(11)
  04f2d34  clrldi 9, 9, 32
  04f2d38  std 4, 0(9)
  04f2d3c  lwsync
  04f2d40  clrldi 3, 3, 32
  04f2d44  blr

FUN_004f2d48:   # 0x4f2d48, 0x34 bytes
  04f2d48  mr 11, 3
  04f2d4c  lwsync
  04f2d50  lwz 3, 8(3)
  04f2d54  lwz 0, 0(11)
  04f2d58  slwi 9, 3, 3
  04f2d5c  addi 3, 3, 1
  04f2d60  add 9, 9, 0
  04f2d64  stw 3, 8(11)
  04f2d68  clrldi 9, 9, 32
  04f2d6c  std 4, 0(9)
  04f2d70  lwsync
  04f2d74  clrldi 3, 3, 32
  04f2d78  blr

FUN_004f2d7c:   # 0x4f2d7c, 0xc bytes
  04f2d7c  stw 5, 16(3)
  04f2d80  stw 4, 12(3)
  04f2d84  blr

FUN_004f2d88:   # 0x4f2d88, 0x14 bytes
  04f2d88  li 0, -1
  04f2d8c  li 9, 0
  04f2d90  stw 0, 16(3)
  04f2d94  stw 9, 12(3)
  04f2d98  blr

FUN_004f2d9c:   # 0x4f2d9c, 0xc bytes
  04f2d9c  li 0, 0
  04f2da0  stw 0, 0(3)
  04f2da4  blr

FUN_004f2da8:   # 0x4f2da8, 0x34 bytes
  04f2da8  lwz 0, 4(3)
  04f2dac  lwz 3, 0(3)
  04f2db0  rldicl 0, 0, 60, 39
  04f2db4  cmpwi 7, 0, 0
  04f2db8  bclr 12, 30
  04f2dbc  clrldi 0, 0, 32
  04f2dc0  mtctr 0
  04f2dc4  nop
  04f2dc8  clrldi 9, 3, 32
  04f2dcc  dcbz 0, 9
  04f2dd0  addi 3, 3, 128
  04f2dd4  bdnz 0x4f2dc8
  04f2dd8  blr

FUN_004f2ddc:   # 0x4f2ddc, 0x4c bytes
  04f2ddc  lwz 9, 0(3)
  04f2de0  slwi 0, 5, 3
  04f2de4  add 0, 0, 9
  04f2de8  clrldi 9, 0, 32
  04f2dec  nop
  04f2df0  ldarx 0, 0, 9
  04f2df4  cmpdi 7, 0, 0
  04f2df8  bf 30, 0x4f2e1c
  04f2dfc  stdcx. 4, 0, 9
  04f2e00  mfocrf 0, 128
  04f2e04  rlwinm 0, 0, 0, 2, 2
  04f2e08  cmpdi 7, 0, 0
  04f2e0c  bt 30, 0x4f2df0
  04f2e10  addi 0, 5, 1
  04f2e14  clrldi 3, 0, 32
  04f2e18  blr
  04f2e1c  li 0, -1
  04f2e20  clrldi 3, 0, 32
  04f2e24  blr

FUN_004f2e28:   # 0x4f2e28, 0x48 bytes
  04f2e28  lwz 9, 0(3)
  04f2e2c  slwi 0, 5, 3
  04f2e30  add 0, 0, 9
  04f2e34  clrldi 9, 0, 32
  04f2e38  ldarx 0, 0, 9
  04f2e3c  cmpdi 7, 0, 0
  04f2e40  bf 30, 0x4f2e64
  04f2e44  stdcx. 4, 0, 9
  04f2e48  mfocrf 0, 128
  04f2e4c  rlwinm 0, 0, 0, 2, 2
  04f2e50  cmpdi 7, 0, 0
  04f2e54  bt 30, 0x4f2e38
  04f2e58  addi 0, 5, 1
  04f2e5c  clrldi 3, 0, 32
  04f2e60  blr
  04f2e64  li 0, -1
  04f2e68  clrldi 3, 0, 32
  04f2e6c  blr

FUN_004f2e70:   # 0x4f2e70, 0x48 bytes
  04f2e70  lwz 11, 0(3)
  04f2e74  slwi 0, 4, 3
  04f2e78  mr 3, 4
  04f2e7c  add 11, 11, 0
  04f2e80  clrldi 9, 11, 32
  04f2e84  lhz 0, 2(9)
  04f2e88  cmpwi 7, 0, 0
  04f2e8c  bt 30, 0x4f2eb0
  04f2e90  addi 11, 11, 10
  04f2e94  nop
  04f2e98  clrldi 9, 11, 32
  04f2e9c  addi 3, 3, 1
  04f2ea0  addi 11, 11, 8
  04f2ea4  lhz 0, 0(9)
  04f2ea8  cmpwi 7, 0, 0
  04f2eac  bf 30, 0x4f2e98
  04f2eb0  clrldi 3, 3, 32
  04f2eb4  blr

FUN_004f2eb8:   # 0x4f2eb8, 0xc bytes
  04f2eb8  stw 5, 12(3)
  04f2ebc  stw 4, 8(3)
  04f2ec0  blr

FUN_004f2ec4:   # 0x4f2ec4, 0x14 bytes
  04f2ec4  li 0, -1
  04f2ec8  li 9, 0
  04f2ecc  stw 0, 12(3)
  04f2ed0  stw 9, 8(3)
  04f2ed4  blr

FUN_004f2ed8:   # 0x4f2ed8, 0xb0 bytes
  04f2ed8  stdu 1, -128(1)
  04f2edc  mflr 0
  04f2ee0  std 31, 120(1)
  04f2ee4  std 0, 144(1)
  04f2ee8  mr 10, 3
  04f2eec  lwsync
  04f2ef0  slwi 11, 5, 3
  04f2ef4  mr 3, 5
  04f2ef8  b 0x4f2f00
  04f2efc  addi 11, 11, 8
  04f2f00  lwz 0, 0(10)
  04f2f04  addi 3, 3, 1
  04f2f08  add 0, 11, 0
  04f2f0c  clrldi 9, 0, 32
  04f2f10  ldarx 0, 0, 9
  04f2f14  cmpdi 7, 0, 0
  04f2f18  bf 30, 0x4f2efc
  04f2f1c  stdcx. 4, 0, 9
  04f2f20  mfocrf 0, 128
  04f2f24  rlwinm 0, 0, 0, 2, 2
  04f2f28  cmpdi 7, 0, 0
  04f2f2c  bt 30, 0x4f2f10
  04f2f30  lwz 0, 8(10)
  04f2f34  cmpwi 7, 0, 0
  04f2f38  bt 30, 0x4f2f6c
  04f2f3c  clrldi 31, 3, 32
  04f2f40  lwz 4, 12(10)
  04f2f44  clrldi 3, 0, 32
  04f2f48  mr 5, 31
  04f2f4c  bl 0x4f179c
  04f2f50  nop
  04f2f54  ld 0, 144(1)
  04f2f58  mr 3, 31
  04f2f5c  mtlr 0
  04f2f60  ld 31, 120(1)
  04f2f64  addi 1, 1, 128
  04f2f68  blr
  04f2f6c  clrldi 31, 3, 32
  04f2f70  ld 0, 144(1)
  04f2f74  mr 3, 31
  04f2f78  mtlr 0
  04f2f7c  ld 31, 120(1)
  04f2f80  addi 1, 1, 128
  04f2f84  blr

FUN_004f2f88:   # 0x4f2f88, 0x54 bytes
  04f2f88  li 0, 0
  04f2f8c  clrlwi 5, 5, 20
  04f2f90  rldimi 0, 4, 0, 32
  04f2f94  li 9, 0
  04f2f98  rldimi 0, 5, 48, 4
  04f2f9c  mr 11, 3
  04f2fa0  rldimi 0, 9, 60, 0
  04f2fa4  li 9, 1
  04f2fa8  rldimi 0, 9, 32, 16
  04f2fac  lwsync
  04f2fb0  lwz 3, 8(3)
  04f2fb4  lwz 10, 0(11)
  04f2fb8  slwi 9, 3, 3
  04f2fbc  addi 3, 3, 1
  04f2fc0  add 9, 9, 10
  04f2fc4  stw 3, 8(11)
  04f2fc8  clrldi 9, 9, 32
  04f2fcc  std 0, 0(9)
  04f2fd0  lwsync
  04f2fd4  clrldi 3, 3, 32
  04f2fd8  blr

FUN_004f2fdc:   # 0x4f2fdc, 0x54 bytes
  04f2fdc  addi 4, 4, 12
  04f2fe0  li 0, 0
  04f2fe4  li 9, 0
  04f2fe8  rldimi 0, 4, 0, 32
  04f2fec  mr 11, 3
  04f2ff0  rldimi 0, 9, 48, 4
  04f2ff4  rldimi 0, 9, 60, 0
  04f2ff8  li 9, 5
  04f2ffc  rldimi 0, 9, 32, 16
  04f3000  lwsync
  04f3004  lwz 3, 8(3)
  04f3008  lwz 10, 0(11)
  04f300c  slwi 9, 3, 3
  04f3010  addi 3, 3, 1
  04f3014  add 9, 9, 10
  04f3018  stw 3, 8(11)
  04f301c  clrldi 9, 9, 32
  04f3020  std 0, 0(9)
  04f3024  lwsync
  04f3028  clrldi 3, 3, 32
  04f302c  blr

FUN_004f3030:   # 0x4f3030, 0x50 bytes
  04f3030  li 0, 0
  04f3034  li 9, 0
  04f3038  rldimi 0, 4, 0, 32
  04f303c  mr 11, 3
  04f3040  rldimi 0, 9, 48, 4
  04f3044  rldimi 0, 9, 60, 0
  04f3048  li 9, 2
  04f304c  rldimi 0, 9, 32, 16
  04f3050  lwsync
  04f3054  lwz 3, 8(3)
  04f3058  lwz 10, 0(11)
  04f305c  slwi 9, 3, 3
  04f3060  addi 3, 3, 1
  04f3064  add 9, 9, 10
  04f3068  stw 3, 8(11)
  04f306c  clrldi 9, 9, 32
  04f3070  std 0, 0(9)
  04f3074  lwsync
  04f3078  clrldi 3, 3, 32
  04f307c  blr

FUN_004f3080:   # 0x4f3080, 0x50 bytes
  04f3080  li 0, 0
  04f3084  clrlwi 5, 5, 20
  04f3088  rldimi 0, 4, 0, 32
  04f308c  li 9, 1
  04f3090  rldimi 0, 5, 48, 4
  04f3094  mr 11, 3
  04f3098  rldimi 0, 9, 60, 0
  04f309c  rldimi 0, 9, 32, 16
  04f30a0  lwsync
  04f30a4  lwz 3, 8(3)
  04f30a8  lwz 10, 0(11)
  04f30ac  slwi 9, 3, 3
  04f30b0  addi 3, 3, 1
  04f30b4  add 9, 9, 10
  04f30b8  stw 3, 8(11)
  04f30bc  clrldi 9, 9, 32
  04f30c0  std 0, 0(9)
  04f30c4  lwsync
  04f30c8  clrldi 3, 3, 32
  04f30cc  blr

FUN_004f30d0:   # 0x4f30d0, 0x3c bytes
  04f30d0  li 0, 1
  04f30d4  mr 11, 3
  04f30d8  rldimi 4, 0, 60, 0
  04f30dc  lwsync
  04f30e0  lwz 3, 8(3)
  04f30e4  lwz 0, 0(11)
  04f30e8  slwi 9, 3, 3
  04f30ec  addi 3, 3, 1
  04f30f0  add 9, 9, 0
  04f30f4  stw 3, 8(11)
  04f30f8  clrldi 9, 9, 32
  04f30fc  std 4, 0(9)
  04f3100  lwsync
  04f3104  clrldi 3, 3, 32
  04f3108  blr

FUN_004f310c:   # 0x4f310c, 0x50 bytes
  04f310c  li 0, 0
  04f3110  li 9, 0
  04f3114  rldimi 0, 4, 0, 32
  04f3118  mr 11, 3
  04f311c  rldimi 0, 9, 48, 4
  04f3120  rldimi 0, 9, 60, 0
  04f3124  li 9, 4
  04f3128  rldimi 0, 9, 32, 16
  04f312c  lwsync
  04f3130  lwz 3, 8(3)
  04f3134  lwz 10, 0(11)
  04f3138  slwi 9, 3, 3
  04f313c  addi 3, 3, 1
  04f3140  add 9, 9, 10
  04f3144  stw 3, 8(11)
  04f3148  clrldi 9, 9, 32
  04f314c  std 0, 0(9)
  04f3150  lwsync
  04f3154  clrldi 3, 3, 32
  04f3158  blr

FUN_004f315c:   # 0x4f315c, 0x50 bytes
  04f315c  li 9, 0
  04f3160  li 0, 0
  04f3164  mr 11, 3
  04f3168  rldimi 0, 9, 0, 32
  04f316c  rldimi 0, 9, 48, 4
  04f3170  rldimi 0, 9, 60, 0
  04f3174  li 9, 3
  04f3178  rldimi 0, 9, 32, 16
  04f317c  lwsync
  04f3180  lwz 3, 8(3)
  04f3184  lwz 10, 0(11)
  04f3188  slwi 9, 3, 3
  04f318c  addi 3, 3, 1
  04f3190  add 9, 9, 10
  04f3194  stw 3, 8(11)
  04f3198  clrldi 9, 9, 32
  04f319c  std 0, 0(9)
  04f31a0  lwsync
  04f31a4  clrldi 3, 3, 32
  04f31a8  blr

FUN_004f31ac:   # 0x4f31ac, 0x6c bytes
  04f31ac  li 11, 0
  04f31b0  lwz 9, 0(3)
  04f31b4  clrlwi 5, 5, 20
  04f31b8  rldimi 11, 4, 0, 32
  04f31bc  slwi 0, 6, 3
  04f31c0  rldimi 11, 5, 48, 4
  04f31c4  add 0, 0, 9
  04f31c8  li 10, 0
  04f31cc  clrldi 9, 0, 32
  04f31d0  rldimi 11, 10, 60, 0
  04f31d4  li 0, 1
  04f31d8  rldimi 11, 0, 32, 16
  04f31dc  nop
  04f31e0  ldarx 0, 0, 9
  04f31e4  cmpdi 7, 0, 0
  04f31e8  bf 30, 0x4f320c
  04f31ec  stdcx. 11, 0, 9
  04f31f0  mfocrf 0, 128
  04f31f4  rlwinm 0, 0, 0, 2, 2
  04f31f8  cmpdi 7, 0, 0
  04f31fc  bt 30, 0x4f31e0
  04f3200  addi 0, 6, 1
  04f3204  clrldi 3, 0, 32
  04f3208  blr
  04f320c  li 0, -1
  04f3210  clrldi 3, 0, 32
  04f3214  blr

FUN_004f3218:   # 0x4f3218, 0x68 bytes
  04f3218  addi 4, 4, 12
  04f321c  lwz 11, 0(3)
  04f3220  li 10, 0
  04f3224  li 9, 0
  04f3228  rldimi 10, 4, 0, 32
  04f322c  slwi 0, 5, 3
  04f3230  rldimi 10, 9, 48, 4
  04f3234  add 0, 0, 11
  04f3238  rldimi 10, 9, 60, 0
  04f323c  clrldi 9, 0, 32
  04f3240  li 0, 5
  04f3244  rldimi 10, 0, 32, 16
  04f3248  ldarx 0, 0, 9
  04f324c  cmpdi 7, 0, 0
  04f3250  bf 30, 0x4f3274
  04f3254  stdcx. 10, 0, 9
  04f3258  mfocrf 0, 128
  04f325c  rlwinm 0, 0, 0, 2, 2
  04f3260  cmpdi 7, 0, 0
  04f3264  bt 30, 0x4f3248
  04f3268  addi 0, 5, 1
  04f326c  clrldi 3, 0, 32
  04f3270  blr
  04f3274  li 0, -1
  04f3278  clrldi 3, 0, 32
  04f327c  blr

FUN_004f3280:   # 0x4f3280, 0x68 bytes
  04f3280  li 10, 0
  04f3284  lwz 11, 0(3)
  04f3288  li 0, 0
  04f328c  rldimi 10, 4, 0, 32
  04f3290  slwi 9, 5, 3
  04f3294  rldimi 10, 0, 48, 4
  04f3298  add 9, 9, 11
  04f329c  rldimi 10, 0, 60, 0
  04f32a0  li 0, 2
  04f32a4  clrldi 9, 9, 32
  04f32a8  rldimi 10, 0, 32, 16
  04f32ac  nop
  04f32b0  ldarx 0, 0, 9
  04f32b4  cmpdi 7, 0, 0
  04f32b8  bf 30, 0x4f32dc
  04f32bc  stdcx. 10, 0, 9
  04f32c0  mfocrf 0, 128
  04f32c4  rlwinm 0, 0, 0, 2, 2
  04f32c8  cmpdi 7, 0, 0
  04f32cc  bt 30, 0x4f32b0
  04f32d0  addi 3, 5, 1
  04f32d4  clrldi 3, 3, 32
  04f32d8  blr
  04f32dc  li 3, -1
  04f32e0  clrldi 3, 3, 32
  04f32e4  blr

FUN_004f32e8:   # 0x4f32e8, 0x68 bytes
  04f32e8  li 10, 0
  04f32ec  lwz 11, 0(3)
  04f32f0  li 0, 0
  04f32f4  rldimi 10, 4, 0, 32
  04f32f8  slwi 9, 5, 3
  04f32fc  rldimi 10, 0, 48, 4
  04f3300  add 9, 9, 11
  04f3304  rldimi 10, 0, 60, 0
  04f3308  li 0, 4
  04f330c  clrldi 9, 9, 32
  04f3310  rldimi 10, 0, 32, 16
  04f3314  nop
  04f3318  ldarx 0, 0, 9
  04f331c  cmpdi 7, 0, 0
  04f3320  bf 30, 0x4f3344
  04f3324  stdcx. 10, 0, 9
  04f3328  mfocrf 0, 128
  04f332c  rlwinm 0, 0, 0, 2, 2
  04f3330  cmpdi 7, 0, 0
  04f3334  bt 30, 0x4f3318
  04f3338  addi 3, 5, 1
  04f333c  clrldi 3, 3, 32
  04f3340  blr
  04f3344  li 3, -1
  04f3348  clrldi 3, 3, 32
  04f334c  blr

FUN_004f3350:   # 0x4f3350, 0x68 bytes
  04f3350  li 0, 0
  04f3354  lwz 11, 0(3)
  04f3358  li 10, 0
  04f335c  slwi 9, 4, 3
  04f3360  rldimi 10, 0, 0, 32
  04f3364  add 9, 9, 11
  04f3368  rldimi 10, 0, 48, 4
  04f336c  clrldi 9, 9, 32
  04f3370  rldimi 10, 0, 60, 0
  04f3374  li 0, 3
  04f3378  rldimi 10, 0, 32, 16
  04f337c  nop
  04f3380  ldarx 0, 0, 9
  04f3384  cmpdi 7, 0, 0
  04f3388  bf 30, 0x4f33ac
  04f338c  stdcx. 10, 0, 9
  04f3390  mfocrf 0, 128
  04f3394  rlwinm 0, 0, 0, 2, 2
  04f3398  cmpdi 7, 0, 0
  04f339c  bt 30, 0x4f3380
  04f33a0  addi 3, 4, 1
  04f33a4  clrldi 3, 3, 32
  04f33a8  blr
  04f33ac  li 3, -1
  04f33b0  clrldi 3, 3, 32
  04f33b4  blr

FUN_004f33b8:   # 0x4f33b8, 0x40 bytes
  04f33b8  srwi 5, 5, 3
  04f33bc  li 0, -1
  04f33c0  srwi 11, 5, 4
  04f33c4  li 9, 0
  04f33c8  cmpwi 7, 11, 0
  04f33cc  stw 0, 12(3)
  04f33d0  stw 9, 8(3)
  04f33d4  stw 4, 0(3)
  04f33d8  stw 5, 4(3)
  04f33dc  bclr 12, 30
  04f33e0  clrldi 11, 11, 32
  04f33e4  mtctr 11
  04f33e8  dcbz 0, 4
  04f33ec  addi 4, 4, 128
  04f33f0  bdnz 0x4f33e8
  04f33f4  blr

FUN_004f33f8:   # 0x4f33f8, 0x48 bytes
  04f33f8  srwi 5, 5, 3
  04f33fc  li 9, 0
  04f3400  srwi 11, 5, 4
  04f3404  li 0, -1
  04f3408  cmpwi 7, 11, 0
  04f340c  stw 9, 8(3)
  04f3410  stw 0, 16(3)
  04f3414  stw 4, 0(3)
  04f3418  stw 5, 4(3)
  04f341c  stw 9, 12(3)
  04f3420  bclr 12, 30
  04f3424  clrldi 11, 11, 32
  04f3428  mtctr 11
  04f342c  nop
  04f3430  dcbz 0, 4
  04f3434  addi 4, 4, 128
  04f3438  bdnz 0x4f3430
  04f343c  blr

FUN_004f3440:   # 0x4f3440, 0xc8 bytes
  04f3440  stdu 1, -128(1)
  04f3444  mflr 0
  04f3448  li 8, 0
  04f344c  std 0, 144(1)
  04f3450  li 0, 0
  04f3454  std 31, 120(1)
  04f3458  rldimi 8, 0, 0, 32
  04f345c  mr 10, 3
  04f3460  rldimi 8, 0, 48, 4
  04f3464  rldimi 8, 0, 60, 0
  04f3468  li 0, 3
  04f346c  rldimi 8, 0, 32, 16
  04f3470  lwsync
  04f3474  slwi 11, 4, 3
  04f3478  b 0x4f3480
  04f347c  addi 11, 11, 8
  04f3480  lwz 0, 0(10)
  04f3484  addi 4, 4, 1
  04f3488  add 0, 11, 0
  04f348c  clrldi 9, 0, 32
  04f3490  ldarx 0, 0, 9
  04f3494  cmpdi 7, 0, 0
  04f3498  bf 30, 0x4f347c
  04f349c  stdcx. 8, 0, 9
  04f34a0  mfocrf 0, 128
  04f34a4  rlwinm 0, 0, 0, 2, 2
  04f34a8  cmpdi 7, 0, 0
  04f34ac  bt 30, 0x4f3490
  04f34b0  lwz 3, 8(10)
  04f34b4  cmpwi 7, 3, 0
  04f34b8  bt 30, 0x4f34ec
  04f34bc  clrldi 31, 4, 32
  04f34c0  lwz 4, 12(10)
  04f34c4  clrldi 3, 3, 32
  04f34c8  mr 5, 31
  04f34cc  bl 0x4f179c
  04f34d0  nop
  04f34d4  ld 0, 144(1)
  04f34d8  mr 3, 31
  04f34dc  mtlr 0
  04f34e0  ld 31, 120(1)
  04f34e4  addi 1, 1, 128
  04f34e8  blr
  04f34ec  clrldi 31, 4, 32
  04f34f0  ld 0, 144(1)
  04f34f4  mr 3, 31
  04f34f8  mtlr 0
  04f34fc  ld 31, 120(1)
  04f3500  addi 1, 1, 128
  04f3504  blr

FUN_004f3508:   # 0x4f3508, 0xac bytes
  04f3508  stdu 1, -128(1)
  04f350c  mflr 0
  04f3510  std 31, 120(1)
  04f3514  std 0, 144(1)
  04f3518  mr 10, 3
  04f351c  lwsync
  04f3520  slwi 11, 5, 3
  04f3524  b 0x4f352c
  04f3528  addi 11, 11, 8
  04f352c  lwz 0, 0(10)
  04f3530  addi 5, 5, 1
  04f3534  add 0, 11, 0
  04f3538  clrldi 9, 0, 32
  04f353c  ldarx 0, 0, 9
  04f3540  cmpdi 7, 0, 0
  04f3544  bf 30, 0x4f3528
  04f3548  stdcx. 4, 0, 9
  04f354c  mfocrf 0, 128
  04f3550  rlwinm 0, 0, 0, 2, 2
  04f3554  cmpdi 7, 0, 0
  04f3558  bt 30, 0x4f353c
  04f355c  lwz 3, 8(10)
  04f3560  cmpwi 7, 3, 0
  04f3564  bt 30, 0x4f3598
  04f3568  clrldi 31, 5, 32
  04f356c  lwz 4, 12(10)
  04f3570  clrldi 3, 3, 32
  04f3574  mr 5, 31
  04f3578  bl 0x4f179c
  04f357c  nop
  04f3580  ld 0, 144(1)
  04f3584  mr 3, 31
  04f3588  mtlr 0
  04f358c  ld 31, 120(1)
  04f3590  addi 1, 1, 128
  04f3594  blr
  04f3598  clrldi 31, 5, 32
  04f359c  ld 0, 144(1)
  04f35a0  mr 3, 31
  04f35a4  mtlr 0
  04f35a8  ld 31, 120(1)
  04f35ac  addi 1, 1, 128
  04f35b0  blr

FUN_004f35b4:   # 0x4f35b4, 0xc8 bytes
  04f35b4  li 8, 0
  04f35b8  mflr 0
  04f35bc  stdu 1, -128(1)
  04f35c0  std 0, 144(1)
  04f35c4  rldimi 8, 4, 0, 32
  04f35c8  li 0, 0
  04f35cc  std 31, 120(1)
  04f35d0  rldimi 8, 0, 48, 4
  04f35d4  mr 10, 3
  04f35d8  rldimi 8, 0, 60, 0
  04f35dc  li 0, 4
  04f35e0  rldimi 8, 0, 32, 16
  04f35e4  lwsync
  04f35e8  slwi 11, 5, 3
  04f35ec  b 0x4f35f4
  04f35f0  addi 11, 11, 8
  04f35f4  lwz 0, 0(10)
  04f35f8  addi 5, 5, 1
  04f35fc  add 0, 11, 0
  04f3600  clrldi 9, 0, 32
  04f3604  ldarx 0, 0, 9
  04f3608  cmpdi 7, 0, 0
  04f360c  bf 30, 0x4f35f0
  04f3610  stdcx. 8, 0, 9
  04f3614  mfocrf 0, 128
  04f3618  rlwinm 0, 0, 0, 2, 2
  04f361c  cmpdi 7, 0, 0
  04f3620  bt 30, 0x4f3604
  04f3624  lwz 3, 8(10)
  04f3628  cmpwi 7, 3, 0
  04f362c  bt 30, 0x4f3660
  04f3630  clrldi 31, 5, 32
  04f3634  lwz 4, 12(10)
  04f3638  clrldi 3, 3, 32
  04f363c  mr 5, 31
  04f3640  bl 0x4f179c
  04f3644  nop
  04f3648  ld 0, 144(1)
  04f364c  mr 3, 31
  04f3650  mtlr 0
  04f3654  ld 31, 120(1)
  04f3658  addi 1, 1, 128
  04f365c  blr
  04f3660  clrldi 31, 5, 32
  04f3664  ld 0, 144(1)
  04f3668  mr 3, 31
  04f366c  mtlr 0
  04f3670  ld 31, 120(1)
  04f3674  addi 1, 1, 128
  04f3678  blr

FUN_004f367c:   # 0x4f367c, 0xcc bytes
  04f367c  addi 4, 4, 12
  04f3680  mflr 0
  04f3684  li 8, 0
  04f3688  stdu 1, -128(1)
  04f368c  std 0, 144(1)
  04f3690  rldimi 8, 4, 0, 32
  04f3694  li 0, 0
  04f3698  std 31, 120(1)
  04f369c  rldimi 8, 0, 48, 4
  04f36a0  mr 10, 3
  04f36a4  rldimi 8, 0, 60, 0
  04f36a8  li 0, 5
  04f36ac  rldimi 8, 0, 32, 16
  04f36b0  lwsync
  04f36b4  slwi 11, 5, 3
  04f36b8  b 0x4f36c0
  04f36bc  addi 11, 11, 8
  04f36c0  lwz 0, 0(10)
  04f36c4  addi 5, 5, 1
  04f36c8  add 0, 11, 0
  04f36cc  clrldi 9, 0, 32
  04f36d0  ldarx 0, 0, 9
  04f36d4  cmpdi 7, 0, 0
  04f36d8  bf 30, 0x4f36bc
  04f36dc  stdcx. 8, 0, 9
  04f36e0  mfocrf 0, 128
  04f36e4  rlwinm 0, 0, 0, 2, 2
  04f36e8  cmpdi 7, 0, 0
  04f36ec  bt 30, 0x4f36d0
  04f36f0  lwz 3, 8(10)
  04f36f4  cmpwi 7, 3, 0
  04f36f8  bt 30, 0x4f372c
  04f36fc  clrldi 31, 5, 32
  04f3700  lwz 4, 12(10)
  04f3704  clrldi 3, 3, 32
  04f3708  mr 5, 31
  04f370c  bl 0x4f179c
  04f3710  nop
  04f3714  ld 0, 144(1)
  04f3718  mr 3, 31
  04f371c  mtlr 0
  04f3720  ld 31, 120(1)
  04f3724  addi 1, 1, 128
  04f3728  blr
  04f372c  clrldi 31, 5, 32
  04f3730  ld 0, 144(1)
  04f3734  mr 3, 31
  04f3738  mtlr 0
  04f373c  ld 31, 120(1)
  04f3740  addi 1, 1, 128
  04f3744  blr

FUN_004f3748:   # 0x4f3748, 0xc8 bytes
  04f3748  li 8, 0
  04f374c  mflr 0
  04f3750  stdu 1, -128(1)
  04f3754  std 0, 144(1)
  04f3758  rldimi 8, 4, 0, 32
  04f375c  li 0, 0
  04f3760  std 31, 120(1)
  04f3764  rldimi 8, 0, 48, 4
  04f3768  mr 10, 3
  04f376c  rldimi 8, 0, 60, 0
  04f3770  li 0, 2
  04f3774  rldimi 8, 0, 32, 16
  04f3778  lwsync
  04f377c  slwi 11, 5, 3
  04f3780  b 0x4f3788
  04f3784  addi 11, 11, 8
  04f3788  lwz 0, 0(10)
  04f378c  addi 5, 5, 1
  04f3790  add 0, 11, 0
  04f3794  clrldi 9, 0, 32
  04f3798  ldarx 0, 0, 9
  04f379c  cmpdi 7, 0, 0
  04f37a0  bf 30, 0x4f3784
  04f37a4  stdcx. 8, 0, 9
  04f37a8  mfocrf 0, 128
  04f37ac  rlwinm 0, 0, 0, 2, 2
  04f37b0  cmpdi 7, 0, 0
  04f37b4  bt 30, 0x4f3798
  04f37b8  lwz 3, 8(10)
  04f37bc  cmpwi 7, 3, 0
  04f37c0  bt 30, 0x4f37f4
  04f37c4  clrldi 31, 5, 32
  04f37c8  lwz 4, 12(10)
  04f37cc  clrldi 3, 3, 32
  04f37d0  mr 5, 31
  04f37d4  bl 0x4f179c
  04f37d8  nop
  04f37dc  ld 0, 144(1)
  04f37e0  mr 3, 31
  04f37e4  mtlr 0
  04f37e8  ld 31, 120(1)
  04f37ec  addi 1, 1, 128
  04f37f0  blr
  04f37f4  clrldi 31, 5, 32
  04f37f8  ld 0, 144(1)
  04f37fc  mr 3, 31
  04f3800  mtlr 0
  04f3804  ld 31, 120(1)
  04f3808  addi 1, 1, 128
  04f380c  blr

FUN_004f3810:   # 0x4f3810, 0xc8 bytes
  04f3810  li 8, 0
  04f3814  mflr 0
  04f3818  clrlwi 5, 5, 20
  04f381c  rldimi 8, 4, 0, 32
  04f3820  stdu 1, -128(1)
  04f3824  std 0, 144(1)
  04f3828  rldimi 8, 5, 48, 4
  04f382c  li 0, 1
  04f3830  std 31, 120(1)
  04f3834  rldimi 8, 0, 60, 0
  04f3838  mr 10, 3
  04f383c  rldimi 8, 0, 32, 16
  04f3840  lwsync
  04f3844  slwi 11, 6, 3
  04f3848  b 0x4f3850
  04f384c  addi 11, 11, 8
  04f3850  lwz 0, 0(10)
  04f3854  addi 6, 6, 1
  04f3858  add 0, 11, 0
  04f385c  clrldi 9, 0, 32
  04f3860  ldarx 0, 0, 9
  04f3864  cmpdi 7, 0, 0
  04f3868  bf 30, 0x4f384c
  04f386c  stdcx. 8, 0, 9
  04f3870  mfocrf 0, 128
  04f3874  rlwinm 0, 0, 0, 2, 2
  04f3878  cmpdi 7, 0, 0
  04f387c  bt 30, 0x4f3860
  04f3880  lwz 3, 8(10)
  04f3884  cmpwi 7, 3, 0
  04f3888  bt 30, 0x4f38bc
  04f388c  clrldi 31, 6, 32
  04f3890  lwz 4, 12(10)
  04f3894  clrldi 3, 3, 32
  04f3898  mr 5, 31
  04f389c  bl 0x4f179c
  04f38a0  nop
  04f38a4  ld 0, 144(1)
  04f38a8  mr 3, 31
  04f38ac  mtlr 0
  04f38b0  ld 31, 120(1)
  04f38b4  addi 1, 1, 128
  04f38b8  blr
  04f38bc  clrldi 31, 6, 32
  04f38c0  ld 0, 144(1)
  04f38c4  mr 3, 31
  04f38c8  mtlr 0
  04f38cc  ld 31, 120(1)
  04f38d0  addi 1, 1, 128
  04f38d4  blr

FUN_004f38d8:   # 0x4f38d8, 0xcc bytes
  04f38d8  li 8, 0
  04f38dc  mflr 0
  04f38e0  clrlwi 5, 5, 20
  04f38e4  rldimi 8, 4, 0, 32
  04f38e8  stdu 1, -128(1)
  04f38ec  std 0, 144(1)
  04f38f0  rldimi 8, 5, 48, 4
  04f38f4  li 0, 0
  04f38f8  std 31, 120(1)
  04f38fc  rldimi 8, 0, 60, 0
  04f3900  li 0, 1
  04f3904  mr 10, 3
  04f3908  rldimi 8, 0, 32, 16
  04f390c  lwsync
  04f3910  slwi 11, 6, 3
  04f3914  b 0x4f391c
  04f3918  addi 11, 11, 8
  04f391c  lwz 0, 0(10)
  04f3920  addi 6, 6, 1
  04f3924  add 0, 11, 0
  04f3928  clrldi 9, 0, 32
  04f392c  ldarx 0, 0, 9
  04f3930  cmpdi 7, 0, 0
  04f3934  bf 30, 0x4f3918
  04f3938  stdcx. 8, 0, 9
  04f393c  mfocrf 0, 128
  04f3940  rlwinm 0, 0, 0, 2, 2
  04f3944  cmpdi 7, 0, 0
  04f3948  bt 30, 0x4f392c
  04f394c  lwz 3, 8(10)
  04f3950  cmpwi 7, 3, 0
  04f3954  bt 30, 0x4f3988
  04f3958  clrldi 31, 6, 32
  04f395c  lwz 4, 12(10)
  04f3960  clrldi 3, 3, 32
  04f3964  mr 5, 31
  04f3968  bl 0x4f179c
  04f396c  nop
  04f3970  ld 0, 144(1)
  04f3974  mr 3, 31
  04f3978  mtlr 0
  04f397c  ld 31, 120(1)
  04f3980  addi 1, 1, 128
  04f3984  blr
  04f3988  clrldi 31, 6, 32
  04f398c  ld 0, 144(1)
  04f3990  mr 3, 31
  04f3994  mtlr 0
  04f3998  ld 31, 120(1)
  04f399c  addi 1, 1, 128
  04f39a0  blr

FUN_004f39a4:   # 0x4f39a4, 0xb4 bytes
  04f39a4  stdu 1, -128(1)
  04f39a8  mflr 0
  04f39ac  std 31, 120(1)
  04f39b0  std 0, 144(1)
  04f39b4  li 0, 1
  04f39b8  mr 10, 3
  04f39bc  rldimi 4, 0, 60, 0
  04f39c0  lwsync
  04f39c4  slwi 11, 5, 3
  04f39c8  b 0x4f39d0
  04f39cc  addi 11, 11, 8
  04f39d0  lwz 0, 0(10)
  04f39d4  addi 5, 5, 1
  04f39d8  add 0, 11, 0
  04f39dc  clrldi 9, 0, 32
  04f39e0  ldarx 0, 0, 9
  04f39e4  cmpdi 7, 0, 0
  04f39e8  bf 30, 0x4f39cc
  04f39ec  stdcx. 4, 0, 9
  04f39f0  mfocrf 0, 128
  04f39f4  rlwinm 0, 0, 0, 2, 2
  04f39f8  cmpdi 7, 0, 0
  04f39fc  bt 30, 0x4f39e0
  04f3a00  lwz 3, 8(10)
  04f3a04  cmpwi 7, 3, 0
  04f3a08  bt 30, 0x4f3a3c
  04f3a0c  clrldi 31, 5, 32
  04f3a10  lwz 4, 12(10)
  04f3a14  clrldi 3, 3, 32
  04f3a18  mr 5, 31
  04f3a1c  bl 0x4f179c
  04f3a20  nop
  04f3a24  ld 0, 144(1)
  04f3a28  mr 3, 31
  04f3a2c  mtlr 0
  04f3a30  ld 31, 120(1)
  04f3a34  addi 1, 1, 128
  04f3a38  blr
  04f3a3c  clrldi 31, 5, 32
  04f3a40  ld 0, 144(1)
  04f3a44  mr 3, 31
  04f3a48  mtlr 0
  04f3a4c  ld 31, 120(1)
  04f3a50  addi 1, 1, 128
  04f3a54  blr

FUN_004f3a58:   # 0x4f3a58, 0x18 bytes
  04f3a58  clrldi 9, 3, 32
  04f3a5c  lwz 0, 40(4)
  04f3a60  mr 3, 9
  04f3a64  stw 4, 4(9)
  04f3a68  sth 0, 0(9)
  04f3a6c  blr

FUN_004f3a70:   # 0x4f3a70, 0x28 bytes
  04f3a70  li 4, 3
  04f3a74  mflr 0
  04f3a78  stdu 1, -112(1)
  04f3a7c  std 0, 128(1)
  04f3a80  bl 0x4f2010
  04f3a84  nop
  04f3a88  ld 0, 128(1)
  04f3a8c  addi 1, 1, 112
  04f3a90  mtlr 0
  04f3a94  blr

FUN_004f3a98:   # 0x4f3a98, 0x28 bytes
  04f3a98  li 4, 3
  04f3a9c  mflr 0
  04f3aa0  stdu 1, -112(1)
  04f3aa4  std 0, 128(1)
  04f3aa8  bl 0x4f2010
  04f3aac  nop
  04f3ab0  ld 0, 128(1)
  04f3ab4  addi 1, 1, 112
  04f3ab8  mtlr 0
  04f3abc  blr

FUN_004f3ac0:   # 0x4f3ac0, 0x28 bytes
  04f3ac0  li 4, 3
  04f3ac4  mflr 0
  04f3ac8  stdu 1, -112(1)
  04f3acc  std 0, 128(1)
  04f3ad0  bl 0x4f2550
  04f3ad4  nop
  04f3ad8  ld 0, 128(1)
  04f3adc  addi 1, 1, 112
  04f3ae0  mtlr 0
  04f3ae4  blr

FUN_004f3ae8:   # 0x4f3ae8, 0x2c bytes
  04f3ae8  li 4, 3
  04f3aec  mflr 0
  04f3af0  stdu 1, -112(1)
  04f3af4  std 0, 128(1)
  04f3af8  bl 0x4f234c
  04f3afc  nop
  04f3b00  ld 0, 128(1)
  04f3b04  clrldi 3, 3, 56
  04f3b08  mtlr 0
  04f3b0c  addi 1, 1, 112
  04f3b10  blr

FUN_004f3b14:   # 0x4f3b14, 0x50 bytes
  04f3b14  stdu 1, -144(1)
  04f3b18  mflr 0
  04f3b1c  std 29, 120(1)
  04f3b20  clrldi 29, 3, 32
  04f3b24  addi 3, 4, 32
  04f3b28  std 28, 112(1)
  04f3b2c  clrldi 3, 3, 32
  04f3b30  std 0, 160(1)
  04f3b34  mr 28, 4
  04f3b38  bl 0x4f315c
  04f3b3c  nop
  04f3b40  ld 0, 160(1)
  04f3b44  sth 3, 0(29)
  04f3b48  stw 28, 4(29)
  04f3b4c  mtlr 0
  04f3b50  mr 3, 29
  04f3b54  ld 28, 112(1)
  04f3b58  ld 29, 120(1)
  04f3b5c  addi 1, 1, 144
  04f3b60  blr

FUN_004f3b64:   # 0x4f3b64, 0x58 bytes
  04f3b64  stdu 1, -144(1)
  04f3b68  mflr 0
  04f3b6c  std 28, 112(1)
  04f3b70  clrldi 28, 3, 32
  04f3b74  addi 3, 4, 32
  04f3b78  std 29, 120(1)
  04f3b7c  clrldi 3, 3, 32
  04f3b80  mr 29, 4
  04f3b84  mr 4, 5
  04f3b88  mr 5, 6
  04f3b8c  std 0, 160(1)
  04f3b90  bl 0x4f3080
  04f3b94  nop
  04f3b98  ld 0, 160(1)
  04f3b9c  sth 3, 0(28)
  04f3ba0  mtlr 0
  04f3ba4  stw 29, 4(28)
  04f3ba8  mr 3, 28
  04f3bac  ld 29, 120(1)
  04f3bb0  ld 28, 112(1)
  04f3bb4  addi 1, 1, 144
  04f3bb8  blr

idol_draw::CmdQueue_Reset:   # 0x4f3bbc, 0x48 bytes
  04f3bbc  stdu 1, -144(1)
  04f3bc0  mflr 0
  04f3bc4  std 29, 120(1)
  04f3bc8  mr 29, 3
  04f3bcc  addi 3, 3, 32
  04f3bd0  std 0, 160(1)
  04f3bd4  clrldi 3, 3, 32
  04f3bd8  bl 0x4f2cdc
  04f3bdc  nop
  04f3be0  clrldi 3, 29, 32
  04f3be4  li 4, 3
  04f3be8  bl 0x4f14c8
  04f3bec  nop
  04f3bf0  ld 0, 160(1)
  04f3bf4  ld 29, 120(1)
  04f3bf8  mtlr 0
  04f3bfc  addi 1, 1, 144
  04f3c00  blr

FUN_004f3c04:   # 0x4f3c04, 0x24 bytes
  04f3c04  stdu 1, -112(1)
  04f3c08  mflr 0
  04f3c0c  std 0, 128(1)
  04f3c10  bl 0x4f13c8
  04f3c14  nop
  04f3c18  ld 0, 128(1)
  04f3c1c  addi 1, 1, 112
  04f3c20  mtlr 0
  04f3c24  blr

FUN_004f3c28:   # 0x4f3c28, 0xa8 bytes
  04f3c28  stdu 1, -128(1)
  04f3c2c  mflr 0
  04f3c30  std 30, 112(1)
  04f3c34  std 0, 144(1)
  04f3c38  clrlwi 0, 4, 31
  04f3c3c  std 31, 120(1)
  04f3c40  cmpwi 7, 0, 0
  04f3c44  mr 30, 4
  04f3c48  mr 31, 3
  04f3c4c  bf 30, 0x4f3c94
  04f3c50  clrldi 3, 31, 32
  04f3c54  clrldi 5, 30, 32
  04f3c58  li 4, 3
  04f3c5c  bl 0x4f17ec
  04f3c60  nop
  04f3c64  srwi 0, 3, 16
  04f3c68  cmpwi 7, 0, 8
  04f3c6c  bf- 30, 0x4f3cb0
  04f3c70  clrlwi 0, 3, 16
  04f3c74  cmpwi 7, 0, 3
  04f3c78  bf- 30, 0x4f3ccc
  04f3c7c  ld 0, 144(1)
  04f3c80  ld 30, 112(1)
  04f3c84  ld 31, 120(1)
  04f3c88  mtlr 0
  04f3c8c  addi 1, 1, 128
  04f3c90  blr
  04f3c94  addi 4, 3, 16
  04f3c98  lwz 5, 0(3)
  04f3c9c  lwz 3, -32644(2)
  04f3ca0  clrldi 4, 4, 32
  04f3ca4  bl 0x4f4df0
  04f3ca8  nop
  04f3cac  b 0x4f3c50
  04f3cb0  lwz 6, -32632(2)
  04f3cb4  li 5, 40
  04f3cb8  lwz 3, -32640(2)
  04f3cbc  lwz 4, -32636(2)
  04f3cc0  bl 0x4f4df0
  04f3cc4  nop
  04f3cc8  trap
  04f3ccc  lwz 6, -32628(2)

FUN_004f3d40:   # 0x4f3d40, 0x58 bytes
  04f3d40  stdu 1, -144(1)
  04f3d44  mflr 0
  04f3d48  std 28, 112(1)
  04f3d4c  std 0, 160(1)
  04f3d50  lwz 9, 0(4)
  04f3d54  clrldi 28, 3, 32
  04f3d58  addi 3, 4, 32
  04f3d5c  std 29, 120(1)
  04f3d60  clrldi 3, 3, 32
  04f3d64  mr 29, 4
  04f3d68  lhz 4, 112(9)
  04f3d6c  bl 0x4f2e70
  04f3d70  nop
  04f3d74  ld 0, 160(1)
  04f3d78  sth 3, 0(28)
  04f3d7c  mtlr 0
  04f3d80  stw 29, 4(28)
  04f3d84  mr 3, 28
  04f3d88  ld 29, 120(1)
  04f3d8c  ld 28, 112(1)
  04f3d90  addi 1, 1, 144
  04f3d94  blr

FUN_004f3d98:   # 0x4f3d98, 0x8c bytes
  04f3d98  stdu 1, -128(1)
  04f3d9c  mflr 0
  04f3da0  std 31, 120(1)
  04f3da4  clrldi 31, 3, 32
  04f3da8  addi 3, 4, 32
  04f3dac  std 30, 112(1)
  04f3db0  clrldi 3, 3, 32
  04f3db4  mr 30, 4
  04f3db8  mr 4, 5
  04f3dbc  mr 5, 6
  04f3dc0  std 0, 144(1)
  04f3dc4  bl 0x4f3280
  04f3dc8  nop
  04f3dcc  cmpwi 7, 3, -1
  04f3dd0  bt 30, 0x4f3df8
  04f3dd4  ld 0, 144(1)
  04f3dd8  sth 3, 0(31)
  04f3ddc  stw 30, 4(31)
  04f3de0  mtlr 0
  04f3de4  mr 3, 31
  04f3de8  ld 30, 112(1)
  04f3dec  ld 31, 120(1)
  04f3df0  addi 1, 1, 128
  04f3df4  blr
  04f3df8  li 0, 0
  04f3dfc  ld 30, 112(1)
  04f3e00  li 9, 0
  04f3e04  sth 0, 0(31)
  04f3e08  ld 0, 144(1)
  04f3e0c  mr 3, 31
  04f3e10  stw 9, 4(31)
  04f3e14  ld 31, 120(1)
  04f3e18  mtlr 0
  04f3e1c  addi 1, 1, 128
  04f3e20  blr

FUN_004f3e24:   # 0x4f3e24, 0x60 bytes
  04f3e24  stdu 1, -144(1)
  04f3e28  mflr 0
  04f3e2c  std 29, 120(1)
  04f3e30  mr 29, 4
  04f3e34  std 0, 160(1)
  04f3e38  std 28, 112(1)
  04f3e3c  clrldi 28, 3, 32
  04f3e40  addi 3, 4, 32
  04f3e44  lwz 9, 0(29)
  04f3e48  mr 4, 5
  04f3e4c  clrldi 3, 3, 32
  04f3e50  mr 5, 6
  04f3e54  lhz 6, 112(9)
  04f3e58  bl 0x4f38d8
  04f3e5c  nop
  04f3e60  ld 0, 160(1)
  04f3e64  sth 3, 0(28)
  04f3e68  mtlr 0
  04f3e6c  stw 29, 4(28)
  04f3e70  mr 3, 28
  04f3e74  ld 29, 120(1)
  04f3e78  ld 28, 112(1)
  04f3e7c  addi 1, 1, 144
  04f3e80  blr

FUN_004f3e84:   # 0x4f3e84, 0x54 bytes
  04f3e84  stdu 1, -144(1)
  04f3e88  mflr 0
  04f3e8c  std 28, 112(1)
  04f3e90  clrldi 28, 3, 32
  04f3e94  addi 3, 4, 32
  04f3e98  std 29, 120(1)
  04f3e9c  clrldi 3, 3, 32
  04f3ea0  mr 29, 4
  04f3ea4  mr 4, 5
  04f3ea8  std 0, 160(1)
  04f3eac  bl 0x4f2fdc
  04f3eb0  nop
  04f3eb4  ld 0, 160(1)
  04f3eb8  sth 3, 0(28)
  04f3ebc  mtlr 0
  04f3ec0  stw 29, 4(28)
  04f3ec4  mr 3, 28
  04f3ec8  ld 29, 120(1)
  04f3ecc  ld 28, 112(1)
  04f3ed0  addi 1, 1, 144
  04f3ed4  blr

FUN_004f3ed8:   # 0x4f3ed8, 0x54 bytes
  04f3ed8  stdu 1, -144(1)
  04f3edc  mflr 0
  04f3ee0  std 28, 112(1)
  04f3ee4  clrldi 28, 3, 32
  04f3ee8  addi 3, 4, 32
  04f3eec  std 29, 120(1)
  04f3ef0  clrldi 3, 3, 32
  04f3ef4  mr 29, 4
  04f3ef8  mr 4, 5
  04f3efc  std 0, 160(1)
  04f3f00  bl 0x4f3030
  04f3f04  nop
  04f3f08  ld 0, 160(1)
  04f3f0c  sth 3, 0(28)
  04f3f10  mtlr 0
  04f3f14  stw 29, 4(28)
  04f3f18  mr 3, 28
  04f3f1c  ld 29, 120(1)
  04f3f20  ld 28, 112(1)
  04f3f24  addi 1, 1, 144
  04f3f28  blr

idol_draw::CmdQueue_PushEntry_Blocking:   # 0x4f3f2c, 0x54 bytes
  04f3f2c  stdu 1, -144(1)
  04f3f30  mflr 0
  04f3f34  std 28, 112(1)
  04f3f38  clrldi 28, 3, 32
  04f3f3c  addi 3, 4, 32
  04f3f40  std 29, 120(1)
  04f3f44  clrldi 3, 3, 32
  04f3f48  mr 29, 4
  04f3f4c  mr 4, 5
  04f3f50  std 0, 160(1)
  04f3f54  bl 0x4f30d0
  04f3f58  nop
  04f3f5c  ld 0, 160(1)
  04f3f60  sth 3, 0(28)
  04f3f64  mtlr 0
  04f3f68  stw 29, 4(28)
  04f3f6c  mr 3, 28
  04f3f70  ld 29, 120(1)
  04f3f74  ld 28, 112(1)
  04f3f78  addi 1, 1, 144
  04f3f7c  blr

idol_draw::CmdQueue_PushEntry:   # 0x4f3f80, 0x54 bytes
  04f3f80  stdu 1, -144(1)
  04f3f84  mflr 0
  04f3f88  std 28, 112(1)
  04f3f8c  clrldi 28, 3, 32
  04f3f90  addi 3, 4, 32
  04f3f94  std 29, 120(1)
  04f3f98  clrldi 3, 3, 32
  04f3f9c  mr 29, 4
  04f3fa0  mr 4, 5
  04f3fa4  std 0, 160(1)
  04f3fa8  bl 0x4f2d14
  04f3fac  nop
  04f3fb0  ld 0, 160(1)
  04f3fb4  sth 3, 0(28)
  04f3fb8  mtlr 0
  04f3fbc  stw 29, 4(28)
  04f3fc0  mr 3, 28
  04f3fc4  ld 29, 120(1)
  04f3fc8  ld 28, 112(1)
  04f3fcc  addi 1, 1, 144
  04f3fd0  blr

FUN_004f3fd4:   # 0x4f3fd4, 0x58 bytes
  04f3fd4  stdu 1, -144(1)
  04f3fd8  mflr 0
  04f3fdc  std 28, 112(1)
  04f3fe0  std 0, 160(1)
  04f3fe4  lwz 9, 0(4)
  04f3fe8  clrldi 28, 3, 32
  04f3fec  addi 3, 4, 32
  04f3ff0  std 29, 120(1)
  04f3ff4  clrldi 3, 3, 32
  04f3ff8  mr 29, 4
  04f3ffc  lhz 4, 112(9)
  04f4000  bl 0x4f3440
  04f4004  nop
  04f4008  ld 0, 160(1)
  04f400c  sth 3, 0(28)
  04f4010  mtlr 0
  04f4014  stw 29, 4(28)
  04f4018  mr 3, 28
  04f401c  ld 29, 120(1)
  04f4020  ld 28, 112(1)
  04f4024  addi 1, 1, 144
  04f4028  blr

FUN_004f402c:   # 0x4f402c, 0x5c bytes
  04f402c  stdu 1, -144(1)
  04f4030  mflr 0
  04f4034  std 29, 120(1)
  04f4038  mr 29, 4
  04f403c  std 0, 160(1)
  04f4040  std 28, 112(1)
  04f4044  clrldi 28, 3, 32
  04f4048  addi 3, 4, 32
  04f404c  lwz 9, 0(29)
  04f4050  mr 4, 5
  04f4054  clrldi 3, 3, 32
  04f4058  lhz 5, 112(9)
  04f405c  bl 0x4f367c
  04f4060  nop
  04f4064  ld 0, 160(1)
  04f4068  sth 3, 0(28)
  04f406c  mtlr 0
  04f4070  stw 29, 4(28)
  04f4074  mr 3, 28
  04f4078  ld 29, 120(1)
  04f407c  ld 28, 112(1)
  04f4080  addi 1, 1, 144
  04f4084  blr

FUN_004f4088:   # 0x4f4088, 0x5c bytes
  04f4088  stdu 1, -144(1)
  04f408c  mflr 0
  04f4090  std 29, 120(1)
  04f4094  mr 29, 4
  04f4098  std 0, 160(1)
  04f409c  std 28, 112(1)
  04f40a0  clrldi 28, 3, 32
  04f40a4  addi 3, 4, 32
  04f40a8  lwz 9, 0(29)
  04f40ac  mr 4, 5
  04f40b0  clrldi 3, 3, 32
  04f40b4  lhz 5, 112(9)
  04f40b8  bl 0x4f3748
  04f40bc  nop
  04f40c0  ld 0, 160(1)
  04f40c4  sth 3, 0(28)
  04f40c8  mtlr 0
  04f40cc  stw 29, 4(28)
  04f40d0  mr 3, 28
  04f40d4  ld 29, 120(1)
  04f40d8  ld 28, 112(1)
  04f40dc  addi 1, 1, 144
  04f40e0  blr

FUN_004f40e4:   # 0x4f40e4, 0x88 bytes
  04f40e4  stdu 1, -160(1)
  04f40e8  mflr 0
  04f40ec  std 28, 128(1)
  04f40f0  mr 28, 4
  04f40f4  std 0, 176(1)
  04f40f8  std 27, 120(1)
  04f40fc  clrldi 27, 3, 32
  04f4100  addi 3, 28, 32
  04f4104  lwz 9, 0(28)
  04f4108  mr 4, 5
  04f410c  clrldi 3, 3, 32
  04f4110  mr 5, 6
  04f4114  std 26, 112(1)
  04f4118  std 29, 136(1)
  04f411c  lhz 6, 112(9)
  04f4120  mr 26, 7
  04f4124  clrldi 29, 28, 32
  04f4128  bl 0x4f3810
  04f412c  nop
  04f4130  clrldi 4, 26, 32
  04f4134  sth 3, 0(27)
  04f4138  mr 3, 29
  04f413c  stw 28, 4(27)
  04f4140  bl 0x4f1bb8
  04f4144  nop
  04f4148  ld 0, 176(1)
  04f414c  ld 26, 112(1)
  04f4150  mr 3, 27
  04f4154  ld 28, 128(1)
  04f4158  ld 27, 120(1)
  04f415c  mtlr 0
  04f4160  ld 29, 136(1)
  04f4164  addi 1, 1, 160
  04f4168  blr

FUN_004f416c:   # 0x4f416c, 0x5c bytes
  04f416c  stdu 1, -144(1)
  04f4170  mflr 0
  04f4174  std 29, 120(1)
  04f4178  mr 29, 4
  04f417c  std 0, 160(1)
  04f4180  std 28, 112(1)
  04f4184  clrldi 28, 3, 32
  04f4188  addi 3, 4, 32
  04f418c  lwz 9, 0(29)
  04f4190  mr 4, 5
  04f4194  clrldi 3, 3, 32
  04f4198  lhz 5, 112(9)
  04f419c  bl 0x4f39a4
  04f41a0  nop
  04f41a4  ld 0, 160(1)
  04f41a8  sth 3, 0(28)
  04f41ac  mtlr 0
  04f41b0  stw 29, 4(28)
  04f41b4  mr 3, 28
  04f41b8  ld 29, 120(1)
  04f41bc  ld 28, 112(1)
  04f41c0  addi 1, 1, 144
  04f41c4  blr

FUN_004f41c8:   # 0x4f41c8, 0x5c bytes
  04f41c8  stdu 1, -144(1)
  04f41cc  mflr 0
  04f41d0  std 29, 120(1)
  04f41d4  mr 29, 4
  04f41d8  std 0, 160(1)
  04f41dc  std 28, 112(1)
  04f41e0  clrldi 28, 3, 32
  04f41e4  addi 3, 4, 32
  04f41e8  lwz 9, 0(29)
  04f41ec  mr 4, 5
  04f41f0  clrldi 3, 3, 32
  04f41f4  lhz 5, 112(9)
  04f41f8  bl 0x4f3508
  04f41fc  nop
  04f4200  ld 0, 160(1)
  04f4204  sth 3, 0(28)
  04f4208  mtlr 0
  04f420c  stw 29, 4(28)
  04f4210  mr 3, 28
  04f4214  ld 29, 120(1)
  04f4218  ld 28, 112(1)
  04f421c  addi 1, 1, 144
  04f4220  blr

FUN_004f4224:   # 0x4f4224, 0x60 bytes
  04f4224  stdu 1, -144(1)
  04f4228  mflr 0
  04f422c  std 29, 120(1)
  04f4230  mr 29, 4
  04f4234  std 0, 160(1)
  04f4238  std 28, 112(1)
  04f423c  clrldi 28, 3, 32
  04f4240  addi 3, 4, 32
  04f4244  lwz 9, 0(29)
  04f4248  mr 4, 5
  04f424c  clrldi 3, 3, 32
  04f4250  mr 5, 6
  04f4254  lhz 6, 112(9)
  04f4258  bl 0x4f3810
  04f425c  nop
  04f4260  ld 0, 160(1)
  04f4264  sth 3, 0(28)
  04f4268  mtlr 0
  04f426c  stw 29, 4(28)
  04f4270  mr 3, 28
  04f4274  ld 29, 120(1)
  04f4278  ld 28, 112(1)
  04f427c  addi 1, 1, 144
  04f4280  blr

FUN_004f4284:   # 0x4f4284, 0x8c bytes
  04f4284  stdu 1, -128(1)
  04f4288  mflr 0
  04f428c  std 31, 120(1)
  04f4290  clrldi 31, 3, 32
  04f4294  addi 3, 4, 32
  04f4298  std 30, 112(1)
  04f429c  clrldi 3, 3, 32
  04f42a0  mr 30, 4
  04f42a4  mr 4, 5
  04f42a8  mr 5, 6
  04f42ac  std 0, 144(1)
  04f42b0  bl 0x4f2ddc
  04f42b4  nop
  04f42b8  cmpwi 7, 3, -1
  04f42bc  bt 30, 0x4f42e4
  04f42c0  ld 0, 144(1)
  04f42c4  sth 3, 0(31)
  04f42c8  stw 30, 4(31)
  04f42cc  mtlr 0
  04f42d0  mr 3, 31
  04f42d4  ld 30, 112(1)
  04f42d8  ld 31, 120(1)
  04f42dc  addi 1, 1, 128
  04f42e0  blr
  04f42e4  li 0, 0
  04f42e8  ld 30, 112(1)
  04f42ec  li 9, 0
  04f42f0  sth 0, 0(31)
  04f42f4  ld 0, 144(1)
  04f42f8  mr 3, 31
  04f42fc  stw 9, 4(31)
  04f4300  ld 31, 120(1)
  04f4304  mtlr 0
  04f4308  addi 1, 1, 128
  04f430c  blr

FUN_004f4310:   # 0x4f4310, 0x90 bytes
  04f4310  stdu 1, -128(1)
  04f4314  mflr 0
  04f4318  std 31, 120(1)
  04f431c  clrldi 31, 3, 32
  04f4320  addi 3, 4, 32
  04f4324  std 30, 112(1)
  04f4328  clrldi 3, 3, 32
  04f432c  mr 30, 4
  04f4330  mr 4, 5
  04f4334  mr 5, 6
  04f4338  mr 6, 7
  04f433c  std 0, 144(1)
  04f4340  bl 0x4f31ac
  04f4344  nop
  04f4348  cmpwi 7, 3, -1
  04f434c  bt 30, 0x4f4374
  04f4350  ld 0, 144(1)
  04f4354  sth 3, 0(31)
  04f4358  stw 30, 4(31)
  04f435c  mtlr 0
  04f4360  mr 3, 31
  04f4364  ld 30, 112(1)
  04f4368  ld 31, 120(1)
  04f436c  addi 1, 1, 128
  04f4370  blr
  04f4374  li 0, 0
  04f4378  ld 30, 112(1)
  04f437c  li 9, 0
  04f4380  sth 0, 0(31)
  04f4384  ld 0, 144(1)
  04f4388  mr 3, 31
  04f438c  stw 9, 4(31)
  04f4390  ld 31, 120(1)
  04f4394  mtlr 0
  04f4398  addi 1, 1, 128
  04f439c  blr

FUN_004f43a0:   # 0x4f43a0, 0x88 bytes
  04f43a0  stdu 1, -128(1)
  04f43a4  mflr 0
  04f43a8  std 31, 120(1)
  04f43ac  clrldi 31, 3, 32
  04f43b0  addi 3, 4, 32
  04f43b4  std 30, 112(1)
  04f43b8  clrldi 3, 3, 32
  04f43bc  mr 30, 4
  04f43c0  mr 4, 5
  04f43c4  std 0, 144(1)
  04f43c8  bl 0x4f3350
  04f43cc  nop
  04f43d0  cmpwi 7, 3, -1
  04f43d4  bt 30, 0x4f43fc
  04f43d8  ld 0, 144(1)
  04f43dc  sth 3, 0(31)
  04f43e0  stw 30, 4(31)
  04f43e4  mtlr 0
  04f43e8  mr 3, 31
  04f43ec  ld 30, 112(1)
  04f43f0  ld 31, 120(1)
  04f43f4  addi 1, 1, 128
  04f43f8  blr
  04f43fc  li 0, 0
  04f4400  ld 30, 112(1)
  04f4404  li 9, 0
  04f4408  sth 0, 0(31)
  04f440c  ld 0, 144(1)
  04f4410  mr 3, 31
  04f4414  stw 9, 4(31)
  04f4418  ld 31, 120(1)
  04f441c  mtlr 0
  04f4420  addi 1, 1, 128
  04f4424  blr

FUN_004f4428:   # 0x4f4428, 0x8c bytes
  04f4428  stdu 1, -128(1)
  04f442c  mflr 0
  04f4430  std 31, 120(1)
  04f4434  clrldi 31, 3, 32
  04f4438  addi 3, 4, 32
  04f443c  std 30, 112(1)
  04f4440  clrldi 3, 3, 32
  04f4444  mr 30, 4
  04f4448  mr 4, 5
  04f444c  mr 5, 6
  04f4450  std 0, 144(1)
  04f4454  bl 0x4f3218
  04f4458  nop
  04f445c  cmpwi 7, 3, -1
  04f4460  bt 30, 0x4f4488
  04f4464  ld 0, 144(1)
  04f4468  sth 3, 0(31)
  04f446c  stw 30, 4(31)
  04f4470  mtlr 0
  04f4474  mr 3, 31
  04f4478  ld 30, 112(1)
  04f447c  ld 31, 120(1)
  04f4480  addi 1, 1, 128
  04f4484  blr
  04f4488  li 0, 0
  04f448c  ld 30, 112(1)
  04f4490  li 9, 0
  04f4494  sth 0, 0(31)
  04f4498  ld 0, 144(1)
  04f449c  mr 3, 31
  04f44a0  stw 9, 4(31)
  04f44a4  ld 31, 120(1)
  04f44a8  mtlr 0
  04f44ac  addi 1, 1, 128
  04f44b0  blr

FUN_004f44b4:   # 0x4f44b4, 0x5c bytes
  04f44b4  stdu 1, -144(1)
  04f44b8  mflr 0
  04f44bc  std 29, 120(1)
  04f44c0  mr 29, 3
  04f44c4  std 0, 160(1)
  04f44c8  li 4, 3
  04f44cc  lhz 5, 42(29)
  04f44d0  bl 0x4f1630
  04f44d4  nop
  04f44d8  clrlwi 0, 3, 24
  04f44dc  mr 3, 29
  04f44e0  cmpwi 7, 0, 0
  04f44e4  li 0, 0
  04f44e8  bt 30, 0x4f44f8
  04f44ec  bl 0x4f1a9c
  04f44f0  nop
  04f44f4  clrlwi 0, 3, 24
  04f44f8  extsw 3, 0
  04f44fc  ld 0, 160(1)
  04f4500  ld 29, 120(1)
  04f4504  addi 1, 1, 144
  04f4508  mtlr 0
  04f450c  blr

FUN_004f4510:   # 0x4f4510, 0x88 bytes
  04f4510  stdu 1, -160(1)
  04f4514  mflr 0
  04f4518  std 28, 128(1)
  04f451c  mr 28, 4
  04f4520  std 0, 176(1)
  04f4524  std 27, 120(1)
  04f4528  clrldi 27, 3, 32
  04f452c  addi 3, 28, 32
  04f4530  lwz 9, 0(28)
  04f4534  mr 4, 5
  04f4538  clrldi 3, 3, 32
  04f453c  mr 5, 6
  04f4540  std 26, 112(1)
  04f4544  std 29, 136(1)
  04f4548  lhz 6, 112(9)
  04f454c  mr 26, 7
  04f4550  clrldi 29, 28, 32
  04f4554  bl 0x4f38d8
  04f4558  nop
  04f455c  clrldi 4, 26, 32
  04f4560  sth 3, 0(27)
  04f4564  mr 3, 29
  04f4568  stw 28, 4(27)
  04f456c  bl 0x4f1bb8
  04f4570  nop
  04f4574  ld 0, 176(1)
  04f4578  ld 26, 112(1)
  04f457c  mr 3, 27
  04f4580  ld 28, 128(1)
  04f4584  ld 27, 120(1)
  04f4588  mtlr 0
  04f458c  ld 29, 136(1)
  04f4590  addi 1, 1, 160
  04f4594  blr

FUN_004f4598:   # 0x4f4598, 0x78 bytes
  04f4598  stdu 1, -160(1)
  04f459c  mflr 0
  04f45a0  std 26, 112(1)
  04f45a4  mr 26, 4
  04f45a8  std 29, 136(1)
  04f45ac  clrldi 29, 3, 32
  04f45b0  addi 3, 26, 32
  04f45b4  mr 4, 5
  04f45b8  clrldi 3, 3, 32
  04f45bc  std 28, 128(1)
  04f45c0  mr 28, 6
  04f45c4  std 0, 176(1)
  04f45c8  std 27, 120(1)
  04f45cc  bl 0x4f2fdc
  04f45d0  nop
  04f45d4  sth 3, 0(29)
  04f45d8  clrldi 4, 28, 32
  04f45dc  clrldi 3, 26, 32
  04f45e0  stw 26, 4(29)
  04f45e4  bl 0x4f1bb8
  04f45e8  nop
  04f45ec  ld 0, 176(1)
  04f45f0  ld 26, 112(1)
  04f45f4  mr 3, 29
  04f45f8  ld 27, 120(1)
  04f45fc  ld 28, 128(1)
  04f4600  mtlr 0
  04f4604  ld 29, 136(1)
  04f4608  addi 1, 1, 160
  04f460c  blr

FUN_004f4610:   # 0x4f4610, 0x78 bytes
  04f4610  stdu 1, -160(1)
  04f4614  mflr 0
  04f4618  std 26, 112(1)
  04f461c  mr 26, 4
  04f4620  std 29, 136(1)
  04f4624  clrldi 29, 3, 32
  04f4628  addi 3, 26, 32
  04f462c  mr 4, 5
  04f4630  clrldi 3, 3, 32
  04f4634  std 28, 128(1)
  04f4638  mr 28, 6
  04f463c  std 0, 176(1)
  04f4640  std 27, 120(1)
  04f4644  bl 0x4f3030
  04f4648  nop
  04f464c  sth 3, 0(29)
  04f4650  clrldi 4, 28, 32
  04f4654  clrldi 3, 26, 32
  04f4658  stw 26, 4(29)
  04f465c  bl 0x4f1bb8
  04f4660  nop
  04f4664  ld 0, 176(1)
  04f4668  ld 26, 112(1)
  04f466c  mr 3, 29
  04f4670  ld 27, 120(1)
  04f4674  ld 28, 128(1)
  04f4678  mtlr 0
  04f467c  ld 29, 136(1)
  04f4680  addi 1, 1, 160
  04f4684  blr

FUN_004f4688:   # 0x4f4688, 0x78 bytes
  04f4688  stdu 1, -160(1)
  04f468c  mflr 0
  04f4690  std 26, 112(1)
  04f4694  mr 26, 4
  04f4698  std 29, 136(1)
  04f469c  clrldi 29, 3, 32
  04f46a0  addi 3, 26, 32
  04f46a4  mr 4, 5
  04f46a8  clrldi 3, 3, 32
  04f46ac  std 28, 128(1)
  04f46b0  mr 28, 6
  04f46b4  std 0, 176(1)
  04f46b8  std 27, 120(1)
  04f46bc  bl 0x4f30d0
  04f46c0  nop
  04f46c4  sth 3, 0(29)
  04f46c8  clrldi 4, 28, 32
  04f46cc  clrldi 3, 26, 32
  04f46d0  stw 26, 4(29)
  04f46d4  bl 0x4f1bb8
  04f46d8  nop
  04f46dc  ld 0, 176(1)
  04f46e0  ld 26, 112(1)
  04f46e4  mr 3, 29
  04f46e8  ld 27, 120(1)
  04f46ec  ld 28, 128(1)
  04f46f0  mtlr 0
  04f46f4  ld 29, 136(1)
  04f46f8  addi 1, 1, 160
  04f46fc  blr

FUN_004f4700:   # 0x4f4700, 0x78 bytes
  04f4700  stdu 1, -160(1)
  04f4704  mflr 0
  04f4708  std 26, 112(1)
  04f470c  mr 26, 4
  04f4710  std 29, 136(1)
  04f4714  clrldi 29, 3, 32
  04f4718  addi 3, 26, 32
  04f471c  mr 4, 5
  04f4720  clrldi 3, 3, 32
  04f4724  std 28, 128(1)
  04f4728  mr 28, 6
  04f472c  std 0, 176(1)
  04f4730  std 27, 120(1)
  04f4734  bl 0x4f2d14
  04f4738  nop
  04f473c  sth 3, 0(29)
  04f4740  clrldi 4, 28, 32
  04f4744  clrldi 3, 26, 32
  04f4748  stw 26, 4(29)
  04f474c  bl 0x4f1bb8
  04f4750  nop
  04f4754  ld 0, 176(1)
  04f4758  ld 26, 112(1)
  04f475c  mr 3, 29
  04f4760  ld 27, 120(1)
  04f4764  ld 28, 128(1)
  04f4768  mtlr 0
  04f476c  ld 29, 136(1)
  04f4770  addi 1, 1, 160
  04f4774  blr

FUN_004f4778:   # 0x4f4778, 0x7c bytes
  04f4778  stdu 1, -160(1)
  04f477c  mflr 0
  04f4780  std 26, 112(1)
  04f4784  mr 26, 4
  04f4788  std 28, 128(1)
  04f478c  clrldi 28, 3, 32
  04f4790  addi 3, 26, 32
  04f4794  mr 4, 5
  04f4798  clrldi 3, 3, 32
  04f479c  mr 5, 6
  04f47a0  std 29, 136(1)
  04f47a4  mr 29, 7
  04f47a8  std 0, 176(1)
  04f47ac  std 27, 120(1)
  04f47b0  bl 0x4f3080
  04f47b4  nop
  04f47b8  sth 3, 0(28)
  04f47bc  clrldi 4, 29, 32
  04f47c0  clrldi 3, 26, 32
  04f47c4  stw 26, 4(28)
  04f47c8  bl 0x4f1bb8
  04f47cc  nop
  04f47d0  ld 0, 176(1)
  04f47d4  ld 26, 112(1)
  04f47d8  mr 3, 28
  04f47dc  ld 27, 120(1)
  04f47e0  ld 28, 128(1)
  04f47e4  mtlr 0
  04f47e8  ld 29, 136(1)
  04f47ec  addi 1, 1, 160
  04f47f0  blr

FUN_004f47f4:   # 0x4f47f4, 0x7c bytes
  04f47f4  stdu 1, -160(1)
  04f47f8  mflr 0
  04f47fc  std 26, 112(1)
  04f4800  mr 26, 4
  04f4804  std 28, 128(1)
  04f4808  clrldi 28, 3, 32
  04f480c  addi 3, 26, 32
  04f4810  mr 4, 5
  04f4814  clrldi 3, 3, 32
  04f4818  mr 5, 6
  04f481c  std 29, 136(1)
  04f4820  mr 29, 7
  04f4824  std 0, 176(1)
  04f4828  std 27, 120(1)
  04f482c  bl 0x4f2f88
  04f4830  nop
  04f4834  sth 3, 0(28)
  04f4838  clrldi 4, 29, 32
  04f483c  clrldi 3, 26, 32
  04f4840  stw 26, 4(28)
  04f4844  bl 0x4f1bb8
  04f4848  nop
  04f484c  ld 0, 176(1)
  04f4850  ld 26, 112(1)
  04f4854  mr 3, 28
  04f4858  ld 27, 120(1)
  04f485c  ld 28, 128(1)
  04f4860  mtlr 0
  04f4864  ld 29, 136(1)
  04f4868  addi 1, 1, 160
  04f486c  blr

FUN_004f4870:   # 0x4f4870, 0x84 bytes
  04f4870  stdu 1, -160(1)
  04f4874  mflr 0
  04f4878  std 28, 128(1)
  04f487c  mr 28, 4
  04f4880  std 0, 176(1)
  04f4884  std 27, 120(1)
  04f4888  clrldi 27, 3, 32
  04f488c  addi 3, 28, 32
  04f4890  lwz 9, 0(28)
  04f4894  mr 4, 5
  04f4898  clrldi 3, 3, 32
  04f489c  std 26, 112(1)
  04f48a0  std 29, 136(1)
  04f48a4  mr 26, 6
  04f48a8  lhz 5, 112(9)
  04f48ac  clrldi 29, 28, 32
  04f48b0  bl 0x4f367c
  04f48b4  nop
  04f48b8  clrldi 4, 26, 32
  04f48bc  sth 3, 0(27)
  04f48c0  mr 3, 29
  04f48c4  stw 28, 4(27)
  04f48c8  bl 0x4f1bb8
  04f48cc  nop
  04f48d0  ld 0, 176(1)
  04f48d4  ld 26, 112(1)
  04f48d8  mr 3, 27
  04f48dc  ld 28, 128(1)
  04f48e0  ld 27, 120(1)
  04f48e4  mtlr 0
  04f48e8  ld 29, 136(1)
  04f48ec  addi 1, 1, 160
  04f48f0  blr

FUN_004f48f4:   # 0x4f48f4, 0x84 bytes
  04f48f4  stdu 1, -160(1)
  04f48f8  mflr 0
  04f48fc  std 28, 128(1)
  04f4900  mr 28, 4
  04f4904  std 0, 176(1)
  04f4908  std 27, 120(1)
  04f490c  clrldi 27, 3, 32
  04f4910  addi 3, 28, 32
  04f4914  lwz 9, 0(28)
  04f4918  mr 4, 5
  04f491c  clrldi 3, 3, 32
  04f4920  std 26, 112(1)
  04f4924  std 29, 136(1)
  04f4928  mr 26, 6
  04f492c  lhz 5, 112(9)
  04f4930  clrldi 29, 28, 32
  04f4934  bl 0x4f3748
  04f4938  nop
  04f493c  clrldi 4, 26, 32
  04f4940  sth 3, 0(27)
  04f4944  mr 3, 29
  04f4948  stw 28, 4(27)
  04f494c  bl 0x4f1bb8
  04f4950  nop
  04f4954  ld 0, 176(1)
  04f4958  ld 26, 112(1)
  04f495c  mr 3, 27
  04f4960  ld 28, 128(1)
  04f4964  ld 27, 120(1)
  04f4968  mtlr 0
  04f496c  ld 29, 136(1)
  04f4970  addi 1, 1, 160
  04f4974  blr

FUN_004f4978:   # 0x4f4978, 0x84 bytes
  04f4978  stdu 1, -160(1)
  04f497c  mflr 0
  04f4980  std 28, 128(1)
  04f4984  mr 28, 4
  04f4988  std 0, 176(1)
  04f498c  std 27, 120(1)
  04f4990  clrldi 27, 3, 32
  04f4994  addi 3, 28, 32
  04f4998  lwz 9, 0(28)
  04f499c  mr 4, 5
  04f49a0  clrldi 3, 3, 32
  04f49a4  std 26, 112(1)
  04f49a8  std 29, 136(1)
  04f49ac  mr 26, 6
  04f49b0  lhz 5, 112(9)
  04f49b4  clrldi 29, 28, 32
  04f49b8  bl 0x4f39a4
  04f49bc  nop
  04f49c0  clrldi 4, 26, 32
  04f49c4  sth 3, 0(27)
  04f49c8  mr 3, 29
  04f49cc  stw 28, 4(27)
  04f49d0  bl 0x4f1bb8
  04f49d4  nop
  04f49d8  ld 0, 176(1)
  04f49dc  ld 26, 112(1)
  04f49e0  mr 3, 27
  04f49e4  ld 28, 128(1)
  04f49e8  ld 27, 120(1)
  04f49ec  mtlr 0
  04f49f0  ld 29, 136(1)
  04f49f4  addi 1, 1, 160
  04f49f8  blr

FUN_004f49fc:   # 0x4f49fc, 0x84 bytes
  04f49fc  stdu 1, -160(1)
  04f4a00  mflr 0
  04f4a04  std 28, 128(1)
  04f4a08  mr 28, 4
  04f4a0c  std 0, 176(1)
  04f4a10  std 27, 120(1)
  04f4a14  clrldi 27, 3, 32
  04f4a18  addi 3, 28, 32
  04f4a1c  lwz 9, 0(28)
  04f4a20  mr 4, 5
  04f4a24  clrldi 3, 3, 32
  04f4a28  std 26, 112(1)
  04f4a2c  std 29, 136(1)
  04f4a30  mr 26, 6
  04f4a34  lhz 5, 112(9)
  04f4a38  clrldi 29, 28, 32
  04f4a3c  bl 0x4f3508
  04f4a40  nop
  04f4a44  clrldi 4, 26, 32
  04f4a48  sth 3, 0(27)
  04f4a4c  mr 3, 29
  04f4a50  stw 28, 4(27)
  04f4a54  bl 0x4f1bb8
  04f4a58  nop
  04f4a5c  ld 0, 176(1)
  04f4a60  ld 26, 112(1)
  04f4a64  mr 3, 27
  04f4a68  ld 28, 128(1)
  04f4a6c  ld 27, 120(1)
  04f4a70  mtlr 0
  04f4a74  ld 29, 136(1)
  04f4a78  addi 1, 1, 160
  04f4a7c  blr

FUN_004f4a80:   # 0x4f4a80, 0x48 bytes
  04f4a80  stdu 1, -144(1)
  04f4a84  mflr 0
  04f4a88  std 29, 120(1)
  04f4a8c  mr 29, 3
  04f4a90  addi 3, 3, 32
  04f4a94  std 0, 160(1)
  04f4a98  clrldi 3, 3, 32
  04f4a9c  bl 0x4f2da8
  04f4aa0  nop
  04f4aa4  clrldi 3, 29, 32
  04f4aa8  li 4, 3
  04f4aac  bl 0x4f14c8
  04f4ab0  nop
  04f4ab4  ld 0, 160(1)
  04f4ab8  ld 29, 120(1)
  04f4abc  mtlr 0
  04f4ac0  addi 1, 1, 144
  04f4ac4  blr

idol_draw::CmdQueue_WaitForSpaceAndSync:   # 0x4f4ac8, 0x70 bytes
  04f4ac8  stdu 1, -144(1)
  04f4acc  mflr 0
  04f4ad0  std 29, 120(1)
  04f4ad4  std 0, 160(1)
  04f4ad8  std 30, 128(1)
  04f4adc  std 31, 136(1)
  04f4ae0  mr 29, 3
  04f4ae4  lhz 31, 42(3)
  04f4ae8  clrldi 30, 3, 32
  04f4aec  nop
  04f4af0  mr 3, 30
  04f4af4  li 4, 3
  04f4af8  mr 5, 31
  04f4afc  bl 0x4f1630
  04f4b00  nop
  04f4b04  clrlwi 3, 3, 24
  04f4b08  cmpwi 7, 3, 0
  04f4b0c  bt 30, 0x4f4af0
  04f4b10  clrldi 3, 29, 32
  04f4b14  bl 0x4f22c0
  04f4b18  nop
  04f4b1c  ld 0, 160(1)
  04f4b20  ld 29, 120(1)
  04f4b24  ld 30, 128(1)
  04f4b28  mtlr 0
  04f4b2c  ld 31, 136(1)
  04f4b30  addi 1, 1, 144
  04f4b34  blr

FUN_004f4b38:   # 0x4f4b38, 0x44 bytes
  04f4b38  stdu 1, -144(1)
  04f4b3c  mflr 0
  04f4b40  std 29, 120(1)
  04f4b44  mr 29, 3
  04f4b48  addi 3, 3, 32
  04f4b4c  std 0, 160(1)
  04f4b50  clrldi 3, 3, 32
  04f4b54  bl 0x4f2d9c
  04f4b58  nop
  04f4b5c  clrldi 3, 29, 32
  04f4b60  bl 0x4f13c8
  04f4b64  nop
  04f4b68  ld 0, 160(1)
  04f4b6c  ld 29, 120(1)
  04f4b70  mtlr 0
  04f4b74  addi 1, 1, 144
  04f4b78  blr

FUN_004f4b7c:   # 0x4f4b7c, 0x44 bytes
  04f4b7c  stdu 1, -144(1)
  04f4b80  mflr 0
  04f4b84  std 29, 120(1)
  04f4b88  mr 29, 3
  04f4b8c  addi 3, 3, 32
  04f4b90  std 0, 160(1)
  04f4b94  clrldi 3, 3, 32
  04f4b98  bl 0x4f2cd0
  04f4b9c  nop
  04f4ba0  clrldi 3, 29, 32
  04f4ba4  bl 0x4f13c8
  04f4ba8  nop
  04f4bac  ld 0, 160(1)
  04f4bb0  ld 29, 120(1)
  04f4bb4  mtlr 0
  04f4bb8  addi 1, 1, 144
  04f4bbc  blr

FUN_004f4bc0:   # 0x4f4bc0, 0x88 bytes
  04f4bc0  stdu 1, -160(1)
  04f4bc4  mflr 0
  04f4bc8  cmpwi 7, 4, 0
  04f4bcc  std 0, 176(1)
  04f4bd0  std 27, 120(1)
  04f4bd4  lwzu 27, 32(3)
  04f4bd8  std 28, 128(1)
  04f4bdc  std 29, 136(1)
  04f4be0  std 30, 144(1)
  04f4be4  std 31, 152(1)
  04f4be8  mr 29, 4
  04f4bec  lwz 28, 8(3)
  04f4bf0  bt 30, 0x4f4c18
  04f4bf4  clrldi 30, 3, 32
  04f4bf8  li 31, 0
  04f4bfc  nop
  04f4c00  addi 31, 31, 1
  04f4c04  mr 3, 30
  04f4c08  bl 0x4f315c
  04f4c0c  nop
  04f4c10  cmpw 7, 29, 31
  04f4c14  bf 30, 0x4f4c00
  04f4c18  slwi 3, 28, 3
  04f4c1c  ld 0, 176(1)
  04f4c20  ld 28, 128(1)
  04f4c24  add 3, 27, 3
  04f4c28  ld 29, 136(1)
  04f4c2c  ld 27, 120(1)
  04f4c30  mtlr 0
  04f4c34  clrldi 3, 3, 32
  04f4c38  ld 30, 144(1)
  04f4c3c  ld 31, 152(1)
  04f4c40  addi 1, 1, 160
  04f4c44  blr

FUN_004f4c48:   # 0x4f4c48, 0xd4 bytes
  04f4c48  stdu 1, -176(1)
  04f4c4c  mflr 0
  04f4c50  std 26, 128(1)
  04f4c54  mr 26, 3
  04f4c58  std 25, 120(1)
  04f4c5c  std 27, 136(1)
  04f4c60  clrldi 25, 3, 32
  04f4c64  std 28, 144(1)
  04f4c68  std 29, 152(1)
  04f4c6c  mr 28, 4
  04f4c70  mr 27, 5
  04f4c74  addi 29, 26, 32
  04f4c78  mr 5, 6
  04f4c7c  clrldi 29, 29, 32
  04f4c80  mr 3, 25
  04f4c84  clrldi 4, 4, 32
  04f4c88  addi 28, 28, 128
  04f4c8c  addi 27, 27, -128
  04f4c90  std 0, 192(1)
  04f4c94  bl 0x4f20b4
  04f4c98  nop
  04f4c9c  clrldi 4, 28, 32
  04f4ca0  clrldi 5, 27, 32
  04f4ca4  mr 3, 29
  04f4ca8  bl 0x4f33b8
  04f4cac  nop
  04f4cb0  mr 5, 29
  04f4cb4  mr 3, 25
  04f4cb8  li 4, 3
  04f4cbc  bl 0x4f1eb0
  04f4cc0  nop
  04f4cc4  lwz 11, 0(26)
  04f4cc8  li 0, 3
  04f4ccc  mr 3, 29
  04f4cd0  lwz 9, 12(11)
  04f4cd4  stw 0, 8(11)
  04f4cd8  addi 9, 9, -1
  04f4cdc  stw 9, 12(11)
  04f4ce0  bl 0x4f2da8
  04f4ce4  nop
  04f4ce8  mr 3, 25
  04f4cec  li 4, 3
  04f4cf0  bl 0x4f14c8
  04f4cf4  nop
  04f4cf8  ld 0, 192(1)
  04f4cfc  ld 25, 120(1)
  04f4d00  ld 26, 128(1)
  04f4d04  mtlr 0
  04f4d08  ld 27, 136(1)
  04f4d0c  ld 28, 144(1)
  04f4d10  ld 29, 152(1)
  04f4d14  addi 1, 1, 176
  04f4d18  blr

FUN_004f4d1c:   # 0x4f4d1c, 0xd4 bytes
  04f4d1c  stdu 1, -176(1)
  04f4d20  mflr 0
  04f4d24  std 26, 128(1)
  04f4d28  mr 26, 3
  04f4d2c  std 25, 120(1)
  04f4d30  std 27, 136(1)
  04f4d34  clrldi 25, 3, 32
  04f4d38  std 28, 144(1)
  04f4d3c  std 29, 152(1)
  04f4d40  mr 28, 4
  04f4d44  mr 27, 5
  04f4d48  addi 29, 26, 32
  04f4d4c  mr 5, 6
  04f4d50  clrldi 29, 29, 32
  04f4d54  mr 3, 25
  04f4d58  clrldi 4, 4, 32
  04f4d5c  addi 28, 28, 128
  04f4d60  addi 27, 27, -128
  04f4d64  std 0, 192(1)
  04f4d68  bl 0x4f20b4
  04f4d6c  nop
  04f4d70  clrldi 4, 28, 32
  04f4d74  clrldi 5, 27, 32
  04f4d78  mr 3, 29
  04f4d7c  bl 0x4f33f8
  04f4d80  nop
  04f4d84  mr 5, 29
  04f4d88  mr 3, 25
  04f4d8c  li 4, 3
  04f4d90  bl 0x4f1f60
  04f4d94  nop
  04f4d98  lwz 11, 0(26)
  04f4d9c  li 0, 3
  04f4da0  mr 3, 29
  04f4da4  lwz 9, 12(11)
  04f4da8  stw 0, 8(11)
  04f4dac  addi 9, 9, -1
  04f4db0  stw 9, 12(11)
  04f4db4  bl 0x4f2cdc
  04f4db8  nop
  04f4dbc  mr 3, 25
  04f4dc0  li 4, 3
  04f4dc4  bl 0x4f14c8
  04f4dc8  nop
  04f4dcc  ld 0, 192(1)
  04f4dd0  ld 25, 120(1)
  04f4dd4  ld 26, 128(1)
  04f4dd8  mtlr 0
  04f4ddc  ld 27, 136(1)
  04f4de0  ld 28, 144(1)
  04f4de4  ld 29, 152(1)
  04f4de8  addi 1, 1, 176
  04f4dec  blr

FUN_004f4df0:   # 0x4f4df0, 0x4c bytes
  04f4df0  stdu 1, -128(1)
  04f4df4  mflr 0
  04f4df8  std 4, 184(1)
  04f4dfc  std 0, 144(1)
  04f4e00  addi 0, 1, 184
  04f4e04  std 5, 192(1)
  04f4e08  mr 4, 0
  04f4e0c  stw 0, 112(1)
  04f4e10  std 6, 200(1)
  04f4e14  std 7, 208(1)
  04f4e18  std 8, 216(1)
  04f4e1c  std 9, 224(1)
  04f4e20  std 10, 232(1)
  04f4e24  bl 0x5cd444
  04f4e28  nop
  04f4e2c  ld 0, 144(1)
  04f4e30  addi 1, 1, 128
  04f4e34  mtlr 0
  04f4e38  blr

FUN_004f4e40:   # 0x4f4e40, 0x10 bytes
  04f4e40  li 0, 0
  04f4e44  stw 0, 4(3)
  04f4e48  stw 0, 0(3)
  04f4e4c  blr

FUN_004f4e50:   # 0x4f4e50, 0x10 bytes
  04f4e50  li 0, 0
  04f4e54  stw 0, 4(3)
  04f4e58  stw 0, 0(3)
  04f4e5c  blr

FUN_004f4e60:   # 0x4f4e60, 0x18 bytes
  04f4e60  lwz 9, 0(3)
  04f4e64  lwz 0, 24(9)
  04f4e68  lwz 3, 20(9)
  04f4e6c  add 3, 3, 0
  04f4e70  clrldi 3, 3, 32
  04f4e74  blr

FUN_004f4e78:   # 0x4f4e78, 0x10c bytes
  04f4e78  lwz 0, 4(3)
  04f4e7c  cmplwi 7, 0, 48
  04f4e80  bf 29, 0x4f4e9c
  04f4e84  lwz 3, 0(3)
  04f4e88  lis 0, -16162
  04f4e8c  ori 0, 0, 49374
  04f4e90  lwz 9, 32(3)
  04f4e94  cmpw 7, 9, 0
  04f4e98  bt 30, 0x4f4ea8
  04f4e9c  li 3, 0
  04f4ea0  extsw 3, 3
  04f4ea4  blr
  04f4ea8  lwz 11, 0(3)
  04f4eac  lis 0, 16896
  04f4eb0  rlwinm 9, 11, 7, 16, 31
  04f4eb4  ori 0, 0, 2
  04f4eb8  rotlwi 9, 9, 25
  04f4ebc  cmpw 7, 9, 0
  04f4ec0  bf 30, 0x4f4e9c
  04f4ec4  lwz 10, 4(3)
  04f4ec8  lis 0, 16896
  04f4ecc  rlwinm 9, 10, 7, 16, 31
  04f4ed0  ori 0, 0, 130
  04f4ed4  rotlwi 9, 9, 25
  04f4ed8  cmpw 7, 9, 0
  04f4edc  bf 30, 0x4f4e9c
  04f4ee0  lwz 8, 8(3)
  04f4ee4  lis 0, 16896
  04f4ee8  rlwinm 9, 8, 7, 16, 31
  04f4eec  ori 0, 0, 258
  04f4ef0  rotlwi 9, 9, 25
  04f4ef4  cmpw 7, 9, 0
  04f4ef8  bf 30, 0x4f4e9c
  04f4efc  lwz 7, 12(3)
  04f4f00  lis 0, 16896
  04f4f04  rlwinm 9, 7, 7, 16, 31
  04f4f08  ori 0, 0, 386
  04f4f0c  rotlwi 9, 9, 25
  04f4f10  cmpw 7, 9, 0
  04f4f14  bf 30, 0x4f4e9c
  04f4f18  rlwinm 0, 11, 0, 7, 22
  04f4f1c  cmpwi 7, 0, 0
  04f4f20  bf 30, 0x4f4f48
  04f4f24  rlwinm 0, 10, 0, 7, 22
  04f4f28  cmpwi 7, 0, 0
  04f4f2c  bf 30, 0x4f4f48
  04f4f30  rlwinm 0, 8, 0, 7, 22
  04f4f34  cmpwi 7, 0, 0
  04f4f38  bf 30, 0x4f4f48
  04f4f3c  rlwinm 0, 7, 0, 7, 22
  04f4f40  cmpwi 7, 0, 0
  04f4f44  bt 30, 0x4f4e9c
  04f4f48  lwz 0, 44(3)
  04f4f4c  clrlwi 0, 0, 1
  04f4f50  cmplwi 7, 0, 3
  04f4f54  bf 29, 0x4f4e9c
  04f4f58  cmplwi 7, 0, 5
  04f4f5c  bt 29, 0x4f4e9c
  04f4f60  lwz 0, 20(3)
  04f4f64  clrlwi 0, 0, 28
  04f4f68  cmpwi 7, 0, 0
  04f4f6c  bf 30, 0x4f4e9c
  04f4f70  lwz 9, 24(3)
  04f4f74  clrlwi 9, 9, 28
  04f4f78  addi 9, 9, -1
  04f4f7c  rldicl 3, 9, 33, 63
  04f4f80  b 0x4f4ea0

FUN_004f4f84:   # 0x4f4f84, 0x4 bytes
  04f4f84  blr

FUN_004f4f88:   # 0x4f4f88, 0x3c bytes
  04f4f88  lwz 9, 0(3)
  04f4f8c  lwz 10, 12(9)
  04f4f90  lwz 0, 0(9)
  04f4f94  lwz 11, 4(9)
  04f4f98  rldicl 10, 10, 55, 48
  04f4f9c  lwz 3, 8(9)
  04f4fa0  rlwinm 0, 0, 7, 0, 15
  04f4fa4  rldicl 11, 11, 55, 48
  04f4fa8  rlwinm 3, 3, 7, 0, 15
  04f4fac  or 0, 0, 11
  04f4fb0  or 3, 3, 10
  04f4fb4  sldi 0, 0, 32
  04f4fb8  clrldi 3, 3, 32
  04f4fbc  or 3, 0, 3
  04f4fc0  blr

FUN_004f4fc4:   # 0x4f4fc4, 0x34 bytes
  04f4fc4  li 0, 32
  04f4fc8  lwz 9, -32624(2)
  04f4fcc  mr 11, 3
  04f4fd0  mtctr 0
  04f4fd4  nop
  04f4fd8  clrldi 3, 9, 32
  04f4fdc  addi 9, 9, 40
  04f4fe0  lwz 0, 0(3)
  04f4fe4  cmpw 7, 0, 11
  04f4fe8  bclr 12, 30
  04f4fec  bdnz 0x4f4fd8
  04f4ff0  li 3, 0
  04f4ff4  blr

FUN_004f4ff8:   # 0x4f4ff8, 0x70 bytes
  04f4ff8  li 0, 32
  04f4ffc  lwz 7, -32624(2)
  04f5000  mr 6, 3
  04f5004  mtctr 0
  04f5008  clrldi 3, 7, 32
  04f500c  addi 7, 7, 40
  04f5010  lwz 0, 0(3)
  04f5014  cmpwi 7, 0, 0
  04f5018  clrldi 8, 0, 32
  04f501c  bt 30, 0x4f505c
  04f5020  lwz 10, 12(8)
  04f5024  lwz 9, 0(8)
  04f5028  lwz 11, 4(8)
  04f502c  rldicl 10, 10, 55, 48
  04f5030  lwz 0, 8(8)
  04f5034  rlwinm 9, 9, 7, 0, 15
  04f5038  rldicl 11, 11, 55, 48
  04f503c  rlwinm 0, 0, 7, 0, 15
  04f5040  or 9, 9, 11
  04f5044  or 0, 0, 10
  04f5048  sldi 9, 9, 32
  04f504c  clrldi 0, 0, 32
  04f5050  or 9, 9, 0
  04f5054  cmpd 7, 9, 6
  04f5058  bclr 12, 30
  04f505c  bdnz 0x4f5008
  04f5060  li 3, 0
  04f5064  blr

FUN_004f5068:   # 0x4f5068, 0x30 bytes
  04f5068  li 0, 32
  04f506c  lwz 9, -32624(2)
  04f5070  mtctr 0
  04f5074  nop
  04f5078  clrldi 3, 9, 32
  04f507c  addi 9, 9, 40
  04f5080  lwz 0, 0(3)
  04f5084  cmpwi 7, 0, 0
  04f5088  bclr 12, 30
  04f508c  bdnz 0x4f5078
  04f5090  li 3, 0
  04f5094  blr

FUN_004f5098:   # 0x4f5098, 0x74 bytes
  04f5098  cmpwi 7, 3, 0
  04f509c  bclr 12, 30
  04f50a0  li 0, 32
  04f50a4  lwz 9, -32624(2)
  04f50a8  mtctr 0
  04f50ac  b 0x4f50b8
  04f50b0  addi 9, 9, 40
  04f50b4  bdz 0x4f5108
  04f50b8  clrldi 8, 9, 32
  04f50bc  lwz 0, 0(8)
  04f50c0  cmpw 7, 0, 3
  04f50c4  bf 30, 0x4f50b0
  04f50c8  addi 0, 9, 4
  04f50cc  clrldi 11, 0, 32
  04f50d0  mr 9, 11
  04f50d4  nop
  04f50d8  lwarx 10, 0, 9
  04f50dc  mr 9, 11
  04f50e0  addi 0, 10, -1
  04f50e4  stwcx. 0, 0, 11
  04f50e8  mfocrf 0, 128
  04f50ec  rlwinm 0, 0, 0, 2, 2
  04f50f0  cmpwi 7, 0, 0
  04f50f4  bt 30, 0x4f50d8
  04f50f8  cmpwi 7, 10, 1
  04f50fc  bclr 4, 30
  04f5100  li 0, 0
  04f5104  stw 0, 0(8)
  04f5108  blr

FUN_004f510c:   # 0x4f510c, 0xe8 bytes
  04f510c  stdu 1, -112(1)
  04f5110  mflr 0
  04f5114  lwz 8, -32624(2)
  04f5118  mr 10, 3
  04f511c  std 0, 128(1)
  04f5120  li 0, 32
  04f5124  mr 11, 8
  04f5128  mtctr 0
  04f512c  b 0x4f5138
  04f5130  addi 11, 11, 40
  04f5134  bdz 0x4f5188
  04f5138  clrldi 9, 11, 32
  04f513c  lwz 0, 0(9)
  04f5140  cmpw 7, 0, 10
  04f5144  bf 30, 0x4f5130
  04f5148  addi 0, 11, 4
  04f514c  clrldi 10, 0, 32
  04f5150  mr 11, 10
  04f5154  nop
  04f5158  lwarx 9, 0, 11
  04f515c  addi 9, 9, 1
  04f5160  mr 11, 10
  04f5164  stwcx. 9, 0, 10
  04f5168  mfocrf 9, 128
  04f516c  rlwinm 9, 9, 0, 2, 2
  04f5170  cmpwi 7, 9, 0
  04f5174  bt 30, 0x4f5158
  04f5178  ld 0, 128(1)
  04f517c  addi 1, 1, 112
  04f5180  mtlr 0
  04f5184  blr
  04f5188  li 0, 32
  04f518c  mr 3, 8
  04f5190  mtctr 0
  04f5194  b 0x4f51a0
  04f5198  addi 3, 3, 40
  04f519c  bdz 0x4f5178
  04f51a0  clrldi 9, 3, 32
  04f51a4  lwz 0, 0(9)
  04f51a8  cmpwi 7, 0, 0
  04f51ac  bf 30, 0x4f5198
  04f51b0  cmpwi 7, 4, 0
  04f51b4  li 0, 1
  04f51b8  stw 10, 0(9)
  04f51bc  stw 0, 4(9)
  04f51c0  bt 30, 0x4f51ec
  04f51c4  addi 3, 3, 8
  04f51c8  clrldi 4, 4, 32
  04f51cc  clrldi 3, 3, 32
  04f51d0  li 5, 32
  04f51d4  bl 0x5cccec
  04f51d8  nop
  04f51dc  ld 0, 128(1)
  04f51e0  addi 1, 1, 112
  04f51e4  mtlr 0
  04f51e8  blr
  04f51ec  lwz 4, -32620(2)
  04f51f0  b 0x4f51c4

FUN_004f51f4:   # 0x4f51f4, 0x114 bytes
  04f51f4  stdu 1, -128(1)
  04f51f8  mflr 0
  04f51fc  cmplwi 7, 3, 31
  04f5200  std 0, 144(1)
  04f5204  slwi 9, 3, 5
  04f5208  slwi 0, 3, 3
  04f520c  std 31, 120(1)
  04f5210  add 0, 0, 9
  04f5214  mr 10, 5
  04f5218  li 9, 0
  04f521c  li 31, 0
  04f5220  mr 12, 4
  04f5224  bf 29, 0x4f5250
  04f5228  li 0, 0
  04f522c  stw 9, 0(7)
  04f5230  std 0, 0(4)
  04f5234  stb 9, 0(5)
  04f5238  ld 0, 144(1)
  04f523c  extsw 3, 31
  04f5240  ld 31, 120(1)
  04f5244  addi 1, 1, 128
  04f5248  mtlr 0
  04f524c  blr
  04f5250  lwz 9, -32624(2)
  04f5254  clrldi 3, 5, 32
  04f5258  clrldi 5, 6, 32
  04f525c  add 9, 0, 9
  04f5260  li 31, 0
  04f5264  clrldi 11, 9, 32
  04f5268  addi 0, 9, 8
  04f526c  clrldi 4, 0, 32
  04f5270  lwz 6, 0(11)
  04f5274  cmpwi 7, 6, 0
  04f5278  clrldi 8, 6, 32
  04f527c  bt 30, 0x4f52e0
  04f5280  lwz 10, 12(8)
  04f5284  li 31, 1
  04f5288  lwz 9, 0(8)
  04f528c  lwz 11, 4(8)
  04f5290  rldicl 10, 10, 55, 48
  04f5294  lwz 0, 8(8)
  04f5298  rlwinm 9, 9, 7, 0, 15
  04f529c  rldicl 11, 11, 55, 48
  04f52a0  rlwinm 0, 0, 7, 0, 15
  04f52a4  or 9, 9, 11
  04f52a8  or 0, 0, 10
  04f52ac  sldi 9, 9, 32
  04f52b0  clrldi 0, 0, 32
  04f52b4  stw 6, 0(7)
  04f52b8  or 9, 9, 0
  04f52bc  std 9, 0(12)
  04f52c0  bl 0x5cccec
  04f52c4  nop
  04f52c8  ld 0, 144(1)
  04f52cc  extsw 3, 31
  04f52d0  mtlr 0
  04f52d4  ld 31, 120(1)
  04f52d8  addi 1, 1, 128
  04f52dc  blr
  04f52e0  li 0, 0
  04f52e4  stw 6, 0(7)
  04f52e8  std 0, 0(12)
  04f52ec  stb 6, 0(10)
  04f52f0  ld 0, 144(1)
  04f52f4  extsw 3, 31
  04f52f8  ld 31, 120(1)
  04f52fc  addi 1, 1, 128
  04f5300  mtlr 0
  04f5304  blr

FUN_004f5308:   # 0x4f5308, 0x1c bytes
  04f5308  lwz 9, 0(3)
  04f530c  lwz 3, 20(9)
  04f5310  lwz 0, 24(9)
  04f5314  addi 3, 3, 1023
  04f5318  add 3, 3, 0
  04f531c  rldicl 3, 3, 54, 42
  04f5320  blr

FUN_004f5324:   # 0x4f5324, 0x78 bytes
  04f5324  lwz 3, 0(3)
  04f5328  cmpwi 7, 3, 0
  04f532c  bclr 12, 30
  04f5330  li 0, 32
  04f5334  lwz 9, -32624(2)
  04f5338  mtctr 0
  04f533c  b 0x4f5348
  04f5340  addi 9, 9, 40
  04f5344  bdz 0x4f5398
  04f5348  clrldi 8, 9, 32
  04f534c  lwz 0, 0(8)
  04f5350  cmpw 7, 0, 3
  04f5354  bf 30, 0x4f5340
  04f5358  addi 0, 9, 4
  04f535c  clrldi 11, 0, 32
  04f5360  mr 9, 11
  04f5364  nop
  04f5368  lwarx 10, 0, 9
  04f536c  mr 9, 11
  04f5370  addi 0, 10, -1
  04f5374  stwcx. 0, 0, 11
  04f5378  mfocrf 0, 128
  04f537c  rlwinm 0, 0, 0, 2, 2
  04f5380  cmpwi 7, 0, 0
  04f5384  bt 30, 0x4f5368
  04f5388  cmpwi 7, 10, 1
  04f538c  bclr 4, 30
  04f5390  li 0, 0
  04f5394  stw 0, 0(8)
  04f5398  blr

FUN_004f539c:   # 0x4f539c, 0x78 bytes
  04f539c  lwz 3, 0(3)
  04f53a0  cmpwi 7, 3, 0
  04f53a4  bclr 12, 30
  04f53a8  li 0, 32
  04f53ac  lwz 9, -32624(2)
  04f53b0  mtctr 0
  04f53b4  b 0x4f53c0
  04f53b8  addi 9, 9, 40
  04f53bc  bdz 0x4f5410
  04f53c0  clrldi 8, 9, 32
  04f53c4  lwz 0, 0(8)
  04f53c8  cmpw 7, 0, 3
  04f53cc  bf 30, 0x4f53b8
  04f53d0  addi 0, 9, 4
  04f53d4  clrldi 11, 0, 32
  04f53d8  mr 9, 11
  04f53dc  nop
  04f53e0  lwarx 10, 0, 9
  04f53e4  mr 9, 11
  04f53e8  addi 0, 10, -1
  04f53ec  stwcx. 0, 0, 11
  04f53f0  mfocrf 0, 128
  04f53f4  rlwinm 0, 0, 0, 2, 2
  04f53f8  cmpwi 7, 0, 0
  04f53fc  bt 30, 0x4f53e0
  04f5400  cmpwi 7, 10, 1
  04f5404  bclr 4, 30
  04f5408  li 0, 0
  04f540c  stw 0, 0(8)
  04f5410  blr

FUN_004f5414:   # 0x4f5414, 0x78 bytes
  04f5414  li 0, 32
  04f5418  lwz 7, -32624(2)
  04f541c  mr 6, 3
  04f5420  mtctr 0
  04f5424  nop
  04f5428  clrldi 9, 7, 32
  04f542c  addi 7, 7, 40
  04f5430  lwz 3, 0(9)
  04f5434  cmpwi 7, 3, 0
  04f5438  clrldi 8, 3, 32
  04f543c  bt 30, 0x4f547c
  04f5440  lwz 10, 12(8)
  04f5444  lwz 9, 0(8)
  04f5448  lwz 11, 4(8)
  04f544c  rldicl 10, 10, 55, 48
  04f5450  lwz 0, 8(8)
  04f5454  rlwinm 9, 9, 7, 0, 15
  04f5458  rldicl 11, 11, 55, 48
  04f545c  rlwinm 0, 0, 7, 0, 15
  04f5460  or 9, 9, 11
  04f5464  or 0, 0, 10
  04f5468  sldi 9, 9, 32
  04f546c  clrldi 0, 0, 32
  04f5470  or 9, 9, 0
  04f5474  cmpd 7, 9, 6
  04f5478  bt 30, 0x4f5484
  04f547c  bdnz 0x4f5428
  04f5480  li 3, 0
  04f5484  clrldi 3, 3, 32
  04f5488  blr

FUN_004f548c:   # 0x4f548c, 0xcc bytes
  04f548c  mr 7, 4
  04f5490  mflr 0
  04f5494  stdu 1, -112(1)
  04f5498  std 0, 128(1)
  04f549c  li 0, 32
  04f54a0  lwz 4, -32624(2)
  04f54a4  mr 6, 7
  04f54a8  mtctr 0
  04f54ac  b 0x4f54b8
  04f54b0  addi 4, 4, 40
  04f54b4  bdz 0x4f5538
  04f54b8  clrldi 9, 4, 32
  04f54bc  lwz 0, 0(9)
  04f54c0  cmpwi 7, 0, 0
  04f54c4  clrldi 8, 0, 32
  04f54c8  bt 30, 0x4f54b0
  04f54cc  lwz 10, 12(8)
  04f54d0  lwz 9, 0(8)
  04f54d4  lwz 11, 4(8)
  04f54d8  rldicl 10, 10, 55, 48
  04f54dc  lwz 0, 8(8)
  04f54e0  rlwinm 9, 9, 7, 0, 15
  04f54e4  rldicl 11, 11, 55, 48
  04f54e8  rlwinm 0, 0, 7, 0, 15
  04f54ec  or 9, 9, 11
  04f54f0  or 0, 0, 10
  04f54f4  sldi 9, 9, 32
  04f54f8  clrldi 0, 0, 32
  04f54fc  or 9, 9, 0
  04f5500  cmpd 7, 9, 3
  04f5504  bf 30, 0x4f54b0
  04f5508  addi 4, 4, 8
  04f550c  clrldi 3, 6, 32
  04f5510  clrldi 4, 4, 32
  04f5514  clrldi 5, 5, 32
  04f5518  bl 0x5cccec
  04f551c  nop
  04f5520  ld 0, 128(1)
  04f5524  li 3, 1
  04f5528  mtlr 0
  04f552c  addi 1, 1, 112
  04f5530  extsw 3, 3
  04f5534  blr
  04f5538  li 0, 0
  04f553c  li 3, 0
  04f5540  stb 0, 0(7)
  04f5544  ld 0, 128(1)
  04f5548  extsw 3, 3
  04f554c  addi 1, 1, 112
  04f5550  mtlr 0
  04f5554  blr

FUN_004f5558:   # 0x4f5558, 0x174 bytes
  04f5558  stdu 1, -128(1)
  04f555c  mflr 0
  04f5560  std 31, 120(1)
  04f5564  std 0, 144(1)
  04f5568  lwz 11, 0(3)
  04f556c  mr 31, 3
  04f5570  cmpwi 7, 11, 0
  04f5574  bt 30, 0x4f55d8
  04f5578  li 0, 32
  04f557c  lwz 9, -32624(2)
  04f5580  mtctr 0
  04f5584  b 0x4f5590
  04f5588  addi 9, 9, 40
  04f558c  bdz 0x4f55d8
  04f5590  clrldi 8, 9, 32
  04f5594  lwz 0, 0(8)
  04f5598  cmpw 7, 0, 11
  04f559c  bf 30, 0x4f5588
  04f55a0  addi 0, 9, 4
  04f55a4  clrldi 11, 0, 32
  04f55a8  mr 9, 11
  04f55ac  nop
  04f55b0  lwarx 10, 0, 9
  04f55b4  mr 9, 11
  04f55b8  addi 0, 10, -1
  04f55bc  stwcx. 0, 0, 11
  04f55c0  mfocrf 0, 128
  04f55c4  rlwinm 0, 0, 0, 2, 2
  04f55c8  cmpwi 7, 0, 0
  04f55cc  bt 30, 0x4f55b0
  04f55d0  cmpwi 7, 10, 1
  04f55d4  bt 30, 0x4f56c0
  04f55d8  lwz 10, 0(4)
  04f55dc  lwz 0, 4(4)
  04f55e0  cmpwi 7, 10, 0
  04f55e4  stw 0, 4(3)
  04f55e8  stw 10, 0(3)
  04f55ec  bt 30, 0x4f5648
  04f55f0  lwz 3, -32624(2)
  04f55f4  li 0, 32
  04f55f8  mr 11, 3
  04f55fc  mtctr 0
  04f5600  b 0x4f560c
  04f5604  addi 11, 11, 40
  04f5608  bdz 0x4f5660
  04f560c  clrldi 9, 11, 32
  04f5610  lwz 0, 0(9)
  04f5614  cmpw 7, 0, 10
  04f5618  bf 30, 0x4f5604
  04f561c  addi 0, 11, 4
  04f5620  clrldi 10, 0, 32
  04f5624  mr 11, 10
  04f5628  lwarx 9, 0, 11
  04f562c  addi 9, 9, 1
  04f5630  mr 11, 10
  04f5634  stwcx. 9, 0, 10
  04f5638  mfocrf 9, 128
  04f563c  rlwinm 9, 9, 0, 2, 2
  04f5640  cmpwi 7, 9, 0
  04f5644  bt 30, 0x4f5628
  04f5648  ld 0, 144(1)
  04f564c  clrldi 3, 31, 32
  04f5650  ld 31, 120(1)
  04f5654  addi 1, 1, 128
  04f5658  mtlr 0
  04f565c  blr
  04f5660  li 0, 32
  04f5664  mtctr 0
  04f5668  b 0x4f5674
  04f566c  addi 3, 3, 40
  04f5670  bdz 0x4f5648
  04f5674  clrldi 9, 3, 32
  04f5678  lwz 0, 0(9)
  04f567c  cmpwi 7, 0, 0
  04f5680  bf 30, 0x4f566c
  04f5684  addi 3, 3, 8
  04f5688  lwz 4, -32620(2)
  04f568c  li 0, 1
  04f5690  clrldi 3, 3, 32
  04f5694  li 5, 32
  04f5698  stw 0, 4(9)
  04f569c  stw 10, 0(9)
  04f56a0  bl 0x5cccec
  04f56a4  nop
  04f56a8  ld 0, 144(1)
  04f56ac  clrldi 3, 31, 32
  04f56b0  mtlr 0
  04f56b4  ld 31, 120(1)
  04f56b8  addi 1, 1, 128
  04f56bc  blr
  04f56c0  li 0, 0
  04f56c4  stw 0, 0(8)
  04f56c8  b 0x4f55d8

FUN_004f56cc:   # 0x4f56cc, 0xe4 bytes
  04f56cc  stdu 1, -112(1)
  04f56d0  mflr 0
  04f56d4  std 0, 128(1)
  04f56d8  lwz 10, 0(4)
  04f56dc  lwz 0, 4(4)
  04f56e0  cmpwi 7, 10, 0
  04f56e4  stw 0, 4(3)
  04f56e8  stw 10, 0(3)
  04f56ec  bt 30, 0x4f5748
  04f56f0  lwz 3, -32624(2)
  04f56f4  li 0, 32
  04f56f8  mr 11, 3
  04f56fc  mtctr 0
  04f5700  b 0x4f570c
  04f5704  addi 11, 11, 40
  04f5708  bdz 0x4f5758
  04f570c  clrldi 9, 11, 32
  04f5710  lwz 0, 0(9)
  04f5714  cmpw 7, 0, 10
  04f5718  bf 30, 0x4f5704
  04f571c  addi 0, 11, 4
  04f5720  clrldi 10, 0, 32
  04f5724  mr 11, 10
  04f5728  lwarx 9, 0, 11
  04f572c  addi 9, 9, 1
  04f5730  mr 11, 10
  04f5734  stwcx. 9, 0, 10
  04f5738  mfocrf 9, 128
  04f573c  rlwinm 9, 9, 0, 2, 2
  04f5740  cmpwi 7, 9, 0
  04f5744  bt 30, 0x4f5728
  04f5748  ld 0, 128(1)
  04f574c  addi 1, 1, 112
  04f5750  mtlr 0
  04f5754  blr
  04f5758  li 0, 32
  04f575c  mtctr 0
  04f5760  b 0x4f576c
  04f5764  addi 3, 3, 40
  04f5768  bdz 0x4f5748
  04f576c  clrldi 9, 3, 32
  04f5770  lwz 0, 0(9)
  04f5774  cmpwi 7, 0, 0
  04f5778  bf 30, 0x4f5764
  04f577c  addi 3, 3, 8
  04f5780  lwz 4, -32620(2)
  04f5784  li 0, 1
  04f5788  clrldi 3, 3, 32
  04f578c  li 5, 32
  04f5790  stw 0, 4(9)
  04f5794  stw 10, 0(9)
  04f5798  bl 0x5cccec
  04f579c  nop
  04f57a0  ld 0, 128(1)
  04f57a4  addi 1, 1, 112
  04f57a8  mtlr 0
  04f57ac  blr

FUN_004f57b0:   # 0x4f57b0, 0xe8 bytes
  04f57b0  stdu 1, -112(1)
  04f57b4  mflr 0
  04f57b8  std 0, 128(1)
  04f57bc  lwz 10, 0(4)
  04f57c0  lwz 0, 4(4)
  04f57c4  cmpwi 7, 10, 0
  04f57c8  stw 0, 4(3)
  04f57cc  stw 10, 0(3)
  04f57d0  bt 30, 0x4f5830
  04f57d4  lwz 3, -32624(2)
  04f57d8  li 0, 32
  04f57dc  mr 11, 3
  04f57e0  mtctr 0
  04f57e4  b 0x4f57f0
  04f57e8  addi 11, 11, 40
  04f57ec  bdz 0x4f5840
  04f57f0  clrldi 9, 11, 32
  04f57f4  lwz 0, 0(9)
  04f57f8  cmpw 7, 0, 10
  04f57fc  bf 30, 0x4f57e8
  04f5800  addi 0, 11, 4
  04f5804  clrldi 10, 0, 32
  04f5808  mr 11, 10
  04f580c  nop
  04f5810  lwarx 9, 0, 11
  04f5814  addi 9, 9, 1
  04f5818  mr 11, 10
  04f581c  stwcx. 9, 0, 10
  04f5820  mfocrf 9, 128
  04f5824  rlwinm 9, 9, 0, 2, 2
  04f5828  cmpwi 7, 9, 0
  04f582c  bt 30, 0x4f5810
  04f5830  ld 0, 128(1)
  04f5834  addi 1, 1, 112
  04f5838  mtlr 0
  04f583c  blr
  04f5840  li 0, 32
  04f5844  mtctr 0
  04f5848  b 0x4f5854
  04f584c  addi 3, 3, 40
  04f5850  bdz 0x4f5830
  04f5854  clrldi 9, 3, 32
  04f5858  lwz 0, 0(9)
  04f585c  cmpwi 7, 0, 0
  04f5860  bf 30, 0x4f584c
  04f5864  addi 3, 3, 8
  04f5868  lwz 4, -32620(2)
  04f586c  li 0, 1
  04f5870  clrldi 3, 3, 32
  04f5874  li 5, 32
  04f5878  stw 0, 4(9)
  04f587c  stw 10, 0(9)
  04f5880  bl 0x5cccec
  04f5884  nop
  04f5888  ld 0, 128(1)
  04f588c  addi 1, 1, 112
  04f5890  mtlr 0
  04f5894  blr

FUN_004f5898:   # 0x4f5898, 0x100 bytes
  04f5898  li 10, 0
  04f589c  mflr 0
  04f58a0  stdu 1, -112(1)
  04f58a4  std 0, 128(1)
  04f58a8  subfic 0, 10, 32
  04f58ac  stw 5, 4(3)
  04f58b0  clrldi 0, 0, 32
  04f58b4  stw 4, 0(3)
  04f58b8  mr 8, 4
  04f58bc  lwz 3, -32624(2)
  04f58c0  mtctr 0
  04f58c4  b 0x4f58cc
  04f58c8  bdz 0x4f5930
  04f58cc  slwi 9, 10, 5
  04f58d0  slwi 0, 10, 3
  04f58d4  addi 10, 10, 1
  04f58d8  add 0, 0, 9
  04f58dc  add 11, 0, 3
  04f58e0  clrldi 9, 11, 32
  04f58e4  lwz 0, 0(9)
  04f58e8  cmpw 7, 0, 8
  04f58ec  bf 30, 0x4f58c8
  04f58f0  addi 0, 11, 4
  04f58f4  clrldi 10, 0, 32
  04f58f8  mr 11, 10
  04f58fc  nop
  04f5900  lwarx 9, 0, 11
  04f5904  addi 9, 9, 1
  04f5908  mr 11, 10
  04f590c  stwcx. 9, 0, 10
  04f5910  mfocrf 9, 128
  04f5914  rlwinm 9, 9, 0, 2, 2
  04f5918  cmpwi 7, 9, 0
  04f591c  bt 30, 0x4f5900
  04f5920  ld 0, 128(1)
  04f5924  addi 1, 1, 112
  04f5928  mtlr 0
  04f592c  blr
  04f5930  li 0, 32
  04f5934  mtctr 0
  04f5938  b 0x4f5944
  04f593c  addi 3, 3, 40
  04f5940  bdz 0x4f5920
  04f5944  clrldi 9, 3, 32
  04f5948  lwz 0, 0(9)
  04f594c  cmpwi 7, 0, 0
  04f5950  bf 30, 0x4f593c
  04f5954  cmpwi 7, 6, 0
  04f5958  li 0, 1
  04f595c  stw 8, 0(9)
  04f5960  stw 0, 4(9)
  04f5964  bt 30, 0x4f5990
  04f5968  addi 3, 3, 8
  04f596c  clrldi 4, 6, 32
  04f5970  clrldi 3, 3, 32
  04f5974  li 5, 32
  04f5978  bl 0x5cccec
  04f597c  nop
  04f5980  ld 0, 128(1)
  04f5984  addi 1, 1, 112
  04f5988  mtlr 0
  04f598c  blr
  04f5990  lwz 6, -32620(2)
  04f5994  b 0x4f5968

FUN_004f5998:   # 0x4f5998, 0x100 bytes
  04f5998  li 10, 0
  04f599c  mflr 0
  04f59a0  stdu 1, -112(1)
  04f59a4  std 0, 128(1)
  04f59a8  subfic 0, 10, 32
  04f59ac  stw 5, 4(3)
  04f59b0  clrldi 0, 0, 32
  04f59b4  stw 4, 0(3)
  04f59b8  mr 8, 4
  04f59bc  lwz 3, -32624(2)
  04f59c0  mtctr 0
  04f59c4  b 0x4f59cc
  04f59c8  bdz 0x4f5a30
  04f59cc  slwi 9, 10, 5
  04f59d0  slwi 0, 10, 3
  04f59d4  addi 10, 10, 1
  04f59d8  add 0, 0, 9
  04f59dc  add 11, 0, 3
  04f59e0  clrldi 9, 11, 32
  04f59e4  lwz 0, 0(9)
  04f59e8  cmpw 7, 0, 8
  04f59ec  bf 30, 0x4f59c8
  04f59f0  addi 0, 11, 4
  04f59f4  clrldi 10, 0, 32
  04f59f8  mr 11, 10
  04f59fc  nop
  04f5a00  lwarx 9, 0, 11
  04f5a04  addi 9, 9, 1
  04f5a08  mr 11, 10
  04f5a0c  stwcx. 9, 0, 10
  04f5a10  mfocrf 9, 128
  04f5a14  rlwinm 9, 9, 0, 2, 2
  04f5a18  cmpwi 7, 9, 0
  04f5a1c  bt 30, 0x4f5a00
  04f5a20  ld 0, 128(1)
  04f5a24  addi 1, 1, 112
  04f5a28  mtlr 0
  04f5a2c  blr
  04f5a30  li 0, 32
  04f5a34  mtctr 0
  04f5a38  b 0x4f5a44
  04f5a3c  addi 3, 3, 40
  04f5a40  bdz 0x4f5a20
  04f5a44  clrldi 9, 3, 32
  04f5a48  lwz 0, 0(9)
  04f5a4c  cmpwi 7, 0, 0
  04f5a50  bf 30, 0x4f5a3c
  04f5a54  cmpwi 7, 6, 0
  04f5a58  li 0, 1
  04f5a5c  stw 8, 0(9)
  04f5a60  stw 0, 4(9)
  04f5a64  bt 30, 0x4f5a90
  04f5a68  addi 3, 3, 8
  04f5a6c  clrldi 4, 6, 32
  04f5a70  clrldi 3, 3, 32
  04f5a74  li 5, 32
  04f5a78  bl 0x5cccec
  04f5a7c  nop
  04f5a80  ld 0, 128(1)
  04f5a84  addi 1, 1, 112
  04f5a88  mtlr 0
  04f5a8c  blr
  04f5a90  lwz 6, -32620(2)
  04f5a94  b 0x4f5a68

FUN_004f5a98:   # 0x4f5a98, 0x54 bytes
  04f5a98  stdu 1, -128(1)
  04f5a9c  mflr 0
  04f5aa0  std 0, 144(1)
  04f5aa4  std 31, 120(1)
  04f5aa8  ori 31, 3, 0
  04f5aac  li 6, 0
  04f5ab0  addic 3, 31, 244
  04f5ab4  li 4, 0
  04f5ab8  li 5, 256
  04f5abc  stw 6, 0(31)
  04f5ac0  stb 6, 4(31)
  04f5ac4  stw 6, 12(31)
  04f5ac8  bl 0x5d0140
  04f5acc  nop
  04f5ad0  li 3, 10075
  04f5ad4  stw 3, 500(31)
  04f5ad8  ld 0, 144(1)
  04f5adc  mtlr 0
  04f5ae0  ld 31, 120(1)
  04f5ae4  addi 1, 1, 128
  04f5ae8  blr

FUN_004f5aec:   # 0x4f5aec, 0x54 bytes
  04f5aec  stdu 1, -128(1)
  04f5af0  mflr 0
  04f5af4  std 0, 144(1)
  04f5af8  std 31, 120(1)
  04f5afc  ori 31, 3, 0
  04f5b00  li 6, 0
  04f5b04  addic 3, 31, 244
  04f5b08  li 4, 0
  04f5b0c  li 5, 256
  04f5b10  stw 6, 0(31)
  04f5b14  stb 6, 4(31)
  04f5b18  stw 6, 12(31)
  04f5b1c  bl 0x5d0140
  04f5b20  nop
  04f5b24  li 3, 10075
  04f5b28  stw 3, 500(31)
  04f5b2c  ld 0, 144(1)
  04f5b30  mtlr 0
  04f5b34  ld 31, 120(1)
  04f5b38  addi 1, 1, 128
  04f5b3c  blr

FUN_004f5b40:   # 0x4f5b40, 0xa4 bytes
  04f5b40  stdu 1, -128(1)
  04f5b44  mflr 0
  04f5b48  std 0, 144(1)
  04f5b4c  std 31, 120(1)
  04f5b50  lis 4, 345
  04f5b54  ori 31, 3, 0
  04f5b58  lwz 3, 13004(4)
  04f5b5c  std 30, 112(1)
  04f5b60  cmpwi 3, 0
  04f5b64  bt 2, 0x4f5b6c
  04f5b68  b 0x4f5bcc
  04f5b6c  lis 5, 144
  04f5b70  li 3, 768
  04f5b74  ori 4, 31, 0
  04f5b78  li 30, 0
  04f5b7c  stw 31, 11920(5)
  04f5b80  bl 0x4fe218
  04f5b84  nop
  04f5b88  ori 31, 3, 0
  04f5b8c  cmpwi 31, 0
  04f5b90  bt 2, 0x4f5bc0
  04f5b94  stw 30, 0(31)
  04f5b98  addic 3, 31, 244
  04f5b9c  stb 30, 4(31)
  04f5ba0  li 4, 0
  04f5ba4  stw 30, 12(31)
  04f5ba8  li 5, 256
  04f5bac  bl 0x5d0140
  04f5bb0  nop
  04f5bb4  li 3, 10075
  04f5bb8  ori 30, 31, 0
  04f5bbc  stw 3, 500(31)
  04f5bc0  lis 4, 345
  04f5bc4  ori 3, 30, 0
  04f5bc8  stw 30, 13004(4)
  04f5bcc  ld 0, 144(1)
  04f5bd0  mtlr 0
  04f5bd4  ld 30, 112(1)
  04f5bd8  ld 31, 120(1)
  04f5bdc  addi 1, 1, 128
  04f5be0  blr

FUN_004f5be4:   # 0x4f5be4, 0x550 bytes
  04f5be4  stdu 1, -400(1)
  04f5be8  mflr 0
  04f5bec  std 0, 416(1)
  04f5bf0  std 31, 392(1)
  04f5bf4  ori 31, 3, 0
  04f5bf8  lbz 3, 4(3)
  04f5bfc  std 30, 384(1)
  04f5c00  std 29, 376(1)
  04f5c04  std 28, 368(1)
  04f5c08  std 27, 360(1)
  04f5c0c  cmpwi 3, 0
  04f5c10  bf 2, 0x4f6110
  04f5c14  lis 3, 345
  04f5c18  lwz 3, 13008(3)
  04f5c1c  bl 0x4f93f0
  04f5c20  nop
  04f5c24  cmpwi 3, 0
  04f5c28  bt 2, 0x4f6110
  04f5c2c  lis 3, 102
  04f5c30  addic 30, 3, -6656
  04f5c34  ori 3, 30, 0
  04f5c38  bl 0x4ffc9c
  04f5c3c  nop
  04f5c40  lis 3, 102
  04f5c44  addic 3, 3, -6624
  04f5c48  bl 0x4ffc9c
  04f5c4c  nop
  04f5c50  ori 3, 30, 0
  04f5c54  bl 0x4ffc9c
  04f5c58  nop
  04f5c5c  bl 0x54049c
  04f5c60  nop
  04f5c64  vspltisw 2, 0
  04f5c68  li 4, 112
  04f5c6c  addic 30, 1, 112
  04f5c70  ori 3, 30, 0
  04f5c74  stvx 2, 4, 1
  04f5c78  bl 0x5acbcc
  04f5c7c  nop
  04f5c80  lis 3, 144
  04f5c84  li 4, 0
  04f5c88  lwz 3, 11984(3)
  04f5c8c  bl 0x504db0
  04f5c90  nop
  04f5c94  cmpwi 3, 0
  04f5c98  bt 2, 0x4f5cc4
  04f5c9c  lis 3, 112
  04f5ca0  lis 4, 112
  04f5ca4  addic 3, 3, 14544
  04f5ca8  lis 5, 112
  04f5cac  addic 4, 4, 14552
  04f5cb0  addic 5, 5, 14560
  04f5cb4  stw 3, 112(1)
  04f5cb8  stw 4, 116(1)
  04f5cbc  stw 5, 120(1)
  04f5cc0  b 0x4f5d8c
  04f5cc4  lis 3, 144
  04f5cc8  li 4, 1
  04f5ccc  lwz 3, 11984(3)
  04f5cd0  bl 0x504db0
  04f5cd4  nop
  04f5cd8  cmpwi 3, 0
  04f5cdc  bt 2, 0x4f5d08
  04f5ce0  lis 3, 112
  04f5ce4  lis 4, 112
  04f5ce8  addic 3, 3, 14616
  04f5cec  lis 5, 112
  04f5cf0  addic 4, 4, 14624
  04f5cf4  addic 5, 5, 14632
  04f5cf8  stw 3, 112(1)
  04f5cfc  stw 4, 116(1)
  04f5d00  stw 5, 120(1)
  04f5d04  b 0x4f5d8c
  04f5d08  lis 3, 144
  04f5d0c  li 4, 3
  04f5d10  lwz 3, 11984(3)
  04f5d14  bl 0x504db0
  04f5d18  nop
  04f5d1c  cmpwi 3, 0
  04f5d20  bt 2, 0x4f5d4c
  04f5d24  lis 3, 112
  04f5d28  lis 4, 112
  04f5d2c  addic 3, 3, 14592
  04f5d30  lis 5, 112
  04f5d34  addic 4, 4, 14600
  04f5d38  addic 5, 5, 14608
  04f5d3c  stw 3, 112(1)
  04f5d40  stw 4, 116(1)
  04f5d44  stw 5, 120(1)
  04f5d48  b 0x4f5d8c
  04f5d4c  lis 3, 144
  04f5d50  li 4, 2
  04f5d54  lwz 3, 11984(3)
  04f5d58  bl 0x504db0
  04f5d5c  nop
  04f5d60  cmpwi 3, 0
  04f5d64  bt 2, 0x4f5d8c
  04f5d68  lis 3, 112
  04f5d6c  lis 4, 112
  04f5d70  addic 3, 3, 14568
  04f5d74  lis 5, 112
  04f5d78  addic 4, 4, 14576
  04f5d7c  addic 5, 5, 14584
  04f5d80  stw 3, 112(1)
  04f5d84  stw 4, 116(1)
  04f5d88  stw 5, 120(1)
  04f5d8c  ori 3, 30, 0
  04f5d90  bl 0x5acc40
  04f5d94  nop
  04f5d98  li 4, 0
  04f5d9c  addic 30, 1, 164
  04f5da0  ori 3, 30, 0
  04f5da4  stw 4, 164(1)
  04f5da8  stw 4, 168(1)
  04f5dac  stw 4, 172(1)
  04f5db0  stw 4, 176(1)
  04f5db4  stw 4, 180(1)
  04f5db8  stw 4, 184(1)
  04f5dbc  bl 0x53c5cc
  04f5dc0  nop
  04f5dc4  lis 3, 64
  04f5dc8  lis 4, 0
  04f5dcc  li 5, 1
  04f5dd0  ori 4, 4, 32768
  04f5dd4  stw 3, 176(1)
  04f5dd8  ori 3, 30, 0
  04f5ddc  stw 5, 184(1)
  04f5de0  stw 4, 180(1)
  04f5de4  bl 0x55c668
  04f5de8  nop
  04f5dec  ori 30, 3, 0
  04f5df0  cmpwi 30, 0
  04f5df4  bt 2, 0x4f5e0c
  04f5df8  lis 3, 102
  04f5dfc  ori 4, 30, 0
  04f5e00  addic 3, 3, -6592
  04f5e04  bl 0x4ff6d0
  04f5e08  nop
  04f5e0c  li 28, 0
  04f5e10  addic 30, 1, 132
  04f5e14  ori 3, 30, 0
  04f5e18  stw 28, 132(1)
  04f5e1c  stw 28, 136(1)
  04f5e20  stw 28, 140(1)
  04f5e24  bl 0x5a462c
  04f5e28  nop
  04f5e2c  lis 4, 0
  04f5e30  li 27, 1
  04f5e34  ori 4, 4, 32768
  04f5e38  ori 3, 30, 0
  04f5e3c  stw 27, 136(1)
  04f5e40  stw 4, 132(1)
  04f5e44  bl 0x5a117c
  04f5e48  nop
  04f5e4c  bl 0x56fc98
  04f5e50  nop
  04f5e54  stw 28, 144(1)
  04f5e58  stw 28, 148(1)
  04f5e5c  addic 30, 1, 144
  04f5e60  stw 28, 152(1)
  04f5e64  stw 28, 156(1)
  04f5e68  ori 3, 30, 0
  04f5e6c  stw 28, 160(1)
  04f5e70  bl 0x573e34
  04f5e74  nop
  04f5e78  li 4, 4096
  04f5e7c  li 5, 128
  04f5e80  ori 3, 30, 0
  04f5e84  stw 4, 152(1)
  04f5e88  stw 5, 148(1)
  04f5e8c  bl 0x5744ac
  04f5e90  nop
  04f5e94  addic 29, 1, 248
  04f5e98  li 4, 0
  04f5e9c  ori 3, 29, 0
  04f5ea0  li 5, 100
  04f5ea4  bl 0x5d0140
  04f5ea8  nop
  04f5eac  stw 28, 188(1)
  04f5eb0  stw 28, 192(1)
  04f5eb4  ori 3, 29, 0
  04f5eb8  stw 28, 196(1)
  04f5ebc  addic 30, 1, 188
  04f5ec0  stw 28, 200(1)
  04f5ec4  stw 28, 204(1)
  04f5ec8  stw 28, 208(1)
  04f5ecc  stw 28, 212(1)
  04f5ed0  bl 0x53f9b4
  04f5ed4  nop
  04f5ed8  lis 3, 144
  04f5edc  stw 27, 332(1)
  04f5ee0  li 4, 0
  04f5ee4  lwz 3, 11984(3)
  04f5ee8  bl 0x504db0
  04f5eec  nop
  04f5ef0  cmpwi 3, 0
  04f5ef4  bt 2, 0x4f5f08
  04f5ef8  lis 3, 112
  04f5efc  addic 3, 3, 14544
  04f5f00  stw 3, 344(1)
  04f5f04  b 0x4f5f88
  04f5f08  lis 3, 144
  04f5f0c  li 4, 1
  04f5f10  lwz 3, 11984(3)
  04f5f14  bl 0x504db0
  04f5f18  nop
  04f5f1c  cmpwi 3, 0
  04f5f20  bt 2, 0x4f5f34
  04f5f24  lis 3, 112
  04f5f28  addic 3, 3, 14616
  04f5f2c  stw 3, 344(1)
  04f5f30  b 0x4f5f88
  04f5f34  lis 3, 144
  04f5f38  li 4, 3
  04f5f3c  lwz 3, 11984(3)
  04f5f40  bl 0x504db0
  04f5f44  nop
  04f5f48  cmpwi 3, 0
  04f5f4c  bt 2, 0x4f5f60
  04f5f50  lis 3, 112
  04f5f54  addic 3, 3, 14592
  04f5f58  stw 3, 344(1)
  04f5f5c  b 0x4f5f88
  04f5f60  lis 3, 144
  04f5f64  li 4, 2
  04f5f68  lwz 3, 11984(3)
  04f5f6c  bl 0x504db0
  04f5f70  nop
  04f5f74  cmpwi 3, 0
  04f5f78  bt 2, 0x4f5f88
  04f5f7c  lis 3, 112
  04f5f80  addic 3, 3, 14568
  04f5f84  stw 3, 344(1)
  04f5f88  lis 3, 102
  04f5f8c  addic 28, 3, -6560
  04f5f90  bl 0x21358
  04f5f94  nop
  04f5f98  ori 4, 3, 0
  04f5f9c  ori 3, 28, 0
  04f5fa0  bl 0x4ffc9c
  04f5fa4  nop
  04f5fa8  ori 3, 29, 0
  04f5fac  ori 4, 30, 0
  04f5fb0  bl 0x53f7e4
  04f5fb4  nop
  04f5fb8  ori 29, 3, 0
  04f5fbc  cmpwi 29, 0
  04f5fc0  bt 2, 0x4f5fd8
  04f5fc4  lis 3, 102
  04f5fc8  ori 4, 29, 0
  04f5fcc  addic 3, 3, -6544
  04f5fd0  bl 0x4ff6d0
  04f5fd4  nop
  04f5fd8  lis 5, 113
  04f5fdc  addic 3, 1, 128
  04f5fe0  li 6, 0
  04f5fe4  addic 5, 5, 3832
  04f5fe8  li 4, 0
  04f5fec  bl 0x53f37c
  04f5ff0  nop
  04f5ff4  cmpwi 3, 0
  04f5ff8  bt 2, 0x4f6010
  04f5ffc  lis 5, 102
  04f6000  ori 4, 3, 0
  04f6004  addic 3, 5, -6512
  04f6008  bl 0x4ff6d0
  04f600c  nop
  04f6010  lis 3, 102
  04f6014  addic 30, 3, -6464
  04f6018  ori 3, 30, 0
  04f601c  bl 0x4ffc9c
  04f6020  nop
  04f6024  lis 3, 102
  04f6028  addic 3, 3, -6432
  04f602c  bl 0x4ffc9c
  04f6030  nop
  04f6034  ori 3, 30, 0
  04f6038  bl 0x4ffc9c
  04f603c  nop
  04f6040  li 3, 1
  04f6044  bl 0x583378
  04f6048  nop
  04f604c  cmpwi 3, 0
  04f6050  bt 2, 0x4f606c
  04f6054  lis 5, 102
  04f6058  ori 4, 3, 0
  04f605c  addic 3, 5, -6400
  04f6060  bl 0x4ff6d0
  04f6064  nop
  04f6068  b 0x4f6110
  04f606c  lis 3, 102
  04f6070  addic 30, 3, -6368
  04f6074  ori 3, 30, 0
  04f6078  bl 0x4ffc9c
  04f607c  nop
  04f6080  lis 3, 102
  04f6084  addic 3, 3, -6336
  04f6088  bl 0x4ffc9c
  04f608c  nop
  04f6090  ori 3, 30, 0
  04f6094  bl 0x4ffc9c
  04f6098  nop
  04f609c  addic 30, 1, 216
  04f60a0  ori 3, 30, 0
  04f60a4  bl 0x57fad4
  04f60a8  nop
  04f60ac  lis 5, 144
  04f60b0  li 6, 0
  04f60b4  ori 3, 30, 0
  04f60b8  addic 4, 31, 16
  04f60bc  lwz 5, 12516(5)
  04f60c0  lwz 5, 304(5)
  04f60c4  stw 6, 220(1)
  04f60c8  stw 5, 216(1)
  04f60cc  stw 6, 224(1)
  04f60d0  stw 6, 228(1)
  04f60d4  stw 6, 232(1)
  04f60d8  stw 6, 236(1)
  04f60dc  stw 6, 240(1)
  04f60e0  bl 0x584104
  04f60e4  nop
  04f60e8  cmpwi 3, 0
  04f60ec  bt 2, 0x4f6108
  04f60f0  lis 5, 102
  04f60f4  ori 4, 3, 0
  04f60f8  addic 3, 5, -6304
  04f60fc  bl 0x4ff6d0
  04f6100  nop
  04f6104  b 0x4f6110
  04f6108  li 3, 1
  04f610c  stb 3, 4(31)
  04f6110  ld 0, 416(1)
  04f6114  mtlr 0
  04f6118  ld 27, 360(1)
  04f611c  ld 28, 368(1)
  04f6120  ld 29, 376(1)
  04f6124  ld 30, 384(1)
  04f6128  ld 31, 392(1)
  04f612c  addi 1, 1, 400
  04f6130  blr

FUN_004f6134:   # 0x4f6134, 0xc8 bytes
  04f6134  stdu 1, -176(1)
  04f6138  mflr 0
  04f613c  std 0, 192(1)
  04f6140  std 31, 168(1)
  04f6144  lis 4, 102
  04f6148  std 30, 160(1)
  04f614c  ori 31, 3, 0
  04f6150  addic 30, 4, -6268
  04f6154  std 29, 152(1)
  04f6158  ori 3, 30, 0
  04f615c  bl 0x4ffc9c
  04f6160  nop
  04f6164  lis 3, 102
  04f6168  addic 3, 3, -6228
  04f616c  bl 0x4ffc9c
  04f6170  nop
  04f6174  ori 3, 30, 0
  04f6178  bl 0x4ffc9c
  04f617c  nop
  04f6180  addic 30, 1, 112
  04f6184  li 4, 0
  04f6188  ori 3, 30, 0
  04f618c  li 5, 38
  04f6190  bl 0x5d0140
  04f6194  nop
  04f6198  addic 4, 31, 64
  04f619c  addic 3, 1, 133
  04f61a0  li 5, 17
  04f61a4  bl 0x5c5ad0
  04f61a8  nop
  04f61ac  lis 4, 113
  04f61b0  addic 29, 31, 24
  04f61b4  ori 3, 30, 0
  04f61b8  addic 4, 4, 3936
  04f61bc  ori 5, 29, 0
  04f61c0  bl 0x57d370
  04f61c4  nop
  04f61c8  li 3, 0
  04f61cc  ori 4, 29, 0
  04f61d0  bl 0x582e74
  04f61d4  nop
  04f61d8  li 3, 1
  04f61dc  stw 3, 8(31)
  04f61e0  ld 0, 192(1)
  04f61e4  mtlr 0
  04f61e8  ld 29, 152(1)
  04f61ec  ld 30, 160(1)
  04f61f0  ld 31, 168(1)
  04f61f4  addi 1, 1, 176
  04f61f8  blr

FUN_004f61fc:   # 0x4f61fc, 0x7c bytes
  04f61fc  stdu 1, -176(1)
  04f6200  mflr 0
  04f6204  std 0, 192(1)
  04f6208  std 31, 168(1)
  04f620c  li 6, 0
  04f6210  ori 31, 3, 0
  04f6214  lis 4, 113
  04f6218  addic 3, 1, 112
  04f621c  stw 6, 112(1)
  04f6220  stw 6, 116(1)
  04f6224  addic 4, 4, 3928
  04f6228  stw 6, 120(1)
  04f622c  addic 5, 31, 24
  04f6230  stw 6, 124(1)
  04f6234  stw 6, 128(1)
  04f6238  stw 6, 132(1)
  04f623c  stw 6, 136(1)
  04f6240  stw 6, 140(1)
  04f6244  stw 6, 144(1)
  04f6248  stw 6, 148(1)
  04f624c  lwz 6, 508(31)
  04f6250  stw 6, 152(1)
  04f6254  bl 0x57dcd8
  04f6258  nop
  04f625c  li 3, 18
  04f6260  stw 3, 8(31)
  04f6264  ld 0, 192(1)
  04f6268  mtlr 0
  04f626c  ld 31, 168(1)
  04f6270  addi 1, 1, 176
  04f6274  blr

FUN_004f6278:   # 0x4f6278, 0x148 bytes
  04f6278  stdu 1, -432(1)
  04f627c  mflr 0
  04f6280  std 0, 448(1)
  04f6284  std 31, 424(1)
  04f6288  lis 4, 102
  04f628c  std 30, 416(1)
  04f6290  ori 31, 3, 0
  04f6294  addic 30, 4, -6188
  04f6298  ori 3, 30, 0
  04f629c  bl 0x4ffc9c
  04f62a0  nop
  04f62a4  lis 3, 102
  04f62a8  addic 3, 3, -6148
  04f62ac  bl 0x4ffc9c
  04f62b0  nop
  04f62b4  ori 3, 30, 0
  04f62b8  bl 0x4ffc9c
  04f62bc  nop
  04f62c0  addic 30, 1, 112
  04f62c4  li 4, 0
  04f62c8  ori 3, 30, 0
  04f62cc  li 5, 296
  04f62d0  bl 0x5d0140
  04f62d4  nop
  04f62d8  li 7, 19
  04f62dc  lwz 4, 16(31)
  04f62e0  lwz 3, 20(31)
  04f62e4  addic 6, 31, 88
  04f62e8  li 5, 0
  04f62ec  mtctr 7
  04f62f0  addc 7, 5, 6
  04f62f4  addc 8, 5, 1
  04f62f8  addc 9, 5, 31
  04f62fc  clrldi 7, 7, 32
  04f6300  clrldi 8, 8, 32
  04f6304  addic 5, 5, 8
  04f6308  lwz 9, 88(9)
  04f630c  extsw 5, 5
  04f6310  lwz 7, 4(7)
  04f6314  stw 9, 112(8)
  04f6318  stw 7, 116(8)
  04f631c  bdnz 0x4f62f0
  04f6320  ori 6, 3, 0
  04f6324  stw 4, 56(1)
  04f6328  addc 3, 31, 5
  04f632c  addc 5, 1, 5
  04f6330  lis 7, 113
  04f6334  clrldi 4, 5, 32
  04f6338  li 9, 256
  04f633c  lis 5, 113
  04f6340  lwz 3, 88(3)
  04f6344  addic 7, 7, 3864
  04f6348  lis 8, 113
  04f634c  addic 10, 5, 3872
  04f6350  stw 3, 112(4)
  04f6354  addic 8, 8, 3880
  04f6358  stw 9, 384(1)
  04f635c  ori 3, 30, 0
  04f6360  stw 7, 388(1)
  04f6364  addic 5, 31, 24
  04f6368  stw 10, 392(1)
  04f636c  stw 6, 60(1)
  04f6370  stw 8, 396(1)
  04f6374  ld 4, 56(1)
  04f6378  bl 0x583ca4
  04f637c  nop
  04f6380  cmpwi 3, 0
  04f6384  li 30, 15
  04f6388  bt 2, 0x4f63a4
  04f638c  lis 5, 102
  04f6390  ori 4, 3, 0
  04f6394  addic 3, 5, -6108
  04f6398  bl 0x4ff6d0
  04f639c  nop
  04f63a0  li 30, -1
  04f63a4  stw 30, 8(31)
  04f63a8  ld 0, 448(1)
  04f63ac  mtlr 0
  04f63b0  ld 30, 416(1)
  04f63b4  ld 31, 424(1)
  04f63b8  addi 1, 1, 432
  04f63bc  blr

FUN_004f63c0:   # 0x4f63c0, 0x94 bytes
  04f63c0  stdu 1, -128(1)
  04f63c4  mflr 0
  04f63c8  std 0, 144(1)
  04f63cc  std 31, 120(1)
  04f63d0  lis 4, 102
  04f63d4  std 30, 112(1)
  04f63d8  ori 31, 3, 0
  04f63dc  addic 30, 4, -6080
  04f63e0  ori 3, 30, 0
  04f63e4  bl 0x4ffc9c
  04f63e8  nop
  04f63ec  lis 3, 102
  04f63f0  addic 3, 3, -6032
  04f63f4  bl 0x4ffc9c
  04f63f8  nop
  04f63fc  ori 3, 30, 0
  04f6400  bl 0x4ffc9c
  04f6404  nop
  04f6408  li 3, 1
  04f640c  addic 4, 31, 24
  04f6410  bl 0x582e74
  04f6414  nop
  04f6418  cmpwi 3, 0
  04f641c  bt 2, 0x4f643c
  04f6420  lis 5, 102
  04f6424  ori 4, 3, 0
  04f6428  addic 3, 5, -5984
  04f642c  bl 0x4ff6d0
  04f6430  nop
  04f6434  li 3, -1
  04f6438  stw 3, 8(31)
  04f643c  ld 0, 144(1)
  04f6440  mtlr 0
  04f6444  ld 30, 112(1)
  04f6448  ld 31, 120(1)
  04f644c  addi 1, 1, 128
  04f6450  blr

FUN_004f6454:   # 0x4f6454, 0x68 bytes
  04f6454  stdu 1, -160(1)
  04f6458  mflr 0
  04f645c  std 0, 176(1)
  04f6460  std 31, 152(1)
  04f6464  std 30, 144(1)
  04f6468  addic 31, 1, 112
  04f646c  ori 30, 3, 0
  04f6470  li 4, 0
  04f6474  ori 3, 31, 0
  04f6478  li 5, 21
  04f647c  bl 0x5d0140
  04f6480  nop
  04f6484  lis 4, 113
  04f6488  ori 3, 31, 0
  04f648c  addic 5, 30, 24
  04f6490  addic 4, 4, 3920
  04f6494  bl 0x57d2a4
  04f6498  nop
  04f649c  li 3, 13
  04f64a0  stw 3, 8(30)
  04f64a4  ld 0, 176(1)
  04f64a8  mtlr 0
  04f64ac  ld 30, 144(1)
  04f64b0  ld 31, 152(1)
  04f64b4  addi 1, 1, 160
  04f64b8  blr

FUN_004f64bc:   # 0x4f64bc, 0x168 bytes
  04f64bc  stdu 1, -288(1)
  04f64c0  mflr 0
  04f64c4  std 0, 304(1)
  04f64c8  std 31, 280(1)
  04f64cc  lis 4, 102
  04f64d0  std 30, 272(1)
  04f64d4  ori 31, 3, 0
  04f64d8  addic 30, 4, -6368
  04f64dc  std 29, 264(1)
  04f64e0  std 28, 256(1)
  04f64e4  ori 3, 30, 0
  04f64e8  bl 0x4ffc9c
  04f64ec  nop
  04f64f0  lis 3, 102
  04f64f4  addic 3, 3, -5952
  04f64f8  bl 0x4ffc9c
  04f64fc  nop
  04f6500  ori 3, 30, 0
  04f6504  bl 0x4ffc9c
  04f6508  nop
  04f650c  addic 30, 1, 176
  04f6510  li 4, 0
  04f6514  ori 3, 30, 0
  04f6518  li 5, 80
  04f651c  bl 0x5d0140
  04f6520  nop
  04f6524  li 29, 0
  04f6528  li 11, 872
  04f652c  addic 28, 1, 112
  04f6530  clrldi 3, 28, 32
  04f6534  stw 29, 216(1)
  04f6538  sc
  04f653c  li 6, 16
  04f6540  ori 4, 28, 0
  04f6544  addic 3, 1, 221
  04f6548  li 5, 16
  04f654c  stb 6, 220(1)
  04f6550  bl 0x5c5ad0
  04f6554  nop
  04f6558  addic 28, 31, 24
  04f655c  ori 3, 30, 0
  04f6560  ori 4, 28, 0
  04f6564  bl 0x57d3fc
  04f6568  nop
  04f656c  stw 29, 128(1)
  04f6570  lis 4, 345
  04f6574  stw 29, 132(1)
  04f6578  lis 5, 2
  04f657c  stw 29, 136(1)
  04f6580  lis 6, 3
  04f6584  stw 29, 140(1)
  04f6588  ori 5, 5, 12
  04f658c  stw 29, 144(1)
  04f6590  ori 6, 6, 12
  04f6594  stw 29, 148(1)
  04f6598  addic 3, 1, 128
  04f659c  stw 29, 152(1)
  04f65a0  stw 29, 156(1)
  04f65a4  stw 29, 160(1)
  04f65a8  stw 29, 164(1)
  04f65ac  stw 29, 168(1)
  04f65b0  stw 29, 172(1)
  04f65b4  lwz 7, 13008(4)
  04f65b8  lis 4, 113
  04f65bc  addc 8, 7, 5
  04f65c0  addic 4, 4, 3904
  04f65c4  li 5, 0
  04f65c8  lwzx 7, 7, 6
  04f65cc  stw 8, 172(1)
  04f65d0  ori 6, 28, 0
  04f65d4  stw 7, 168(1)
  04f65d8  bl 0x57f9d0
  04f65dc  nop
  04f65e0  cmpwi 3, 0
  04f65e4  bt 2, 0x4f65fc
  04f65e8  lis 5, 102
  04f65ec  ori 4, 3, 0
  04f65f0  addic 3, 5, -5920
  04f65f4  bl 0x4ff6d0
  04f65f8  nop
  04f65fc  li 3, 11
  04f6600  stw 3, 8(31)
  04f6604  ld 0, 304(1)
  04f6608  mtlr 0
  04f660c  ld 28, 256(1)
  04f6610  ld 29, 264(1)
  04f6614  ld 30, 272(1)
  04f6618  ld 31, 280(1)
  04f661c  addi 1, 1, 288
  04f6620  blr

FUN_004f6624:   # 0x4f6624, 0xa0 bytes
  04f6624  stdu 1, -160(1)
  04f6628  mflr 0
  04f662c  std 0, 176(1)
  04f6630  li 6, 0
  04f6634  std 31, 152(1)
  04f6638  lis 4, 45
  04f663c  ori 31, 3, 0
  04f6640  li 7, 1
  04f6644  stw 6, 112(1)
  04f6648  stw 6, 116(1)
  04f664c  ori 8, 4, 50880
  04f6650  stw 6, 120(1)
  04f6654  lis 5, 113
  04f6658  stw 6, 124(1)
  04f665c  addic 3, 1, 112
  04f6660  stw 6, 128(1)
  04f6664  addic 4, 5, 3896
  04f6668  stw 6, 132(1)
  04f666c  addic 5, 31, 24
  04f6670  stw 7, 136(1)
  04f6674  stw 8, 44(31)
  04f6678  bl 0x57fafc
  04f667c  nop
  04f6680  cmpwi 3, 0
  04f6684  bt 2, 0x4f66a8
  04f6688  lis 5, 102
  04f668c  ori 4, 3, 0
  04f6690  addic 3, 5, -5888
  04f6694  bl 0x4ff6d0
  04f6698  nop
  04f669c  li 3, -1
  04f66a0  stw 3, 8(31)
  04f66a4  b 0x4f66b0
  04f66a8  li 3, 9
  04f66ac  stw 3, 8(31)
  04f66b0  ld 0, 176(1)
  04f66b4  mtlr 0
  04f66b8  ld 31, 152(1)
  04f66bc  addi 1, 1, 160
  04f66c0  blr

FUN_004f66c4:   # 0x4f66c4, 0x2f0 bytes
  04f66c4  stdu 1, -432(1)
  04f66c8  mflr 0
  04f66cc  std 0, 448(1)
  04f66d0  std 31, 424(1)
  04f66d4  lis 4, 102
  04f66d8  std 30, 416(1)
  04f66dc  ori 31, 3, 0
  04f66e0  addic 30, 4, -6188
  04f66e4  ori 3, 30, 0
  04f66e8  bl 0x4ffc9c
  04f66ec  nop
  04f66f0  lis 3, 102
  04f66f4  addic 3, 3, -5856
  04f66f8  bl 0x4ffc9c
  04f66fc  nop
  04f6700  ori 3, 30, 0
  04f6704  bl 0x4ffc9c
  04f6708  nop
  04f670c  addic 30, 1, 112
  04f6710  li 4, 0
  04f6714  ori 3, 30, 0
  04f6718  li 5, 296
  04f671c  bl 0x5d0140
  04f6720  nop
  04f6724  lwz 6, 500(31)
  04f6728  li 4, 0
  04f672c  addic 5, 31, 244
  04f6730  ori 3, 30, 0
  04f6734  extsw 6, 6
  04f6738  li 7, 1
  04f673c  bl 0x57fcb0
  04f6740  nop
  04f6744  li 4, 255
  04f6748  lis 3, 113
  04f674c  lis 5, 113
  04f6750  addic 7, 3, 3848
  04f6754  stw 4, 384(1)
  04f6758  lis 6, 102
  04f675c  addic 4, 5, 3856
  04f6760  addic 3, 6, -5816
  04f6764  stw 7, 388(1)
  04f6768  stw 4, 392(1)
  04f676c  bl 0x4ffc9c
  04f6770  nop
  04f6774  lis 3, 102
  04f6778  lwz 4, 112(1)
  04f677c  addic 3, 3, -5776
  04f6780  extsw 4, 4
  04f6784  bl 0x4ffc9c
  04f6788  nop
  04f678c  lwz 3, 112(1)
  04f6790  cmpwi 3, 1
  04f6794  bt 1, 0x4f67ac
  04f6798  cmpwi 3, -1
  04f679c  bf 1, 0x4f680c
  04f67a0  cmpwi 3, 0
  04f67a4  bf 1, 0x4f67c0
  04f67a8  b 0x4f67d4
  04f67ac  cmpwi 3, 2
  04f67b0  bf 1, 0x4f67e8
  04f67b4  cmpwi 3, 3
  04f67b8  bf 1, 0x4f67fc
  04f67bc  b 0x4f680c
  04f67c0  lis 3, 102
  04f67c4  addic 3, 3, -5736
  04f67c8  bl 0x4ffc9c
  04f67cc  nop
  04f67d0  b 0x4f680c
  04f67d4  lis 3, 102
  04f67d8  addic 3, 3, -5704
  04f67dc  bl 0x4ffc9c
  04f67e0  nop
  04f67e4  b 0x4f680c
  04f67e8  lis 3, 102
  04f67ec  addic 3, 3, -5664
  04f67f0  bl 0x4ffc9c
  04f67f4  nop
  04f67f8  b 0x4f680c
  04f67fc  lis 3, 102
  04f6800  addic 3, 3, -5624
  04f6804  bl 0x4ffc9c
  04f6808  nop
  04f680c  lis 3, 102
  04f6810  addic 4, 1, 116
  04f6814  addic 3, 3, -5576
  04f6818  bl 0x4ffc9c
  04f681c  nop
  04f6820  lis 3, 102
  04f6824  lwz 4, 116(1)
  04f6828  addic 3, 3, -5536
  04f682c  bl 0x4ffc9c
  04f6830  nop
  04f6834  lis 3, 102
  04f6838  addic 4, 1, 120
  04f683c  addic 3, 3, -5496
  04f6840  bl 0x4ffc9c
  04f6844  nop
  04f6848  lis 3, 102
  04f684c  lwz 4, 136(1)
  04f6850  addic 3, 3, -5456
  04f6854  bl 0x4ffc9c
  04f6858  nop
  04f685c  lis 3, 102
  04f6860  lwz 4, 140(1)
  04f6864  addic 3, 3, -5416
  04f6868  bl 0x4ffc9c
  04f686c  nop
  04f6870  lis 3, 102
  04f6874  addic 4, 1, 144
  04f6878  addic 3, 3, -5376
  04f687c  bl 0x4ffc9c
  04f6880  nop
  04f6884  lis 3, 102
  04f6888  lwz 4, 160(1)
  04f688c  addic 3, 3, -5336
  04f6890  bl 0x4ffc9c
  04f6894  nop
  04f6898  lis 3, 102
  04f689c  lwz 4, 164(1)
  04f68a0  addic 3, 3, -5296
  04f68a4  extsw 4, 4
  04f68a8  bl 0x4ffc9c
  04f68ac  nop
  04f68b0  lis 3, 102
  04f68b4  addic 4, 1, 168
  04f68b8  addic 3, 3, -5256
  04f68bc  bl 0x4ffc9c
  04f68c0  nop
  04f68c4  lis 3, 102
  04f68c8  addic 4, 1, 232
  04f68cc  addic 3, 3, -5216
  04f68d0  bl 0x4ffc9c
  04f68d4  nop
  04f68d8  lis 3, 102
  04f68dc  addic 4, 1, 249
  04f68e0  addic 3, 3, -5176
  04f68e4  bl 0x4ffc9c
  04f68e8  nop
  04f68ec  lis 3, 102
  04f68f0  lwz 4, 384(1)
  04f68f4  addic 3, 3, -5136
  04f68f8  bl 0x4ffc9c
  04f68fc  nop
  04f6900  lis 3, 102
  04f6904  lwz 4, 388(1)
  04f6908  addic 3, 3, -5096
  04f690c  bl 0x4ffc9c
  04f6910  nop
  04f6914  lis 3, 102
  04f6918  lwz 4, 392(1)
  04f691c  addic 3, 3, -5056
  04f6920  bl 0x4ffc9c
  04f6924  nop
  04f6928  lis 3, 102
  04f692c  lwz 4, 396(1)
  04f6930  addic 3, 3, -5016
  04f6934  bl 0x4ffc9c
  04f6938  nop
  04f693c  lis 3, 102
  04f6940  lwz 4, 400(1)
  04f6944  addic 3, 3, -4976
  04f6948  bl 0x4ffc9c
  04f694c  nop
  04f6950  lwz 3, 16(31)
  04f6954  addic 5, 31, 24
  04f6958  stw 3, 56(1)
  04f695c  lwz 3, 20(31)
  04f6960  stw 3, 60(1)
  04f6964  ori 3, 30, 0
  04f6968  ld 4, 56(1)
  04f696c  bl 0x583ca4
  04f6970  nop
  04f6974  cmpwi 3, 0
  04f6978  bt 2, 0x4f6988
  04f697c  li 3, -1
  04f6980  stw 3, 8(31)
  04f6984  b 0x4f699c
  04f6988  addic 3, 31, 504
  04f698c  bl 0x53e5c8
  04f6990  nop
  04f6994  li 3, 6
  04f6998  stw 3, 8(31)
  04f699c  ld 0, 448(1)
  04f69a0  mtlr 0
  04f69a4  ld 30, 416(1)
  04f69a8  ld 31, 424(1)
  04f69ac  addi 1, 1, 432
  04f69b0  blr

FUN_004f69b8:   # 0x4f69b8, 0x5a0 bytes
  04f69b8  stdu 1, -576(1)
  04f69bc  mflr 0
  04f69c0  std 0, 592(1)
  04f69c4  std 31, 568(1)
  04f69c8  std 30, 560(1)
  04f69cc  std 29, 552(1)
  04f69d0  ori 31, 3, 0
  04f69d4  bl 0x64f504
  04f69d8  ld 2, 40(1)
  04f69dc  lis 3, 273
  04f69e0  lwz 3, 5696(3)
  04f69e4  cmpwi 3, 0
  04f69e8  bt 2, 0x4f6a18
  04f69ec  lis 5, 79
  04f69f0  lwz 4, 0(3)
  04f69f4  std 2, 40(1)
  04f69f8  addi 5, 5, 27060
  04f69fc  lfs 1, 0(5)
  04f6a00  lwz 4, 8(4)
  04f6a04  lwz 5, 0(4)
  04f6a08  lwz 2, 4(4)
  04f6a0c  mtctr 5
  04f6a10  bcctrl 20, 30
  04f6a14  ld 2, 40(1)
  04f6a18  li 3, 1
  04f6a1c  bl 0x582c08
  04f6a20  nop
  04f6a24  cmpwi 3, 0
  04f6a28  bt 2, 0x4f6a40
  04f6a2c  lis 5, 102
  04f6a30  ori 4, 3, 0
  04f6a34  addic 3, 5, -4940
  04f6a38  bl 0x4ffc9c
  04f6a3c  nop
  04f6a40  lwz 3, 8(31)
  04f6a44  cmpwi 3, 9
  04f6a48  cmpwi 1, 3, 3
  04f6a4c  cmpwi 6, 3, -1
  04f6a50  cmpwi 7, 3, -2
  04f6a54  bt 1, 0x4f6aac
  04f6a58  bt 5, 0x4f6a7c
  04f6a5c  bt 25, 0x4f6a68
  04f6a60  bf 29, 0x4f6f3c
  04f6a64  b 0x4f6e94
  04f6a68  cmpwi 3, 1
  04f6a6c  bf 1, 0x4f6e78
  04f6a70  cmpwi 3, 2
  04f6a74  bf 1, 0x4f6b0c
  04f6a78  b 0x4f6b20
  04f6a7c  cmpwi 3, 6
  04f6a80  bt 1, 0x4f6a98
  04f6a84  cmpwi 3, 4
  04f6a88  bf 1, 0x4f6f3c
  04f6a8c  cmpwi 3, 5
  04f6a90  bf 1, 0x4f6b54
  04f6a94  b 0x4f6b60
  04f6a98  cmpwi 3, 7
  04f6a9c  bf 1, 0x4f6bac
  04f6aa0  cmpwi 3, 8
  04f6aa4  bf 1, 0x4f6cf0
  04f6aa8  b 0x4f6f3c
  04f6aac  cmpwi 3, 14
  04f6ab0  bt 1, 0x4f6adc
  04f6ab4  cmpwi 3, 11
  04f6ab8  bt 1, 0x4f6ac8
  04f6abc  cmpwi 3, 10
  04f6ac0  bf 1, 0x4f6c30
  04f6ac4  b 0x4f6f3c
  04f6ac8  cmpwi 3, 12
  04f6acc  bf 1, 0x4f6c3c
  04f6ad0  cmpwi 3, 13
  04f6ad4  bf 1, 0x4f6f3c
  04f6ad8  b 0x4f6c88
  04f6adc  cmpwi 3, 17
  04f6ae0  bt 1, 0x4f6af8
  04f6ae4  cmpwi 3, 15
  04f6ae8  bf 1, 0x4f6f3c
  04f6aec  cmpwi 3, 16
  04f6af0  bf 1, 0x4f6e14
  04f6af4  b 0x4f6e78
  04f6af8  cmpwi 3, 18
  04f6afc  bf 1, 0x4f6f3c
  04f6b00  cmpwi 3, 19
  04f6b04  bf 1, 0x4f6e6c
  04f6b08  b 0x4f6f3c
  04f6b0c  lis 3, 102
  04f6b10  addic 3, 3, -4908
  04f6b14  bl 0x4ffc9c
  04f6b18  nop
  04f6b1c  b 0x4f6f3c
  04f6b20  lis 3, 102
  04f6b24  addic 3, 3, -4876
  04f6b28  bl 0x4ffc9c
  04f6b2c  nop
  04f6b30  lis 3, 345
  04f6b34  lis 4, 113
  04f6b38  addic 4, 4, 3888
  04f6b3c  lwz 3, 13008(3)
  04f6b40  bl 0x4f7e34
  04f6b44  nop
  04f6b48  li 3, 4
  04f6b4c  stw 3, 8(31)
  04f6b50  b 0x4f6f3c
  04f6b54  ori 3, 31, 0
  04f6b58  bl 0x4f66c4
  04f6b5c  b 0x4f6f3c
  04f6b60  lis 3, 102
  04f6b64  addic 3, 3, -4852
  04f6b68  bl 0x4ffc9c
  04f6b6c  nop
  04f6b70  addic 3, 1, 112
  04f6b74  bl 0x53e5c8
  04f6b78  nop
  04f6b7c  lwz 3, 504(31)
  04f6b80  lwz 4, 112(1)
  04f6b84  subc 3, 4, 3
  04f6b88  cmplwi 3, 20000
  04f6b8c  bf 1, 0x4f6f3c
  04f6b90  lis 3, 102
  04f6b94  addic 3, 3, -4828
  04f6b98  bl 0x4ff6d0
  04f6b9c  nop
  04f6ba0  li 3, -1
  04f6ba4  stw 3, 8(31)
  04f6ba8  b 0x4f6f3c
  04f6bac  lis 3, 102
  04f6bb0  addic 3, 3, -4796
  04f6bb4  bl 0x4ffc9c
  04f6bb8  nop
  04f6bbc  li 6, 0
  04f6bc0  lis 5, 45
  04f6bc4  li 7, 1
  04f6bc8  ori 8, 5, 50880
  04f6bcc  stw 6, 116(1)
  04f6bd0  stw 6, 120(1)
  04f6bd4  lis 4, 113
  04f6bd8  stw 6, 124(1)
  04f6bdc  addic 3, 1, 116
  04f6be0  stw 6, 128(1)
  04f6be4  addic 4, 4, 3896
  04f6be8  stw 6, 132(1)
  04f6bec  addic 5, 31, 24
  04f6bf0  stw 6, 136(1)
  04f6bf4  stw 7, 140(1)
  04f6bf8  stw 8, 44(31)
  04f6bfc  bl 0x57fafc
  04f6c00  nop
  04f6c04  ori 4, 3, 0
  04f6c08  li 3, 9
  04f6c0c  cmpwi 4, 0
  04f6c10  bt 2, 0x4f6c28
  04f6c14  lis 3, 102
  04f6c18  addic 3, 3, -5888
  04f6c1c  bl 0x4ff6d0
  04f6c20  nop
  04f6c24  li 3, -1
  04f6c28  stw 3, 8(31)
  04f6c2c  b 0x4f6f3c
  04f6c30  ori 3, 31, 0
  04f6c34  bl 0x4f64bc
  04f6c38  b 0x4f6f3c
  04f6c3c  lis 3, 102
  04f6c40  addic 3, 3, -4772
  04f6c44  bl 0x4ffc9c
  04f6c48  nop
  04f6c4c  addic 30, 1, 484
  04f6c50  li 4, 0
  04f6c54  ori 3, 30, 0
  04f6c58  li 5, 21
  04f6c5c  bl 0x5d0140
  04f6c60  nop
  04f6c64  lis 4, 113
  04f6c68  ori 3, 30, 0
  04f6c6c  addic 5, 31, 24
  04f6c70  addic 4, 4, 3920
  04f6c74  bl 0x57d2a4
  04f6c78  nop
  04f6c7c  li 3, 13
  04f6c80  stw 3, 8(31)
  04f6c84  b 0x4f6f3c
  04f6c88  lis 3, 102
  04f6c8c  addic 30, 3, -6080
  04f6c90  ori 3, 30, 0
  04f6c94  bl 0x4ffc9c
  04f6c98  nop
  04f6c9c  lis 3, 102
  04f6ca0  addic 3, 3, -6032
  04f6ca4  bl 0x4ffc9c
  04f6ca8  nop
  04f6cac  ori 3, 30, 0
  04f6cb0  bl 0x4ffc9c
  04f6cb4  nop
  04f6cb8  li 3, 1
  04f6cbc  addic 4, 31, 24
  04f6cc0  bl 0x582e74
  04f6cc4  nop
  04f6cc8  cmpwi 3, 0
  04f6ccc  bt 2, 0x4f6f3c
  04f6cd0  lis 5, 102
  04f6cd4  ori 4, 3, 0
  04f6cd8  addic 3, 5, -5984
  04f6cdc  bl 0x4ff6d0
  04f6ce0  nop
  04f6ce4  li 3, -1
  04f6ce8  stw 3, 8(31)
  04f6cec  b 0x4f6f3c
  04f6cf0  lis 3, 102
  04f6cf4  addic 30, 3, -6188
  04f6cf8  ori 3, 30, 0
  04f6cfc  bl 0x4ffc9c
  04f6d00  nop
  04f6d04  lis 3, 102
  04f6d08  addic 3, 3, -6148
  04f6d0c  bl 0x4ffc9c
  04f6d10  nop
  04f6d14  ori 3, 30, 0
  04f6d18  bl 0x4ffc9c
  04f6d1c  nop
  04f6d20  addic 30, 1, 188
  04f6d24  li 4, 0
  04f6d28  ori 3, 30, 0
  04f6d2c  li 5, 296
  04f6d30  bl 0x5d0140
  04f6d34  nop
  04f6d38  li 7, 19
  04f6d3c  lwz 4, 16(31)
  04f6d40  addic 6, 31, 88
  04f6d44  lwz 3, 20(31)
  04f6d48  li 5, 0
  04f6d4c  mtctr 7
  04f6d50  addc 7, 5, 6
  04f6d54  addc 8, 5, 31
  04f6d58  addc 9, 5, 1
  04f6d5c  clrldi 7, 7, 32
  04f6d60  clrldi 9, 9, 32
  04f6d64  addic 5, 5, 8
  04f6d68  lwz 8, 88(8)
  04f6d6c  extsw 5, 5
  04f6d70  lwz 7, 4(7)
  04f6d74  stw 8, 188(9)
  04f6d78  stw 7, 192(9)
  04f6d7c  bdnz 0x4f6d50
  04f6d80  addc 6, 31, 5
  04f6d84  addc 5, 1, 5
  04f6d88  stw 4, 56(1)
  04f6d8c  li 8, 256
  04f6d90  clrldi 5, 5, 32
  04f6d94  lis 7, 113
  04f6d98  lwz 4, 88(6)
  04f6d9c  lis 6, 113
  04f6da0  addic 7, 7, 3880
  04f6da4  stw 4, 188(5)
  04f6da8  addic 6, 6, 3864
  04f6dac  lis 4, 113
  04f6db0  stw 8, 460(1)
  04f6db4  stw 3, 60(1)
  04f6db8  addic 5, 31, 24
  04f6dbc  addic 4, 4, 3872
  04f6dc0  stw 6, 464(1)
  04f6dc4  ori 3, 30, 0
  04f6dc8  stw 4, 468(1)
  04f6dcc  stw 7, 472(1)
  04f6dd0  ld 4, 56(1)
  04f6dd4  bl 0x583ca4
  04f6dd8  nop
  04f6ddc  ori 30, 3, 0
  04f6de0  cmpwi 30, 0
  04f6de4  bt 2, 0x4f6e08
  04f6de8  lis 3, 102
  04f6dec  ori 4, 30, 0
  04f6df0  addic 3, 3, -6108
  04f6df4  bl 0x4ff6d0
  04f6df8  nop
  04f6dfc  li 3, -1
  04f6e00  stw 3, 8(31)
  04f6e04  b 0x4f6f3c
  04f6e08  li 3, 15
  04f6e0c  stw 3, 8(31)
  04f6e10  b 0x4f6f3c
  04f6e14  li 6, 0
  04f6e18  lis 4, 113
  04f6e1c  addic 3, 1, 144
  04f6e20  addic 5, 31, 24
  04f6e24  stw 6, 144(1)
  04f6e28  addic 4, 4, 3928
  04f6e2c  stw 6, 148(1)
  04f6e30  stw 6, 152(1)
  04f6e34  stw 6, 156(1)
  04f6e38  stw 6, 160(1)
  04f6e3c  stw 6, 164(1)
  04f6e40  stw 6, 168(1)
  04f6e44  stw 6, 172(1)
  04f6e48  stw 6, 176(1)
  04f6e4c  stw 6, 180(1)
  04f6e50  lwz 6, 508(31)
  04f6e54  stw 6, 184(1)
  04f6e58  bl 0x57dcd8
  04f6e5c  nop
  04f6e60  li 3, 18
  04f6e64  stw 3, 8(31)
  04f6e68  b 0x4f6f3c
  04f6e6c  li 3, 1
  04f6e70  stw 3, 8(31)
  04f6e74  b 0x4f6f3c
  04f6e78  li 3, 0
  04f6e7c  addic 4, 31, 24
  04f6e80  bl 0x582e74
  04f6e84  nop
  04f6e88  li 3, 1
  04f6e8c  stw 3, 8(31)
  04f6e90  b 0x4f6f3c
  04f6e94  lis 3, 102
  04f6e98  addic 3, 3, -4740
  04f6e9c  bl 0x4ffc9c
  04f6ea0  nop
  04f6ea4  lis 3, 102
  04f6ea8  addic 30, 3, -6268
  04f6eac  ori 3, 30, 0
  04f6eb0  bl 0x4ffc9c
  04f6eb4  nop
  04f6eb8  lis 3, 102
  04f6ebc  addic 3, 3, -6228
  04f6ec0  bl 0x4ffc9c
  04f6ec4  nop
  04f6ec8  ori 3, 30, 0
  04f6ecc  bl 0x4ffc9c
  04f6ed0  nop
  04f6ed4  addic 30, 1, 505
  04f6ed8  li 4, 0
  04f6edc  ori 3, 30, 0
  04f6ee0  li 5, 38
  04f6ee4  bl 0x5d0140
  04f6ee8  nop
  04f6eec  addic 4, 31, 64
  04f6ef0  addic 3, 1, 526
  04f6ef4  li 5, 17
  04f6ef8  bl 0x5c5ad0
  04f6efc  nop
  04f6f00  lis 4, 113
  04f6f04  addic 29, 31, 24
  04f6f08  ori 3, 30, 0
  04f6f0c  addic 4, 4, 3936
  04f6f10  ori 5, 29, 0
  04f6f14  bl 0x57d370
  04f6f18  nop
  04f6f1c  li 3, 0
  04f6f20  ori 4, 29, 0
  04f6f24  bl 0x582e74
  04f6f28  nop
  04f6f2c  li 3, 1
  04f6f30  li 4, -1
  04f6f34  stw 3, 8(31)
  04f6f38  stw 4, 12(31)
  04f6f3c  ld 0, 592(1)
  04f6f40  mtlr 0
  04f6f44  ld 29, 552(1)
  04f6f48  ld 30, 560(1)
  04f6f4c  ld 31, 568(1)
  04f6f50  addi 1, 1, 576
  04f6f54  blr

FUN_004f6f58:   # 0x4f6f58, 0xbc bytes
  04f6f58  stdu 1, -416(1)
  04f6f5c  mflr 0
  04f6f60  std 0, 432(1)
  04f6f64  std 31, 408(1)
  04f6f68  lis 4, 102
  04f6f6c  std 30, 400(1)
  04f6f70  ori 31, 3, 0
  04f6f74  addic 30, 4, -4724
  04f6f78  ori 3, 30, 0
  04f6f7c  bl 0x4ffc9c
  04f6f80  nop
  04f6f84  lis 3, 102
  04f6f88  addic 3, 3, -4692
  04f6f8c  bl 0x4ffc9c
  04f6f90  nop
  04f6f94  ori 3, 30, 0
  04f6f98  bl 0x4ffc9c
  04f6f9c  nop
  04f6fa0  addic 30, 1, 112
  04f6fa4  li 4, 0
  04f6fa8  ori 3, 30, 0
  04f6fac  li 5, 276
  04f6fb0  bl 0x5d0140
  04f6fb4  nop
  04f6fb8  ori 3, 30, 0
  04f6fbc  bl 0x53c66c
  04f6fc0  nop
  04f6fc4  lis 3, 113
  04f6fc8  lis 4, 102
  04f6fcc  addic 6, 3, 3840
  04f6fd0  ori 3, 30, 0
  04f6fd4  addic 4, 4, -4660
  04f6fd8  li 5, 256
  04f6fdc  stw 6, 384(1)
  04f6fe0  bl 0x5cccec
  04f6fe4  nop
  04f6fe8  ori 3, 30, 0
  04f6fec  bl 0x53e008
  04f6ff0  nop
  04f6ff4  li 3, 2
  04f6ff8  stw 3, 8(31)
  04f6ffc  ld 0, 432(1)
  04f7000  mtlr 0
  04f7004  ld 30, 400(1)
  04f7008  ld 31, 408(1)
  04f700c  addi 1, 1, 416
  04f7010  blr

FUN_004f7014:   # 0x4f7014, 0x104 bytes
  04f7014  stdu 1, -416(1)
  04f7018  mflr 0
  04f701c  std 0, 432(1)
  04f7020  std 31, 408(1)
  04f7024  lis 4, 102
  04f7028  std 30, 400(1)
  04f702c  ori 31, 3, 0
  04f7030  addic 30, 4, -4640
  04f7034  ori 3, 30, 0
  04f7038  bl 0x4ffc9c
  04f703c  nop
  04f7040  lis 3, 102
  04f7044  addic 3, 3, -4600
  04f7048  bl 0x4ffc9c
  04f704c  nop
  04f7050  ori 3, 30, 0
  04f7054  bl 0x4ffc9c
  04f7058  nop
  04f705c  lbz 3, 244(31)
  04f7060  cmpwi 3, 0
  04f7064  bf 2, 0x4f70f8
  04f7068  lis 3, 102
  04f706c  addic 30, 3, -4724
  04f7070  ori 3, 30, 0
  04f7074  bl 0x4ffc9c
  04f7078  nop
  04f707c  lis 3, 102
  04f7080  addic 3, 3, -4692
  04f7084  bl 0x4ffc9c
  04f7088  nop
  04f708c  ori 3, 30, 0
  04f7090  bl 0x4ffc9c
  04f7094  nop
  04f7098  addic 30, 1, 112
  04f709c  li 4, 0
  04f70a0  ori 3, 30, 0
  04f70a4  li 5, 276
  04f70a8  bl 0x5d0140
  04f70ac  nop
  04f70b0  ori 3, 30, 0
  04f70b4  bl 0x53c66c
  04f70b8  nop
  04f70bc  lis 4, 113
  04f70c0  ori 3, 30, 0
  04f70c4  addic 6, 4, 3840
  04f70c8  lis 4, 102
  04f70cc  li 5, 256
  04f70d0  addic 4, 4, -4660
  04f70d4  stw 6, 384(1)
  04f70d8  bl 0x5cccec
  04f70dc  nop
  04f70e0  ori 3, 30, 0
  04f70e4  bl 0x53e008
  04f70e8  nop
  04f70ec  li 3, 2
  04f70f0  stw 3, 8(31)
  04f70f4  b 0x4f7100
  04f70f8  ori 3, 31, 0
  04f70fc  bl 0x4f66c4
  04f7100  ld 0, 432(1)
  04f7104  mtlr 0
  04f7108  ld 30, 400(1)
  04f710c  ld 31, 408(1)
  04f7110  addi 1, 1, 416
  04f7114  blr

FUN_004f7118:   # 0x4f7118, 0x8 bytes
  04f7118  stw 4, 0(3)
  04f711c  blr

FUN_004f7120:   # 0x4f7120, 0x8 bytes
  04f7120  li 3, 0
  04f7124  blr

FUN_004f7128:   # 0x4f7128, 0x78 bytes
  04f7128  stdu 1, -128(1)
  04f712c  mflr 0
  04f7130  std 0, 144(1)
  04f7134  std 31, 120(1)
  04f7138  lis 31, 345
  04f713c  lwz 4, 260(3)
  04f7140  cmpwi 4, 0
  04f7144  lwz 31, 13004(31)
  04f7148  bf 2, 0x4f7158
  04f714c  lwz 5, 256(3)
  04f7150  cmplwi 5, 1
  04f7154  bf 0, 0x4f7170
  04f7158  lis 3, 102
  04f715c  addic 3, 3, -4564
  04f7160  bl 0x4ff6d0
  04f7164  nop
  04f7168  li 4, -1
  04f716c  b 0x4f7188
  04f7170  ori 4, 3, 0
  04f7174  addic 3, 31, 244
  04f7178  li 5, 15
  04f717c  bl 0x5cccec
  04f7180  nop
  04f7184  li 4, 3
  04f7188  stw 4, 8(31)
  04f718c  ld 0, 144(1)
  04f7190  mtlr 0
  04f7194  ld 31, 120(1)
  04f7198  addi 1, 1, 128
  04f719c  blr

FUN_004f71a0:   # 0x4f71a0, 0x34 bytes
  04f71a0  lwz 3, 4(3)
  04f71a4  cmpwi 3, 1
  04f71a8  bf 2, 0x4f71c0
  04f71ac  lis 3, 345
  04f71b0  li 4, 7
  04f71b4  lwz 3, 13004(3)
  04f71b8  stw 4, 8(3)
  04f71bc  b 0x4f71d0
  04f71c0  lis 3, 345
  04f71c4  li 4, -1
  04f71c8  lwz 3, 13004(3)
  04f71cc  stw 4, 8(3)
  04f71d0  blr

FUN_004f71d4:   # 0x4f71d4, 0x14 bytes
  04f71d4  lis 3, 345
  04f71d8  li 4, 8
  04f71dc  lwz 3, 13004(3)
  04f71e0  stw 4, 8(3)
  04f71e4  blr

FUN_004f71e8:   # 0x4f71e8, 0x44 bytes
  04f71e8  lis 4, 345
  04f71ec  cmpwi 3, 0
  04f71f0  lwz 4, 13004(4)
  04f71f4  bt 2, 0x4f7220
  04f71f8  lwz 5, 4(3)
  04f71fc  cmpwi 5, 1
  04f7200  bf 2, 0x4f7220
  04f7204  ori 5, 3, 0
  04f7208  li 6, 2
  04f720c  li 3, 16
  04f7210  lwz 5, 0(5)
  04f7214  stw 6, 12(4)
  04f7218  stw 5, 84(4)
  04f721c  b 0x4f7224
  04f7220  li 3, -1
  04f7224  stw 3, 8(4)
  04f7228  blr

FUN_004f722c:   # 0x4f722c, 0x14 bytes
  04f722c  lis 3, 345
  04f7230  li 4, 17
  04f7234  lwz 3, 13004(3)
  04f7238  stw 4, 8(3)
  04f723c  blr

FUN_004f7240:   # 0x4f7240, 0x34 bytes
  04f7240  stdu 1, -112(1)
  04f7244  mflr 0
  04f7248  std 0, 128(1)
  04f724c  lis 4, 102
  04f7250  lwz 5, 4(3)
  04f7254  addic 3, 4, -4524
  04f7258  ori 4, 5, 0
  04f725c  bl 0x4ffc9c
  04f7260  nop
  04f7264  ld 0, 128(1)
  04f7268  mtlr 0
  04f726c  addi 1, 1, 112
  04f7270  blr

FUN_004f7274:   # 0x4f7274, 0x30 bytes
  04f7274  cmpwi 3, 0
  04f7278  bf 0, 0x4f7290
  04f727c  lis 3, 345
  04f7280  li 4, -1
  04f7284  lwz 3, 13004(3)
  04f7288  stw 4, 8(3)
  04f728c  b 0x4f72a0
  04f7290  lis 3, 345
  04f7294  li 4, 5
  04f7298  lwz 3, 13004(3)
  04f729c  stw 4, 8(3)
  04f72a0  blr

FUN_004f72a4:   # 0x4f72a4, 0x5c bytes
  04f72a4  lis 4, 345
  04f72a8  cmpwi 3, 0
  04f72ac  lwz 4, 13004(4)
  04f72b0  bt 2, 0x4f72f4
  04f72b4  lwz 5, 24(3)
  04f72b8  cmpwi 5, 0
  04f72bc  bf 2, 0x4f72f4
  04f72c0  ori 5, 3, 0
  04f72c4  li 6, 0
  04f72c8  li 3, 10
  04f72cc  lwz 7, 28(5)
  04f72d0  lwz 8, 32(5)
  04f72d4  lwz 9, 36(5)
  04f72d8  lwz 5, 40(5)
  04f72dc  stw 7, 64(4)
  04f72e0  stw 8, 68(4)
  04f72e4  stw 9, 72(4)
  04f72e8  stw 5, 76(4)
  04f72ec  stb 6, 80(4)
  04f72f0  b 0x4f72f8
  04f72f4  li 3, -1
  04f72f8  stw 3, 8(4)
  04f72fc  blr

FUN_004f7300:   # 0x4f7300, 0xa4 bytes
  04f7300  stdu 1, -144(1)
  04f7304  mflr 0
  04f7308  std 0, 160(1)
  04f730c  std 29, 120(1)
  04f7310  std 30, 128(1)
  04f7314  lis 29, 345
  04f7318  ori 30, 3, 0
  04f731c  std 31, 136(1)
  04f7320  lwz 3, 28(5)
  04f7324  ori 31, 4, 0
  04f7328  cmpwi 3, 0
  04f732c  lwz 29, 13004(29)
  04f7330  bf 2, 0x4f7358
  04f7334  addic 3, 29, 88
  04f7338  addic 4, 30, 72
  04f733c  li 5, 156
  04f7340  bl 0x5c5ad0
  04f7344  nop
  04f7348  li 3, 12
  04f734c  lwz 4, 60(30)
  04f7350  stw 4, 508(29)
  04f7354  stw 3, 8(29)
  04f7358  cmpwi 31, 0
  04f735c  bt 2, 0x4f7388
  04f7360  lwz 3, 0(31)
  04f7364  cmpwi 3, 0
  04f7368  bt 2, 0x4f7388
  04f736c  lis 3, 102
  04f7370  lwz 4, 8(31)
  04f7374  addic 3, 3, -4504
  04f7378  bl 0x4ff6d0
  04f737c  nop
  04f7380  li 3, -1
  04f7384  stw 3, 8(29)
  04f7388  ld 0, 160(1)
  04f738c  mtlr 0
  04f7390  ld 29, 120(1)
  04f7394  ld 30, 128(1)
  04f7398  ld 31, 136(1)
  04f739c  addi 1, 1, 144
  04f73a0  blr

FUN_004f73a4:   # 0x4f73a4, 0xac bytes
  04f73a4  stdu 1, -144(1)
  04f73a8  mflr 0
  04f73ac  std 0, 160(1)
  04f73b0  std 29, 120(1)
  04f73b4  std 30, 128(1)
  04f73b8  lis 29, 345
  04f73bc  ori 30, 3, 0
  04f73c0  cmpwi 4, 0
  04f73c4  std 31, 136(1)
  04f73c8  ori 3, 4, 0
  04f73cc  ori 31, 5, 0
  04f73d0  lwz 29, 13004(29)
  04f73d4  bt 2, 0x4f7404
  04f73d8  lwz 4, 0(3)
  04f73dc  cmpwi 4, 0
  04f73e0  bt 2, 0x4f7404
  04f73e4  ori 4, 3, 0
  04f73e8  lis 3, 102
  04f73ec  addic 3, 3, -4468
  04f73f0  lwz 4, 8(4)
  04f73f4  bl 0x4ff6d0
  04f73f8  nop
  04f73fc  li 3, -1
  04f7400  stw 3, 8(29)
  04f7404  lwz 3, 28(31)
  04f7408  cmpwi 3, 0
  04f740c  bf 2, 0x4f7434
  04f7410  addic 3, 29, 88
  04f7414  addic 4, 30, 40
  04f7418  li 5, 156
  04f741c  bl 0x5c5ad0
  04f7420  nop
  04f7424  li 3, 12
  04f7428  lwz 4, 28(30)
  04f742c  stw 4, 508(29)
  04f7430  stw 3, 8(29)
  04f7434  ld 0, 160(1)
  04f7438  mtlr 0
  04f743c  ld 29, 120(1)
  04f7440  ld 30, 128(1)
  04f7444  ld 31, 136(1)
  04f7448  addi 1, 1, 144
  04f744c  blr

FUN_004f7450:   # 0x4f7450, 0x78 bytes
  04f7450  stdu 1, -128(1)
  04f7454  mflr 0
  04f7458  std 0, 144(1)
  04f745c  std 31, 120(1)
  04f7460  lis 31, 345
  04f7464  ori 4, 3, 0
  04f7468  cmpwi 4, 0
  04f746c  lwz 31, 13004(31)
  04f7470  bt 2, 0x4f74ac
  04f7474  lwz 4, 24(3)
  04f7478  cmpwi 4, 0
  04f747c  bt 0, 0x4f74ac
  04f7480  ori 4, 3, 0
  04f7484  addic 3, 1, 112
  04f7488  lwz 4, 28(4)
  04f748c  extsw 4, 4
  04f7490  std 4, 112(1)
  04f7494  bl 0x5c4e94
  04f7498  nop
  04f749c  bl 0x4ffc9c
  04f74a0  nop
  04f74a4  li 3, 14
  04f74a8  b 0x4f74b0
  04f74ac  li 3, -1
  04f74b0  stw 3, 8(31)
  04f74b4  ld 0, 144(1)
  04f74b8  mtlr 0
  04f74bc  ld 31, 120(1)
  04f74c0  addi 1, 1, 128
  04f74c4  blr

FUN_004f74c8:   # 0x4f74c8, 0x6c bytes
  04f74c8  stdu 1, -128(1)
  04f74cc  mflr 0
  04f74d0  std 0, 144(1)
  04f74d4  std 31, 120(1)
  04f74d8  lis 31, 345
  04f74dc  ori 4, 3, 0
  04f74e0  cmpwi 4, 0
  04f74e4  lwz 31, 13004(31)
  04f74e8  bt 2, 0x4f7518
  04f74ec  lwz 4, 24(3)
  04f74f0  cmpwi 4, 0
  04f74f4  bt 0, 0x4f7518
  04f74f8  addic 5, 31, 512
  04f74fc  addic 4, 3, 72
  04f7500  ori 3, 5, 0
  04f7504  li 5, 256
  04f7508  bl 0x5c5ad0
  04f750c  nop
  04f7510  li 3, 19
  04f7514  b 0x4f751c
  04f7518  li 3, -1
  04f751c  stw 3, 8(31)
  04f7520  ld 0, 144(1)
  04f7524  mtlr 0
  04f7528  ld 31, 120(1)
  04f752c  addi 1, 1, 128
  04f7530  blr

FUN_004f7534:   # 0x4f7534, 0x54 bytes
  04f7534  stdu 1, -112(1)
  04f7538  mflr 0
  04f753c  std 0, 128(1)
  04f7540  lis 4, 345
  04f7544  cmpwi 3, 0
  04f7548  lwz 4, 13004(4)
  04f754c  bt 2, 0x4f7570
  04f7550  lwz 3, 24(3)
  04f7554  cmpwi 3, 0
  04f7558  bf 2, 0x4f7570
  04f755c  lis 3, 102
  04f7560  addic 3, 3, -4428
  04f7564  bl 0x4ffc9c
  04f7568  nop
  04f756c  b 0x4f7578
  04f7570  li 3, -1
  04f7574  stw 3, 8(4)
  04f7578  ld 0, 128(1)
  04f757c  mtlr 0
  04f7580  addi 1, 1, 112
  04f7584  blr

FUN_004f7588:   # 0x4f7588, 0x28 bytes
  04f7588  lis 4, 7
  04f758c  li 6, 0
  04f7590  ori 4, 4, 29276
  04f7594  lis 5, 345
  04f7598  stw 6, 8(3)
  04f759c  stw 6, 4(3)
  04f75a0  stbx 6, 3, 4
  04f75a4  stw 6, 0(3)
  04f75a8  stb 6, 13020(5)
  04f75ac  blr

FUN_004f75b0:   # 0x4f75b0, 0x28 bytes
  04f75b0  lis 4, 7
  04f75b4  li 6, 0
  04f75b8  ori 4, 4, 29276
  04f75bc  lis 5, 345
  04f75c0  stw 6, 8(3)
  04f75c4  stw 6, 4(3)
  04f75c8  stbx 6, 3, 4
  04f75cc  stw 6, 0(3)
  04f75d0  stb 6, 13020(5)
  04f75d4  blr

FUN_004f75d8:   # 0x4f75d8, 0x94 bytes
  04f75d8  stdu 1, -128(1)
  04f75dc  mflr 0
  04f75e0  std 0, 144(1)
  04f75e4  lis 4, 345
  04f75e8  lwz 4, 13008(4)
  04f75ec  std 31, 120(1)
  04f75f0  cmpwi 4, 0
  04f75f4  bt 2, 0x4f7600
  04f75f8  ori 3, 4, 0
  04f75fc  b 0x4f7658
  04f7600  lis 5, 345
  04f7604  lis 6, 7
  04f7608  ori 4, 3, 0
  04f760c  li 31, 0
  04f7610  stw 3, 13012(5)
  04f7614  ori 3, 6, 29280
  04f7618  bl 0x4fe218
  04f761c  nop
  04f7620  cmpwi 3, 0
  04f7624  bt 2, 0x4f764c
  04f7628  lis 4, 7
  04f762c  stw 31, 8(3)
  04f7630  lis 5, 345
  04f7634  stw 31, 4(3)
  04f7638  ori 4, 4, 29276
  04f763c  stbx 31, 3, 4
  04f7640  stw 31, 0(3)
  04f7644  stb 31, 13020(5)
  04f7648  ori 31, 3, 0
  04f764c  lis 4, 345
  04f7650  ori 3, 31, 0
  04f7654  stw 31, 13008(4)
  04f7658  ld 0, 144(1)
  04f765c  mtlr 0
  04f7660  ld 31, 120(1)
  04f7664  addi 1, 1, 128
  04f7668  blr

FUN_004f766c:   # 0x4f766c, 0x134 bytes
  04f766c  stdu 1, -128(1)
  04f7670  mflr 0
  04f7674  std 0, 144(1)
  04f7678  cmpwi 3, 255
  04f767c  cmpwi 1, 3, 3
  04f7680  cmpwi 6, 3, 2
  04f7684  std 31, 120(1)
  04f7688  cmpwi 7, 3, 1
  04f768c  bt 2, 0x4f771c
  04f7690  bt 6, 0x4f7708
  04f7694  bt 26, 0x4f76f4
  04f7698  bt 30, 0x4f76e0
  04f769c  cmpwi 3, 0
  04f76a0  bt 2, 0x4f76cc
  04f76a4  cmpwi 3, -1
  04f76a8  bf 2, 0x4f778c
  04f76ac  lis 3, 102
  04f76b0  addic 3, 3, -4396
  04f76b4  bl 0x4ffc9c
  04f76b8  nop
  04f76bc  li 11, 142
  04f76c0  li 3, 1
  04f76c4  sc
  04f76c8  b 0x4f778c
  04f76cc  lis 3, 102
  04f76d0  addic 3, 3, -4380
  04f76d4  bl 0x4ffc9c
  04f76d8  nop
  04f76dc  b 0x4f778c
  04f76e0  lis 3, 102
  04f76e4  addic 3, 3, -4356
  04f76e8  bl 0x4ffc9c
  04f76ec  nop
  04f76f0  b 0x4f778c
  04f76f4  lis 3, 102
  04f76f8  addic 3, 3, -4332
  04f76fc  bl 0x4ffc9c
  04f7700  nop
  04f7704  b 0x4f778c
  04f7708  lis 3, 102
  04f770c  addic 3, 3, -4316
  04f7710  bl 0x4ffc9c
  04f7714  nop
  04f7718  b 0x4f778c
  04f771c  lis 3, 345
  04f7720  lis 4, 3
  04f7724  lis 5, 1
  04f7728  ori 6, 4, 12
  04f772c  lis 4, 2
  04f7730  lwz 31, 13008(3)
  04f7734  ori 7, 4, 12
  04f7738  addc 3, 31, 6
  04f773c  clrldi 4, 3, 32
  04f7740  addc 3, 31, 7
  04f7744  stwx 5, 31, 6
  04f7748  clrldi 3, 3, 32
  04f774c  bl 0x64ee84
  04f7750  ld 2, 40(1)
  04f7754  lis 5, 3
  04f7758  ori 4, 3, 0
  04f775c  ori 3, 5, 16
  04f7760  lwzx 3, 31, 3
  04f7764  cmpwi 3, 0
  04f7768  bt 2, 0x4f778c
  04f776c  ori 5, 3, 0
  04f7770  ori 3, 4, 0
  04f7774  lwz 4, 0(5)
  04f7778  std 2, 40(1)
  04f777c  mtctr 4
  04f7780  lwz 2, 4(5)
  04f7784  bcctrl 20, 30
  04f7788  ld 2, 40(1)
  04f778c  ld 0, 144(1)
  04f7790  mtlr 0
  04f7794  ld 31, 120(1)
  04f7798  addi 1, 1, 128
  04f779c  blr

FUN_004f77a0:   # 0x4f77a0, 0x2b4 bytes
  04f77a0  stdu 1, -912(1)
  04f77a4  mflr 0
  04f77a8  std 0, 928(1)
  04f77ac  stw 3, 112(1)
  04f77b0  ori 7, 6, 0
  04f77b4  ori 6, 5, 0
  04f77b8  ori 8, 3, 0
  04f77bc  lis 9, 102
  04f77c0  ori 5, 4, 0
  04f77c4  addic 3, 9, -4304
  04f77c8  std 31, 904(1)
  04f77cc  std 30, 896(1)
  04f77d0  std 29, 888(1)
  04f77d4  std 28, 880(1)
  04f77d8  std 27, 872(1)
  04f77dc  std 26, 864(1)
  04f77e0  std 25, 856(1)
  04f77e4  ori 4, 8, 0
  04f77e8  bl 0x4ffc9c
  04f77ec  nop
  04f77f0  lis 31, 345
  04f77f4  lwz 3, 112(1)
  04f77f8  cmpwi 3, 9
  04f77fc  lwz 31, 13008(31)
  04f7800  bt 1, 0x4f7824
  04f7804  cmpwi 3, 1
  04f7808  bt 1, 0x4f7818
  04f780c  cmpwi 3, -1
  04f7810  bf 1, 0x4f7a24
  04f7814  b 0x4f7844
  04f7818  cmpwi 3, 8
  04f781c  bf 1, 0x4f7a24
  04f7820  b 0x4f7844
  04f7824  cmpwi 3, 11
  04f7828  bt 1, 0x4f7838
  04f782c  cmpwi 3, 10
  04f7830  bf 1, 0x4f7a24
  04f7834  b 0x4f7924
  04f7838  cmpwi 3, 24
  04f783c  bt 2, 0x4f7924
  04f7840  b 0x4f7a24
  04f7844  lis 3, 102
  04f7848  addic 3, 3, -4240
  04f784c  bl 0x4ffc9c
  04f7850  nop
  04f7854  li 6, 512
  04f7858  addic 3, 1, 112
  04f785c  addic 4, 1, 120
  04f7860  addic 5, 1, 336
  04f7864  stw 6, 116(1)
  04f7868  addic 6, 1, 116
  04f786c  bl 0x64f0e4
  04f7870  ld 2, 40(1)
  04f7874  lis 3, 3
  04f7878  li 28, 0
  04f787c  ori 3, 3, 32
  04f7880  lwzx 3, 31, 3
  04f7884  cmpwi 3, 0
  04f7888  bt 2, 0x4f7a24
  04f788c  ori 30, 31, 0
  04f7890  lis 4, 5
  04f7894  addic 3, 1, 120
  04f7898  ori 29, 4, 14380
  04f789c  li 5, 20
  04f78a0  addc 29, 30, 29
  04f78a4  ori 4, 29, 0
  04f78a8  bl 0x5d0218
  04f78ac  nop
  04f78b0  cmpwi 3, 0
  04f78b4  bf 2, 0x4f7904
  04f78b8  lis 3, 5
  04f78bc  li 4, 0
  04f78c0  ori 3, 3, 14416
  04f78c4  li 5, 524
  04f78c8  addc 27, 30, 3
  04f78cc  ori 3, 27, 0
  04f78d0  bl 0x5d0140
  04f78d4  nop
  04f78d8  li 6, 524
  04f78dc  ori 3, 29, 0
  04f78e0  ori 4, 27, 0
  04f78e4  li 5, 0
  04f78e8  stw 6, 0(27)
  04f78ec  bl 0x64eec4
  04f78f0  ld 2, 40(1)
  04f78f4  lis 3, 7
  04f78f8  li 4, 1
  04f78fc  ori 3, 3, 29276
  04f7900  stbx 4, 31, 3
  04f7904  lis 3, 3
  04f7908  addic 28, 28, 1
  04f790c  ori 3, 3, 32
  04f7910  addic 30, 30, 568
  04f7914  lwzx 3, 31, 3
  04f7918  cmplw 28, 3
  04f791c  bt 0, 0x4f7890
  04f7920  b 0x4f7a24
  04f7924  lis 3, 102
  04f7928  addic 3, 3, -4216
  04f792c  bl 0x4ffc9c
  04f7930  nop
  04f7934  lis 30, 3
  04f7938  ori 30, 30, 28
  04f793c  addc 3, 31, 30
  04f7940  clrldi 3, 3, 32
  04f7944  bl 0x64efa4
  04f7948  ld 2, 40(1)
  04f794c  cmpwi 3, 0
  04f7950  bf 0, 0x4f7994
  04f7954  lis 4, -32766
  04f7958  ori 4, 4, 42607
  04f795c  cmpw 3, 4
  04f7960  bf 2, 0x4f797c
  04f7964  lis 5, 102
  04f7968  ori 4, 3, 0
  04f796c  addic 3, 5, -4184
  04f7970  bl 0x4ff6d0
  04f7974  nop
  04f7978  b 0x4f7a24
  04f797c  lis 5, 102
  04f7980  ori 4, 3, 0
  04f7984  addic 3, 5, -4136
  04f7988  bl 0x4ff6d0
  04f798c  nop
  04f7990  b 0x4f7a24
  04f7994  lwzx 3, 31, 30
  04f7998  cmplwi 3, 256
  04f799c  bf 1, 0x4f79a8
  04f79a0  li 3, 256
  04f79a4  stwx 3, 31, 30
  04f79a8  cmpwi 3, 0
  04f79ac  li 29, 0
  04f79b0  bt 2, 0x4f7a14
  04f79b4  lis 3, 3
  04f79b8  lis 4, 3
  04f79bc  ori 27, 3, 44
  04f79c0  ori 28, 4, 36
  04f79c4  addc 27, 31, 27
  04f79c8  addc 28, 31, 28
  04f79cc  mulli 26, 29, 568
  04f79d0  ori 3, 29, 0
  04f79d4  addc 4, 26, 27
  04f79d8  clrldi 25, 4, 32
  04f79dc  ori 4, 25, 0
  04f79e0  bl 0x64f144
  04f79e4  ld 2, 40(1)
  04f79e8  ori 3, 25, 0
  04f79ec  bl 0x503554
  04f79f0  nop
  04f79f4  addc 4, 26, 28
  04f79f8  lwzx 5, 31, 30
  04f79fc  addic 29, 29, 1
  04f7a00  clrldi 4, 4, 32
  04f7a04  clrldi 29, 29, 32
  04f7a08  cmplw 29, 5
  04f7a0c  stw 3, 0(4)
  04f7a10  bt 0, 0x4f79cc
  04f7a14  lis 3, 7
  04f7a18  li 4, 1
  04f7a1c  ori 3, 3, 29277
  04f7a20  stbx 4, 31, 3
  04f7a24  li 3, 0
  04f7a28  ld 0, 928(1)
  04f7a2c  mtlr 0
  04f7a30  ld 25, 856(1)
  04f7a34  ld 26, 864(1)
  04f7a38  ld 27, 872(1)
  04f7a3c  ld 28, 880(1)
  04f7a40  ld 29, 888(1)
  04f7a44  ld 30, 896(1)
  04f7a48  ld 31, 904(1)
  04f7a4c  addi 1, 1, 912
  04f7a50  blr

FUN_004f7a58:   # 0x4f7a58, 0x138 bytes
  04f7a58  stdu 1, -128(1)
  04f7a5c  mflr 0
  04f7a60  std 0, 144(1)
  04f7a64  cmpdi 1, 3, 257
  04f7a68  std 31, 120(1)
  04f7a6c  cmpdi 3, 2050
  04f7a70  std 30, 112(1)
  04f7a74  ori 31, 3, 0
  04f7a78  bf 2, 0x4f7b58
  04f7a7c  lis 4, 345
  04f7a80  li 5, 0
  04f7a84  addic 30, 4, 13024
  04f7a88  li 6, 8
  04f7a8c  ori 3, 30, 0
  04f7a90  stw 5, 4(30)
  04f7a94  stw 6, 13024(4)
  04f7a98  bl 0x64fd64
  04f7a9c  ld 2, 40(1)
  04f7aa0  cmpwi 3, 0
  04f7aa4  bf 0, 0x4f7ac0
  04f7aa8  lis 5, 102
  04f7aac  ori 4, 3, 0
  04f7ab0  addic 3, 5, -4088
  04f7ab4  bl 0x4ff6d0
  04f7ab8  nop
  04f7abc  b 0x4f7b78
  04f7ac0  cmpdi 31, 2051
  04f7ac4  bf 2, 0x4f7b44
  04f7ac8  lwz 3, 4(30)
  04f7acc  cmpwi 3, 0
  04f7ad0  bf 0, 0x4f7b78
  04f7ad4  lis 3, 273
  04f7ad8  lis 4, 345
  04f7adc  li 5, 2
  04f7ae0  li 6, 0
  04f7ae4  lis 9, 113
  04f7ae8  lwz 7, 5696(3)
  04f7aec  li 10, 0
  04f7af0  lis 3, 79
  04f7af4  lwz 4, 13008(4)
  04f7af8  addic 9, 9, 4008
  04f7afc  addi 8, 3, 31316
  04f7b00  ori 3, 7, 0
  04f7b04  lwz 7, 0(7)
  04f7b08  stw 5, 0(4)
  04f7b0c  stw 6, 4(4)
  04f7b10  lfs 1, 0(8)
  04f7b14  li 4, 0
  04f7b18  li 5, 0
  04f7b1c  lwz 7, 12(7)
  04f7b20  std 2, 40(1)
  04f7b24  li 6, 0
  04f7b28  li 8, 1
  04f7b2c  lwz 11, 0(7)
  04f7b30  lwz 2, 4(7)
  04f7b34  mtctr 11
  04f7b38  bcctrl 20, 30
  04f7b3c  ld 2, 40(1)
  04f7b40  b 0x4f7b78
  04f7b44  lis 3, 345
  04f7b48  li 4, 3
  04f7b4c  lwz 3, 13008(3)
  04f7b50  stw 4, 4(3)
  04f7b54  b 0x4f7b78
  04f7b58  bf 6, 0x4f7b78
  04f7b5c  lis 3, 345
  04f7b60  lis 5, 345
  04f7b64  li 6, 1
  04f7b68  li 4, 3
  04f7b6c  lwz 3, 13008(3)
  04f7b70  stb 6, 13020(5)
  04f7b74  stw 4, 4(3)
  04f7b78  ld 0, 144(1)
  04f7b7c  mtlr 0
  04f7b80  ld 30, 112(1)
  04f7b84  ld 31, 120(1)
  04f7b88  addi 1, 1, 128
  04f7b8c  blr

FUN_004f7b98:   # 0x4f7b98, 0x9c bytes
  04f7b98  stdu 1, -112(1)
  04f7b9c  mflr 0
  04f7ba0  std 0, 128(1)
  04f7ba4  cmpwi 3, 0
  04f7ba8  bf 0, 0x4f7c14
  04f7bac  lis 5, 102
  04f7bb0  ori 4, 3, 0
  04f7bb4  addic 3, 5, -4040
  04f7bb8  bl 0x4ffc9c
  04f7bbc  nop
  04f7bc0  lis 3, 273
  04f7bc4  lis 4, 79
  04f7bc8  lis 9, 113
  04f7bcc  addi 4, 4, 31632
  04f7bd0  li 10, 0
  04f7bd4  lwz 3, 5696(3)
  04f7bd8  addic 9, 9, 4008
  04f7bdc  li 5, 0
  04f7be0  li 8, 1
  04f7be4  lwz 6, 0(3)
  04f7be8  lfs 1, 0(4)
  04f7bec  std 2, 40(1)
  04f7bf0  li 4, 2
  04f7bf4  lwz 7, 12(6)
  04f7bf8  li 6, 0
  04f7bfc  lwz 11, 0(7)
  04f7c00  lwz 2, 4(7)
  04f7c04  mtctr 11
  04f7c08  bcctrl 20, 30
  04f7c0c  ld 2, 40(1)
  04f7c10  b 0x4f7c24
  04f7c14  lis 3, 345
  04f7c18  li 4, 10
  04f7c1c  lwz 3, 13008(3)
  04f7c20  stw 4, 4(3)
  04f7c24  ld 0, 128(1)
  04f7c28  mtlr 0
  04f7c2c  addi 1, 1, 112
  04f7c30  blr

FUN_004f7c34:   # 0x4f7c34, 0x6c bytes
  04f7c34  stdu 1, -112(1)
  04f7c38  mflr 0
  04f7c3c  std 0, 128(1)
  04f7c40  li 4, 0
  04f7c44  li 5, 2
  04f7c48  lis 6, 102
  04f7c4c  stw 4, 4(3)
  04f7c50  stw 5, 0(3)
  04f7c54  addic 3, 6, -4008
  04f7c58  bl 0x4ffc9c
  04f7c5c  nop
  04f7c60  bl 0x64f024
  04f7c64  ld 2, 40(1)
  04f7c68  bl 0x64ef44
  04f7c6c  ld 2, 40(1)
  04f7c70  bl 0x64ee44
  04f7c74  ld 2, 40(1)
  04f7c78  bl 0x64fd24
  04f7c7c  ld 2, 40(1)
  04f7c80  lis 3, 102
  04f7c84  addic 3, 3, -3976
  04f7c88  bl 0x4ffc9c
  04f7c8c  nop
  04f7c90  ld 0, 128(1)
  04f7c94  mtlr 0
  04f7c98  addi 1, 1, 112
  04f7c9c  blr

FUN_004f7ca0:   # 0x4f7ca0, 0xdc bytes
  04f7ca0  stdu 1, -112(1)
  04f7ca4  mflr 0
  04f7ca8  std 0, 128(1)
  04f7cac  cmpwi 3, 0
  04f7cb0  bf 2, 0x4f7d6c
  04f7cb4  lis 3, 345
  04f7cb8  lwz 3, 13008(3)
  04f7cbc  lwz 4, 0(3)
  04f7cc0  cmpwi 4, 0
  04f7cc4  bf 2, 0x4f7ce4
  04f7cc8  li 4, 2
  04f7ccc  lis 5, 345
  04f7cd0  li 6, 0
  04f7cd4  stw 4, 0(3)
  04f7cd8  lwz 3, 13008(5)
  04f7cdc  stw 6, 4(3)
  04f7ce0  b 0x4f7d38
  04f7ce4  ori 4, 3, 0
  04f7ce8  li 5, 0
  04f7cec  li 6, 2
  04f7cf0  lis 3, 102
  04f7cf4  addic 3, 3, -4008
  04f7cf8  stw 5, 4(4)
  04f7cfc  stw 6, 0(4)
  04f7d00  bl 0x4ffc9c
  04f7d04  nop
  04f7d08  bl 0x64f024
  04f7d0c  ld 2, 40(1)
  04f7d10  bl 0x64ef44
  04f7d14  ld 2, 40(1)
  04f7d18  bl 0x64ee44
  04f7d1c  ld 2, 40(1)
  04f7d20  bl 0x64fd24
  04f7d24  ld 2, 40(1)
  04f7d28  lis 3, 102
  04f7d2c  addic 3, 3, -3976
  04f7d30  bl 0x4ffc9c
  04f7d34  nop
  04f7d38  lis 3, 345
  04f7d3c  lis 4, 3
  04f7d40  ori 4, 4, 20
  04f7d44  lwz 3, 13008(3)
  04f7d48  lwzx 3, 3, 4
  04f7d4c  cmpwi 3, 0
  04f7d50  bt 2, 0x4f7d6c
  04f7d54  lwz 4, 0(3)
  04f7d58  std 2, 40(1)
  04f7d5c  mtctr 4
  04f7d60  lwz 2, 4(3)
  04f7d64  bcctrl 20, 30
  04f7d68  ld 2, 40(1)
  04f7d6c  ld 0, 128(1)
  04f7d70  mtlr 0
  04f7d74  addi 1, 1, 112
  04f7d78  blr

FUN_004f7d7c:   # 0x4f7d7c, 0xb8 bytes
  04f7d7c  stdu 1, -128(1)
  04f7d80  mflr 0
  04f7d84  std 0, 144(1)
  04f7d88  std 30, 112(1)
  04f7d8c  ori 30, 3, 0
  04f7d90  li 5, 0
  04f7d94  std 31, 120(1)
  04f7d98  lis 3, 2
  04f7d9c  ori 31, 4, 0
  04f7da0  addic 4, 30, 12
  04f7da4  stw 5, 0(30)
  04f7da8  bl 0x64f084
  04f7dac  ld 2, 40(1)
  04f7db0  cmpwi 3, 0
  04f7db4  bf 0, 0x4f7dcc
  04f7db8  lis 5, 102
  04f7dbc  ori 4, 3, 0
  04f7dc0  addic 3, 5, -3952
  04f7dc4  bl 0x4ff6d0
  04f7dc8  nop
  04f7dcc  lis 3, 113
  04f7dd0  li 4, 0
  04f7dd4  addic 3, 3, 3968
  04f7dd8  bl 0x64f104
  04f7ddc  ld 2, 40(1)
  04f7de0  cmpwi 3, 0
  04f7de4  bt 2, 0x4f7dfc
  04f7de8  lis 5, 102
  04f7dec  ori 4, 3, 0
  04f7df0  addic 3, 5, -3920
  04f7df4  bl 0x4ff6d0
  04f7df8  nop
  04f7dfc  clrlwi 3, 31, 24
  04f7e00  li 31, 1
  04f7e04  cmpwi 3, 0
  04f7e08  bf 2, 0x4f7e18
  04f7e0c  li 3, 2
  04f7e10  li 31, 0
  04f7e14  stw 3, 0(30)
  04f7e18  stw 31, 4(30)
  04f7e1c  ld 0, 144(1)
  04f7e20  mtlr 0
  04f7e24  ld 30, 112(1)
  04f7e28  ld 31, 120(1)
  04f7e2c  addi 1, 1, 128
  04f7e30  blr

FUN_004f7e34:   # 0x4f7e34, 0x7c bytes
  04f7e34  stdu 1, -112(1)
  04f7e38  mflr 0
  04f7e3c  std 0, 128(1)
  04f7e40  lis 5, 3
  04f7e44  lis 6, 3
  04f7e48  ori 5, 5, 16
  04f7e4c  ori 9, 6, 24
  04f7e50  lis 6, 3
  04f7e54  li 7, 2
  04f7e58  ori 11, 6, 26
  04f7e5c  stwx 4, 3, 5
  04f7e60  lis 8, 345
  04f7e64  li 4, 1
  04f7e68  sthx 7, 3, 9
  04f7e6c  addic 8, 8, 13032
  04f7e70  addc 9, 3, 9
  04f7e74  lis 10, 102
  04f7e78  sthx 4, 3, 11
  04f7e7c  clrldi 4, 9, 32
  04f7e80  ori 3, 8, 0
  04f7e84  addic 5, 10, -3868
  04f7e88  li 6, 0
  04f7e8c  li 7, 0
  04f7e90  li 8, 0
  04f7e94  li 9, 0
  04f7e98  bl 0x64efe4
  04f7e9c  ld 2, 40(1)
  04f7ea0  ld 0, 128(1)
  04f7ea4  mtlr 0
  04f7ea8  addi 1, 1, 112
  04f7eac  blr

FUN_004f7eb8:   # 0x4f7eb8, 0xdb0 bytes
  04f7eb8  stdu 1, -224(1)
  04f7ebc  mflr 0
  04f7ec0  std 0, 240(1)
  04f7ec4  std 31, 216(1)
  04f7ec8  std 28, 192(1)
  04f7ecc  ori 31, 3, 0
  04f7ed0  lis 28, 144
  04f7ed4  lwz 3, 4(31)
  04f7ed8  lwz 28, 12516(28)
  04f7edc  cmpwi 1, 3, 5
  04f7ee0  cmpwi 6, 3, 3
  04f7ee4  std 30, 208(1)
  04f7ee8  std 29, 200(1)
  04f7eec  std 27, 184(1)
  04f7ef0  std 26, 176(1)
  04f7ef4  std 25, 168(1)
  04f7ef8  std 24, 160(1)
  04f7efc  std 23, 152(1)
  04f7f00  cmpwi 7, 3, 2
  04f7f04  bt 5, 0x4f7f20
  04f7f08  bt 6, 0x4f8c34
  04f7f0c  bt 26, 0x4f8174
  04f7f10  bt 30, 0x4f8c34
  04f7f14  cmpwi 3, 1
  04f7f18  bt 2, 0x4f7f54
  04f7f1c  b 0x4f8c34
  04f7f20  cmpwi 3, 11
  04f7f24  bt 2, 0x4f8b50
  04f7f28  cmpwi 3, 10
  04f7f2c  bt 2, 0x4f8754
  04f7f30  cmpwi 3, 9
  04f7f34  bt 2, 0x4f8180
  04f7f38  cmpwi 3, 8
  04f7f3c  bt 2, 0x4f8980
  04f7f40  cmpwi 3, 7
  04f7f44  bt 2, 0x4f8768
  04f7f48  cmpwi 3, 6
  04f7f4c  bt 2, 0x4f8074
  04f7f50  b 0x4f8c34
  04f7f54  lis 4, 113
  04f7f58  li 3, 1
  04f7f5c  addic 4, 4, 3984
  04f7f60  li 5, 0
  04f7f64  bl 0x64f644
  04f7f68  ld 2, 40(1)
  04f7f6c  cmpwi 3, 0
  04f7f70  bf 0, 0x4f7fd8
  04f7f74  lis 5, 102
  04f7f78  ori 4, 3, 0
  04f7f7c  addic 3, 5, -3848
  04f7f80  bl 0x4ff6d0
  04f7f84  nop
  04f7f88  li 3, 0
  04f7f8c  li 4, 2
  04f7f90  lis 5, 102
  04f7f94  stw 3, 4(31)
  04f7f98  addic 3, 5, -4008
  04f7f9c  stw 4, 0(31)
  04f7fa0  bl 0x4ffc9c
  04f7fa4  nop
  04f7fa8  bl 0x64f024
  04f7fac  ld 2, 40(1)
  04f7fb0  bl 0x64ef44
  04f7fb4  ld 2, 40(1)
  04f7fb8  bl 0x64ee44
  04f7fbc  ld 2, 40(1)
  04f7fc0  bl 0x64fd24
  04f7fc4  ld 2, 40(1)
  04f7fc8  lis 3, 102
  04f7fcc  addic 3, 3, -3976
  04f7fd0  bl 0x4ffc9c
  04f7fd4  nop
  04f7fd8  li 4, 0
  04f7fdc  li 5, 12
  04f7fe0  li 6, 1
  04f7fe4  addic 3, 1, 136
  04f7fe8  stw 4, 144(1)
  04f7fec  stw 5, 136(1)
  04f7ff0  stw 6, 140(1)
  04f7ff4  bl 0x64fd44
  04f7ff8  ld 2, 40(1)
  04f7ffc  cmpwi 3, 0
  04f8000  bf 0, 0x4f8068
  04f8004  lis 5, 102
  04f8008  ori 4, 3, 0
  04f800c  addic 3, 5, -3800
  04f8010  bl 0x4ff6d0
  04f8014  nop
  04f8018  li 3, 0
  04f801c  li 4, 2
  04f8020  lis 5, 102
  04f8024  stw 3, 4(31)
  04f8028  addic 3, 5, -4008
  04f802c  stw 4, 0(31)
  04f8030  bl 0x4ffc9c
  04f8034  nop
  04f8038  bl 0x64f024
  04f803c  ld 2, 40(1)
  04f8040  bl 0x64ef44
  04f8044  ld 2, 40(1)
  04f8048  bl 0x64ee44
  04f804c  ld 2, 40(1)
  04f8050  bl 0x64fd24
  04f8054  ld 2, 40(1)
  04f8058  lis 3, 102
  04f805c  addic 3, 3, -3976
  04f8060  bl 0x4ffc9c
  04f8064  nop
  04f8068  li 3, 2
  04f806c  stw 3, 4(31)
  04f8070  b 0x4f8c34
  04f8074  li 4, 0
  04f8078  addic 3, 1, 112
  04f807c  stw 4, 112(1)
  04f8080  bl 0x64f004
  04f8084  ld 2, 40(1)
  04f8088  lwz 3, 112(1)
  04f808c  cmpwi 3, -1
  04f8090  bf 2, 0x4f80e4
  04f8094  lis 3, 273
  04f8098  lis 4, 79
  04f809c  lis 9, 113
  04f80a0  addi 4, 4, 32432
  04f80a4  li 10, 0
  04f80a8  lwz 3, 5696(3)
  04f80ac  addic 9, 9, 4008
  04f80b0  li 5, 0
  04f80b4  li 8, 1
  04f80b8  lwz 6, 0(3)
  04f80bc  lfs 1, 0(4)
  04f80c0  std 2, 40(1)
  04f80c4  li 4, 2
  04f80c8  lwz 7, 12(6)
  04f80cc  li 6, 0
  04f80d0  lwz 11, 0(7)
  04f80d4  lwz 2, 4(7)
  04f80d8  mtctr 11
  04f80dc  bcctrl 20, 30
  04f80e0  ld 2, 40(1)
  04f80e4  addic 3, 1, 112
  04f80e8  bl 0x64f004
  04f80ec  ld 2, 40(1)
  04f80f0  cmpwi 3, 0
  04f80f4  bf 0, 0x4f815c
  04f80f8  lis 5, 102
  04f80fc  ori 4, 3, 0
  04f8100  addic 3, 5, -3752
  04f8104  bl 0x4ff6d0
  04f8108  nop
  04f810c  li 4, 0
  04f8110  li 5, 2
  04f8114  lis 3, 102
  04f8118  addic 3, 3, -4008
  04f811c  stw 4, 4(31)
  04f8120  stw 5, 0(31)
  04f8124  bl 0x4ffc9c
  04f8128  nop
  04f812c  bl 0x64f024
  04f8130  ld 2, 40(1)
  04f8134  bl 0x64ef44
  04f8138  ld 2, 40(1)
  04f813c  bl 0x64ee44
  04f8140  ld 2, 40(1)
  04f8144  bl 0x64fd24
  04f8148  ld 2, 40(1)
  04f814c  lis 3, 102
  04f8150  addic 3, 3, -3976
  04f8154  bl 0x4ffc9c
  04f8158  nop
  04f815c  lwz 3, 112(1)
  04f8160  cmpwi 3, 3
  04f8164  bf 2, 0x4f8c34
  04f8168  li 3, 9
  04f816c  stw 3, 4(31)
  04f8170  b 0x4f8c34
  04f8174  li 3, 6
  04f8178  stw 3, 4(31)
  04f817c  b 0x4f8c34
  04f8180  li 4, 0
  04f8184  addic 3, 1, 116
  04f8188  stw 4, 116(1)
  04f818c  bl 0x64f004
  04f8190  ld 2, 40(1)
  04f8194  lwz 3, 116(1)
  04f8198  cmpwi 3, -1
  04f819c  bf 2, 0x4f81f0
  04f81a0  lis 3, 273
  04f81a4  lis 5, 79
  04f81a8  lis 9, 113
  04f81ac  addi 5, 5, 32432
  04f81b0  li 4, 2
  04f81b4  lwz 3, 5696(3)
  04f81b8  li 10, 0
  04f81bc  addic 9, 9, 4008
  04f81c0  li 6, 0
  04f81c4  li 8, 1
  04f81c8  lwz 7, 0(3)
  04f81cc  lfs 1, 0(5)
  04f81d0  std 2, 40(1)
  04f81d4  li 5, 0
  04f81d8  lwz 7, 12(7)
  04f81dc  lwz 11, 0(7)
  04f81e0  lwz 2, 4(7)
  04f81e4  mtctr 11
  04f81e8  bcctrl 20, 30
  04f81ec  ld 2, 40(1)
  04f81f0  addic 29, 28, 4
  04f81f4  lis 4, 113
  04f81f8  ori 3, 29, 0
  04f81fc  addic 4, 4, 3976
  04f8200  li 5, 0
  04f8204  bl 0x64ef24
  04f8208  ld 2, 40(1)
  04f820c  cmpwi 3, 0
  04f8210  bf 0, 0x4f8278
  04f8214  lis 5, 102
  04f8218  ori 4, 3, 0
  04f821c  addic 3, 5, -3680
  04f8220  bl 0x4ff6d0
  04f8224  nop
  04f8228  li 3, 0
  04f822c  li 4, 2
  04f8230  lis 5, 102
  04f8234  stw 3, 4(31)
  04f8238  addic 3, 5, -4008
  04f823c  stw 4, 0(31)
  04f8240  bl 0x4ffc9c
  04f8244  nop
  04f8248  bl 0x64f024
  04f824c  ld 2, 40(1)
  04f8250  bl 0x64ef44
  04f8254  ld 2, 40(1)
  04f8258  bl 0x64ee44
  04f825c  ld 2, 40(1)
  04f8260  bl 0x64fd24
  04f8264  ld 2, 40(1)
  04f8268  lis 3, 102
  04f826c  addic 3, 3, -3976
  04f8270  bl 0x4ffc9c
  04f8274  nop
  04f8278  bl 0x64ef84
  04f827c  ld 2, 40(1)
  04f8280  cmpwi 3, 0
  04f8284  bf 0, 0x4f82ec
  04f8288  lis 5, 102
  04f828c  ori 4, 3, 0
  04f8290  addic 3, 5, -3640
  04f8294  bl 0x4ff6d0
  04f8298  nop
  04f829c  li 4, 0
  04f82a0  li 5, 2
  04f82a4  lis 3, 102
  04f82a8  addic 3, 3, -4008
  04f82ac  stw 4, 4(31)
  04f82b0  stw 5, 0(31)
  04f82b4  bl 0x4ffc9c
  04f82b8  nop
  04f82bc  bl 0x64f024
  04f82c0  ld 2, 40(1)
  04f82c4  bl 0x64ef44
  04f82c8  ld 2, 40(1)
  04f82cc  bl 0x64ee44
  04f82d0  ld 2, 40(1)
  04f82d4  bl 0x64fd24
  04f82d8  ld 2, 40(1)
  04f82dc  lis 3, 102
  04f82e0  addic 3, 3, -3976
  04f82e4  bl 0x4ffc9c
  04f82e8  nop
  04f82ec  li 3, 0
  04f82f0  bl 0x64f924
  04f82f4  ld 2, 40(1)
  04f82f8  cmpwi 3, 0
  04f82fc  bf 0, 0x4f8364
  04f8300  lis 5, 102
  04f8304  ori 4, 3, 0
  04f8308  addic 3, 5, -3608
  04f830c  bl 0x4ff6d0
  04f8310  nop
  04f8314  li 4, 0
  04f8318  li 5, 2
  04f831c  lis 3, 102
  04f8320  addic 3, 3, -4008
  04f8324  stw 4, 4(31)
  04f8328  stw 5, 0(31)
  04f832c  bl 0x4ffc9c
  04f8330  nop
  04f8334  bl 0x64f024
  04f8338  ld 2, 40(1)
  04f833c  bl 0x64ef44
  04f8340  ld 2, 40(1)
  04f8344  bl 0x64ee44
  04f8348  ld 2, 40(1)
  04f834c  bl 0x64fd24
  04f8350  ld 2, 40(1)
  04f8354  lis 3, 102
  04f8358  addic 3, 3, -3976
  04f835c  bl 0x4ffc9c
  04f8360  nop
  04f8364  bl 0x64ef04
  04f8368  ld 2, 40(1)
  04f836c  cmpwi 3, 0
  04f8370  bf 0, 0x4f83d8
  04f8374  lis 5, 102
  04f8378  ori 4, 3, 0
  04f837c  addic 3, 5, -3576
  04f8380  bl 0x4ff6d0
  04f8384  nop
  04f8388  li 3, 0
  04f838c  li 4, 2
  04f8390  lis 5, 102
  04f8394  stw 3, 4(31)
  04f8398  addic 3, 5, -4008
  04f839c  stw 4, 0(31)
  04f83a0  bl 0x4ffc9c
  04f83a4  nop
  04f83a8  bl 0x64f024
  04f83ac  ld 2, 40(1)
  04f83b0  bl 0x64ef44
  04f83b4  ld 2, 40(1)
  04f83b8  bl 0x64ee44
  04f83bc  ld 2, 40(1)
  04f83c0  bl 0x64fd24
  04f83c4  ld 2, 40(1)
  04f83c8  lis 3, 102
  04f83cc  addic 3, 3, -3976
  04f83d0  bl 0x4ffc9c
  04f83d4  nop
  04f83d8  addic 28, 28, 176
  04f83dc  ori 3, 29, 0
  04f83e0  ori 4, 28, 0
  04f83e4  li 5, 0
  04f83e8  li 6, 0
  04f83ec  li 7, 0
  04f83f0  bl 0x64f1a4
  04f83f4  ld 2, 40(1)
  04f83f8  cmpwi 3, 0
  04f83fc  bf 0, 0x4f8464
  04f8400  lis 5, 102
  04f8404  ori 4, 3, 0
  04f8408  addic 3, 5, -3544
  04f840c  bl 0x4ff6d0
  04f8410  nop
  04f8414  li 4, 0
  04f8418  li 5, 2
  04f841c  lis 3, 102
  04f8420  addic 3, 3, -4008
  04f8424  stw 4, 4(31)
  04f8428  stw 5, 0(31)
  04f842c  bl 0x4ffc9c
  04f8430  nop
  04f8434  bl 0x64f024
  04f8438  ld 2, 40(1)
  04f843c  bl 0x64ef44
  04f8440  ld 2, 40(1)
  04f8444  bl 0x64ee44
  04f8448  ld 2, 40(1)
  04f844c  bl 0x64fd24
  04f8450  ld 2, 40(1)
  04f8454  lis 3, 102
  04f8458  addic 3, 3, -3976
  04f845c  bl 0x4ffc9c
  04f8460  nop
  04f8464  lis 27, 345
  04f8468  addic 27, 27, 13032
  04f846c  ori 3, 27, 0
  04f8470  bl 0x64f184
  04f8474  ld 2, 40(1)
  04f8478  cmpwi 3, 0
  04f847c  bf 0, 0x4f84e4
  04f8480  lis 5, 102
  04f8484  ori 4, 3, 0
  04f8488  addic 3, 5, -3512
  04f848c  bl 0x4ff6d0
  04f8490  nop
  04f8494  li 4, 0
  04f8498  li 5, 2
  04f849c  lis 3, 102
  04f84a0  addic 3, 3, -4008
  04f84a4  stw 4, 4(31)
  04f84a8  stw 5, 0(31)
  04f84ac  bl 0x4ffc9c
  04f84b0  nop
  04f84b4  bl 0x64f024
  04f84b8  ld 2, 40(1)
  04f84bc  bl 0x64ef44
  04f84c0  ld 2, 40(1)
  04f84c4  bl 0x64ee44
  04f84c8  ld 2, 40(1)
  04f84cc  bl 0x64fd24
  04f84d0  ld 2, 40(1)
  04f84d4  lis 3, 102
  04f84d8  addic 3, 3, -3976
  04f84dc  bl 0x4ffc9c
  04f84e0  nop
  04f84e4  ori 3, 29, 0
  04f84e8  ori 4, 27, 0
  04f84ec  bl 0x64f0a4
  04f84f0  ld 2, 40(1)
  04f84f4  ori 30, 3, 0
  04f84f8  cmpwi 30, 0
  04f84fc  bf 0, 0x4f8564
  04f8500  lis 3, 102
  04f8504  ori 4, 30, 0
  04f8508  addic 3, 3, -3472
  04f850c  bl 0x4ff6d0
  04f8510  nop
  04f8514  li 4, 0
  04f8518  li 5, 2
  04f851c  lis 3, 102
  04f8520  addic 3, 3, -4008
  04f8524  stw 4, 4(31)
  04f8528  stw 5, 0(31)
  04f852c  bl 0x4ffc9c
  04f8530  nop
  04f8534  bl 0x64f024
  04f8538  ld 2, 40(1)
  04f853c  bl 0x64ef44
  04f8540  ld 2, 40(1)
  04f8544  bl 0x64ee44
  04f8548  ld 2, 40(1)
  04f854c  bl 0x64fd24
  04f8550  ld 2, 40(1)
  04f8554  lis 3, 102
  04f8558  addic 3, 3, -3976
  04f855c  bl 0x4ffc9c
  04f8560  nop
  04f8564  ori 3, 29, 0
  04f8568  stw 30, 52(27)
  04f856c  ori 4, 28, 0
  04f8570  ori 5, 27, 0
  04f8574  bl 0x64f904
  04f8578  ld 2, 40(1)
  04f857c  ori 30, 3, 0
  04f8580  cmpwi 30, 0
  04f8584  bf 0, 0x4f85ec
  04f8588  lis 3, 102
  04f858c  ori 4, 30, 0
  04f8590  addic 3, 3, -3432
  04f8594  bl 0x4ff6d0
  04f8598  nop
  04f859c  li 4, 0
  04f85a0  li 5, 2
  04f85a4  lis 3, 102
  04f85a8  addic 3, 3, -4008
  04f85ac  stw 4, 4(31)
  04f85b0  stw 5, 0(31)
  04f85b4  bl 0x4ffc9c
  04f85b8  nop
  04f85bc  bl 0x64f024
  04f85c0  ld 2, 40(1)
  04f85c4  bl 0x64ef44
  04f85c8  ld 2, 40(1)
  04f85cc  bl 0x64ee44
  04f85d0  ld 2, 40(1)
  04f85d4  bl 0x64fd24
  04f85d8  ld 2, 40(1)
  04f85dc  lis 3, 102
  04f85e0  addic 3, 3, -3976
  04f85e4  bl 0x4ffc9c
  04f85e8  nop
  04f85ec  ori 3, 29, 0
  04f85f0  stw 30, 56(27)
  04f85f4  ori 4, 28, 0
  04f85f8  ori 5, 27, 0
  04f85fc  bl 0x64f064
  04f8600  ld 2, 40(1)
  04f8604  ori 30, 3, 0
  04f8608  cmpwi 30, 0
  04f860c  bf 0, 0x4f8674
  04f8610  lis 3, 102
  04f8614  ori 4, 30, 0
  04f8618  addic 3, 3, -3392
  04f861c  bl 0x4ff6d0
  04f8620  nop
  04f8624  li 4, 0
  04f8628  li 5, 2
  04f862c  lis 3, 102
  04f8630  addic 3, 3, -4008
  04f8634  stw 4, 4(31)
  04f8638  stw 5, 0(31)
  04f863c  bl 0x4ffc9c
  04f8640  nop
  04f8644  bl 0x64f024
  04f8648  ld 2, 40(1)
  04f864c  bl 0x64ef44
  04f8650  ld 2, 40(1)
  04f8654  bl 0x64ee44
  04f8658  ld 2, 40(1)
  04f865c  bl 0x64fd24
  04f8660  ld 2, 40(1)
  04f8664  lis 3, 102
  04f8668  addic 3, 3, -3976
  04f866c  bl 0x4ffc9c
  04f8670  nop
  04f8674  lis 5, 3
  04f8678  stw 30, 60(27)
  04f867c  lis 3, 113
  04f8680  lis 4, 3
  04f8684  ori 5, 5, 16
  04f8688  lis 7, 3
  04f868c  addic 3, 3, 3992
  04f8690  ori 4, 4, 24
  04f8694  li 6, 2
  04f8698  ori 7, 7, 26
  04f869c  li 9, 1
  04f86a0  stwx 3, 31, 5
  04f86a4  lis 8, 102
  04f86a8  addc 10, 31, 4
  04f86ac  sthx 6, 31, 4
  04f86b0  ori 3, 27, 0
  04f86b4  addic 5, 8, -3868
  04f86b8  sthx 9, 31, 7
  04f86bc  clrldi 4, 10, 32
  04f86c0  li 6, 0
  04f86c4  li 7, 0
  04f86c8  li 8, 0
  04f86cc  li 9, 0
  04f86d0  bl 0x64efe4
  04f86d4  ld 2, 40(1)
  04f86d8  ori 30, 3, 0
  04f86dc  cmpwi 30, 0
  04f86e0  bf 0, 0x4f8748
  04f86e4  lis 3, 102
  04f86e8  ori 4, 30, 0
  04f86ec  addic 3, 3, -3352
  04f86f0  bl 0x4ff6d0
  04f86f4  nop
  04f86f8  li 3, 0
  04f86fc  li 4, 2
  04f8700  lis 5, 102
  04f8704  stw 3, 4(31)
  04f8708  addic 3, 5, -4008
  04f870c  stw 4, 0(31)
  04f8710  bl 0x4ffc9c
  04f8714  nop
  04f8718  bl 0x64f024
  04f871c  ld 2, 40(1)
  04f8720  bl 0x64ef44
  04f8724  ld 2, 40(1)
  04f8728  bl 0x64ee44
  04f872c  ld 2, 40(1)
  04f8730  bl 0x64fd24
  04f8734  ld 2, 40(1)
  04f8738  lis 3, 102
  04f873c  addic 3, 3, -3976
  04f8740  bl 0x4ffc9c
  04f8744  nop
  04f8748  li 3, 5
  04f874c  stw 3, 4(31)
  04f8750  b 0x4f8c34
  04f8754  li 3, 3
  04f8758  li 4, 7
  04f875c  stw 3, 0(31)
  04f8760  stw 4, 4(31)
  04f8764  b 0x4f8c34
  04f8768  li 4, 0
  04f876c  addic 3, 1, 120
  04f8770  stw 4, 120(1)
  04f8774  bl 0x64f004
  04f8778  ld 2, 40(1)
  04f877c  lwz 3, 120(1)
  04f8780  cmpwi 3, -1
  04f8784  bf 2, 0x4f87d8
  04f8788  lis 3, 273
  04f878c  lis 5, 79
  04f8790  lis 9, 113
  04f8794  addi 5, 5, 32432
  04f8798  li 4, 2
  04f879c  lwz 3, 5696(3)
  04f87a0  li 10, 0
  04f87a4  addic 9, 9, 4008
  04f87a8  li 6, 0
  04f87ac  li 8, 1
  04f87b0  lwz 7, 0(3)
  04f87b4  lfs 1, 0(5)
  04f87b8  std 2, 40(1)
  04f87bc  li 5, 0
  04f87c0  lwz 7, 12(7)
  04f87c4  lwz 11, 0(7)
  04f87c8  lwz 2, 4(7)
  04f87cc  mtctr 11
  04f87d0  bcctrl 20, 30
  04f87d4  ld 2, 40(1)
  04f87d8  lis 26, 3
  04f87dc  ori 26, 26, 32
  04f87e0  addc 3, 31, 26
  04f87e4  clrldi 3, 3, 32
  04f87e8  bl 0x64f044
  04f87ec  ld 2, 40(1)
  04f87f0  cmpwi 3, 0
  04f87f4  bf 0, 0x4f8888
  04f87f8  lis 4, -32766
  04f87fc  ori 4, 4, 42607
  04f8800  cmpw 3, 4
  04f8804  bf 2, 0x4f8820
  04f8808  lis 5, 102
  04f880c  ori 4, 3, 0
  04f8810  addic 3, 5, -3304
  04f8814  bl 0x4ff6d0
  04f8818  nop
  04f881c  b 0x4f8c34
  04f8820  lis 5, 102
  04f8824  ori 4, 3, 0
  04f8828  addic 3, 5, -3256
  04f882c  bl 0x4ff6d0
  04f8830  nop
  04f8834  li 4, 0
  04f8838  li 5, 2
  04f883c  lis 3, 102
  04f8840  addic 3, 3, -4008
  04f8844  stw 4, 4(31)
  04f8848  stw 5, 0(31)
  04f884c  bl 0x4ffc9c
  04f8850  nop
  04f8854  bl 0x64f024
  04f8858  ld 2, 40(1)
  04f885c  bl 0x64ef44
  04f8860  ld 2, 40(1)
  04f8864  bl 0x64ee44
  04f8868  ld 2, 40(1)
  04f886c  bl 0x64fd24
  04f8870  ld 2, 40(1)
  04f8874  lis 3, 102
  04f8878  addic 3, 3, -3976
  04f887c  bl 0x4ffc9c
  04f8880  nop
  04f8884  b 0x4f8c34
  04f8888  lwzx 3, 31, 26
  04f888c  cmplwi 3, 256
  04f8890  bf 1, 0x4f889c
  04f8894  li 3, 256
  04f8898  stwx 3, 31, 26
  04f889c  cmpwi 3, 0
  04f88a0  bt 2, 0x4f895c
  04f88a4  lis 3, 5
  04f88a8  lis 4, 5
  04f88ac  ori 29, 3, 14380
  04f88b0  lis 3, 5
  04f88b4  ori 28, 4, 14416
  04f88b8  ori 27, 3, 14372
  04f88bc  li 30, 0
  04f88c0  addc 29, 31, 29
  04f88c4  addc 28, 31, 28
  04f88c8  addc 27, 31, 27
  04f88cc  mulli 25, 30, 568
  04f88d0  ori 3, 30, 0
  04f88d4  addc 4, 25, 29
  04f88d8  clrldi 24, 4, 32
  04f88dc  ori 4, 24, 0
  04f88e0  bl 0x64ee64
  04f88e4  ld 2, 40(1)
  04f88e8  addc 3, 25, 28
  04f88ec  li 4, 0
  04f88f0  clrldi 23, 3, 32
  04f88f4  li 5, 524
  04f88f8  ori 3, 23, 0
  04f88fc  bl 0x5d0140
  04f8900  nop
  04f8904  li 6, 524
  04f8908  ori 3, 24, 0
  04f890c  ori 4, 23, 0
  04f8910  li 5, 0
  04f8914  stw 6, 0(23)
  04f8918  bl 0x64eec4
  04f891c  ld 2, 40(1)
  04f8920  ori 3, 24, 0
  04f8924  bl 0x503554
  04f8928  nop
  04f892c  lwzx 5, 31, 26
  04f8930  addic 30, 30, 1
  04f8934  ori 6, 3, 0
  04f8938  addc 4, 25, 27
  04f893c  extsw 30, 30
  04f8940  ori 3, 5, 0
  04f8944  clrldi 4, 4, 32
  04f8948  cmplw 30, 3
  04f894c  ori 3, 6, 0
  04f8950  stw 3, 0(4)
  04f8954  ori 3, 5, 0
  04f8958  bt 0, 0x4f88cc
  04f895c  cmpwi 3, 0
  04f8960  bt 2, 0x4f8974
  04f8964  lis 3, 7
  04f8968  li 4, 1
  04f896c  ori 3, 3, 29276
  04f8970  stbx 4, 31, 3
  04f8974  li 3, 8
  04f8978  stw 3, 4(31)
  04f897c  b 0x4f8c34
  04f8980  li 4, 0
  04f8984  addic 3, 1, 124
  04f8988  stw 4, 124(1)
  04f898c  bl 0x64f004
  04f8990  ld 2, 40(1)
  04f8994  lwz 3, 124(1)
  04f8998  cmpwi 3, -1
  04f899c  bf 2, 0x4f89f0
  04f89a0  lis 3, 273
  04f89a4  lis 5, 79
  04f89a8  lis 9, 113
  04f89ac  addi 5, 5, 32432
  04f89b0  li 4, 2
  04f89b4  lwz 3, 5696(3)
  04f89b8  li 10, 0
  04f89bc  addic 9, 9, 4008
  04f89c0  li 6, 0
  04f89c4  li 8, 1
  04f89c8  lwz 7, 0(3)
  04f89cc  lfs 1, 0(5)
  04f89d0  std 2, 40(1)
  04f89d4  li 5, 0
  04f89d8  lwz 7, 12(7)
  04f89dc  lwz 11, 0(7)
  04f89e0  lwz 2, 4(7)
  04f89e4  mtctr 11
  04f89e8  bcctrl 20, 30
  04f89ec  ld 2, 40(1)
  04f89f0  li 11, 142
  04f89f4  li 3, 1
  04f89f8  sc
  04f89fc  lis 27, 3
  04f8a00  ori 27, 27, 28
  04f8a04  addc 3, 31, 27
  04f8a08  clrldi 3, 3, 32
  04f8a0c  bl 0x64efa4
  04f8a10  ld 2, 40(1)
  04f8a14  cmpwi 3, 0
  04f8a18  bf 0, 0x4f8aac
  04f8a1c  lis 4, -32766
  04f8a20  ori 4, 4, 42607
  04f8a24  cmpw 3, 4
  04f8a28  bf 2, 0x4f8a44
  04f8a2c  lis 5, 102
  04f8a30  ori 4, 3, 0
  04f8a34  addic 3, 5, -4184
  04f8a38  bl 0x4ff6d0
  04f8a3c  nop
  04f8a40  b 0x4f8c34
  04f8a44  lis 5, 102
  04f8a48  ori 4, 3, 0
  04f8a4c  addic 3, 5, -4136
  04f8a50  bl 0x4ff6d0
  04f8a54  nop
  04f8a58  li 3, 0
  04f8a5c  li 4, 2
  04f8a60  lis 5, 102
  04f8a64  stw 3, 4(31)
  04f8a68  addic 3, 5, -4008
  04f8a6c  stw 4, 0(31)
  04f8a70  bl 0x4ffc9c
  04f8a74  nop
  04f8a78  bl 0x64f024
  04f8a7c  ld 2, 40(1)
  04f8a80  bl 0x64ef44
  04f8a84  ld 2, 40(1)
  04f8a88  bl 0x64ee44
  04f8a8c  ld 2, 40(1)
  04f8a90  bl 0x64fd24
  04f8a94  ld 2, 40(1)
  04f8a98  lis 3, 102
  04f8a9c  addic 3, 3, -3976
  04f8aa0  bl 0x4ffc9c
  04f8aa4  nop
  04f8aa8  b 0x4f8c34
  04f8aac  lwzx 3, 31, 27
  04f8ab0  cmplwi 3, 256
  04f8ab4  bf 1, 0x4f8ac0
  04f8ab8  li 3, 256
  04f8abc  stwx 3, 31, 27
  04f8ac0  lis 5, 102
  04f8ac4  ori 4, 3, 0
  04f8ac8  addic 3, 5, -3208
  04f8acc  bl 0x4ffc9c
  04f8ad0  nop
  04f8ad4  lwzx 3, 31, 27
  04f8ad8  cmpwi 3, 0
  04f8adc  bt 2, 0x4f8b44
  04f8ae0  lis 3, 3
  04f8ae4  lis 4, 3
  04f8ae8  ori 29, 3, 44
  04f8aec  ori 28, 4, 36
  04f8af0  li 30, 0
  04f8af4  addc 29, 31, 29
  04f8af8  addc 28, 31, 28
  04f8afc  mulli 26, 30, 568
  04f8b00  ori 3, 30, 0
  04f8b04  addc 4, 26, 29
  04f8b08  clrldi 25, 4, 32
  04f8b0c  ori 4, 25, 0
  04f8b10  bl 0x64f144
  04f8b14  ld 2, 40(1)
  04f8b18  ori 3, 25, 0
  04f8b1c  bl 0x503554
  04f8b20  nop
  04f8b24  addc 4, 26, 28
  04f8b28  lwzx 5, 31, 27
  04f8b2c  addic 30, 30, 1
  04f8b30  clrldi 4, 4, 32
  04f8b34  clrldi 30, 30, 32
  04f8b38  cmplw 30, 5
  04f8b3c  stw 3, 0(4)
  04f8b40  bt 0, 0x4f8afc
  04f8b44  li 3, 11
  04f8b48  stw 3, 4(31)
  04f8b4c  b 0x4f8c34
  04f8b50  li 4, 0
  04f8b54  addic 3, 1, 128
  04f8b58  stw 4, 128(1)
  04f8b5c  bl 0x64f004
  04f8b60  ld 2, 40(1)
  04f8b64  lwz 3, 128(1)
  04f8b68  cmpwi 3, -1
  04f8b6c  bf 2, 0x4f8c20
  04f8b70  lis 3, 102
  04f8b74  addic 3, 3, -3176
  04f8b78  bl 0x4ffc9c
  04f8b7c  nop
  04f8b80  lis 3, 273
  04f8b84  lis 5, 79
  04f8b88  lis 9, 113
  04f8b8c  addi 5, 5, 32432
  04f8b90  li 4, 2
  04f8b94  lwz 3, 5696(3)
  04f8b98  li 10, 0
  04f8b9c  addic 9, 9, 4008
  04f8ba0  li 8, 1
  04f8ba4  lwz 6, 0(3)
  04f8ba8  lfs 1, 0(5)
  04f8bac  li 5, 0
  04f8bb0  lwz 7, 12(6)
  04f8bb4  std 2, 40(1)
  04f8bb8  li 6, 0
  04f8bbc  lwz 11, 0(7)
  04f8bc0  lwz 2, 4(7)
  04f8bc4  mtctr 11
  04f8bc8  bcctrl 20, 30
  04f8bcc  li 3, 0
  04f8bd0  ld 2, 40(1)
  04f8bd4  li 4, 2
  04f8bd8  lis 5, 102
  04f8bdc  stw 3, 4(31)
  04f8be0  addic 3, 5, -4008
  04f8be4  stw 4, 0(31)
  04f8be8  bl 0x4ffc9c
  04f8bec  nop
  04f8bf0  bl 0x64f024
  04f8bf4  ld 2, 40(1)
  04f8bf8  bl 0x64ef44
  04f8bfc  ld 2, 40(1)
  04f8c00  bl 0x64ee44
  04f8c04  ld 2, 40(1)
  04f8c08  bl 0x64fd24
  04f8c0c  ld 2, 40(1)
  04f8c10  lis 3, 102
  04f8c14  addic 3, 3, -3976
  04f8c18  bl 0x4ffc9c
  04f8c1c  nop
  04f8c20  li 4, 0
  04f8c24  addic 3, 1, 132
  04f8c28  stw 4, 132(1)
  04f8c2c  bl 0x64fd84
  04f8c30  ld 2, 40(1)
  04f8c34  ld 0, 240(1)
  04f8c38  mtlr 0
  04f8c3c  ld 23, 152(1)
  04f8c40  ld 24, 160(1)
  04f8c44  ld 25, 168(1)
  04f8c48  ld 26, 176(1)
  04f8c4c  ld 27, 184(1)
  04f8c50  ld 28, 192(1)
  04f8c54  ld 29, 200(1)
  04f8c58  ld 30, 208(1)
  04f8c5c  ld 31, 216(1)
  04f8c60  addi 1, 1, 224
  04f8c64  blr

FUN_004f8c68:   # 0x4f8c68, 0x13c bytes
  04f8c68  stdu 1, -176(1)
  04f8c6c  mflr 0
  04f8c70  std 0, 192(1)
  04f8c74  lis 3, 345
  04f8c78  li 6, 0
  04f8c7c  std 31, 168(1)
  04f8c80  addic 3, 3, 13032
  04f8c84  std 30, 160(1)
  04f8c88  ori 31, 5, 0
  04f8c8c  ori 30, 4, 0
  04f8c90  stw 6, 112(1)
  04f8c94  lwz 3, 52(3)
  04f8c98  std 29, 152(1)
  04f8c9c  std 28, 144(1)
  04f8ca0  extsw 3, 3
  04f8ca4  bl 0x64f124
  04f8ca8  ld 2, 40(1)
  04f8cac  ori 29, 3, 0
  04f8cb0  cmpwi 29, 0
  04f8cb4  stw 29, 112(1)
  04f8cb8  bf 0, 0x4f8cdc
  04f8cbc  lis 3, 102
  04f8cc0  ori 4, 29, 0
  04f8cc4  addic 3, 3, -3156
  04f8cc8  bl 0x4ff6d0
  04f8ccc  nop
  04f8cd0  lis 3, -32766
  04f8cd4  ori 3, 3, 41225
  04f8cd8  b 0x4f8d84
  04f8cdc  addic 28, 1, 116
  04f8ce0  ori 4, 30, 0
  04f8ce4  ori 3, 28, 0
  04f8ce8  li 5, 17
  04f8cec  bl 0x5cccec
  04f8cf0  nop
  04f8cf4  ori 3, 29, 0
  04f8cf8  ori 4, 28, 0
  04f8cfc  ori 5, 31, 0
  04f8d00  li 6, 0
  04f8d04  li 7, 0
  04f8d08  bl 0x64f0c4
  04f8d0c  ld 2, 40(1)
  04f8d10  ori 30, 3, 0
  04f8d14  cmpwi 30, 0
  04f8d18  stw 30, 112(1)
  04f8d1c  bf 0, 0x4f8d38
  04f8d20  lis 3, 102
  04f8d24  ori 4, 30, 0
  04f8d28  addic 3, 3, -3108
  04f8d2c  bl 0x4ff6d0
  04f8d30  nop
  04f8d34  b 0x4f8d70
  04f8d38  bl 0x64f504
  04f8d3c  ld 2, 40(1)
  04f8d40  ori 3, 29, 0
  04f8d44  addic 4, 1, 112
  04f8d48  bl 0x64efc4
  04f8d4c  ld 2, 40(1)
  04f8d50  cmpwi 3, 1
  04f8d54  bf 2, 0x4f8d70
  04f8d58  li 11, 141
  04f8d5c  li 3, 100
  04f8d60  sc
  04f8d64  bl 0x64f504
  04f8d68  ld 2, 40(1)
  04f8d6c  b 0x4f8d40
  04f8d70  ori 3, 29, 0
  04f8d74  bl 0x64f164
  04f8d78  ld 2, 40(1)
  04f8d7c  lwz 3, 112(1)
  04f8d80  extsw 3, 3
  04f8d84  ld 0, 192(1)
  04f8d88  mtlr 0
  04f8d8c  ld 28, 144(1)
  04f8d90  ld 29, 152(1)
  04f8d94  ld 30, 160(1)
  04f8d98  ld 31, 168(1)
  04f8d9c  addi 1, 1, 176
  04f8da0  blr

FUN_004f8da4:   # 0x4f8da4, 0x10c bytes
  04f8da4  lwz 5, 8(3)
  04f8da8  cmpw 4, 5
  04f8dac  bf 2, 0x4f8dbc
  04f8db0  lis 3, 345
  04f8db4  addic 3, 3, 13032
  04f8db8  b 0x4f8eac
  04f8dbc  lis 5, 7
  04f8dc0  ori 5, 5, 28708
  04f8dc4  lwzx 5, 3, 5
  04f8dc8  cmpw 4, 5
  04f8dcc  bf 2, 0x4f8de4
  04f8dd0  lis 4, 7
  04f8dd4  ori 4, 4, 28716
  04f8dd8  addc 3, 3, 4
  04f8ddc  clrldi 3, 3, 32
  04f8de0  b 0x4f8eac
  04f8de4  lis 5, 3
  04f8de8  li 8, 0
  04f8dec  ori 7, 5, 32
  04f8df0  ori 5, 8, 0
  04f8df4  lwzx 7, 3, 7
  04f8df8  cmpwi 7, 0
  04f8dfc  bt 2, 0x4f8e48
  04f8e00  ori 6, 3, 0
  04f8e04  lis 9, 5
  04f8e08  ori 9, 9, 14372
  04f8e0c  addc 9, 6, 9
  04f8e10  lwz 9, 0(9)
  04f8e14  cmpw 4, 9
  04f8e18  bf 2, 0x4f8e38
  04f8e1c  mulli 4, 8, 568
  04f8e20  lis 5, 5
  04f8e24  addc 3, 3, 4
  04f8e28  ori 4, 5, 14380
  04f8e2c  addc 3, 3, 4
  04f8e30  clrldi 3, 3, 32
  04f8e34  b 0x4f8eac
  04f8e38  addic 8, 8, 1
  04f8e3c  addic 6, 6, 568
  04f8e40  cmplw 8, 7
  04f8e44  bt 0, 0x4f8e04
  04f8e48  lis 6, 3
  04f8e4c  ori 8, 5, 0
  04f8e50  ori 7, 6, 28
  04f8e54  lwzx 7, 3, 7
  04f8e58  cmpwi 7, 0
  04f8e5c  bt 2, 0x4f8ea8
  04f8e60  ori 6, 3, 0
  04f8e64  lis 9, 3
  04f8e68  ori 9, 9, 36
  04f8e6c  addc 9, 6, 9
  04f8e70  lwz 9, 0(9)
  04f8e74  cmpw 4, 9
  04f8e78  bf 2, 0x4f8e98
  04f8e7c  mulli 4, 8, 568
  04f8e80  lis 5, 3
  04f8e84  addc 3, 3, 4
  04f8e88  ori 4, 5, 44
  04f8e8c  addc 3, 3, 4
  04f8e90  clrldi 3, 3, 32
  04f8e94  b 0x4f8eac
  04f8e98  addic 8, 8, 1
  04f8e9c  addic 6, 6, 568
  04f8ea0  cmplw 8, 7
  04f8ea4  bt 0, 0x4f8e64
  04f8ea8  ori 3, 5, 0
  04f8eac  blr

FUN_004f8eb0:   # 0x4f8eb0, 0xb8 bytes
  04f8eb0  stdu 1, -128(1)
  04f8eb4  mflr 0
  04f8eb8  std 0, 144(1)
  04f8ebc  std 30, 112(1)
  04f8ec0  std 31, 120(1)
  04f8ec4  ori 30, 4, 0
  04f8ec8  ori 31, 3, 0
  04f8ecc  ori 3, 30, 0
  04f8ed0  bl 0x503554
  04f8ed4  nop
  04f8ed8  lis 4, 7
  04f8edc  lis 5, 7
  04f8ee0  ori 6, 4, 28708
  04f8ee4  ori 7, 5, 28716
  04f8ee8  li 4, 0
  04f8eec  addc 7, 31, 7
  04f8ef0  ori 5, 30, 0
  04f8ef4  stwx 3, 31, 6
  04f8ef8  clrldi 6, 7, 32
  04f8efc  li 7, 18
  04f8f00  ori 3, 4, 0
  04f8f04  mtctr 7
  04f8f08  addc 7, 4, 5
  04f8f0c  lbzx 10, 5, 4
  04f8f10  addc 8, 4, 6
  04f8f14  clrldi 7, 7, 32
  04f8f18  clrldi 8, 8, 32
  04f8f1c  addic 9, 4, 2
  04f8f20  lbz 7, 1(7)
  04f8f24  stbx 10, 6, 4
  04f8f28  stb 7, 1(8)
  04f8f2c  extsw 4, 9
  04f8f30  bdnz 0x4f8f08
  04f8f34  lis 4, 7
  04f8f38  lis 5, 7
  04f8f3c  ori 4, 4, 28708
  04f8f40  ori 5, 5, 28712
  04f8f44  lwzx 4, 31, 4
  04f8f48  stwx 3, 31, 5
  04f8f4c  extsw 3, 4
  04f8f50  ld 0, 144(1)
  04f8f54  mtlr 0
  04f8f58  ld 30, 112(1)
  04f8f5c  ld 31, 120(1)
  04f8f60  addi 1, 1, 128
  04f8f64  blr

FUN_004f8f68:   # 0x4f8f68, 0x118 bytes
  04f8f68  stdu 1, -704(1)
  04f8f6c  mflr 0
  04f8f70  std 0, 720(1)
  04f8f74  std 30, 688(1)
  04f8f78  std 29, 680(1)
  04f8f7c  ori 30, 4, 0
  04f8f80  std 31, 696(1)
  04f8f84  addic 29, 1, 112
  04f8f88  ori 31, 3, 0
  04f8f8c  li 4, 0
  04f8f90  ori 3, 29, 0
  04f8f94  std 28, 672(1)
  04f8f98  li 5, 524
  04f8f9c  bl 0x5d0140
  04f8fa0  nop
  04f8fa4  li 4, 524
  04f8fa8  addic 28, 1, 640
  04f8fac  ori 5, 30, 0
  04f8fb0  ori 3, 28, 0
  04f8fb4  stw 4, 112(1)
  04f8fb8  lis 4, 102
  04f8fbc  addic 4, 4, -3076
  04f8fc0  bl 0x5cd2a8
  04f8fc4  nop
  04f8fc8  li 5, 32
  04f8fcc  addic 3, 1, 504
  04f8fd0  ori 4, 28, 0
  04f8fd4  bl 0x5c5ad0
  04f8fd8  nop
  04f8fdc  li 5, 32
  04f8fe0  ori 3, 29, 0
  04f8fe4  li 4, 3
  04f8fe8  stw 5, 632(1)
  04f8fec  bl 0x64ef64
  04f8ff0  ld 2, 40(1)
  04f8ff4  cmpwi 3, 0
  04f8ff8  bf 0, 0x4f9060
  04f8ffc  lis 5, 102
  04f9000  ori 4, 3, 0
  04f9004  addic 3, 5, -3060
  04f9008  bl 0x4ff6d0
  04f900c  nop
  04f9010  li 4, 0
  04f9014  li 5, 2
  04f9018  lis 3, 102
  04f901c  addic 3, 3, -4008
  04f9020  stw 4, 4(31)
  04f9024  stw 5, 0(31)
  04f9028  bl 0x4ffc9c
  04f902c  nop
  04f9030  bl 0x64f024
  04f9034  ld 2, 40(1)
  04f9038  bl 0x64ef44
  04f903c  ld 2, 40(1)
  04f9040  bl 0x64ee44
  04f9044  ld 2, 40(1)
  04f9048  bl 0x64fd24
  04f904c  ld 2, 40(1)
  04f9050  lis 3, 102
  04f9054  addic 3, 3, -3976
  04f9058  bl 0x4ffc9c
  04f905c  nop
  04f9060  ld 0, 720(1)
  04f9064  mtlr 0
  04f9068  ld 28, 672(1)
  04f906c  ld 29, 680(1)
  04f9070  ld 30, 688(1)
  04f9074  ld 31, 696(1)
  04f9078  addi 1, 1, 704
  04f907c  blr

FUN_004f9080:   # 0x4f9080, 0xb0 bytes
  04f9080  stdu 1, -128(1)
  04f9084  mflr 0
  04f9088  std 0, 144(1)
  04f908c  mulli 4, 4, 568
  04f9090  lis 5, 5
  04f9094  addc 3, 3, 4
  04f9098  std 31, 120(1)
  04f909c  ori 5, 5, 14420
  04f90a0  clrldi 31, 3, 32
  04f90a4  addc 4, 31, 5
  04f90a8  lwz 4, 0(4)
  04f90ac  std 30, 112(1)
  04f90b0  cmpwi 4, 2
  04f90b4  bf 2, 0x4f9114
  04f90b8  lis 4, 5
  04f90bc  li 5, 10
  04f90c0  ori 4, 4, 14808
  04f90c4  addc 3, 3, 4
  04f90c8  li 4, 0
  04f90cc  clrldi 30, 3, 32
  04f90d0  ori 3, 30, 0
  04f90d4  bl 0x5caf74
  04f90d8  nop
  04f90dc  lis 4, 5
  04f90e0  li 5, 4
  04f90e4  ori 4, 4, 14376
  04f90e8  addc 6, 31, 4
  04f90ec  lis 4, 102
  04f90f0  addic 4, 4, -3016
  04f90f4  stw 3, 0(6)
  04f90f8  addic 3, 30, 2
  04f90fc  bl 0x5ccb28
  04f9100  nop
  04f9104  cmpwi 3, 0
  04f9108  bf 2, 0x4f9114
  04f910c  li 3, 1
  04f9110  b 0x4f9118
  04f9114  li 3, 0
  04f9118  ld 0, 144(1)
  04f911c  mtlr 0
  04f9120  ld 30, 112(1)
  04f9124  ld 31, 120(1)
  04f9128  addi 1, 1, 128
  04f912c  blr

FUN_004f9130:   # 0x4f9130, 0x168 bytes
  04f9130  stdu 1, -112(1)
  04f9134  mflr 0
  04f9138  std 0, 128(1)
  04f913c  lwz 5, 8(3)
  04f9140  cmpw 4, 5
  04f9144  bf 2, 0x4f9154
  04f9148  lis 5, 345
  04f914c  addic 5, 5, 13032
  04f9150  b 0x4f9240
  04f9154  lis 5, 7
  04f9158  ori 5, 5, 28708
  04f915c  lwzx 5, 3, 5
  04f9160  cmpw 4, 5
  04f9164  bf 2, 0x4f917c
  04f9168  lis 4, 7
  04f916c  ori 4, 4, 28716
  04f9170  addc 5, 3, 4
  04f9174  clrldi 5, 5, 32
  04f9178  b 0x4f9240
  04f917c  lis 5, 3
  04f9180  li 6, 0
  04f9184  ori 8, 5, 32
  04f9188  ori 5, 6, 0
  04f918c  lwzx 8, 3, 8
  04f9190  cmpwi 8, 0
  04f9194  bt 2, 0x4f91e0
  04f9198  ori 7, 3, 0
  04f919c  lis 9, 5
  04f91a0  ori 9, 9, 14372
  04f91a4  addc 9, 7, 9
  04f91a8  lwz 9, 0(9)
  04f91ac  cmpw 4, 9
  04f91b0  bf 2, 0x4f91d0
  04f91b4  mulli 4, 6, 568
  04f91b8  lis 5, 5
  04f91bc  addc 3, 3, 4
  04f91c0  ori 4, 5, 14380
  04f91c4  addc 5, 3, 4
  04f91c8  clrldi 5, 5, 32
  04f91cc  b 0x4f9240
  04f91d0  addic 6, 6, 1
  04f91d4  addic 7, 7, 568
  04f91d8  cmplw 6, 8
  04f91dc  bt 0, 0x4f919c
  04f91e0  lis 7, 3
  04f91e4  ori 6, 5, 0
  04f91e8  ori 8, 7, 28
  04f91ec  lwzx 8, 3, 8
  04f91f0  cmpwi 8, 0
  04f91f4  bt 2, 0x4f9240
  04f91f8  ori 7, 3, 0
  04f91fc  lis 9, 3
  04f9200  ori 9, 9, 36
  04f9204  addc 9, 7, 9
  04f9208  lwz 9, 0(9)
  04f920c  cmpw 4, 9
  04f9210  bf 2, 0x4f9230
  04f9214  mulli 4, 6, 568
  04f9218  lis 5, 3
  04f921c  addc 3, 3, 4
  04f9220  ori 4, 5, 44
  04f9224  addc 5, 3, 4
  04f9228  clrldi 5, 5, 32
  04f922c  b 0x4f9240
  04f9230  addic 6, 6, 1
  04f9234  addic 7, 7, 568
  04f9238  cmplw 6, 8
  04f923c  bt 0, 0x4f91fc
  04f9240  lis 3, -1
  04f9244  ori 4, 3, 65535
  04f9248  ori 3, 5, 0
  04f924c  clrldi 5, 4, 32
  04f9250  li 4, 0
  04f9254  bl 0x64eee4
  04f9258  ld 2, 40(1)
  04f925c  ori 5, 3, 0
  04f9260  cmpwi 5, 0
  04f9264  bf 0, 0x4f9284
  04f9268  lis 3, 102
  04f926c  ori 4, 5, 0
  04f9270  addic 3, 3, -3008
  04f9274  bl 0x4ff6d0
  04f9278  nop
  04f927c  li 3, 0
  04f9280  b 0x4f9288
  04f9284  li 3, 1
  04f9288  ld 0, 128(1)
  04f928c  mtlr 0
  04f9290  addi 1, 1, 112
  04f9294  blr

FUN_004f9298:   # 0x4f9298, 0x158 bytes
  04f9298  stdu 1, -112(1)
  04f929c  mflr 0
  04f92a0  std 0, 128(1)
  04f92a4  lwz 5, 8(3)
  04f92a8  cmpw 4, 5
  04f92ac  bf 2, 0x4f92bc
  04f92b0  lis 5, 345
  04f92b4  addic 5, 5, 13032
  04f92b8  b 0x4f93a8
  04f92bc  lis 5, 7
  04f92c0  ori 5, 5, 28708
  04f92c4  lwzx 5, 3, 5
  04f92c8  cmpw 4, 5
  04f92cc  bf 2, 0x4f92e4
  04f92d0  lis 4, 7
  04f92d4  ori 4, 4, 28716
  04f92d8  addc 5, 3, 4
  04f92dc  clrldi 5, 5, 32
  04f92e0  b 0x4f93a8
  04f92e4  lis 5, 3
  04f92e8  li 6, 0
  04f92ec  ori 8, 5, 32
  04f92f0  ori 5, 6, 0
  04f92f4  lwzx 8, 3, 8
  04f92f8  cmpwi 8, 0
  04f92fc  bt 2, 0x4f9348
  04f9300  ori 7, 3, 0
  04f9304  lis 9, 5
  04f9308  ori 9, 9, 14372
  04f930c  addc 9, 7, 9
  04f9310  lwz 9, 0(9)
  04f9314  cmpw 4, 9
  04f9318  bf 2, 0x4f9338
  04f931c  mulli 4, 6, 568
  04f9320  lis 5, 5
  04f9324  addc 3, 3, 4
  04f9328  ori 4, 5, 14380
  04f932c  addc 5, 3, 4
  04f9330  clrldi 5, 5, 32
  04f9334  b 0x4f93a8
  04f9338  addic 6, 6, 1
  04f933c  addic 7, 7, 568
  04f9340  cmplw 6, 8
  04f9344  bt 0, 0x4f9304
  04f9348  lis 7, 3
  04f934c  ori 6, 5, 0
  04f9350  ori 8, 7, 28
  04f9354  lwzx 8, 3, 8
  04f9358  cmpwi 8, 0
  04f935c  bt 2, 0x4f93a8
  04f9360  ori 7, 3, 0
  04f9364  lis 9, 3
  04f9368  ori 9, 9, 36
  04f936c  addc 9, 7, 9
  04f9370  lwz 9, 0(9)
  04f9374  cmpw 4, 9
  04f9378  bf 2, 0x4f9398
  04f937c  mulli 4, 6, 568
  04f9380  lis 5, 3
  04f9384  addc 3, 3, 4
  04f9388  ori 4, 5, 44
  04f938c  addc 5, 3, 4
  04f9390  clrldi 5, 5, 32
  04f9394  b 0x4f93a8
  04f9398  addic 6, 6, 1
  04f939c  addic 7, 7, 568
  04f93a0  cmplw 6, 8
  04f93a4  bt 0, 0x4f9364
  04f93a8  ori 3, 5, 0
  04f93ac  bl 0x64eea4
  04f93b0  ld 2, 40(1)
  04f93b4  ori 5, 3, 0
  04f93b8  cmpwi 5, 0
  04f93bc  bf 0, 0x4f93dc
  04f93c0  lis 3, 102
  04f93c4  ori 4, 5, 0
  04f93c8  addic 3, 3, -2972
  04f93cc  bl 0x4ff6d0
  04f93d0  nop
  04f93d4  li 3, 0
  04f93d8  b 0x4f93e0
  04f93dc  li 3, 1
  04f93e0  ld 0, 128(1)
  04f93e4  mtlr 0
  04f93e8  addi 1, 1, 112
  04f93ec  blr

FUN_004f93f0:   # 0x4f93f0, 0x70 bytes
  04f93f0  stdu 1, -144(1)
  04f93f4  mflr 0
  04f93f8  std 0, 160(1)
  04f93fc  std 31, 136(1)
  04f9400  lis 4, 7
  04f9404  ori 31, 3, 0
  04f9408  std 30, 128(1)
  04f940c  li 5, 0
  04f9410  ori 30, 4, 29278
  04f9414  addic 3, 1, 112
  04f9418  stw 5, 112(1)
  04f941c  stbx 5, 31, 30
  04f9420  bl 0x64fd84
  04f9424  ld 2, 40(1)
  04f9428  lwz 4, 112(1)
  04f942c  lbzx 3, 31, 30
  04f9430  cmpwi 4, 3
  04f9434  bf 2, 0x4f9448
  04f9438  lis 4, 7
  04f943c  li 3, 1
  04f9440  ori 4, 4, 29278
  04f9444  stbx 3, 31, 4
  04f9448  ld 0, 160(1)
  04f944c  mtlr 0
  04f9450  ld 30, 128(1)
  04f9454  ld 31, 136(1)
  04f9458  addi 1, 1, 144
  04f945c  blr

FUN_004f9460:   # 0x4f9460, 0xc4 bytes
  04f9460  li 9, 8191
  04f9464  addi 10, 3, 12
  04f9468  li 0, 0
  04f946c  li 11, -1
  04f9470  stw 9, 408(3)
  04f9474  li 9, 1
  04f9478  clrldi 10, 10, 32
  04f947c  stw 11, 404(3)
  04f9480  stw 11, 400(3)
  04f9484  stw 0, 0(3)
  04f9488  stw 0, 4(3)
  04f948c  stw 0, 8(3)
  04f9490  stb 0, 412(3)
  04f9494  stw 0, 444(3)
  04f9498  stb 0, 413(3)
  04f949c  stw 0, 448(3)
  04f94a0  stb 0, 414(3)
  04f94a4  stw 0, 452(3)
  04f94a8  stb 0, 415(3)
  04f94ac  stw 0, 456(3)
  04f94b0  stb 0, 416(3)
  04f94b4  stw 0, 460(3)
  04f94b8  stb 0, 417(3)
  04f94bc  stw 0, 464(3)
  04f94c0  stw 0, 3544(3)
  04f94c4  stw 0, 3548(3)
  04f94c8  stw 0, 3552(3)
  04f94cc  stw 0, 3556(3)
  04f94d0  stw 0, 3560(3)
  04f94d4  stw 0, 3564(3)
  04f94d8  stw 0, 3568(3)
  04f94dc  stw 0, 3572(3)
  04f94e0  stw 0, 3576(3)
  04f94e4  stw 0, 3580(3)
  04f94e8  stw 0, 3584(3)
  04f94ec  stw 0, 3588(3)
  04f94f0  stw 0, 3592(3)
  04f94f4  stw 0, 3596(3)
  04f94f8  stw 0, 3600(3)
  04f94fc  stw 0, 3604(3)
  04f9500  lwz 11, -32068(2)
  04f9504  lwz 8, -32072(2)
  04f9508  stw 9, 396(3)
  04f950c  li 9, 166
  04f9510  stw 11, 8(10)
  04f9514  sth 0, 0(10)
  04f9518  sth 9, 2(10)
  04f951c  stw 8, 4(10)
  04f9520  blr

FUN_004f9524:   # 0x4f9524, 0xb8 bytes
  04f9524  cmpwi 7, 4, 0
  04f9528  stw 6, 400(3)
  04f952c  stw 7, 404(3)
  04f9530  bt 30, 0x4f95c8
  04f9534  addi 0, 5, -256
  04f9538  stw 4, 0(3)
  04f953c  mullw 9, 7, 6
  04f9540  divwu 0, 0, 9
  04f9544  rlwinm 5, 0, 0, 0, 24
  04f9548  stw 5, 4(3)
  04f954c  bclr 12, 30
  04f9550  clrldi 4, 4, 32
  04f9554  li 0, 0
  04f9558  li 12, 0
  04f955c  li 8, 0
  04f9560  stw 5, 48(4)
  04f9564  stw 0, 0(4)
  04f9568  stw 0, 16(4)
  04f956c  lwz 10, 400(3)
  04f9570  stw 0, 32(4)
  04f9574  lwz 3, 404(3)
  04f9578  cmpwi 6, 10, 0
  04f957c  cmpwi 7, 3, 0
  04f9580  bclr 12, 30
  04f9584  nop
  04f9588  bt 26, 0x4f95b4
  04f958c  clrldi 9, 10, 32
  04f9590  li 0, 0
  04f9594  slwi 11, 8, 4
  04f9598  mtctr 9
  04f959c  nop
  04f95a0  extsw 9, 11
  04f95a4  addi 11, 11, 16
  04f95a8  add 9, 4, 9
  04f95ac  stw 0, 64(9)
  04f95b0  bdnz 0x4f95a0
  04f95b4  addi 12, 12, 1
  04f95b8  add 8, 8, 10
  04f95bc  cmpw 7, 12, 3
  04f95c0  bf 30, 0x4f9588
  04f95c4  blr
  04f95c8  li 5, 0
  04f95cc  stw 4, 0(3)
  04f95d0  stw 5, 4(3)
  04f95d4  bf 30, 0x4f9550
  04f95d8  blr

FUN_004f95dc:   # 0x4f95dc, 0xc bytes
  04f95dc  lwz 9, 0(3)
  04f95e0  stw 4, 0(9)
  04f95e4  blr

FUN_004f95e8:   # 0x4f95e8, 0xc bytes
  04f95e8  lwz 9, 0(3)
  04f95ec  stw 4, 16(9)
  04f95f0  blr

FUN_004f95f4:   # 0x4f95f4, 0x14 bytes
  04f95f4  lwz 0, 400(3)
  04f95f8  lwz 9, 0(3)
  04f95fc  mullw 4, 4, 0
  04f9600  stw 4, 32(9)
  04f9604  blr

FUN_004f9608:   # 0x4f9608, 0x28 bytes
  04f9608  lwz 0, 400(3)
  04f960c  lwz 9, 0(3)
  04f9610  mullw 4, 4, 0
  04f9614  add 4, 4, 5
  04f9618  li 0, 0
  04f961c  slwi 4, 4, 4
  04f9620  extsw 4, 4
  04f9624  add 9, 9, 4
  04f9628  stw 0, 64(9)
  04f962c  blr

FUN_004f9630:   # 0x4f9630, 0x38 bytes
  04f9630  lwz 0, 400(3)
  04f9634  lwz 9, 0(3)
  04f9638  mullw 4, 4, 0
  04f963c  add 5, 5, 4
  04f9640  slwi 5, 5, 4
  04f9644  extsw 5, 5
  04f9648  add 9, 9, 5
  04f964c  nop
  04f9650  lwz 0, 64(9)
  04f9654  cmpwi 7, 0, -1
  04f9658  bt 30, 0x4f9650
  04f965c  li 0, 0
  04f9660  stw 0, 64(9)
  04f9664  blr

FUN_004f9668:   # 0x4f9668, 0x28 bytes
  04f9668  lwz 0, 400(3)
  04f966c  lwz 9, 4(3)
  04f9670  lwz 3, 0(3)
  04f9674  mullw 4, 4, 0
  04f9678  add 4, 4, 5
  04f967c  addi 3, 3, 256
  04f9680  mullw 4, 4, 9
  04f9684  add 3, 3, 4
  04f9688  clrldi 3, 3, 32
  04f968c  blr

FUN_004f9690:   # 0x4f9690, 0x24 bytes
  04f9690  lwz 0, 400(3)
  04f9694  lwz 9, 0(3)
  04f9698  mullw 4, 4, 0
  04f969c  add 4, 4, 5
  04f96a0  slwi 4, 4, 4
  04f96a4  extsw 4, 4
  04f96a8  add 9, 9, 4
  04f96ac  lwz 3, 64(9)
  04f96b0  blr

FUN_004f96b4:   # 0x4f96b4, 0x2c bytes
  04f96b4  lwz 0, 400(3)
  04f96b8  lwz 9, 0(3)
  04f96bc  mullw 4, 4, 0
  04f96c0  add 5, 5, 4
  04f96c4  slwi 5, 5, 4
  04f96c8  extsw 5, 5
  04f96cc  add 9, 9, 5
  04f96d0  lwz 0, 64(9)
  04f96d4  cmpwi 7, 0, -1
  04f96d8  bt 30, 0x4f96d0
  04f96dc  blr

FUN_004f96e0:   # 0x4f96e0, 0x48 bytes
  04f96e0  lwz 10, 400(3)
  04f96e4  cmpwi 7, 10, 0
  04f96e8  bclr 12, 30
  04f96ec  lwz 3, 0(3)
  04f96f0  li 11, 0
  04f96f4  mullw 0, 4, 10
  04f96f8  slwi 4, 0, 4
  04f96fc  nop
  04f9700  extsw 0, 4
  04f9704  add 9, 3, 0
  04f9708  lwz 0, 64(9)
  04f970c  cmpwi 7, 0, -1
  04f9710  bt 30, 0x4f9708
  04f9714  addi 11, 11, 1
  04f9718  addi 4, 4, 16
  04f971c  cmpw 7, 10, 11
  04f9720  bf 30, 0x4f9700
  04f9724  blr

FUN_004f9728:   # 0x4f9728, 0x18 bytes
  04f9728  mr 9, 3
  04f972c  lwz 3, 408(3)
  04f9730  sub 3, 3, 4
  04f9734  stw 3, 408(9)
  04f9738  clrldi 3, 3, 48
  04f973c  blr

FUN_004f9740:   # 0x4f9740, 0x3c bytes
  04f9740  lwz 11, 396(3)
  04f9744  addi 5, 5, -1
  04f9748  slwi 0, 11, 2
  04f974c  slwi 9, 11, 4
  04f9750  addi 11, 11, 1
  04f9754  sub 9, 9, 0
  04f9758  stw 11, 396(3)
  04f975c  add 9, 9, 3
  04f9760  addi 9, 9, 12
  04f9764  clrldi 9, 9, 32
  04f9768  stw 7, 8(9)
  04f976c  sth 4, 0(9)
  04f9770  sth 5, 2(9)
  04f9774  stw 6, 4(9)
  04f9778  blr

FUN_004f977c:   # 0x4f977c, 0x7c bytes
  04f977c  lwz 0, 396(3)
  04f9780  cmpwi 7, 0, 0
  04f9784  bt 30, 0x4f97c8
  04f9788  clrldi 0, 0, 32
  04f978c  clrlwi 4, 4, 16
  04f9790  addi 3, 3, 12
  04f9794  mtctr 0
  04f9798  clrldi 9, 3, 32
  04f979c  addi 3, 3, 12
  04f97a0  lhz 11, 0(9)
  04f97a4  lhz 0, 2(9)
  04f97a8  cmplw 7, 11, 4
  04f97ac  lwz 10, 4(9)
  04f97b0  clrlwi 0, 0, 16
  04f97b4  cmplw 6, 0, 4
  04f97b8  lwz 0, 8(9)
  04f97bc  bt 29, 0x4f97c4
  04f97c0  bf 24, 0x4f97d8
  04f97c4  bdnz 0x4f9798
  04f97c8  li 0, 0
  04f97cc  stw 0, 0(5)
  04f97d0  stw 0, 0(6)
  04f97d4  blr
  04f97d8  sub 9, 4, 11
  04f97dc  stw 10, 0(5)
  04f97e0  slwi 9, 9, 2
  04f97e4  add 9, 9, 0
  04f97e8  clrldi 9, 9, 32
  04f97ec  lwz 0, 0(9)
  04f97f0  stw 0, 0(6)
  04f97f4  blr

FUN_004f97f8:   # 0x4f97f8, 0x28 bytes
  04f97f8  lwz 0, 256(3)
  04f97fc  clrldi 11, 0, 32
  04f9800  sub 0, 0, 3
  04f9804  cmplwi 7, 0, 255
  04f9808  bclr 12, 29
  04f980c  stb 4, 0(11)
  04f9810  lwz 9, 256(3)
  04f9814  addi 9, 9, 1
  04f9818  stw 9, 256(3)
  04f981c  blr

FUN_004f9820:   # 0x4f9820, 0x44 bytes
  04f9820  cmpwi 7, 4, 0
  04f9824  mr 11, 3
  04f9828  bclr 12, 30
  04f982c  clrldi 4, 4, 32
  04f9830  li 10, 32
  04f9834  mtctr 4
  04f9838  lwz 0, 256(11)
  04f983c  clrldi 9, 0, 32
  04f9840  sub 0, 0, 11
  04f9844  cmplwi 7, 0, 255
  04f9848  bt 29, 0x4f985c
  04f984c  stb 10, 0(9)
  04f9850  lwz 9, 256(3)
  04f9854  addi 9, 9, 1
  04f9858  stw 9, 256(3)
  04f985c  bdnz 0x4f9838
  04f9860  blr

FUN_004f9864:   # 0x4f9864, 0x48 bytes
  04f9864  subfic 0, 4, 56
  04f9868  mr 11, 3
  04f986c  cmpwi 7, 0, 0
  04f9870  bclr 12, 30
  04f9874  clrldi 0, 0, 32
  04f9878  li 10, 32
  04f987c  mtctr 0
  04f9880  lwz 0, 256(11)
  04f9884  clrldi 9, 0, 32
  04f9888  sub 0, 0, 11
  04f988c  cmplwi 7, 0, 255
  04f9890  bt 29, 0x4f98a4
  04f9894  stb 10, 0(9)
  04f9898  lwz 9, 256(3)
  04f989c  addi 9, 9, 1
  04f98a0  stw 9, 256(3)
  04f98a4  bdnz 0x4f9880
  04f98a8  blr

FUN_004f98ac:   # 0x4f98ac, 0x160 bytes
  04f98ac  stdu 1, -176(1)
  04f98b0  mflr 0
  04f98b4  std 29, 152(1)
  04f98b8  slwi 29, 5, 2
  04f98bc  std 31, 168(1)
  04f98c0  addi 10, 29, 432
  04f98c4  clrldi 31, 3, 32
  04f98c8  extsw 10, 10
  04f98cc  std 0, 192(1)
  04f98d0  add 10, 31, 10
  04f98d4  slwi 9, 5, 6
  04f98d8  std 30, 160(1)
  04f98dc  slwi 30, 5, 9
  04f98e0  std 27, 136(1)
  04f98e4  lwz 0, 12(10)
  04f98e8  add 11, 30, 3
  04f98ec  std 28, 144(1)
  04f98f0  add 9, 9, 0
  04f98f4  addi 11, 11, 472
  04f98f8  slwi 9, 9, 3
  04f98fc  clrldi 8, 11, 32
  04f9900  addi 9, 9, 464
  04f9904  li 27, 1
  04f9908  extsw 9, 9
  04f990c  add 9, 31, 9
  04f9910  std 4, 8(9)
  04f9914  lwz 11, 12(10)
  04f9918  addi 11, 11, 1
  04f991c  stw 11, 12(10)
  04f9920  lbz 0, 4(8)
  04f9924  rlwinm 0, 0, 27, 29, 31
  04f9928  cmpwi 7, 0, 7
  04f992c  mr 12, 0
  04f9930  bt 30, 0x4f9a00
  04f9934  addi 0, 12, 1
  04f9938  cmpw 7, 0, 11
  04f993c  bt 30, 0x4f9964
  04f9940  ld 0, 192(1)
  04f9944  ld 27, 136(1)
  04f9948  ld 28, 144(1)
  04f994c  mtlr 0
  04f9950  ld 29, 152(1)
  04f9954  ld 30, 160(1)
  04f9958  ld 31, 168(1)
  04f995c  addi 1, 1, 176
  04f9960  blr
  04f9964  ld 0, 0(8)
  04f9968  add 9, 30, 3
  04f996c  clrldi 28, 6, 32
  04f9970  lwz 6, 0(8)
  04f9974  rlwinm 0, 0, 16, 19, 31
  04f9978  addi 3, 9, 480
  04f997c  cmpwi 7, 0, 0
  04f9980  clrldi 4, 5, 32
  04f9984  clrldi 5, 0, 51
  04f9988  lhz 0, 6(8)
  04f998c  clrldi 11, 7, 32
  04f9990  clrldi 10, 3, 32
  04f9994  clrldi 7, 27, 63
  04f9998  clrldi 9, 12, 48
  04f999c  mr 3, 31
  04f99a0  clrldi 6, 6, 32
  04f99a4  clrldi 8, 0, 48
  04f99a8  bt 30, 0x4f99c8
  04f99ac  std 11, 112(1)
  04f99b0  std 2, 40(1)
  04f99b4  lwz 0, 0(28)
  04f99b8  lwz 2, 4(28)
  04f99bc  mtctr 0
  04f99c0  bctrl
  04f99c4  ld 2, 40(1)
  04f99c8  addi 9, 29, 432
  04f99cc  ld 27, 136(1)
  04f99d0  li 0, 0
  04f99d4  ld 28, 144(1)
  04f99d8  extsw 9, 9
  04f99dc  ld 29, 152(1)
  04f99e0  ld 30, 160(1)
  04f99e4  add 9, 31, 9
  04f99e8  ld 31, 168(1)
  04f99ec  stw 0, 12(9)
  04f99f0  ld 0, 192(1)
  04f99f4  addi 1, 1, 176
  04f99f8  mtlr 0
  04f99fc  blr
  04f9a00  lhz 12, 6(8)
  04f9a04  li 27, 0
  04f9a08  b 0x4f9934

FUN_004f9a0c:   # 0x4f9a0c, 0x30 bytes
  04f9a0c  lwz 9, 8(4)
  04f9a10  lwz 0, 8(3)
  04f9a14  slwi 9, 9, 2
  04f9a18  cmpwi 7, 0, 0
  04f9a1c  lwz 0, 4(4)
  04f9a20  addi 9, 9, 3536
  04f9a24  extsw 9, 9
  04f9a28  add 9, 3, 9
  04f9a2c  stw 4, 8(9)
  04f9a30  bclr 4, 30
  04f9a34  stw 0, 8(3)
  04f9a38  blr

FUN_004f9a3c:   # 0x4f9a3c, 0x21c bytes
  04f9a3c  mfcr 12
  04f9a40  stdu 1, -224(1)
  04f9a44  std 28, 192(1)
  04f9a48  mr 28, 9
  04f9a4c  std 22, 144(1)
  04f9a50  std 23, 152(1)
  04f9a54  std 25, 168(1)
  04f9a58  std 26, 176(1)
  04f9a5c  mr 25, 5
  04f9a60  mr 23, 6
  04f9a64  mr 26, 7
  04f9a68  mr 22, 3
  04f9a6c  std 21, 136(1)
  04f9a70  std 24, 160(1)
  04f9a74  std 27, 184(1)
  04f9a78  std 29, 200(1)
  04f9a7c  std 30, 208(1)
  04f9a80  std 31, 216(1)
  04f9a84  stw 12, 232(1)
  04f9a88  mflr 0
  04f9a8c  std 0, 240(1)
  04f9a90  lwz 0, 400(3)
  04f9a94  lwz 10, 0(3)
  04f9a98  mullw 4, 4, 0
  04f9a9c  add 11, 5, 4
  04f9aa0  clrldi 9, 10, 32
  04f9aa4  slwi 0, 11, 4
  04f9aa8  extsw 0, 0
  04f9aac  add 9, 9, 0
  04f9ab0  lwz 0, 64(9)
  04f9ab4  cmpwi 7, 0, -1
  04f9ab8  bt 30, 0x4f9ab0
  04f9abc  cmpwi 7, 23, 0
  04f9ac0  lwz 31, 4(3)
  04f9ac4  lwz 29, 64(9)
  04f9ac8  bt 30, 0x4f9bf8
  04f9acc  cmpwi 7, 29, 0
  04f9ad0  bt 30, 0x4f9c3c
  04f9ad4  cmpwi 4, 8, 1
  04f9ad8  addi 9, 10, 256
  04f9adc  mullw 0, 11, 31
  04f9ae0  add 30, 9, 0
  04f9ae4  bt 18, 0x4f9c58
  04f9ae8  rlwinm 0, 31, 0, 0, 28
  04f9aec  add 27, 30, 0
  04f9af0  cmplw 7, 30, 27
  04f9af4  bf 28, 0x4f9bd8
  04f9af8  clrldi 24, 26, 32
  04f9afc  clrldi 21, 28, 32
  04f9b00  li 26, 0
  04f9b04  b 0x4f9b78
  04f9b08  slwi 12, 31, 3
  04f9b0c  lwz 6, 0(8)
  04f9b10  lhz 0, 6(8)
  04f9b14  clrldi 7, 7, 63
  04f9b18  add 11, 12, 30
  04f9b1c  clrldi 9, 31, 48
  04f9b20  addi 11, 11, 8
  04f9b24  clrldi 6, 6, 32
  04f9b28  cmplw 7, 11, 27
  04f9b2c  clrldi 8, 0, 48
  04f9b30  bt 29, 0x4f9bc4
  04f9b34  add 30, 28, 12
  04f9b38  bt 26, 0x4f9b58
  04f9b3c  std 21, 112(1)
  04f9b40  std 2, 40(1)
  04f9b44  lwz 0, 0(24)
  04f9b48  lwz 2, 4(24)
  04f9b4c  mtctr 0
  04f9b50  bctrl
  04f9b54  ld 2, 40(1)
  04f9b58  cmpw 7, 23, 26
  04f9b5c  sub 9, 29, 31
  04f9b60  cmplw 6, 27, 30
  04f9b64  addi 29, 9, -1
  04f9b68  bt 30, 0x4f9bf8
  04f9b6c  cmpwi 7, 29, 0
  04f9b70  bf 25, 0x4f9bd8
  04f9b74  bt 30, 0x4f9bd8
  04f9b78  clrldi 8, 30, 32
  04f9b7c  addi 28, 30, 8
  04f9b80  addi 26, 26, 1
  04f9b84  clrldi 3, 22, 32
  04f9b88  clrldi 4, 25, 32
  04f9b8c  ld 0, 0(8)
  04f9b90  clrldi 10, 28, 32
  04f9b94  li 7, 1
  04f9b98  srwi 9, 0, 29
  04f9b9c  rlwinm 0, 0, 16, 19, 31
  04f9ba0  clrlwi 9, 9, 16
  04f9ba4  clrldi 5, 0, 51
  04f9ba8  cmpwi 7, 9, 7
  04f9bac  mr 31, 9
  04f9bb0  cmpwi 6, 0, 0
  04f9bb4  bf 30, 0x4f9b08
  04f9bb8  lhz 31, 6(8)
  04f9bbc  li 7, 0
  04f9bc0  b 0x4f9b08
  04f9bc4  bf 18, 0x4f9bd8
  04f9bc8  lwz 3, -32056(2)
  04f9bcc  clrldi 4, 25, 32
  04f9bd0  bl 0x4f4df0
  04f9bd4  nop
  04f9bd8  cmpw 7, 27, 30
  04f9bdc  bf 30, 0x4f9bf8
  04f9be0  bf 18, 0x4f9bf8
  04f9be4  lwz 3, -32052(2)
  04f9be8  clrldi 4, 25, 32
  04f9bec  bl 0x4f4df0
  04f9bf0  nop
  04f9bf4  nop
  04f9bf8  ld 0, 240(1)
  04f9bfc  lwz 12, 232(1)
  04f9c00  ld 21, 136(1)
  04f9c04  mtlr 0
  04f9c08  ld 22, 144(1)
  04f9c0c  mtocrf 8, 12
  04f9c10  ld 23, 152(1)
  04f9c14  ld 24, 160(1)
  04f9c18  ld 25, 168(1)
  04f9c1c  ld 26, 176(1)
  04f9c20  ld 27, 184(1)
  04f9c24  ld 28, 192(1)
  04f9c28  ld 29, 200(1)
  04f9c2c  ld 30, 208(1)
  04f9c30  ld 31, 216(1)
  04f9c34  addi 1, 1, 224
  04f9c38  blr
  04f9c3c  cmpwi 7, 8, 1
  04f9c40  bf 30, 0x4f9bf8
  04f9c44  lwz 3, -32064(2)
  04f9c48  clrldi 4, 25, 32
  04f9c4c  bl 0x4f4df0
  04f9c50  nop
  04f9c54  b 0x4f9bf8

FUN_004f9c74:   # 0x4f9c74, 0xe4 bytes
  04f9c74  cmpwi 7, 6, 1
  04f9c78  mflr 0
  04f9c7c  stdu 1, -176(1)
  04f9c80  std 24, 112(1)
  04f9c84  std 27, 136(1)
  04f9c88  std 28, 144(1)
  04f9c8c  std 29, 152(1)
  04f9c90  std 30, 160(1)
  04f9c94  std 31, 168(1)
  04f9c98  std 25, 120(1)
  04f9c9c  std 26, 128(1)
  04f9ca0  std 0, 192(1)
  04f9ca4  mr 29, 6
  04f9ca8  mr 30, 3
  04f9cac  mr 28, 4
  04f9cb0  mr 27, 5
  04f9cb4  mr 24, 7
  04f9cb8  mr 31, 3
  04f9cbc  bt 30, 0x4f9d4c
  04f9cc0  lwz 0, 400(30)
  04f9cc4  cmpwi 7, 0, 0
  04f9cc8  bt 30, 0x4f9d1c
  04f9ccc  clrldi 25, 31, 32
  04f9cd0  clrldi 26, 28, 32
  04f9cd4  clrldi 27, 27, 32
  04f9cd8  clrldi 28, 29, 32
  04f9cdc  li 31, 0
  04f9ce0  clrldi 29, 24, 32
  04f9ce4  nop
  04f9ce8  li 6, -1
  04f9cec  clrldi 5, 31, 32
  04f9cf0  clrldi 6, 6, 32
  04f9cf4  mr 3, 25
  04f9cf8  mr 4, 26
  04f9cfc  mr 7, 27
  04f9d00  mr 8, 28
  04f9d04  mr 9, 29
  04f9d08  addi 31, 31, 1
  04f9d0c  bl 0x4f9a3c
  04f9d10  lwz 0, 400(30)
  04f9d14  cmplw 7, 0, 31
  04f9d18  bt 29, 0x4f9ce8
  04f9d1c  ld 0, 192(1)
  04f9d20  ld 24, 112(1)
  04f9d24  ld 25, 120(1)
  04f9d28  mtlr 0
  04f9d2c  ld 26, 128(1)
  04f9d30  ld 27, 136(1)
  04f9d34  ld 28, 144(1)
  04f9d38  ld 29, 152(1)
  04f9d3c  ld 30, 160(1)
  04f9d40  ld 31, 168(1)
  04f9d44  addi 1, 1, 176
  04f9d48  blr
  04f9d4c  lwz 3, -32048(2)
  04f9d50  lwz 4, 0(30)
  04f9d54  bl 0x4f4df0

FUN_004f9d60:   # 0x4f9d60, 0x70 bytes
  04f9d60  stdu 1, -128(1)
  04f9d64  mflr 0
  04f9d68  std 31, 120(1)
  04f9d6c  mr 31, 3
  04f9d70  std 0, 144(1)
  04f9d74  mr 11, 3
  04f9d78  clrldi 3, 3, 32
  04f9d7c  lwz 9, 256(31)
  04f9d80  sub 0, 9, 31
  04f9d84  clrldi 10, 9, 32
  04f9d88  cmplwi 7, 0, 255
  04f9d8c  bt 29, 0x4f9da8
  04f9d90  li 0, 10
  04f9d94  stb 0, 0(10)
  04f9d98  lwz 9, 256(31)
  04f9d9c  addi 9, 9, 1
  04f9da0  stw 9, 256(31)
  04f9da4  lwz 9, 256(31)
  04f9da8  sub 0, 9, 11
  04f9dac  clrldi 10, 9, 32
  04f9db0  cmplwi 7, 0, 255
  04f9db4  bt 29, 0x4f9dcc
  04f9db8  li 0, 0
  04f9dbc  stb 0, 0(10)
  04f9dc0  lwz 9, 256(31)
  04f9dc4  addi 9, 9, 1
  04f9dc8  stw 9, 256(31)
  04f9dcc  bl 0x4f4df0

FUN_004f9dec:   # 0x4f9dec, 0x10 bytes
  04f9dec  stdu 1, -112(1)
  04f9df0  mflr 0
  04f9df4  std 0, 128(1)
  04f9df8  bl 0x4f4df0

FUN_004f9e10:   # 0x4f9e10, 0x80 bytes
  04f9e10  stdu 1, -160(1)
  04f9e14  mflr 0
  04f9e18  std 5, 224(1)
  04f9e1c  std 6, 232(1)
  04f9e20  std 9, 256(1)
  04f9e24  std 0, 176(1)
  04f9e28  std 7, 240(1)
  04f9e2c  std 8, 248(1)
  04f9e30  std 10, 264(1)
  04f9e34  lwz 0, 256(3)
  04f9e38  addi 9, 1, 224
  04f9e3c  std 29, 136(1)
  04f9e40  sub 0, 0, 3
  04f9e44  mr 29, 3
  04f9e48  lwz 3, 256(3)
  04f9e4c  subfic 0, 0, 256
  04f9e50  mr 5, 4
  04f9e54  mr 6, 9
  04f9e58  clrldi 4, 0, 32
  04f9e5c  stw 9, 112(1)
  04f9e60  bl 0x5c8a94
  04f9e64  nop
  04f9e68  lwz 0, 256(29)
  04f9e6c  mr 9, 3
  04f9e70  clrldi 3, 3, 32
  04f9e74  add 0, 0, 9
  04f9e78  stw 0, 256(29)
  04f9e7c  ld 0, 176(1)
  04f9e80  ld 29, 136(1)
  04f9e84  addi 1, 1, 160
  04f9e88  mtlr 0
  04f9e8c  blr

FUN_004f9e90:   # 0x4f9e90, 0x54 bytes
  04f9e90  lwz 10, 400(3)
  04f9e94  cmpwi 7, 10, 0
  04f9e98  bclr 12, 30
  04f9e9c  lwz 3, 0(3)
  04f9ea0  li 11, 0
  04f9ea4  li 8, 0
  04f9ea8  mullw 4, 4, 10
  04f9eac  nop
  04f9eb0  slwi 0, 4, 4
  04f9eb4  extsw 0, 0
  04f9eb8  add 9, 3, 0
  04f9ebc  nop
  04f9ec0  lwz 0, 64(9)
  04f9ec4  cmpwi 7, 0, -1
  04f9ec8  bt 30, 0x4f9ec0
  04f9ecc  addi 11, 11, 1
  04f9ed0  stw 8, 64(9)
  04f9ed4  cmpw 7, 10, 11
  04f9ed8  addi 4, 4, 1
  04f9edc  bf 30, 0x4f9eb0
  04f9ee0  blr

FUN_004f9ee4:   # 0x4f9ee4, 0x1e0 bytes
  04f9ee4  stdu 1, -736(1)
  04f9ee8  mflr 0
  04f9eec  std 29, 712(1)
  04f9ef0  std 0, 752(1)
  04f9ef4  lwz 29, 404(3)
  04f9ef8  std 27, 696(1)
  04f9efc  cmpwi 7, 29, 0
  04f9f00  std 30, 720(1)
  04f9f04  std 31, 728(1)
  04f9f08  std 28, 704(1)
  04f9f0c  mr 31, 3
  04f9f10  mr 27, 5
  04f9f14  mr 30, 3
  04f9f18  bt 30, 0x4f9f74
  04f9f1c  lwz 8, 400(3)
  04f9f20  mr 28, 3
  04f9f24  li 5, 0
  04f9f28  li 6, 0
  04f9f2c  cmpwi 6, 8, 0
  04f9f30  bt 26, 0x4f9f64
  04f9f34  li 10, 0
  04f9f38  lwz 7, 0(28)
  04f9f3c  slwi 11, 6, 4
  04f9f40  extsw 0, 11
  04f9f44  add 9, 7, 0
  04f9f48  lwz 0, 64(9)
  04f9f4c  cmpwi 7, 0, -1
  04f9f50  bt 30, 0x4f9f48
  04f9f54  addi 10, 10, 1
  04f9f58  addi 11, 11, 16
  04f9f5c  cmpw 7, 8, 10
  04f9f60  bf 30, 0x4f9f40
  04f9f64  addi 5, 5, 1
  04f9f68  add 6, 6, 8
  04f9f6c  cmpw 7, 5, 29
  04f9f70  bf 30, 0x4f9f30
  04f9f74  lwz 9, 400(31)
  04f9f78  li 0, 1
  04f9f7c  clrldi 3, 4, 32
  04f9f80  addi 4, 1, 112
  04f9f84  stw 9, 400(1)
  04f9f88  stw 0, 404(1)
  04f9f8c  bl 0x64fa44
  04f9f90  ld 2, 40(1)
  04f9f94  lwz 0, 152(1)
  04f9f98  lwz 9, 156(1)
  04f9f9c  addi 29, 30, 3544
  04f9fa0  stw 0, 408(1)
  04f9fa4  stw 9, 412(1)
  04f9fa8  lwz 0, 160(1)
  04f9fac  li 28, 0
  04f9fb0  lwz 9, 164(1)
  04f9fb4  addi 30, 1, 400
  04f9fb8  stw 0, 416(1)
  04f9fbc  stw 9, 420(1)
  04f9fc0  lwz 0, 168(1)
  04f9fc4  lwz 9, 172(1)
  04f9fc8  stw 0, 424(1)
  04f9fcc  stw 9, 428(1)
  04f9fd0  b 0x4f9ff0
  04f9fd4  rlwinm 3, 3, 0, 0, 27
  04f9fd8  addi 28, 28, 1
  04f9fdc  bl 0x5cccec
  04f9fe0  nop
  04f9fe4  addi 29, 29, 4
  04f9fe8  cmpdi 7, 28, 16
  04f9fec  bt 30, 0x4fa038
  04f9ff0  lwz 9, 0(29)
  04f9ff4  slwi 11, 28, 4
  04f9ff8  li 5, 16
  04f9ffc  cmpwi 7, 9, 0
  04fa000  addi 4, 9, 16
  04fa004  addi 11, 11, 32
  04fa008  clrldi 4, 4, 32
  04fa00c  add 3, 11, 30
  04fa010  bf 30, 0x4f9fd4
  04fa014  rlwinm 3, 3, 0, 0, 27
  04fa018  lwz 4, -32044(2)
  04fa01c  li 5, 16
  04fa020  addi 28, 28, 1
  04fa024  bl 0x5cccec
  04fa028  nop
  04fa02c  addi 29, 29, 4
  04fa030  cmpdi 7, 28, 16
  04fa034  bf 30, 0x4f9ff0
  04fa038  lwz 0, 404(31)
  04fa03c  clrldi 3, 27, 32
  04fa040  lwz 29, 400(31)
  04fa044  lwz 9, 4(31)
  04fa048  lwz 4, -32040(2)
  04fa04c  mullw 29, 29, 0
  04fa050  mullw 29, 29, 9
  04fa054  bl 0x5c52f0
  04fa058  nop
  04fa05c  clrldi 28, 3, 32
  04fa060  addi 29, 29, 256
  04fa064  mr 6, 28
  04fa068  mr 3, 30
  04fa06c  li 4, 288
  04fa070  li 5, 1
  04fa074  bl 0x5c5638
  04fa078  nop
  04fa07c  clrldi 4, 29, 32
  04fa080  lwz 3, 0(31)
  04fa084  mr 6, 28
  04fa088  li 5, 1
  04fa08c  bl 0x5c5638
  04fa090  nop
  04fa094  mr 3, 28
  04fa098  bl 0x5c4f10
  04fa09c  nop
  04fa0a0  ld 0, 752(1)
  04fa0a4  ld 27, 696(1)
  04fa0a8  ld 28, 704(1)
  04fa0ac  mtlr 0
  04fa0b0  ld 29, 712(1)
  04fa0b4  ld 30, 720(1)
  04fa0b8  ld 31, 728(1)
  04fa0bc  addi 1, 1, 736
  04fa0c0  blr

FUN_004fa0c4:   # 0x4fa0c4, 0x54 bytes
  04fa0c4  lwz 11, 396(3)
  04fa0c8  lwz 0, 408(3)
  04fa0cc  slwi 10, 11, 2
  04fa0d0  slwi 9, 11, 4
  04fa0d4  sub 0, 0, 4
  04fa0d8  sub 9, 9, 10
  04fa0dc  clrlwi 8, 0, 16
  04fa0e0  add 9, 9, 3
  04fa0e4  add 4, 8, 4
  04fa0e8  addi 9, 9, 12
  04fa0ec  addi 11, 11, 1
  04fa0f0  clrldi 9, 9, 32
  04fa0f4  addi 4, 4, -1
  04fa0f8  stw 0, 408(3)
  04fa0fc  stw 11, 396(3)
  04fa100  extsw 3, 8
  04fa104  stw 6, 8(9)
  04fa108  sth 4, 2(9)
  04fa10c  stw 5, 4(9)
  04fa110  sth 8, 0(9)
  04fa114  blr

FUN_004fa118:   # 0x4fa118, 0x1cc bytes
  04fa118  stdu 1, -176(1)
  04fa11c  mflr 0
  04fa120  std 30, 160(1)
  04fa124  slwi 30, 5, 2
  04fa128  std 0, 192(1)
  04fa12c  std 27, 136(1)
  04fa130  addi 0, 30, 432
  04fa134  slwi 27, 5, 9
  04fa138  extsw 0, 0
  04fa13c  std 26, 128(1)
  04fa140  std 31, 168(1)
  04fa144  addi 26, 5, 400
  04fa148  clrldi 31, 3, 32
  04fa14c  add 9, 27, 3
  04fa150  add 12, 31, 0
  04fa154  addi 9, 9, 472
  04fa158  extsw 0, 26
  04fa15c  std 29, 152(1)
  04fa160  clrldi 29, 9, 32
  04fa164  add 9, 31, 0
  04fa168  addi 10, 30, 416
  04fa16c  std 28, 144(1)
  04fa170  extsw 10, 10
  04fa174  slwi 28, 5, 6
  04fa178  lbz 0, 12(9)
  04fa17c  add 8, 31, 10
  04fa180  cmpwi 7, 0, 0
  04fa184  bt 30, 0x4fa21c
  04fa188  lwz 9, 12(12)
  04fa18c  clrldi 11, 4, 32
  04fa190  lwz 0, 4(8)
  04fa194  li 10, 1
  04fa198  add 9, 28, 9
  04fa19c  sldi 0, 0, 32
  04fa1a0  slwi 9, 9, 3
  04fa1a4  or 0, 0, 11
  04fa1a8  addi 9, 9, 464
  04fa1ac  extsw 9, 9
  04fa1b0  add 9, 31, 9
  04fa1b4  std 0, 8(9)
  04fa1b8  lwz 11, 12(12)
  04fa1bc  addi 11, 11, 1
  04fa1c0  stw 11, 12(12)
  04fa1c4  lbz 0, 4(29)
  04fa1c8  rlwinm 0, 0, 27, 29, 31
  04fa1cc  cmpwi 7, 0, 7
  04fa1d0  mr 12, 0
  04fa1d4  bt 30, 0x4fa2cc
  04fa1d8  addi 0, 12, 1
  04fa1dc  cmpw 7, 0, 11
  04fa1e0  bt 30, 0x4fa250
  04fa1e4  extsw 9, 26
  04fa1e8  ld 27, 136(1)
  04fa1ec  li 0, 0
  04fa1f0  ld 26, 128(1)
  04fa1f4  add 9, 31, 9
  04fa1f8  ld 28, 144(1)
  04fa1fc  ld 29, 152(1)
  04fa200  ld 30, 160(1)
  04fa204  ld 31, 168(1)
  04fa208  stb 0, 12(9)
  04fa20c  ld 0, 192(1)
  04fa210  addi 1, 1, 176
  04fa214  mtlr 0
  04fa218  blr
  04fa21c  li 0, 1
  04fa220  ld 26, 128(1)
  04fa224  ld 27, 136(1)
  04fa228  stb 0, 12(9)
  04fa22c  ld 0, 192(1)
  04fa230  ld 28, 144(1)
  04fa234  ld 29, 152(1)
  04fa238  mtlr 0
  04fa23c  ld 30, 160(1)
  04fa240  ld 31, 168(1)
  04fa244  addi 1, 1, 176
  04fa248  stw 4, 4(8)
  04fa24c  blr
  04fa250  ld 0, 0(29)
  04fa254  add 9, 27, 3
  04fa258  clrldi 28, 6, 32
  04fa25c  lwz 6, 0(29)
  04fa260  rlwinm 0, 0, 16, 19, 31
  04fa264  addi 3, 9, 480
  04fa268  cmpwi 7, 0, 0
  04fa26c  clrldi 4, 5, 32
  04fa270  clrldi 5, 0, 51
  04fa274  lhz 0, 6(29)
  04fa278  clrldi 11, 7, 32
  04fa27c  clrldi 9, 12, 48
  04fa280  clrldi 7, 10, 63
  04fa284  clrldi 6, 6, 32
  04fa288  clrldi 10, 3, 32
  04fa28c  clrldi 8, 0, 48
  04fa290  mr 3, 31
  04fa294  bt 30, 0x4fa2b4
  04fa298  std 11, 112(1)
  04fa29c  std 2, 40(1)
  04fa2a0  lwz 0, 0(28)
  04fa2a4  lwz 2, 4(28)
  04fa2a8  mtctr 0
  04fa2ac  bctrl
  04fa2b0  ld 2, 40(1)
  04fa2b4  addi 9, 30, 432
  04fa2b8  li 0, 0
  04fa2bc  extsw 9, 9
  04fa2c0  add 9, 31, 9
  04fa2c4  stw 0, 12(9)
  04fa2c8  b 0x4fa1e4
  04fa2cc  lhz 12, 6(29)
  04fa2d0  li 10, 0
  04fa2d4  addi 0, 12, 1
  04fa2d8  cmpw 7, 0, 11
  04fa2dc  bf 30, 0x4fa1e4
  04fa2e0  b 0x4fa250

FUN_004fa2e4:   # 0x4fa2e4, 0x168 bytes
  04fa2e4  addi 11, 3, 12
  04fa2e8  li 9, 8191
  04fa2ec  clrldi 11, 11, 32
  04fa2f0  li 0, 0
  04fa2f4  stw 9, 408(3)
  04fa2f8  li 9, 166
  04fa2fc  stw 0, 0(3)
  04fa300  sth 0, 0(11)
  04fa304  stw 0, 4(3)
  04fa308  stw 0, 8(3)
  04fa30c  stb 0, 412(3)
  04fa310  stw 0, 444(3)
  04fa314  stb 0, 413(3)
  04fa318  stw 0, 448(3)
  04fa31c  stb 0, 414(3)
  04fa320  stw 0, 452(3)
  04fa324  stb 0, 415(3)
  04fa328  stw 0, 456(3)
  04fa32c  stb 0, 416(3)
  04fa330  stw 0, 460(3)
  04fa334  stb 0, 417(3)
  04fa338  stw 0, 464(3)
  04fa33c  stw 0, 3544(3)
  04fa340  stw 0, 3548(3)
  04fa344  stw 0, 3552(3)
  04fa348  stw 0, 3556(3)
  04fa34c  stw 0, 3560(3)
  04fa350  stw 0, 3564(3)
  04fa354  stw 0, 3568(3)
  04fa358  stw 0, 3572(3)
  04fa35c  stw 0, 3576(3)
  04fa360  stw 0, 3580(3)
  04fa364  stw 0, 3584(3)
  04fa368  stw 0, 3588(3)
  04fa36c  stw 0, 3592(3)
  04fa370  stw 0, 3596(3)
  04fa374  stw 0, 3600(3)
  04fa378  stw 0, 3604(3)
  04fa37c  sth 9, 2(11)
  04fa380  lwz 0, -32068(2)
  04fa384  cmpwi 7, 4, 0
  04fa388  lwz 9, -32072(2)
  04fa38c  stw 0, 8(11)
  04fa390  li 0, 1
  04fa394  stw 9, 4(11)
  04fa398  stw 0, 396(3)
  04fa39c  stw 6, 400(3)
  04fa3a0  stw 7, 404(3)
  04fa3a4  bt 30, 0x4fa438
  04fa3a8  addi 0, 5, -256
  04fa3ac  stw 4, 0(3)
  04fa3b0  mullw 9, 7, 6
  04fa3b4  divwu 0, 0, 9
  04fa3b8  rlwinm 5, 0, 0, 0, 24
  04fa3bc  stw 5, 4(3)
  04fa3c0  bclr 12, 30
  04fa3c4  clrldi 4, 4, 32
  04fa3c8  li 0, 0
  04fa3cc  li 11, 0
  04fa3d0  li 12, 0
  04fa3d4  stw 5, 48(4)
  04fa3d8  stw 0, 0(4)
  04fa3dc  stw 0, 16(4)
  04fa3e0  lwz 8, 400(3)
  04fa3e4  stw 0, 32(4)
  04fa3e8  lwz 3, 404(3)
  04fa3ec  cmpwi 6, 8, 0
  04fa3f0  cmpwi 7, 3, 0
  04fa3f4  bclr 12, 30
  04fa3f8  bt 26, 0x4fa424
  04fa3fc  clrldi 9, 8, 32
  04fa400  li 0, 0
  04fa404  slwi 10, 12, 4
  04fa408  mtctr 9
  04fa40c  nop
  04fa410  extsw 9, 10
  04fa414  addi 10, 10, 16
  04fa418  add 9, 4, 9
  04fa41c  stw 0, 64(9)
  04fa420  bdnz 0x4fa410
  04fa424  addi 11, 11, 1
  04fa428  add 12, 12, 8
  04fa42c  cmpw 7, 3, 11
  04fa430  bf 30, 0x4fa3f8
  04fa434  blr
  04fa438  li 5, 0
  04fa43c  stw 4, 0(3)
  04fa440  stw 5, 4(3)
  04fa444  bf 30, 0x4fa3c4
  04fa448  blr

FUN_004fa44c:   # 0x4fa44c, 0x168 bytes
  04fa44c  addi 11, 3, 12
  04fa450  li 9, 8191
  04fa454  clrldi 11, 11, 32
  04fa458  li 0, 0
  04fa45c  stw 9, 408(3)
  04fa460  li 9, 166
  04fa464  stw 0, 0(3)
  04fa468  sth 0, 0(11)
  04fa46c  stw 0, 4(3)
  04fa470  stw 0, 8(3)
  04fa474  stb 0, 412(3)
  04fa478  stw 0, 444(3)
  04fa47c  stb 0, 413(3)
  04fa480  stw 0, 448(3)
  04fa484  stb 0, 414(3)
  04fa488  stw 0, 452(3)
  04fa48c  stb 0, 415(3)
  04fa490  stw 0, 456(3)
  04fa494  stb 0, 416(3)
  04fa498  stw 0, 460(3)
  04fa49c  stb 0, 417(3)
  04fa4a0  stw 0, 464(3)
  04fa4a4  stw 0, 3544(3)
  04fa4a8  stw 0, 3548(3)
  04fa4ac  stw 0, 3552(3)
  04fa4b0  stw 0, 3556(3)
  04fa4b4  stw 0, 3560(3)
  04fa4b8  stw 0, 3564(3)
  04fa4bc  stw 0, 3568(3)
  04fa4c0  stw 0, 3572(3)
  04fa4c4  stw 0, 3576(3)
  04fa4c8  stw 0, 3580(3)
  04fa4cc  stw 0, 3584(3)
  04fa4d0  stw 0, 3588(3)
  04fa4d4  stw 0, 3592(3)
  04fa4d8  stw 0, 3596(3)
  04fa4dc  stw 0, 3600(3)
  04fa4e0  stw 0, 3604(3)
  04fa4e4  sth 9, 2(11)
  04fa4e8  lwz 0, -32068(2)
  04fa4ec  cmpwi 7, 4, 0
  04fa4f0  lwz 9, -32072(2)
  04fa4f4  stw 0, 8(11)
  04fa4f8  li 0, 1
  04fa4fc  stw 9, 4(11)
  04fa500  stw 0, 396(3)
  04fa504  stw 6, 400(3)
  04fa508  stw 7, 404(3)
  04fa50c  bt 30, 0x4fa5a0
  04fa510  addi 0, 5, -256
  04fa514  stw 4, 0(3)
  04fa518  mullw 9, 7, 6
  04fa51c  divwu 0, 0, 9
  04fa520  rlwinm 5, 0, 0, 0, 24
  04fa524  stw 5, 4(3)
  04fa528  bclr 12, 30
  04fa52c  clrldi 4, 4, 32
  04fa530  li 0, 0
  04fa534  li 11, 0
  04fa538  li 12, 0
  04fa53c  stw 5, 48(4)
  04fa540  stw 0, 0(4)
  04fa544  stw 0, 16(4)
  04fa548  lwz 8, 400(3)
  04fa54c  stw 0, 32(4)
  04fa550  lwz 3, 404(3)
  04fa554  cmpwi 6, 8, 0
  04fa558  cmpwi 7, 3, 0
  04fa55c  bclr 12, 30
  04fa560  bt 26, 0x4fa58c
  04fa564  clrldi 9, 8, 32
  04fa568  li 0, 0
  04fa56c  slwi 10, 12, 4
  04fa570  mtctr 9
  04fa574  nop
  04fa578  extsw 9, 10
  04fa57c  addi 10, 10, 16
  04fa580  add 9, 4, 9
  04fa584  stw 0, 64(9)
  04fa588  bdnz 0x4fa578
  04fa58c  addi 11, 11, 1
  04fa590  add 12, 12, 8
  04fa594  cmpw 7, 3, 11
  04fa598  bf 30, 0x4fa560
  04fa59c  blr
  04fa5a0  li 5, 0
  04fa5a4  stw 4, 0(3)
  04fa5a8  stw 5, 4(3)
  04fa5ac  bf 30, 0x4fa52c
  04fa5b0  blr

FUN_004fa5b4:   # 0x4fa5b4, 0xc4 bytes
  04fa5b4  li 9, 8191
  04fa5b8  addi 10, 3, 12
  04fa5bc  li 0, 0
  04fa5c0  li 11, -1
  04fa5c4  stw 9, 408(3)
  04fa5c8  li 9, 1
  04fa5cc  clrldi 10, 10, 32
  04fa5d0  stw 11, 404(3)
  04fa5d4  stw 11, 400(3)
  04fa5d8  stw 0, 0(3)
  04fa5dc  stw 0, 4(3)
  04fa5e0  stw 0, 8(3)
  04fa5e4  stb 0, 412(3)
  04fa5e8  stw 0, 444(3)
  04fa5ec  stb 0, 413(3)
  04fa5f0  stw 0, 448(3)
  04fa5f4  stb 0, 414(3)
  04fa5f8  stw 0, 452(3)
  04fa5fc  stb 0, 415(3)
  04fa600  stw 0, 456(3)
  04fa604  stb 0, 416(3)
  04fa608  stw 0, 460(3)
  04fa60c  stb 0, 417(3)
  04fa610  stw 0, 464(3)
  04fa614  stw 0, 3544(3)
  04fa618  stw 0, 3548(3)
  04fa61c  stw 0, 3552(3)
  04fa620  stw 0, 3556(3)
  04fa624  stw 0, 3560(3)
  04fa628  stw 0, 3564(3)
  04fa62c  stw 0, 3568(3)
  04fa630  stw 0, 3572(3)
  04fa634  stw 0, 3576(3)
  04fa638  stw 0, 3580(3)
  04fa63c  stw 0, 3584(3)
  04fa640  stw 0, 3588(3)
  04fa644  stw 0, 3592(3)
  04fa648  stw 0, 3596(3)
  04fa64c  stw 0, 3600(3)
  04fa650  stw 0, 3604(3)
  04fa654  lwz 11, -32068(2)
  04fa658  lwz 8, -32072(2)
  04fa65c  stw 9, 396(3)
  04fa660  li 9, 166
  04fa664  stw 11, 8(10)
  04fa668  sth 0, 0(10)
  04fa66c  sth 9, 2(10)
  04fa670  stw 8, 4(10)
  04fa674  blr

FUN_004fa678:   # 0x4fa678, 0xc4 bytes
  04fa678  li 9, 8191
  04fa67c  addi 10, 3, 12
  04fa680  li 0, 0
  04fa684  li 11, -1
  04fa688  stw 9, 408(3)
  04fa68c  li 9, 1
  04fa690  clrldi 10, 10, 32
  04fa694  stw 11, 404(3)
  04fa698  stw 11, 400(3)
  04fa69c  stw 0, 0(3)
  04fa6a0  stw 0, 4(3)
  04fa6a4  stw 0, 8(3)
  04fa6a8  stb 0, 412(3)
  04fa6ac  stw 0, 444(3)
  04fa6b0  stb 0, 413(3)
  04fa6b4  stw 0, 448(3)
  04fa6b8  stb 0, 414(3)
  04fa6bc  stw 0, 452(3)
  04fa6c0  stb 0, 415(3)
  04fa6c4  stw 0, 456(3)
  04fa6c8  stb 0, 416(3)
  04fa6cc  stw 0, 460(3)
  04fa6d0  stb 0, 417(3)
  04fa6d4  stw 0, 464(3)
  04fa6d8  stw 0, 3544(3)
  04fa6dc  stw 0, 3548(3)
  04fa6e0  stw 0, 3552(3)
  04fa6e4  stw 0, 3556(3)
  04fa6e8  stw 0, 3560(3)
  04fa6ec  stw 0, 3564(3)
  04fa6f0  stw 0, 3568(3)
  04fa6f4  stw 0, 3572(3)
  04fa6f8  stw 0, 3576(3)
  04fa6fc  stw 0, 3580(3)
  04fa700  stw 0, 3584(3)
  04fa704  stw 0, 3588(3)
  04fa708  stw 0, 3592(3)
  04fa70c  stw 0, 3596(3)
  04fa710  stw 0, 3600(3)
  04fa714  stw 0, 3604(3)
  04fa718  lwz 11, -32068(2)
  04fa71c  lwz 8, -32072(2)
  04fa720  stw 9, 396(3)
  04fa724  li 9, 166
  04fa728  stw 11, 8(10)
  04fa72c  sth 0, 0(10)
  04fa730  sth 9, 2(10)
  04fa734  stw 8, 4(10)
  04fa738  blr

FUN_004fa73c:   # 0x4fa73c, 0xc4 bytes
  04fa73c  li 9, 8191
  04fa740  addi 10, 3, 12
  04fa744  li 0, 0
  04fa748  li 11, -1
  04fa74c  stw 9, 408(3)
  04fa750  li 9, 1
  04fa754  clrldi 10, 10, 32
  04fa758  stw 11, 404(3)
  04fa75c  stw 11, 400(3)
  04fa760  stw 0, 0(3)
  04fa764  stw 0, 4(3)
  04fa768  stw 0, 8(3)
  04fa76c  stb 0, 412(3)
  04fa770  stw 0, 444(3)
  04fa774  stb 0, 413(3)
  04fa778  stw 0, 448(3)
  04fa77c  stb 0, 414(3)
  04fa780  stw 0, 452(3)
  04fa784  stb 0, 415(3)
  04fa788  stw 0, 456(3)
  04fa78c  stb 0, 416(3)
  04fa790  stw 0, 460(3)
  04fa794  stb 0, 417(3)
  04fa798  stw 0, 464(3)
  04fa79c  stw 0, 3544(3)
  04fa7a0  stw 0, 3548(3)
  04fa7a4  stw 0, 3552(3)
  04fa7a8  stw 0, 3556(3)
  04fa7ac  stw 0, 3560(3)
  04fa7b0  stw 0, 3564(3)
  04fa7b4  stw 0, 3568(3)
  04fa7b8  stw 0, 3572(3)
  04fa7bc  stw 0, 3576(3)
  04fa7c0  stw 0, 3580(3)
  04fa7c4  stw 0, 3584(3)
  04fa7c8  stw 0, 3588(3)
  04fa7cc  stw 0, 3592(3)
  04fa7d0  stw 0, 3596(3)
  04fa7d4  stw 0, 3600(3)
  04fa7d8  stw 0, 3604(3)
  04fa7dc  lwz 11, -32068(2)
  04fa7e0  lwz 8, -32072(2)
  04fa7e4  stw 9, 396(3)
  04fa7e8  li 9, 166
  04fa7ec  stw 11, 8(10)
  04fa7f0  sth 0, 0(10)
  04fa7f4  sth 9, 2(10)
  04fa7f8  stw 8, 4(10)
  04fa7fc  blr

FUN_004fa800:   # 0x4fa800, 0xb94 bytes
  04fa800  stdu 1, -608(1)
  04fa804  mflr 0
  04fa808  std 27, 568(1)
  04fa80c  std 0, 624(1)
  04fa810  lwz 0, 396(3)
  04fa814  addi 27, 1, 196
  04fa818  std 17, 488(1)
  04fa81c  cmpwi 7, 0, 0
  04fa820  std 18, 496(1)
  04fa824  std 21, 520(1)
  04fa828  std 22, 528(1)
  04fa82c  std 23, 536(1)
  04fa830  std 24, 544(1)
  04fa834  mr 18, 7
  04fa838  std 16, 480(1)
  04fa83c  std 19, 504(1)
  04fa840  std 20, 512(1)
  04fa844  std 25, 552(1)
  04fa848  std 26, 560(1)
  04fa84c  std 28, 576(1)
  04fa850  std 29, 584(1)
  04fa854  std 30, 592(1)
  04fa858  std 31, 600(1)
  04fa85c  mr 23, 4
  04fa860  mr 22, 6
  04fa864  mr 17, 8
  04fa868  mr 21, 9
  04fa86c  mr 24, 10
  04fa870  stw 27, 452(1)
  04fa874  clrlwi 7, 5, 16
  04fa878  bt 30, 0x4fa8c4
  04fa87c  clrldi 0, 0, 32
  04fa880  mr 5, 7
  04fa884  addi 3, 3, 12
  04fa888  mtctr 0
  04fa88c  nop
  04fa890  clrldi 9, 3, 32
  04fa894  addi 3, 3, 12
  04fa898  lhz 11, 0(9)
  04fa89c  lhz 0, 2(9)
  04fa8a0  cmplw 7, 5, 11
  04fa8a4  lwz 31, 4(9)
  04fa8a8  clrlwi 0, 0, 16
  04fa8ac  cmplw 6, 5, 0
  04fa8b0  lwz 0, 8(9)
  04fa8b4  bt 28, 0x4fa8bc
  04fa8b8  bf 25, 0x4fab10
  04fa8bc  bdnz 0x4fa890
  04fa8c0  mr 7, 5
  04fa8c4  clrldi 5, 23, 32
  04fa8c8  lwz 4, -32036(2)
  04fa8cc  clrldi 6, 22, 32
  04fa8d0  extsw 7, 7
  04fa8d4  mr 3, 27
  04fa8d8  mr 31, 27
  04fa8dc  bl 0x4f9e10
  04fa8e0  subfic 0, 3, 56
  04fa8e4  cmpwi 7, 0, 0
  04fa8e8  bt 30, 0x4fa924
  04fa8ec  clrldi 0, 0, 32
  04fa8f0  lwz 9, 452(1)
  04fa8f4  li 10, 32
  04fa8f8  mtctr 0
  04fa8fc  nop
  04fa900  sub 0, 9, 31
  04fa904  clrldi 11, 9, 32
  04fa908  cmplwi 7, 0, 255
  04fa90c  bt 29, 0x4fa920
  04fa910  stb 10, 0(11)
  04fa914  lwz 9, 452(1)
  04fa918  addi 9, 9, 1
  04fa91c  stw 9, 452(1)
  04fa920  bdnz 0x4fa900
  04fa924  clrlwi 0, 18, 24
  04fa928  cmpwi 0, 0
  04fa92c  mfocrf 29, 128
  04fa930  bf 2, 0x4fadc0
  04fa934  clrlwi 28, 21, 16
  04fa938  cmpwi 7, 28, 0
  04fa93c  bt 30, 0x4faa5c
  04fa940  li 30, 0
  04fa944  lwz 26, -32024(2)
  04fa948  li 9, 0
  04fa94c  li 23, 10
  04fa950  li 22, 0
  04fa954  mr 25, 29
  04fa958  b 0x4fa980
  04fa95c  clrldi 6, 29, 32
  04fa960  clrldi 3, 27, 32
  04fa964  mr 4, 26
  04fa968  rldicl 5, 29, 32, 32
  04fa96c  addi 30, 30, 1
  04fa970  bl 0x4f9e10
  04fa974  clrlwi 9, 30, 16
  04fa978  cmpw 7, 28, 9
  04fa97c  bt 30, 0x4faa5c
  04fa980  slwi 9, 9, 3
  04fa984  lwz 10, 452(1)
  04fa988  add 9, 9, 24
  04fa98c  sub 11, 10, 31
  04fa990  clrldi 9, 9, 32
  04fa994  addi 0, 11, 20
  04fa998  cmplwi 7, 0, 139
  04fa99c  ld 29, 0(9)
  04fa9a0  bf 29, 0x4fa95c
  04fa9a4  cmplwi 7, 11, 255
  04fa9a8  bt 29, 0x4fa9e0
  04fa9ac  clrldi 9, 10, 32
  04fa9b0  stb 23, 0(9)
  04fa9b4  lwz 11, 452(1)
  04fa9b8  addi 9, 11, 1
  04fa9bc  sub 0, 9, 31
  04fa9c0  stw 9, 452(1)
  04fa9c4  cmplwi 7, 0, 255
  04fa9c8  bt 29, 0x4fa9e0
  04fa9cc  clrldi 9, 9, 32
  04fa9d0  stb 22, 0(9)
  04fa9d4  lwz 11, 452(1)
  04fa9d8  addi 9, 11, 1
  04fa9dc  stw 9, 452(1)
  04fa9e0  clrldi 3, 27, 32
  04fa9e4  bl 0x4f4df0
  04fa9e8  nop
  04fa9ec  mr 9, 27
  04fa9f0  li 8, 32
  04fa9f4  li 10, 56
  04fa9f8  stw 27, 452(1)
  04fa9fc  clrldi 9, 9, 32
  04faa00  stb 8, 0(9)
  04faa04  lwz 11, 452(1)
  04faa08  addi 9, 11, 1
  04faa0c  sub 0, 9, 31
  04faa10  stw 9, 452(1)
  04faa14  cmplwi 7, 0, 255
  04faa18  bf- 29, 0x4fb4f0
  04faa1c  rotlwi 25, 25, 4
  04faa20  mtocrf 1, 25
  04faa24  rotlwi 25, 25, 28
  04faa28  bt 30, 0x4fa95c
  04faa2c  lwz 4, -32028(2)
  04faa30  clrldi 3, 27, 32
  04faa34  addi 30, 30, 1
  04faa38  bl 0x4f9e10
  04faa3c  clrldi 6, 29, 32
  04faa40  clrldi 3, 27, 32
  04faa44  mr 4, 26
  04faa48  rldicl 5, 29, 32, 32
  04faa4c  bl 0x4f9e10
  04faa50  clrlwi 9, 30, 16
  04faa54  cmpw 7, 28, 9
  04faa58  bf 30, 0x4fa980
  04faa5c  lwz 11, 452(1)
  04faa60  sub 0, 11, 31
  04faa64  cmplwi 7, 0, 255
  04faa68  bf 29, 0x4faad0
  04faa6c  mr 3, 27
  04faa70  bl 0x4f4df0
  04faa74  nop
  04faa78  li 3, 0
  04faa7c  ld 0, 624(1)
  04faa80  extsw 3, 3
  04faa84  ld 16, 480(1)
  04faa88  ld 17, 488(1)
  04faa8c  mtlr 0
  04faa90  ld 18, 496(1)
  04faa94  ld 19, 504(1)
  04faa98  ld 20, 512(1)
  04faa9c  ld 21, 520(1)
  04faaa0  ld 22, 528(1)
  04faaa4  ld 23, 536(1)
  04faaa8  ld 24, 544(1)
  04faaac  ld 25, 552(1)
  04faab0  ld 26, 560(1)
  04faab4  ld 27, 568(1)
  04faab8  ld 28, 576(1)
  04faabc  ld 29, 584(1)
  04faac0  ld 30, 592(1)
  04faac4  ld 31, 600(1)
  04faac8  addi 1, 1, 608
  04faacc  blr
  04faad0  clrldi 11, 11, 32
  04faad4  li 0, 10
  04faad8  stb 0, 0(11)
  04faadc  lwz 9, 452(1)
  04faae0  addi 9, 9, 1
  04faae4  sub 0, 9, 31
  04faae8  stw 9, 452(1)
  04faaec  cmplwi 7, 0, 255
  04faaf0  bt 29, 0x4faa6c
  04faaf4  clrldi 9, 9, 32
  04faaf8  li 0, 0
  04faafc  stb 0, 0(9)
  04fab00  lwz 11, 452(1)
  04fab04  addi 9, 11, 1
  04fab08  stw 9, 452(1)
  04fab0c  b 0x4faa6c
  04fab10  sub 9, 5, 11
  04fab14  cmpwi 7, 31, 0
  04fab18  slwi 9, 9, 2
  04fab1c  mr 7, 5
  04fab20  add 9, 9, 0
  04fab24  clrldi 9, 9, 32
  04fab28  lwz 25, 0(9)
  04fab2c  bt- 30, 0x4fa8c4
  04fab30  clrldi 29, 25, 32
  04fab34  li 26, 0
  04fab38  mr 3, 29
  04fab3c  bl 0x5c8510
  04fab40  nop
  04fab44  lwz 9, -32020(2)
  04fab48  li 4, 0
  04fab4c  mr 19, 3
  04fab50  li 5, 80
  04fab54  lbz 0, 0(9)
  04fab58  addi 3, 1, 113
  04fab5c  stb 0, 112(1)
  04fab60  bl 0x5d0140
  04fab64  nop
  04fab68  lbz 0, 0(29)
  04fab6c  mr 4, 25
  04fab70  cmpwi 7, 0, 10
  04fab74  mr 9, 25
  04fab78  li 10, 0
  04fab7c  bf 30, 0x4fabec
  04fab80  mr 30, 27
  04fab84  li 29, 10
  04fab88  li 28, 0
  04fab8c  lwz 9, 452(1)
  04fab90  addi 26, 26, 1
  04fab94  clrldi 3, 27, 32
  04fab98  addi 9, 9, 1
  04fab9c  stb 29, 196(1)
  04faba0  sub 0, 9, 30
  04faba4  clrldi 11, 9, 32
  04faba8  cmplwi 7, 0, 255
  04fabac  stw 9, 452(1)
  04fabb0  bt 29, 0x4fabc4
  04fabb4  stb 28, 0(11)
  04fabb8  lwz 9, 452(1)
  04fabbc  addi 9, 9, 1
  04fabc0  stw 9, 452(1)
  04fabc4  bl 0x4f4df0
  04fabc8  nop
  04fabcc  add 4, 26, 25
  04fabd0  clrldi 9, 4, 32
  04fabd4  stw 27, 452(1)
  04fabd8  lbz 0, 0(9)
  04fabdc  cmpwi 7, 0, 10
  04fabe0  bt 30, 0x4fab8c
  04fabe4  mr 10, 26
  04fabe8  mr 9, 4
  04fabec  clrldi 9, 9, 32
  04fabf0  lbz 0, 0(9)
  04fabf4  extsb 0, 0
  04fabf8  cmpwi 7, 0, 58
  04fabfc  bt 30, 0x4fac38
  04fac00  cmpwi 7, 0, 0
  04fac04  add 9, 25, 10
  04fac08  addi 11, 9, 1
  04fac0c  bf 30, 0x4fac18
  04fac10  b 0x4fb348
  04fac14  bt 26, 0x4fb348
  04fac18  clrldi 9, 11, 32
  04fac1c  addi 10, 10, 1
  04fac20  addi 11, 11, 1
  04fac24  lbz 0, 0(9)
  04fac28  extsb 0, 0
  04fac2c  cmpwi 7, 0, 58
  04fac30  cmpwi 6, 0, 0
  04fac34  bf 30, 0x4fac14
  04fac38  mr 30, 10
  04fac3c  addi 16, 1, 112
  04fac40  cmpw 7, 26, 30
  04fac44  clrldi 29, 31, 32
  04fac48  bf 29, 0x4fb35c
  04fac4c  clrldi 5, 23, 32
  04fac50  lwz 4, -32016(2)
  04fac54  clrldi 6, 22, 32
  04fac58  mr 7, 29
  04fac5c  mr 3, 27
  04fac60  mr 8, 16
  04fac64  mr 23, 24
  04fac68  bl 0x4f9e10
  04fac6c  cmpwi 7, 18, 0
  04fac70  bt 30, 0x4fb338
  04fac74  sldi 24, 17, 48
  04fac78  addi 21, 21, 1
  04fac7c  li 22, 16
  04fac80  cmplw 7, 26, 19
  04fac84  bf 28, 0x4fae00
  04fac88  add 9, 26, 25
  04fac8c  clrldi 31, 9, 32
  04fac90  addi 9, 9, 1
  04fac94  clrldi 11, 9, 32
  04fac98  lbz 0, 0(31)
  04fac9c  lbz 8, 2(31)
  04faca0  extsb 10, 0
  04faca4  lbz 11, 0(11)
  04faca8  cmpwi 7, 10, 10
  04facac  bt 30, 0x4faf88
  04facb0  cmpwi 7, 10, 112
  04facb4  bt 30, 0x4fb020
  04facb8  cmpwi 7, 10, 61
  04facbc  bt 30, 0x4fb40c
  04facc0  cmpwi 7, 10, 0
  04facc4  bt 30, 0x4fae60
  04facc8  mr 11, 9
  04faccc  mr 10, 26
  04facd0  b 0x4facd8
  04facd4  bt 26, 0x4fae60
  04facd8  clrldi 9, 11, 32
  04facdc  addi 10, 10, 1
  04face0  addi 11, 11, 1
  04face4  lbz 0, 0(9)
  04face8  extsb 0, 0
  04facec  cmpwi 7, 0, 61
  04facf0  cmpwi 6, 0, 0
  04facf4  bf 30, 0x4facd4
  04facf8  mr 0, 10
  04facfc  mr 3, 16
  04fad00  sub 28, 0, 26
  04fad04  mr 4, 31
  04fad08  addi 29, 28, 1
  04fad0c  clrldi 5, 29, 32
  04fad10  bl 0x5cccec
  04fad14  nop
  04fad18  cmpwi 7, 29, 2
  04fad1c  bt 30, 0x4fae88
  04fad20  extsw 0, 29
  04fad24  clrldi 30, 27, 32
  04fad28  add 11, 1, 0
  04fad2c  clrldi 31, 16, 32
  04fad30  li 9, 0
  04fad34  mr 4, 31
  04fad38  add 26, 26, 29
  04fad3c  mr 3, 30
  04fad40  stb 9, 112(11)
  04fad44  bl 0x4f9e10
  04fad48  add 4, 26, 25
  04fad4c  clrldi 10, 4, 32
  04fad50  mr 8, 4
  04fad54  lbz 0, 0(10)
  04fad58  lbz 9, 1(10)
  04fad5c  extsb 0, 0
  04fad60  lbz 11, 2(10)
  04fad64  cmpwi 7, 0, 85
  04fad68  bt 30, 0x4faed8
  04fad6c  cmpwi 7, 0, 73
  04fad70  bt 30, 0x4fb0b8
  04fad74  cmpwi 7, 0, 70
  04fad78  bt 30, 0x4fb16c
  04fad7c  cmpwi 7, 0, 100
  04fad80  bt 30, 0x4fb1f0
  04fad84  mr 11, 8
  04fad88  mr 10, 26
  04fad8c  nop
  04fad90  clrldi 9, 11, 32
  04fad94  addi 11, 11, 1
  04fad98  lbz 0, 0(9)
  04fad9c  extsb 0, 0
  04fada0  cmpwi 7, 0, 9
  04fada4  cmpwi 6, 0, 32
  04fada8  bt 30, 0x4fadb8
  04fadac  cmpwi 7, 0, 44
  04fadb0  bt 26, 0x4fadb8
  04fadb4  bf 30, 0x4fadd4
  04fadb8  addi 10, 10, 1
  04fadbc  b 0x4fad90
  04fadc0  clrldi 5, 17, 48
  04fadc4  lwz 4, -32032(2)
  04fadc8  mr 3, 27
  04fadcc  bl 0x4f9e10
  04fadd0  b 0x4fa934
  04fadd4  sub 31, 10, 26
  04fadd8  cmpwi 7, 31, 0
  04faddc  bf 30, 0x4faf4c
  04fade0  cmpwi 7, 22, 0
  04fade4  bf 30, 0x4fac80
  04fade8  cmplw 7, 26, 19
  04fadec  ld 24, 0(23)
  04fadf0  addi 21, 21, -1
  04fadf4  addi 23, 23, 8
  04fadf8  li 22, 64
  04fadfc  bt 28, 0x4fac88
  04fae00  lwz 11, 452(1)
  04fae04  sub 0, 11, 27
  04fae08  cmplwi 7, 0, 255
  04fae0c  bt 29, 0x4fae4c
  04fae10  clrldi 11, 11, 32
  04fae14  li 0, 10
  04fae18  stb 0, 0(11)
  04fae1c  lwz 9, 452(1)
  04fae20  addi 9, 9, 1
  04fae24  sub 0, 9, 27
  04fae28  stw 9, 452(1)
  04fae2c  cmplwi 7, 0, 255
  04fae30  bt 29, 0x4fae4c
  04fae34  clrldi 11, 9, 32
  04fae38  li 0, 0
  04fae3c  stb 0, 0(11)
  04fae40  lwz 9, 452(1)
  04fae44  addi 9, 9, 1
  04fae48  stw 9, 452(1)
  04fae4c  mr 3, 27
  04fae50  bl 0x4f4df0
  04fae54  nop
  04fae58  li 3, 1
  04fae5c  b 0x4faa7c
  04fae60  li 0, -1
  04fae64  mr 3, 16
  04fae68  sub 28, 0, 26
  04fae6c  mr 4, 31
  04fae70  addi 29, 28, 1
  04fae74  clrldi 5, 29, 32
  04fae78  bl 0x5cccec
  04fae7c  nop
  04fae80  cmpwi 7, 29, 2
  04fae84  bf 30, 0x4fad20
  04fae88  lbz 0, 0(31)
  04fae8c  cmpwi 7, 0, 95
  04fae90  bf 30, 0x4fad20
  04fae94  clrldi 30, 27, 32
  04fae98  clrldi 31, 16, 32
  04fae9c  li 0, 0
  04faea0  mr 4, 31
  04faea4  add 26, 26, 29
  04faea8  mr 3, 30
  04faeac  stb 0, 113(1)
  04faeb0  bl 0x4f9e10
  04faeb4  add 4, 26, 25
  04faeb8  clrldi 10, 4, 32
  04faebc  mr 8, 4
  04faec0  lbz 0, 0(10)
  04faec4  lbz 9, 1(10)
  04faec8  extsb 0, 0
  04faecc  lbz 11, 2(10)
  04faed0  cmpwi 7, 0, 85
  04faed4  bf 30, 0x4fad6c
  04faed8  extsb 0, 9
  04faedc  extsb 11, 11
  04faee0  slwi 9, 0, 3
  04faee4  slwi 0, 0, 1
  04faee8  add 0, 0, 9
  04faeec  add 6, 0, 11
  04faef0  addi 29, 6, -528
  04faef4  cmpwi 7, 29, 32
  04faef8  subfic 0, 29, 64
  04faefc  srd 28, 24, 0
  04faf00  bt 29, 0x4fb1b8
  04faf04  addi 6, 6, -525
  04faf08  lwz 5, -32012(2)
  04faf0c  li 4, 81
  04faf10  srawi 6, 6, 2
  04faf14  mr 3, 31
  04faf18  extsw 6, 6
  04faf1c  bl 0x5cd198
  04faf20  nop
  04faf24  mr 3, 30
  04faf28  mr 4, 31
  04faf2c  mr 5, 28
  04faf30  bl 0x4f9e10
  04faf34  addi 26, 26, 3
  04faf38  sub 22, 22, 29
  04faf3c  add 4, 25, 26
  04faf40  sld 24, 24, 29
  04faf44  mr 8, 4
  04faf48  b 0x4fad84
  04faf4c  clrldi 29, 16, 32
  04faf50  clrldi 4, 4, 32
  04faf54  clrldi 5, 31, 32
  04faf58  mr 3, 29
  04faf5c  mr 26, 10
  04faf60  bl 0x5cccec
  04faf64  nop
  04faf68  extsw 0, 31
  04faf6c  add 9, 1, 0
  04faf70  li 0, 0
  04faf74  mr 4, 29
  04faf78  mr 3, 27
  04faf7c  stb 0, 112(9)
  04faf80  bl 0x4f9e10
  04faf84  b 0x4fade0
  04faf88  lwz 9, 452(1)
  04faf8c  mr 31, 27
  04faf90  sub 0, 9, 27
  04faf94  cmplwi 7, 0, 255
  04faf98  bt 29, 0x4fafd4
  04faf9c  clrldi 9, 9, 32
  04fafa0  stb 10, 0(9)
  04fafa4  lwz 11, 452(1)
  04fafa8  addi 9, 11, 1
  04fafac  sub 0, 9, 27
  04fafb0  stw 9, 452(1)
  04fafb4  cmplwi 7, 0, 255
  04fafb8  bt 29, 0x4fafd4
  04fafbc  clrldi 9, 9, 32
  04fafc0  li 0, 0
  04fafc4  stb 0, 0(9)
  04fafc8  lwz 11, 452(1)
  04fafcc  addi 9, 11, 1
  04fafd0  stw 9, 452(1)
  04fafd4  mr 3, 27
  04fafd8  bl 0x4f4df0
  04fafdc  nop
  04fafe0  mr 9, 27
  04fafe4  li 8, 32
  04fafe8  li 10, 56
  04fafec  stw 27, 452(1)
  04faff0  clrldi 9, 9, 32
  04faff4  stb 8, 0(9)
  04faff8  lwz 11, 452(1)
  04faffc  addi 9, 11, 1
  04fb000  sub 0, 9, 31
  04fb004  stw 9, 452(1)
  04fb008  cmplwi 7, 0, 255
  04fb00c  bf- 29, 0x4fb4e4
  04fb010  addi 26, 26, 1
  04fb014  add 4, 25, 26
  04fb018  mr 8, 4
  04fb01c  b 0x4fad84
  04fb020  cmpwi 7, 11, 97
  04fb024  bf 30, 0x4facc8
  04fb028  cmpwi 7, 8, 100
  04fb02c  bf 30, 0x4facc8
  04fb030  addi 26, 26, 3
  04fb034  add 8, 26, 25
  04fb038  clrldi 11, 8, 32
  04fb03c  lbz 9, 0(11)
  04fb040  addi 0, 9, -48
  04fb044  clrlwi 0, 0, 24
  04fb048  cmplwi 7, 0, 6
  04fb04c  bt 29, 0x4fb414
  04fb050  extsb 9, 9
  04fb054  lbz 0, 1(11)
  04fb058  addi 26, 26, 2
  04fb05c  slwi 11, 9, 3
  04fb060  slwi 9, 9, 1
  04fb064  extsb 0, 0
  04fb068  add 9, 9, 11
  04fb06c  add 8, 26, 25
  04fb070  add 9, 9, 0
  04fb074  addi 9, 9, -528
  04fb078  sub 22, 22, 9
  04fb07c  sld 24, 24, 9
  04fb080  mr 11, 8
  04fb084  mr 4, 11
  04fb088  addi 11, 11, 1
  04fb08c  clrldi 9, 4, 32
  04fb090  lbz 0, 0(9)
  04fb094  extsb 0, 0
  04fb098  cmpwi 7, 0, 9
  04fb09c  cmpwi 6, 0, 32
  04fb0a0  bt 30, 0x4fb0b0
  04fb0a4  cmpwi 7, 0, 44
  04fb0a8  bt 26, 0x4fb0b0
  04fb0ac  bf 30, 0x4fb41c
  04fb0b0  addi 26, 26, 1
  04fb0b4  b 0x4fb084
  04fb0b8  extsb 9, 9
  04fb0bc  extsb 11, 11
  04fb0c0  slwi 0, 9, 3
  04fb0c4  slwi 9, 9, 1
  04fb0c8  li 10, 1
  04fb0cc  add 9, 9, 0
  04fb0d0  li 28, 43
  04fb0d4  add 9, 9, 11
  04fb0d8  addi 0, 9, -529
  04fb0dc  addi 31, 9, -528
  04fb0e0  slw 0, 10, 0
  04fb0e4  subfic 9, 31, 64
  04fb0e8  extsw 0, 0
  04fb0ec  srd 30, 24, 9
  04fb0f0  and 0, 0, 30
  04fb0f4  cmpdi 7, 0, 0
  04fb0f8  bt 30, 0x4fb114
  04fb0fc  slw 9, 10, 31
  04fb100  neg 0, 30
  04fb104  addi 9, 9, -1
  04fb108  li 28, 45
  04fb10c  extsw 9, 9
  04fb110  and 30, 0, 9
  04fb114  cmpwi 7, 31, 32
  04fb118  bt 29, 0x4fb2f8
  04fb11c  addi 6, 31, 3
  04fb120  lwz 5, -32004(2)
  04fb124  clrldi 29, 16, 32
  04fb128  srawi 6, 6, 2
  04fb12c  li 4, 81
  04fb130  extsw 6, 6
  04fb134  mr 3, 29
  04fb138  bl 0x5cd198
  04fb13c  nop
  04fb140  mr 3, 27
  04fb144  mr 4, 29
  04fb148  extsw 5, 28
  04fb14c  mr 6, 30
  04fb150  bl 0x4f9e10
  04fb154  addi 26, 26, 3
  04fb158  sub 22, 22, 31
  04fb15c  add 4, 25, 26
  04fb160  sld 24, 24, 31
  04fb164  mr 8, 4
  04fb168  b 0x4fad84
  04fb16c  cmpwi 7, 9, 51
  04fb170  bf 30, 0x4fad84
  04fb174  cmpwi 7, 11, 50
  04fb178  bf 30, 0x4fad84
  04fb17c  rldicl 0, 24, 32, 32
  04fb180  lwz 4, -31996(2)
  04fb184  mr 3, 30
  04fb188  stw 0, 464(1)
  04fb18c  lfs 0, 464(1)
  04fb190  addi 26, 26, 3
  04fb194  fmr 1, 0
  04fb198  stfd 0, 472(1)
  04fb19c  ld 5, 472(1)
  04fb1a0  sldi 24, 24, 32
  04fb1a4  addi 22, 22, -32
  04fb1a8  bl 0x4f9e10
  04fb1ac  add 4, 26, 25
  04fb1b0  mr 8, 4
  04fb1b4  b 0x4fad84
  04fb1b8  addi 6, 6, -557
  04fb1bc  lwz 5, -32008(2)
  04fb1c0  mr 3, 31
  04fb1c4  srawi 6, 6, 2
  04fb1c8  li 4, 81
  04fb1cc  extsw 6, 6
  04fb1d0  bl 0x5cd198
  04fb1d4  nop
  04fb1d8  mr 3, 30
  04fb1dc  mr 4, 31
  04fb1e0  clrldi 6, 28, 32
  04fb1e4  rldicl 5, 28, 32, 32
  04fb1e8  bl 0x4f9e10
  04fb1ec  b 0x4faf34
  04fb1f0  cmpwi 7, 9, 117
  04fb1f4  bf 30, 0x4fad84
  04fb1f8  cmpwi 7, 11, 109
  04fb1fc  bf 30, 0x4fad84
  04fb200  lbz 0, 3(10)
  04fb204  cmpwi 7, 0, 112
  04fb208  bf 30, 0x4fad84
  04fb20c  cmplwi 7, 29, 3
  04fb210  li 10, 0
  04fb214  bf 29, 0x4fb24c
  04fb218  addi 10, 29, -4
  04fb21c  cmpwi 7, 10, 0
  04fb220  bt- 30, 0x4fb24c
  04fb224  addi 0, 28, -3
  04fb228  li 11, 0
  04fb22c  clrldi 0, 0, 32
  04fb230  mtctr 0
  04fb234  li 0, 32
  04fb238  add 9, 11, 16
  04fb23c  addi 11, 11, 1
  04fb240  clrldi 9, 9, 32
  04fb244  stb 0, 0(9)
  04fb248  bdnz 0x4fb238
  04fb24c  extsw 0, 10
  04fb250  li 30, 0
  04fb254  add 9, 1, 0
  04fb258  li 0, 0
  04fb25c  stb 0, 112(9)
  04fb260  clrlwi 31, 30, 30
  04fb264  mr 8, 30
  04fb268  cmpwi 7, 31, 0
  04fb26c  bf 30, 0x4fb424
  04fb270  cmpwi 7, 30, 0
  04fb274  bt 30, 0x4fb2c4
  04fb278  li 0, 56
  04fb27c  lwz 9, 452(1)
  04fb280  mr 10, 27
  04fb284  li 7, 32
  04fb288  mtctr 0
  04fb28c  sub 0, 9, 10
  04fb290  clrldi 11, 9, 32
  04fb294  cmplwi 7, 0, 255
  04fb298  bt 29, 0x4fb2ac
  04fb29c  stb 7, 0(11)
  04fb2a0  lwz 9, 452(1)
  04fb2a4  addi 9, 9, 1
  04fb2a8  stw 9, 452(1)
  04fb2ac  bdnz+ 0x4fb28c
  04fb2b0  slwi 6, 8, 3
  04fb2b4  lwz 4, -31992(2)
  04fb2b8  mr 3, 27
  04fb2bc  mr 5, 16
  04fb2c0  bl 0x4f9e10
  04fb2c4  mr 3, 27
  04fb2c8  lwz 4, -31984(2)
  04fb2cc  rldicl 5, 24, 32, 32
  04fb2d0  clrldi 6, 24, 32
  04fb2d4  clrlwi 28, 21, 16
  04fb2d8  bl 0x4f9e10
  04fb2dc  cmpwi 7, 28, 1
  04fb2e0  bt 30, 0x4fb4d0
  04fb2e4  ld 24, 0(23)
  04fb2e8  addi 30, 30, 1
  04fb2ec  addi 23, 23, 8
  04fb2f0  addi 21, 21, -1
  04fb2f4  b 0x4fb260
  04fb2f8  addi 6, 31, -29
  04fb2fc  lwz 5, -32000(2)
  04fb300  clrldi 29, 16, 32
  04fb304  srawi 6, 6, 2
  04fb308  mr 3, 29
  04fb30c  extsw 6, 6
  04fb310  li 4, 81
  04fb314  bl 0x5cd198
  04fb318  nop
  04fb31c  mr 3, 27
  04fb320  mr 4, 29
  04fb324  extsw 5, 28
  04fb328  clrldi 7, 30, 32
  04fb32c  rldicl 6, 30, 32, 32
  04fb330  bl 0x4f9e10
  04fb334  b 0x4fb154
  04fb338  ld 24, 0(24)
  04fb33c  addi 23, 23, 8
  04fb340  li 22, 64
  04fb344  b 0x4fac80
  04fb348  li 30, -1
  04fb34c  addi 16, 1, 112
  04fb350  cmpw 7, 26, 30
  04fb354  clrldi 29, 31, 32
  04fb358  bt 29, 0x4fac4c
  04fb35c  addi 20, 30, 1
  04fb360  clrldi 4, 4, 32
  04fb364  sub 28, 20, 26
  04fb368  mr 3, 16
  04fb36c  clrldi 5, 28, 32
  04fb370  bl 0x5cccec
  04fb374  nop
  04fb378  mr 3, 29
  04fb37c  bl 0x5c8510
  04fb380  nop
  04fb384  neg 3, 3
  04fb388  sub 3, 3, 28
  04fb38c  addi 0, 3, 41
  04fb390  cmpwi 7, 0, 0

FUN_004fb500:   # 0x4fb500, 0x380 bytes
  04fb500  mfcr 12
  04fb504  stdu 1, -880(1)
  04fb508  std 30, 864(1)
  04fb50c  addi 30, 1, 112
  04fb510  std 25, 824(1)
  04fb514  std 26, 832(1)
  04fb518  std 28, 848(1)
  04fb51c  std 29, 856(1)
  04fb520  std 31, 872(1)
  04fb524  mr 29, 3
  04fb528  mr 28, 4
  04fb52c  mr 26, 3
  04fb530  std 14, 736(1)
  04fb534  std 15, 744(1)
  04fb538  std 16, 752(1)
  04fb53c  std 17, 760(1)
  04fb540  std 18, 768(1)
  04fb544  std 19, 776(1)
  04fb548  std 20, 784(1)
  04fb54c  std 21, 792(1)
  04fb550  std 22, 800(1)
  04fb554  std 23, 808(1)
  04fb558  std 24, 816(1)
  04fb55c  std 27, 840(1)
  04fb560  mr 31, 5
  04fb564  mr 25, 6
  04fb568  clrldi 3, 3, 32
  04fb56c  mr 4, 30
  04fb570  li 11, 351
  04fb574  stw 12, 888(1)
  04fb578  mflr 0
  04fb57c  std 0, 896(1)
  04fb580  sc
  04fb584  cmpwi 4, 3, 0
  04fb588  bf 18, 0x4fb5a0
  04fb58c  ld 0, 120(1)
  04fb590  rlwinm 0, 0, 0, 30, 30
  04fb594  cmpdi 7, 0, 0
  04fb598  bf 30, 0x4fb5bc
  04fb59c  nop
  04fb5a0  lwz 6, -31968(2)
  04fb5a4  li 5, 258
  04fb5a8  lwz 3, -31976(2)
  04fb5ac  lwz 4, -31972(2)
  04fb5b0  bl 0x4f4df0
  04fb5b4  nop
  04fb5b8  trap
  04fb5bc  ld 9, 112(1)
  04fb5c0  rlwinm 0, 9, 0, 12, 12
  04fb5c4  cmpdi 7, 0, 0
  04fb5c8  bt 30, 0x4fb730
  04fb5cc  slwi 3, 28, 3
  04fb5d0  mr 4, 30
  04fb5d4  add 3, 29, 3
  04fb5d8  li 11, 351
  04fb5dc  addi 3, 3, -1
  04fb5e0  clrldi 3, 3, 32
  04fb5e4  sc
  04fb5e8  cmpwi 4, 3, 0
  04fb5ec  bf 18, 0x4fb5a0
  04fb5f0  ld 0, 120(1)
  04fb5f4  rlwinm 0, 0, 0, 30, 30
  04fb5f8  cmpdi 7, 0, 0
  04fb5fc  bt 30, 0x4fb5a0
  04fb600  ld 9, 112(1)
  04fb604  rlwinm 0, 9, 0, 12, 12
  04fb608  cmpdi 7, 0, 0
  04fb60c  bf 30, 0x4fb61c
  04fb610  rlwinm 0, 9, 0, 13, 13
  04fb614  cmpdi 7, 0, 0
  04fb618  bt 30, 0x4fb5a0
  04fb61c  addi 0, 1, 168
  04fb620  clrlwi 22, 31, 31
  04fb624  clrldi 9, 0, 32
  04fb628  cmpwi 7, 22, 0
  04fb62c  std 0, 720(1)
  04fb630  li 0, 0
  04fb634  stw 0, 60(9)
  04fb638  stw 0, 0(9)
  04fb63c  stw 0, 4(9)
  04fb640  stw 0, 8(9)
  04fb644  stw 0, 12(9)
  04fb648  stw 0, 16(9)
  04fb64c  stw 0, 20(9)
  04fb650  stw 0, 24(9)
  04fb654  stw 0, 28(9)
  04fb658  stw 0, 32(9)
  04fb65c  stw 0, 36(9)
  04fb660  stw 0, 40(9)
  04fb664  stw 0, 44(9)
  04fb668  stw 0, 48(9)
  04fb66c  stw 0, 52(9)
  04fb670  stw 0, 56(9)
  04fb674  bf 30, 0x4fbf30
  04fb678  rlwinm 0, 31, 0, 28, 28
  04fb67c  cmpwi 3, 0, 0
  04fb680  stw 0, 716(1)
  04fb684  bf 14, 0x4fbf0c
  04fb688  cmpwi 7, 28, 0
  04fb68c  li 9, 0
  04fb690  rlwinm 17, 31, 0, 29, 29
  04fb694  stw 9, 708(1)
  04fb698  stw 9, 692(1)
  04fb69c  bt- 30, 0x4fb75c
  04fb6a0  li 9, 0
  04fb6a4  rlwinm 0, 31, 0, 30, 30
  04fb6a8  rlwinm 17, 31, 0, 29, 29
  04fb6ac  li 18, 1
  04fb6b0  li 23, 0
  04fb6b4  stw 0, 712(1)
  04fb6b8  stw 9, 708(1)
  04fb6bc  stw 9, 704(1)
  04fb6c0  stw 9, 700(1)
  04fb6c4  stw 9, 696(1)
  04fb6c8  stw 9, 692(1)
  04fb6cc  stw 9, 688(1)
  04fb6d0  clrlwi 0, 18, 24
  04fb6d4  slwi 9, 23, 3
  04fb6d8  cmpwi 7, 0, 0
  04fb6dc  add 0, 26, 9
  04fb6e0  bt 30, 0x4fbec4
  04fb6e4  clrldi 24, 0, 32
  04fb6e8  ld 4, 0(24)
  04fb6ec  rldicl 5, 4, 23, 61
  04fb6f0  cmplwi 7, 5, 6
  04fb6f4  bt 29, 0x4fbee8
  04fb6f8  lwz 11, -31956(2)
  04fb6fc  rlwinm 9, 5, 2, 27, 29
  04fb700  lwzx 0, 9, 11
  04fb704  extsw 0, 0
  04fb708  add 0, 0, 11
  04fb70c  mtctr 0
  04fb710  bctr
  04fb714  <unknown>
  04fb718  <unknown>
  04fb71c  <unknown>
  04fb720  <unknown>
  04fb724  <unknown>
  04fb728  <unknown>
  04fb72c  <unknown>
  04fb730  rlwinm 0, 9, 0, 13, 13
  04fb734  cmpdi 7, 0, 0
  04fb738  bf 30, 0x4fb5cc
  04fb73c  b 0x4fb5a0
  04fb740  cmpwi 7, 22, 0
  04fb744  bf 30, 0x4fc3a4
  04fb748  cmpwi 7, 17, 0
  04fb74c  bf 30, 0x4fc394
  04fb750  addi 23, 23, 1
  04fb754  cmplw 7, 28, 23
  04fb758  bt+ 29, 0x4fb6d0
  04fb75c  cmpwi 7, 17, 0
  04fb760  bt 30, 0x4fbe30
  04fb764  lwz 9, 708(1)
  04fb768  cmpwi 7, 9, 0
  04fb76c  bt 30, 0x4fbe30
  04fb770  ld 11, 720(1)
  04fb774  li 30, 0
  04fb778  li 28, 1
  04fb77c  mr 31, 11
  04fb780  addi 29, 1, 232
  04fb784  b 0x4fb7a0
  04fb788  addi 30, 30, 1
  04fb78c  lwz 9, 708(1)
  04fb790  addi 29, 29, 8
  04fb794  cmpw 7, 30, 9
  04fb798  addi 31, 31, 4
  04fb79c  bt 30, 0x4fbe30
  04fb7a0  clrldi 9, 29, 32
  04fb7a4  clrldi 11, 31, 32
  04fb7a8  ld 9, 0(9)
  04fb7ac  lwz 10, 0(11)
  04fb7b0  rldicl 0, 9, 56, 57
  04fb7b4  cmpw 7, 10, 0
  04fb7b8  bf 30, 0x4fb788
  04fb7bc  rldicl 4, 9, 27, 60
  04fb7c0  lwz 9, 692(1)
  04fb7c4  slw 0, 28, 4
  04fb7c8  and 9, 0, 9
  04fb7cc  cmpwi 9, 0
  04fb7d0  bf 2, 0x4fb788
  04fb7d4  clrldi 4, 4, 60
  04fb7d8  lwz 3, -31612(2)
  04fb7dc  bl 0x4f4df0
  04fb7e0  nop
  04fb7e4  b 0x4fb788
  04fb7e8  cmpwi 7, 22, 0
  04fb7ec  ld 4, 0(24)
  04fb7f0  lbz 27, 4(24)
  04fb7f4  rldicl 21, 4, 56, 57
  04fb7f8  lbz 31, 5(24)
  04fb7fc  rldicl 29, 4, 27, 60
  04fb800  bf 30, 0x4fc374
  04fb804  cmplwi 7, 27, 15
  04fb808  bf- 29, 0x4fc9e0
  04fb80c  mullw 0, 21, 31
  04fb810  add 31, 27, 0
  04fb814  cmplwi 7, 31, 248
  04fb818  bt- 29, 0x4fcb3c
  04fb81c  cmplw 7, 27, 31
  04fb820  bt- 29, 0x4fcb20
  04fb824  cmpw 7, 27, 31
  04fb828  bt 30, 0x4fc400
  04fb82c  lwz 9, 708(1)
  04fb830  cmpwi 7, 9, 0
  04fb834  bt 30, 0x4fb898
  04fb838  addi 8, 1, 232
  04fb83c  mtctr 9
  04fb840  clrldi 9, 8, 32
  04fb844  ld 11, 0(9)
  04fb848  rldicl 0, 11, 27, 60
  04fb84c  cmpw 7, 0, 29
  04fb850  bt- 30, 0x4fc460
  04fb854  lbz 10, 4(9)
  04fb858  rlwinm 0, 11, 24, 25, 31
  04fb85c  lbz 9, 5(9)
  04fb860  cmplw 7, 31, 10
  04fb864  bf 29, 0x4fb890
  04fb868  clrlwi 0, 0, 24
  04fb86c  clrlwi 9, 9, 24
  04fb870  li 11, 1
  04fb874  mullw 0, 0, 9
  04fb878  add 0, 10, 0
  04fb87c  cmplw 7, 27, 0

FUN_004fcd10:   # 0x4fcd10, 0x70 bytes
  04fcd10  mfcr 12
  04fcd14  rldicl 9, 3, 32, 32
  04fcd18  stdu 1, -192(1)
  04fcd1c  std 28, 160(1)
  04fcd20  std 31, 184(1)
  04fcd24  std 27, 152(1)
  04fcd28  std 29, 168(1)
  04fcd2c  std 30, 176(1)
  04fcd30  mr 31, 4
  04fcd34  mr 28, 5
  04fcd38  stw 12, 200(1)
  04fcd3c  mflr 0
  04fcd40  std 0, 208(1)
  04fcd44  clrlwi 0, 9, 16
  04fcd48  cmplwi 7, 0, 5
  04fcd4c  bt 29, 0x4fcd84
  04fcd50  lwz 11, -31608(2)
  04fcd54  rlwinm 9, 9, 2, 14, 29
  04fcd58  lwzx 0, 9, 11
  04fcd5c  extsw 0, 0
  04fcd60  add 0, 0, 11
  04fcd64  mtctr 0
  04fcd68  bctr
  04fcd6c  <unknown>
  04fcd70  <unknown>
  04fcd74  <unknown>
  04fcd78  <unknown>
  04fcd7c  <unknown>

FUN_004fd358:   # 0x4fd358, 0x8 bytes
  04fd358  lwz 3, -31532(2)
  04fd35c  blr

FUN_004fd360:   # 0x4fd360, 0x10 bytes
  04fd360  lwz 3, -31528(2)
  04fd364  addi 3, 3, 127
  04fd368  rlwinm 3, 3, 0, 0, 24
  04fd36c  blr

FUN_004fd370:   # 0x4fd370, 0x8 bytes
  04fd370  lwz 3, -31524(2)
  04fd374  blr

FUN_004fd378:   # 0x4fd378, 0x10 bytes
  04fd378  lwz 3, -31520(2)
  04fd37c  addi 3, 3, 127
  04fd380  rlwinm 3, 3, 0, 0, 24
  04fd384  blr

FUN_004fd388:   # 0x4fd388, 0x6c bytes
  04fd388  mfcr 12
  04fd38c  stdu 1, -608(1)
  04fd390  std 20, 512(1)
  04fd394  lwz 20, -31516(2)
  04fd398  std 21, 520(1)
  04fd39c  mr 21, 3
  04fd3a0  mr 3, 20
  04fd3a4  std 24, 544(1)
  04fd3a8  mr 24, 4
  04fd3ac  std 23, 536(1)
  04fd3b0  std 26, 560(1)
  04fd3b4  std 29, 584(1)
  04fd3b8  std 30, 592(1)
  04fd3bc  mr 29, 5
  04fd3c0  std 17, 488(1)
  04fd3c4  std 18, 496(1)
  04fd3c8  std 19, 504(1)
  04fd3cc  std 22, 528(1)
  04fd3d0  std 25, 552(1)
  04fd3d4  std 27, 568(1)
  04fd3d8  std 28, 576(1)
  04fd3dc  std 31, 600(1)
  04fd3e0  mr 23, 29
  04fd3e4  stw 12, 616(1)
  04fd3e8  mflr 0
  04fd3ec  std 0, 624(1)
  04fd3f0  bl 0x4f4df0

FUN_004fe048:   # 0x4fe048, 0x24 bytes
  04fe048  lwz 4, 4(3)
  04fe04c  lwz 3, 8(3)
  04fe050  cmplw 4, 3
  04fe054  bf 1, 0x4fe060
  04fe058  li 3, -1
  04fe05c  b 0x4fe068
  04fe060  subc 3, 3, 4
  04fe064  extsw 3, 3
  04fe068  blr

FUN_004fe06c:   # 0x4fe06c, 0x2c bytes
  04fe06c  lwz 5, 4(3)
  04fe070  li 4, -1
  04fe074  lwz 3, 8(3)
  04fe078  subc 6, 3, 5
  04fe07c  subc 3, 3, 5
  04fe080  extsw 5, 6
  04fe084  sradi 3, 3, 63
  04fe088  subc 4, 4, 5
  04fe08c  and 3, 3, 4
  04fe090  addc 3, 5, 3
  04fe094  blr

idol::AllocateMemAlign:   # 0x4fe098, 0x180 bytes
  04fe098  stdu 1, -112(1)
  04fe09c  mflr 0
  04fe0a0  std 0, 128(1)
  04fe0a4  cmpwi 4, 0
  04fe0a8  bf 2, 0x4fe0b4
  04fe0ac  li 3, 0
  04fe0b0  b 0x4fe208
  04fe0b4  lwz 6, 20(3)
  04fe0b8  cmpwi 6, 0
  04fe0bc  bf 2, 0x4fe150
  04fe0c0  addic 6, 5, -1
  04fe0c4  lwz 8, 4(3)
  04fe0c8  li 7, 0
  04fe0cc  and 6, 8, 6
  04fe0d0  subc 5, 5, 6
  04fe0d4  subc 6, 7, 6
  04fe0d8  addc 5, 8, 5
  04fe0dc  cntlzw 6, 6
  04fe0e0  lwz 7, 8(3)
  04fe0e4  clrldi 5, 5, 32
  04fe0e8  sldi 6, 6, 58
  04fe0ec  subc 9, 8, 5
  04fe0f0  sradi 6, 6, 63
  04fe0f4  and 6, 6, 9
  04fe0f8  addc 5, 5, 6
  04fe0fc  addc 6, 5, 4
  04fe100  cmplw 6, 7
  04fe104  bf 1, 0x4fe140
  04fe108  subc 3, 7, 8
  04fe10c  subc 5, 7, 8
  04fe110  extsw 6, 3
  04fe114  li 7, -1
  04fe118  sradi 5, 5, 63
  04fe11c  subc 7, 7, 6
  04fe120  lis 3, 102
  04fe124  and 5, 5, 7
  04fe128  addic 3, 3, -2840
  04fe12c  addc 5, 6, 5
  04fe130  bl 0x4ff520
  04fe134  nop
  04fe138  li 3, 0
  04fe13c  b 0x4fe208
  04fe140  ori 4, 3, 0
  04fe144  ori 3, 5, 0
  04fe148  stw 6, 4(4)
  04fe14c  b 0x4fe208
  04fe150  addic 7, 5, -1
  04fe154  li 9, 0
  04fe158  and 6, 4, 7
  04fe15c  li 8, 0
  04fe160  subc 5, 5, 6
  04fe164  subc 9, 9, 6
  04fe168  lwz 6, 8(3)
  04fe16c  addc 5, 4, 5
  04fe170  cntlzw 9, 9
  04fe174  and 7, 6, 7
  04fe178  sldi 9, 9, 58
  04fe17c  subc 8, 8, 7
  04fe180  subc 10, 6, 7
  04fe184  subc 4, 4, 5
  04fe188  sradi 7, 9, 63
  04fe18c  cntlzw 8, 8
  04fe190  and 4, 7, 4
  04fe194  sldi 8, 8, 58
  04fe198  addc 7, 5, 4
  04fe19c  subc 4, 6, 10
  04fe1a0  sradi 8, 8, 63
  04fe1a4  lwz 5, 4(3)
  04fe1a8  extsw 7, 7
  04fe1ac  and 4, 8, 4
  04fe1b0  addc 4, 10, 4
  04fe1b4  subc 4, 4, 7
  04fe1b8  cmplw 4, 5
  04fe1bc  bf 0, 0x4fe1fc
  04fe1c0  subc 3, 6, 5
  04fe1c4  li 4, -1
  04fe1c8  extsw 8, 3
  04fe1cc  subc 3, 6, 5
  04fe1d0  subc 9, 4, 8
  04fe1d4  sradi 5, 3, 63
  04fe1d8  lis 3, 102
  04fe1dc  and 5, 5, 9
  04fe1e0  addic 3, 3, -2840
  04fe1e4  ori 4, 7, 0
  04fe1e8  addc 5, 8, 5
  04fe1ec  bl 0x4ff520
  04fe1f0  nop
  04fe1f4  li 3, 0
  04fe1f8  b 0x4fe208
  04fe1fc  ori 5, 3, 0
  04fe200  clrldi 3, 4, 32
  04fe204  stw 3, 8(5)
  04fe208  ld 0, 128(1)
  04fe20c  mtlr 0
  04fe210  addi 1, 1, 112
  04fe214  blr

FUN_004fe218:   # 0x4fe218, 0x30 bytes
  04fe218  stdu 1, -112(1)
  04fe21c  mflr 0
  04fe220  std 0, 128(1)
  04fe224  extsw 5, 3
  04fe228  ori 3, 4, 0
  04fe22c  ori 4, 5, 0
  04fe230  li 5, 16
  04fe234  bl 0x4fe098
  04fe238  ld 0, 128(1)
  04fe23c  mtlr 0
  04fe240  addi 1, 1, 112
  04fe244  blr

FUN_004fe248:   # 0x4fe248, 0x34 bytes
  04fe248  stdu 1, -112(1)
  04fe24c  mflr 0
  04fe250  std 0, 128(1)
  04fe254  extsw 7, 4
  04fe258  extsw 6, 3
  04fe25c  ori 3, 5, 0
  04fe260  ori 4, 6, 0
  04fe264  ori 5, 7, 0
  04fe268  bl 0x4fe098
  04fe26c  ld 0, 128(1)
  04fe270  mtlr 0
  04fe274  addi 1, 1, 112
  04fe278  blr

FUN_004fe27c:   # 0x4fe27c, 0x2c bytes
  04fe27c  stdu 1, -112(1)
  04fe280  mflr 0
  04fe284  std 0, 128(1)
  04fe288  extsw 6, 3
  04fe28c  ori 3, 4, 0
  04fe290  ori 4, 6, 0
  04fe294  bl 0x4fe098
  04fe298  ld 0, 128(1)
  04fe29c  mtlr 0
  04fe2a0  addi 1, 1, 112
  04fe2a4  blr

FUN_004fe2a8:   # 0x4fe2a8, 0x30 bytes
  04fe2a8  stdu 1, -112(1)
  04fe2ac  mflr 0
  04fe2b0  std 0, 128(1)
  04fe2b4  extsw 5, 3
  04fe2b8  ori 3, 4, 0
  04fe2bc  ori 4, 5, 0
  04fe2c0  li 5, 16
  04fe2c4  bl 0x4fe098
  04fe2c8  ld 0, 128(1)
  04fe2cc  mtlr 0
  04fe2d0  addi 1, 1, 112
  04fe2d4  blr

FUN_004fe2d8:   # 0x4fe2d8, 0x34 bytes
  04fe2d8  stdu 1, -112(1)
  04fe2dc  mflr 0
  04fe2e0  std 0, 128(1)
  04fe2e4  extsw 7, 4
  04fe2e8  extsw 6, 3
  04fe2ec  ori 3, 5, 0
  04fe2f0  ori 4, 6, 0
  04fe2f4  ori 5, 7, 0
  04fe2f8  bl 0x4fe098
  04fe2fc  ld 0, 128(1)
  04fe300  mtlr 0
  04fe304  addi 1, 1, 112
  04fe308  blr

FUN_004fe30c:   # 0x4fe30c, 0x2c bytes
  04fe30c  stdu 1, -112(1)
  04fe310  mflr 0
  04fe314  std 0, 128(1)
  04fe318  extsw 6, 3
  04fe31c  ori 3, 4, 0
  04fe320  ori 4, 6, 0
  04fe324  bl 0x4fe098
  04fe328  ld 0, 128(1)
  04fe32c  mtlr 0
  04fe330  addi 1, 1, 112
  04fe334  blr

FUN_004fe338:   # 0x4fe338, 0x4 bytes
  04fe338  blr

FUN_004fe33c:   # 0x4fe33c, 0x4 bytes
  04fe33c  blr

FUN_004fe340:   # 0x4fe340, 0x4 bytes
  04fe340  blr

FUN_004fe344:   # 0x4fe344, 0x4 bytes
  04fe344  blr

FUN_004fe348:   # 0x4fe348, 0x54 bytes
  04fe348  stdu 1, -128(1)
  04fe34c  mflr 0
  04fe350  std 0, 144(1)
  04fe354  std 31, 120(1)
  04fe358  ori 31, 3, 0
  04fe35c  lwz 3, 0(31)
  04fe360  cmpwi 3, 0
  04fe364  bt 2, 0x4fe378
  04fe368  bl 0x5d580c
  04fe36c  nop
  04fe370  li 3, 0
  04fe374  stw 3, 0(31)
  04fe378  li 3, 0
  04fe37c  stw 3, 4(31)
  04fe380  stw 3, 12(31)
  04fe384  stw 3, 8(31)
  04fe388  ld 0, 144(1)
  04fe38c  mtlr 0
  04fe390  ld 31, 120(1)
  04fe394  addi 1, 1, 128
  04fe398  blr

FUN_004fe39c:   # 0x4fe39c, 0x28 bytes
  04fe39c  addc 9, 4, 5
  04fe3a0  stw 4, 0(3)
  04fe3a4  stw 4, 4(3)
  04fe3a8  stw 9, 12(3)
  04fe3ac  stw 9, 8(3)
  04fe3b0  stw 6, 24(3)
  04fe3b4  stw 7, 32(3)
  04fe3b8  stw 8, 28(3)
  04fe3bc  ori 3, 5, 0
  04fe3c0  blr

FUN_004fe3c4:   # 0x4fe3c4, 0x88 bytes
  04fe3c4  stdu 1, -160(1)
  04fe3c8  mflr 0
  04fe3cc  std 0, 176(1)
  04fe3d0  std 30, 144(1)
  04fe3d4  std 28, 128(1)
  04fe3d8  ori 30, 4, 0
  04fe3dc  std 27, 120(1)
  04fe3e0  ori 28, 3, 0
  04fe3e4  clrldi 3, 30, 32
  04fe3e8  std 31, 152(1)
  04fe3ec  ori 27, 5, 0
  04fe3f0  std 29, 136(1)
  04fe3f4  ori 31, 7, 0
  04fe3f8  ori 29, 6, 0
  04fe3fc  bl 0x5d5838
  04fe400  nop
  04fe404  addc 4, 3, 30
  04fe408  stw 3, 0(28)
  04fe40c  stw 3, 4(28)
  04fe410  stw 27, 24(28)
  04fe414  ori 3, 30, 0
  04fe418  stw 4, 12(28)
  04fe41c  stw 4, 8(28)
  04fe420  stw 29, 32(28)
  04fe424  stw 31, 28(28)
  04fe428  ld 0, 176(1)
  04fe42c  mtlr 0
  04fe430  ld 27, 120(1)
  04fe434  ld 28, 128(1)
  04fe438  ld 29, 136(1)
  04fe43c  ld 30, 144(1)
  04fe440  ld 31, 152(1)
  04fe444  addi 1, 1, 160
  04fe448  blr

FUN_004fe44c:   # 0x4fe44c, 0x7c bytes
  04fe44c  addic 5, 4, -1
  04fe450  lwz 7, 4(3)
  04fe454  li 6, 0
  04fe458  lwz 3, 8(3)
  04fe45c  and 8, 7, 5
  04fe460  addc 9, 7, 4
  04fe464  subc 6, 6, 8
  04fe468  subc 8, 9, 8
  04fe46c  cntlzw 6, 6
  04fe470  subc 7, 7, 8
  04fe474  sldi 6, 6, 58
  04fe478  addic 4, 4, -1
  04fe47c  sradi 6, 6, 63
  04fe480  and 6, 6, 7
  04fe484  li 7, 0
  04fe488  addc 6, 8, 6
  04fe48c  subc 8, 3, 6
  04fe490  subc 5, 8, 5
  04fe494  and 4, 5, 4
  04fe498  addc 6, 6, 4
  04fe49c  subc 4, 7, 4
  04fe4a0  subc 3, 3, 6
  04fe4a4  cntlzw 4, 4
  04fe4a8  addic 3, 3, 1
  04fe4ac  sldi 4, 4, 58
  04fe4b0  subc 5, 5, 3
  04fe4b4  sradi 4, 4, 63
  04fe4b8  and 4, 4, 5
  04fe4bc  addc 3, 3, 4
  04fe4c0  extsw 3, 3
  04fe4c4  blr

FUN_004fe4d0:   # 0x4fe4d0, 0x54 bytes
  04fe4d0  stdu 1, -64(1)
  04fe4d4  lwz 5, 4(3)
  04fe4d8  li 4, -1
  04fe4dc  lwz 3, 8(3)
  04fe4e0  subc 6, 3, 5
  04fe4e4  subc 3, 3, 5
  04fe4e8  subc 4, 4, 6
  04fe4ec  sradi 3, 3, 63
  04fe4f0  and 3, 3, 4
  04fe4f4  lis 4, 80
  04fe4f8  addc 3, 6, 3
  04fe4fc  extsw 3, 3
  04fe500  std 3, 48(1)
  04fe504  addi 3, 4, -6968
  04fe508  lfs 1, 0(3)
  04fe50c  lfd 2, 48(1)
  04fe510  fcfid 2, 2
  04fe514  frsp 2, 2
  04fe518  fmuls 1, 2, 1
  04fe51c  addi 1, 1, 64
  04fe520  blr

FUN_004fe524:   # 0x4fe524, 0x8 bytes
  04fe524  lwz 3, 0(3)
  04fe528  blr

idol::kalloc:   # 0x4fe52c, 0x9c bytes
  04fe52c  stdu 1, -112(1)
  04fe530  mflr 0
  04fe534  std 0, 128(1)
  04fe538  cmpwi 4, 0
  04fe53c  bf 2, 0x4fe548
  04fe540  li 3, 0
  04fe544  b 0x4fe5b8
  04fe548  lwz 7, 4(3)
  04fe54c  lwz 5, 8(3)
  04fe550  addc 6, 7, 4
  04fe554  cmplw 6, 5
  04fe558  bt 0, 0x4fe594
  04fe55c  subc 3, 5, 7
  04fe560  subc 5, 5, 7
  04fe564  extsw 6, 3
  04fe568  li 7, -1
  04fe56c  sradi 5, 5, 63
  04fe570  subc 7, 7, 6
  04fe574  lis 3, 102
  04fe578  and 5, 5, 7
  04fe57c  addic 3, 3, -2840
  04fe580  addc 5, 6, 5
  04fe584  bl 0x4ff520
  04fe588  nop
  04fe58c  li 3, 0
  04fe590  b 0x4fe5b8
  04fe594  lwz 8, 20(3)
  04fe598  cmpwi 8, 0
  04fe59c  bf 2, 0x4fe5ac
  04fe5a0  ori 4, 7, 0
  04fe5a4  stw 6, 4(3)
  04fe5a8  b 0x4fe5b4
  04fe5ac  subc 4, 5, 4
  04fe5b0  stw 4, 8(3)
  04fe5b4  clrldi 3, 4, 32
  04fe5b8  ld 0, 128(1)
  04fe5bc  mtlr 0
  04fe5c0  addi 1, 1, 112
  04fe5c4  blr

FUN_004fe5c8:   # 0x4fe5c8, 0x24 bytes
  04fe5c8  addic 6, 4, -1
  04fe5cc  lwz 5, 4(3)
  04fe5d0  and 6, 5, 6
  04fe5d4  cmpwi 6, 0
  04fe5d8  bt 2, 0x4fe5e8
  04fe5dc  addc 4, 5, 4
  04fe5e0  subc 4, 4, 6
  04fe5e4  stw 4, 4(3)
  04fe5e8  blr

FUN_004fe5ec:   # 0x4fe5ec, 0x8 bytes
  04fe5ec  lwz 3, 4(3)
  04fe5f0  blr

FUN_004fe5f4:   # 0x4fe5f4, 0x28 bytes
  04fe5f4  addic 6, 4, -1
  04fe5f8  lwz 5, 4(3)
  04fe5fc  and 6, 5, 6
  04fe600  cmpwi 6, 0
  04fe604  bt 2, 0x4fe614
  04fe608  addc 5, 5, 4
  04fe60c  subc 5, 5, 6
  04fe610  stw 5, 4(3)
  04fe614  clrldi 3, 5, 32
  04fe618  blr

FUN_004fe61c:   # 0x4fe61c, 0x70 bytes
  04fe61c  stdu 1, -112(1)
  04fe620  mflr 0
  04fe624  std 0, 128(1)
  04fe628  cmpwi 4, 0
  04fe62c  bf 2, 0x4fe638
  04fe630  li 3, 0
  04fe634  b 0x4fe67c
  04fe638  lwz 5, 0(3)
  04fe63c  cmplw 4, 5
  04fe640  bt 0, 0x4fe650
  04fe644  lwz 5, 8(3)
  04fe648  cmplw 4, 5
  04fe64c  bf 1, 0x4fe674
  04fe650  lis 3, 102
  04fe654  lis 4, 102
  04fe658  addic 3, 3, -2796
  04fe65c  li 5, 359
  04fe660  addic 4, 4, -2724
  04fe664  bl 0x4ff520
  04fe668  nop
  04fe66c  li 3, 0
  04fe670  b 0x4fe67c
  04fe674  stw 4, 4(3)
  04fe678  ori 3, 4, 0
  04fe67c  ld 0, 128(1)
  04fe680  mtlr 0
  04fe684  addi 1, 1, 112
  04fe688  blr

FUN_004fe68c:   # 0x4fe68c, 0x60 bytes
  04fe68c  stdu 1, -112(1)
  04fe690  mflr 0
  04fe694  std 0, 128(1)
  04fe698  lwz 5, 4(3)
  04fe69c  cmplw 4, 5
  04fe6a0  bt 0, 0x4fe6b0
  04fe6a4  lwz 5, 12(3)
  04fe6a8  cmplw 4, 5
  04fe6ac  bf 1, 0x4fe6d4
  04fe6b0  lis 3, 102
  04fe6b4  lis 4, 102
  04fe6b8  addic 3, 3, -2796
  04fe6bc  li 5, 377
  04fe6c0  addic 4, 4, -2724
  04fe6c4  bl 0x4ff520
  04fe6c8  nop
  04fe6cc  li 3, 0
  04fe6d0  b 0x4fe6dc
  04fe6d4  stw 4, 8(3)
  04fe6d8  ori 3, 4, 0
  04fe6dc  ld 0, 128(1)
  04fe6e0  mtlr 0
  04fe6e4  addi 1, 1, 112
  04fe6e8  blr

FUN_004fe6ec:   # 0x4fe6ec, 0x48 bytes
  04fe6ec  stdu 1, -112(1)
  04fe6f0  mflr 0
  04fe6f4  std 0, 128(1)
  04fe6f8  lwz 5, 4(3)
  04fe6fc  lwz 6, 8(3)
  04fe700  addc 4, 5, 4
  04fe704  cmplw 4, 6
  04fe708  bf 1, 0x4fe720
  04fe70c  lis 3, 102
  04fe710  addic 3, 3, -2668
  04fe714  bl 0x4ff520
  04fe718  nop
  04fe71c  b 0x4fe724
  04fe720  stw 4, 4(3)
  04fe724  ld 0, 128(1)
  04fe728  mtlr 0
  04fe72c  addi 1, 1, 112
  04fe730  blr

FUN_004fe734:   # 0x4fe734, 0x24 bytes
  04fe734  lwz 4, 4(3)
  04fe738  lwz 5, 0(3)
  04fe73c  lwz 6, 12(3)
  04fe740  lwz 3, 8(3)
  04fe744  subc 4, 4, 5
  04fe748  subc 3, 6, 3
  04fe74c  addc 3, 4, 3
  04fe750  extsw 3, 3
  04fe754  blr

FUN_004fe758:   # 0x4fe758, 0xc bytes
  04fe758  li 4, 1
  04fe75c  stb 4, 16(3)
  04fe760  blr

FUN_004fe764:   # 0x4fe764, 0xc bytes
  04fe764  li 4, 0
  04fe768  stb 4, 16(3)
  04fe76c  blr

FUN_004fe778:   # 0x4fe778, 0x8c bytes
  04fe778  stdu 1, -128(1)
  04fe77c  mflr 0
  04fe780  std 0, 144(1)
  04fe784  lwz 6, 4(3)
  04fe788  lwz 7, 8(3)
  04fe78c  li 5, -1
  04fe790  subc 8, 7, 6
  04fe794  subc 6, 7, 6
  04fe798  extsw 7, 8
  04fe79c  sradi 6, 6, 63
  04fe7a0  subc 5, 5, 7
  04fe7a4  and 6, 6, 5
  04fe7a8  addc 6, 7, 6
  04fe7ac  lis 7, 80
  04fe7b0  extsw 5, 6
  04fe7b4  std 5, 112(1)
  04fe7b8  addi 5, 7, -6288
  04fe7bc  ori 7, 4, 0
  04fe7c0  lis 4, 102
  04fe7c4  lfs 1, 0(5)
  04fe7c8  lwz 5, 24(3)
  04fe7cc  lfd 2, 112(1)
  04fe7d0  fcfid 2, 2
  04fe7d4  addic 4, 4, -2612
  04fe7d8  li 3, 5
  04fe7dc  frsp 2, 2
  04fe7e0  fmuls 1, 2, 1
  04fe7e4  stfd 1, 88(1)
  04fe7e8  ld 8, 88(1)
  04fe7ec  bl 0x4ffd4c
  04fe7f0  nop
  04fe7f4  ld 0, 144(1)
  04fe7f8  mtlr 0
  04fe7fc  addi 1, 1, 128
  04fe800  blr

FUN_004fe804:   # 0x4fe804, 0x94 bytes
  04fe804  stdu 1, -112(1)
  04fe808  mflr 0
  04fe80c  std 0, 128(1)
  04fe810  lis 3, 144
  04fe814  lis 5, 345
  04fe818  lis 4, 144
  04fe81c  addic 5, 5, 13096
  04fe820  lwz 3, 11964(3)
  04fe824  stw 5, 11924(4)
  04fe828  lis 4, 102
  04fe82c  lwz 6, 0(3)
  04fe830  addic 4, 4, -2552
  04fe834  std 2, 40(1)
  04fe838  lwz 6, 24(6)
  04fe83c  lwz 7, 0(6)
  04fe840  lwz 2, 4(6)
  04fe844  mtctr 7
  04fe848  bcctrl 20, 30
  04fe84c  li 6, 0
  04fe850  ld 2, 40(1)
  04fe854  lis 4, 345
  04fe858  lis 3, 345
  04fe85c  ori 5, 6, 0
  04fe860  addic 4, 4, 13128
  04fe864  addic 3, 3, 13132
  04fe868  slwi 7, 6, 2
  04fe86c  addic 8, 6, 1
  04fe870  stbx 5, 3, 6
  04fe874  extsw 7, 7
  04fe878  extsw 6, 8
  04fe87c  cmpwi 6, 1
  04fe880  stwx 5, 4, 7
  04fe884  bt 0, 0x4fe868
  04fe888  ld 0, 128(1)
  04fe88c  mtlr 0
  04fe890  addi 1, 1, 112
  04fe894  blr

FUN_004fe898:   # 0x4fe898, 0xe4 bytes
  04fe898  stdu 1, -128(1)
  04fe89c  mflr 0
  04fe8a0  std 0, 144(1)
  04fe8a4  std 31, 120(1)
  04fe8a8  std 30, 112(1)
  04fe8ac  lis 31, 144
  04fe8b0  lis 30, 144
  04fe8b4  li 5, 0
  04fe8b8  lwz 3, 11964(31)
  04fe8bc  lwz 4, 11924(30)
  04fe8c0  std 2, 40(1)
  04fe8c4  lwz 7, 0(3)
  04fe8c8  lwz 6, 28(7)
  04fe8cc  lwz 7, 0(6)
  04fe8d0  lwz 2, 4(6)
  04fe8d4  mtctr 7
  04fe8d8  bcctrl 20, 30
  04fe8dc  li 6, 0
  04fe8e0  ld 2, 40(1)
  04fe8e4  lis 5, 345
  04fe8e8  lwz 4, 11964(31)
  04fe8ec  ori 31, 6, 0
  04fe8f0  lwz 3, 11924(30)
  04fe8f4  addic 5, 5, 13132
  04fe8f8  lbzx 7, 5, 6
  04fe8fc  cmpwi 7, 0
  04fe900  bf 2, 0x4fe924
  04fe904  lis 7, 345
  04fe908  slwi 8, 6, 2
  04fe90c  li 9, 1
  04fe910  addic 7, 7, 13128
  04fe914  extsw 8, 8
  04fe918  stbx 9, 5, 6
  04fe91c  lwzx 31, 7, 8
  04fe920  b 0x4fe934
  04fe924  addic 6, 6, 1
  04fe928  extsw 6, 6
  04fe92c  cmpwi 6, 1
  04fe930  bt 0, 0x4fe8f8
  04fe934  ori 5, 4, 0
  04fe938  ori 4, 3, 0
  04fe93c  ori 3, 5, 0
  04fe940  lwz 5, 0(5)
  04fe944  std 2, 40(1)
  04fe948  lwz 5, 32(5)
  04fe94c  lwz 6, 0(5)
  04fe950  lwz 2, 4(5)
  04fe954  mtctr 6
  04fe958  bcctrl 20, 30
  04fe95c  ld 2, 40(1)
  04fe960  ori 3, 31, 0
  04fe964  ld 0, 144(1)
  04fe968  mtlr 0
  04fe96c  ld 30, 112(1)
  04fe970  ld 31, 120(1)
  04fe974  addi 1, 1, 128
  04fe978  blr

FUN_004fe97c:   # 0x4fe97c, 0xe4 bytes
  04fe97c  stdu 1, -144(1)
  04fe980  mflr 0
  04fe984  std 0, 160(1)
  04fe988  std 30, 128(1)
  04fe98c  std 29, 120(1)
  04fe990  lis 30, 144
  04fe994  std 31, 136(1)
  04fe998  lis 29, 144
  04fe99c  ori 31, 3, 0
  04fe9a0  li 5, 0
  04fe9a4  lwz 3, 11964(30)
  04fe9a8  lwz 4, 11924(29)
  04fe9ac  lwz 7, 0(3)
  04fe9b0  std 2, 40(1)
  04fe9b4  lwz 6, 28(7)
  04fe9b8  lwz 7, 0(6)
  04fe9bc  lwz 2, 4(6)
  04fe9c0  mtctr 7
  04fe9c4  bcctrl 20, 30
  04fe9c8  ld 2, 40(1)
  04fe9cc  li 7, 0
  04fe9d0  lis 5, 345
  04fe9d4  lwz 4, 11964(30)
  04fe9d8  lwz 3, 11924(29)
  04fe9dc  ori 6, 7, 0
  04fe9e0  addic 5, 5, 13128
  04fe9e4  slwi 8, 7, 2
  04fe9e8  extsw 8, 8
  04fe9ec  lwzx 8, 5, 8
  04fe9f0  cmpw 8, 31
  04fe9f4  bf 2, 0x4fea08
  04fe9f8  lis 5, 345
  04fe9fc  addic 5, 5, 13132
  04fea00  stbx 6, 5, 7
  04fea04  b 0x4fea18
  04fea08  addic 7, 7, 1
  04fea0c  extsw 7, 7
  04fea10  cmpwi 7, 1
  04fea14  bt 0, 0x4fe9e4
  04fea18  ori 5, 4, 0
  04fea1c  ori 4, 3, 0
  04fea20  ori 3, 5, 0
  04fea24  lwz 5, 0(5)
  04fea28  std 2, 40(1)
  04fea2c  lwz 5, 32(5)
  04fea30  lwz 6, 0(5)
  04fea34  lwz 2, 4(5)
  04fea38  mtctr 6
  04fea3c  bcctrl 20, 30
  04fea40  ld 2, 40(1)
  04fea44  ld 0, 160(1)
  04fea48  mtlr 0
  04fea4c  ld 29, 120(1)
  04fea50  ld 30, 128(1)
  04fea54  ld 31, 136(1)
  04fea58  addi 1, 1, 144
  04fea5c  blr

FUN_004fea60:   # 0x4fea60, 0xb4 bytes
  04fea60  stdu 1, -144(1)
  04fea64  mflr 0
  04fea68  std 0, 160(1)
  04fea6c  std 31, 136(1)
  04fea70  std 30, 128(1)
  04fea74  std 28, 112(1)
  04fea78  lis 31, 144
  04fea7c  lis 30, 144
  04fea80  std 29, 120(1)
  04fea84  ori 28, 3, 0
  04fea88  ori 29, 4, 0
  04fea8c  li 5, 0
  04fea90  lwz 3, 11964(31)
  04fea94  lwz 4, 11924(30)
  04fea98  std 2, 40(1)
  04fea9c  lwz 7, 0(3)
  04feaa0  lwz 6, 28(7)
  04feaa4  lwz 7, 0(6)
  04feaa8  lwz 2, 4(6)
  04feaac  mtctr 7
  04feab0  bcctrl 20, 30
  04feab4  lis 3, 345
  04feab8  sldi 4, 29, 2
  04feabc  ld 2, 40(1)
  04feac0  addic 5, 3, 13128
  04feac4  extsw 7, 4
  04feac8  lwz 3, 11964(31)
  04feacc  lwz 4, 11924(30)
  04fead0  stwx 28, 5, 7
  04fead4  lwz 5, 0(3)
  04fead8  std 2, 40(1)
  04feadc  lwz 5, 32(5)
  04feae0  lwz 6, 0(5)
  04feae4  lwz 2, 4(5)
  04feae8  mtctr 6
  04feaec  bcctrl 20, 30
  04feaf0  ld 2, 40(1)
  04feaf4  ld 0, 160(1)
  04feaf8  mtlr 0
  04feafc  ld 28, 112(1)
  04feb00  ld 29, 120(1)
  04feb04  ld 30, 128(1)
  04feb08  ld 31, 136(1)
  04feb0c  addi 1, 1, 144
  04feb10  blr

FUN_004feb14:   # 0x4feb14, 0x14 bytes
  04feb14  lis 3, 102
  04feb18  lis 4, 345
  04feb1c  addic 3, 3, 25576
  04feb20  stw 3, 13096(4)
  04feb24  blr

FUN_004feb28:   # 0x4feb28, 0x14 bytes
  04feb28  lis 3, 102
  04feb2c  lis 4, 345
  04feb30  addic 3, 3, 25596
  04feb34  stw 3, 13096(4)
  04feb38  blr

FUN_004feb98:   # 0x4feb98, 0x624 bytes
  04feb98  stdu 1, -320(1)
  04feb9c  addi 0, 1, 80
  04feba0  stvx 20, 0, 0
  04feba4  addic 0, 0, 16
  04feba8  stvx 21, 0, 0
  04febac  addic 0, 0, 16
  04febb0  stvx 22, 0, 0
  04febb4  addic 0, 0, 16
  04febb8  stvx 23, 0, 0
  04febbc  addic 0, 0, 16
  04febc0  stvx 24, 0, 0
  04febc4  addic 0, 0, 16
  04febc8  stvx 25, 0, 0
  04febcc  addic 0, 0, 16
  04febd0  stvx 26, 0, 0
  04febd4  addic 0, 0, 16
  04febd8  stvx 27, 0, 0
  04febdc  addic 0, 0, 16
  04febe0  stvx 28, 0, 0
  04febe4  addic 0, 0, 16
  04febe8  stvx 29, 0, 0
  04febec  addic 0, 0, 16
  04febf0  stvx 30, 0, 0
  04febf4  addic 0, 0, 16
  04febf8  stvx 31, 0, 0
  04febfc  addic 5, 4, 32
  04fec00  vspltisw 8, 0
  04fec04  addic 6, 4, 16
  04fec08  addic 7, 4, 48
  04fec0c  vsldoi 3, 2, 2, 0
  04fec10  lvx 2, 0, 4
  04fec14  lvx 4, 0, 5
  04fec18  lis 4, 80
  04fec1c  lvx 5, 0, 6
  04fec20  vmrghw 6, 2, 4
  04fec24  std 31, 312(1)
  04fec28  lvx 7, 0, 7
  04fec2c  addi 31, 4, -5312
  04fec30  vmrglw 2, 2, 4
  04fec34  vmrghw 4, 5, 7
  04fec38  vmrglw 5, 5, 7
  04fec3c  li 4, 16
  04fec40  li 5, 36
  04fec44  vmrghw 7, 6, 4
  04fec48  vmrghw 9, 2, 5
  04fec4c  vmrglw 2, 2, 5
  04fec50  vmrglw 4, 6, 4
  04fec54  lvx 6, 0, 31
  04fec58  vaddfp 5, 2, 7
  04fec5c  vsubfp 10, 2, 7
  04fec60  vaddfp 11, 2, 4
  04fec64  lvx 7, 4, 31
  04fec68  vsubfp 4, 2, 4
  04fec6c  li 4, 32
  04fec70  vaddfp 18, 2, 9
  04fec74  vsubfp 9, 2, 9
  04fec78  vmaddfp 12, 5, 5, 8
  04fec7c  vperm 13, 5, 5, 6
  04fec80  vmaddfp 1, 10, 10, 8
  04fec84  vperm 14, 10, 10, 6
  04fec88  vmaddfp 15, 11, 11, 8
  04fec8c  vperm 17, 11, 11, 6
  04fec90  vperm 0, 5, 5, 7
  04fec94  vperm 16, 10, 10, 7
  04fec98  vmaddfp 30, 18, 18, 8
  04fec9c  vperm 29, 18, 18, 6
  04feca0  vmaddfp 12, 13, 13, 12
  04feca4  vmaddfp 13, 14, 14, 1
  04feca8  vmaddfp 14, 17, 17, 15
  04fecac  <unknown>
  04fecb0  <unknown>
  04fecb4  li 4, 40
  04fecb8  vperm 17, 4, 4, 6
  04fecbc  vmaddfp 30, 29, 29, 30
  04fecc0  li 0, 64
  04fecc4  vmaddfp 12, 0, 0, 12
  04fecc8  vmaddfp 13, 16, 16, 13
  04feccc  vspltw 0, 1, 0
  04fecd0  vperm 16, 11, 11, 7
  04fecd4  vspltw 1, 15, 0
  04fecd8  vmaddfp 15, 4, 4, 8
  04fecdc  stvx 18, 1, 0
  04fece0  vmaddfp 14, 16, 16, 14
  04fece4  <unknown>
  04fece8  vrsqrtefp 16, 12
  04fecec  vrsqrtefp 19, 13
  04fecf0  vcmpeqfp 31, 12, 8
  04fecf4  vmaddfp 15, 17, 17, 15
  04fecf8  vperm 17, 4, 4, 7
  04fecfc  vrsqrtefp 2, 14
  04fed00  li 4, 16
  04fed04  li 5, 32
  04fed08  vmaddfp 28, 16, 12, 8
  04fed0c  vcmpeqfp 27, 16, 8
  04fed10  vmaddfp 26, 19, 13, 8
  04fed14  vcmpeqfp 29, 19, 8
  04fed18  vmaddfp 15, 17, 17, 15
  04fed1c  vor 31, 31, 27
  04fed20  vcmpeqfp 17, 13, 8
  04fed24  vmaddfp 27, 9, 9, 8
  04fed28  vor 17, 17, 29
  04fed2c  vmaddfp 25, 2, 14, 8
  04fed30  vperm 29, 18, 18, 7
  04fed34  vcmpeqfp 20, 2, 8
  04fed38  vmaddfp 30, 29, 29, 30
  04fed3c  vmaddfp 24, 28, 0, 8
  04fed40  vnmsubfp 16, 16, 28, 1
  04fed44  vperm 29, 9, 9, 6
  04fed48  vmaddfp 23, 26, 0, 8
  04fed4c  vrsqrtefp 22, 15
  04fed50  vnmsubfp 19, 19, 26, 1
  04fed54  vnmsubfp 18, 2, 25, 1
  04fed58  vspltw 2, 21, 0
  04fed5c  vmaddfp 16, 16, 24, 28
  04fed60  vmaddfp 28, 25, 0, 8
  04fed64  vspltisw 24, -1
  04fed68  vmaddfp 19, 19, 23, 26
  04fed6c  vmaddfp 26, 22, 15, 8
  04fed70  vcmpeqfp 23, 14, 8
  04fed74  ori 11, 3, 0
  04fed78  vsel 12, 16, 12, 31
  04fed7c  vmaddfp 16, 29, 29, 27
  04fed80  vsel 13, 19, 13, 17
  04fed84  vmaddfp 18, 18, 28, 25
  04fed88  vslw 31, 24, 24
  04fed8c  vmaddfp 29, 26, 0, 8
  04fed90  vspltw 12, 12, 0
  04fed94  vnmsubfp 24, 22, 26, 1
  04fed98  vperm 28, 9, 9, 7
  04fed9c  vspltw 13, 13, 0
  04feda0  vrsqrtefp 19, 30
  04feda4  vrefp 17, 12
  04feda8  vor 25, 23, 20
  04fedac  vrefp 27, 13
  04fedb0  vspltisw 23, -1
  04fedb4  vmaddfp 16, 28, 28, 16
  04fedb8  vsel 14, 18, 14, 25
  04fedbc  vcmpeqfp 28, 22, 8
  04fedc0  vcmpeqfp 22, 15, 8
  04fedc4  vslw 23, 23, 23
  04fedc8  vmaddfp 29, 24, 29, 26
  04fedcc  vor 28, 22, 28
  04fedd0  vspltw 14, 14, 0
  04fedd4  vmaddfp 25, 19, 30, 8
  04fedd8  vnmsubfp 18, 17, 12, 2
  04feddc  vrefp 22, 14
  04fede0  vnmsubfp 26, 27, 13, 2
  04fede4  vrsqrtefp 24, 16
  04fede8  vsel 15, 29, 15, 28
  04fedec  vspltisw 29, -1
  04fedf0  vspltw 15, 15, 0
  04fedf4  vslw 29, 29, 29
  04fedf8  vmaddfp 17, 17, 18, 31
  04fedfc  vmaddfp 31, 25, 0, 8
  04fee00  vmaddfp 27, 27, 26, 23
  04fee04  vspltisw 18, -1
  04fee08  vnmsubfp 26, 19, 25, 1
  04fee0c  vcmpeqfp 23, 30, 8
  04fee10  vcmpeqfp 19, 19, 8
  04fee14  vnmsubfp 21, 22, 14, 2
  04fee18  vmaddfp 28, 24, 16, 8
  04fee1c  vor 19, 23, 19
  04fee20  vrefp 23, 15
  04fee24  vslw 18, 18, 18
  04fee28  vnmsubfp 20, 17, 12, 2
  04fee2c  vmaddfp 31, 26, 31, 25
  04fee30  vnmsubfp 26, 27, 13, 2
  04fee34  vspltisw 25, -1
  04fee38  vmaddfp 0, 28, 0, 8
  04fee3c  vnmsubfp 1, 24, 28, 1
  04fee40  vmaddfp 29, 22, 21, 29
  04fee44  vcmpeqfp 24, 24, 8
  04fee48  vslw 25, 25, 25
  04fee4c  vcmpeqfp 21, 16, 8
  04fee50  vspltisw 22, -1
  04fee54  vmaddfp 17, 17, 20, 18
  04fee58  vnmsubfp 20, 23, 15, 2
  04fee5c  vspltisw 18, -1
  04fee60  vsel 19, 31, 30, 19
  04fee64  vmaddfp 31, 27, 26, 25
  04fee68  vslw 30, 22, 22
  04fee6c  vmaddfp 0, 1, 0, 28
  04fee70  vspltw 19, 19, 0
  04fee74  vnmsubfp 27, 29, 14, 2
  04fee78  vor 26, 21, 24
  04fee7c  vslw 18, 18, 18
  04fee80  vspltisw 1, -1
  04fee84  vrefp 28, 19
  04fee88  vnmsubfp 12, 17, 12, 2
  04fee8c  vspltisw 25, -1
  04fee90  vmaddfp 30, 23, 20, 30
  04fee94  vslw 1, 1, 1
  04fee98  vnmsubfp 13, 31, 13, 2
  04fee9c  vslw 25, 25, 25
  04feea0  vsel 0, 0, 16, 26
  04feea4  vmaddfp 1, 29, 27, 1
  04feea8  vspltisw 16, -1
  04feeac  vspltw 0, 0, 0
  04feeb0  vmaddfp 12, 17, 12, 18
  04feeb4  vslw 16, 16, 16
  04feeb8  vnmsubfp 18, 30, 15, 2
  04feebc  vnmsubfp 17, 28, 19, 2
  04feec0  vrefp 29, 0
  04feec4  vmaddfp 13, 31, 13, 25
  04feec8  vspltisw 31, -1
  04feecc  vnmsubfp 14, 1, 14, 2
  04feed0  addic 9, 3, 64
  04feed4  vmaddfp 5, 5, 12, 8
  04feed8  vslw 12, 31, 31
  04feedc  vspltisw 31, -1
  04feee0  vmaddfp 16, 28, 17, 16
  04feee4  vmaddfp 10, 10, 13, 8
  04feee8  vmaddfp 12, 30, 18, 12
  04feeec  vspltisw 13, -1
  04feef0  vslw 17, 31, 31
  04feef4  vnmsubfp 31, 29, 0, 2
  04feef8  vspltisw 18, -1
  04feefc  vslw 13, 13, 13
  04fef00  addic 8, 3, 80
  04fef04  addic 7, 3, 32
  04fef08  stvx 5, 0, 3
  04fef0c  vmaddfp 5, 1, 14, 17
  04fef10  vspltisw 17, -1
  04fef14  vnmsubfp 1, 16, 19, 2
  04fef18  vnmsubfp 14, 12, 15, 2
  04fef1c  stvx 10, 4, 3
  04fef20  vmaddfp 13, 29, 31, 13
  04fef24  vslw 15, 18, 18
  04fef28  vslw 10, 17, 17
  04fef2c  li 4, 48
  04fef30  vspltisw 17, -1
  04fef34  addic 6, 3, 48
  04fef38  vmaddfp 5, 11, 5, 8
  04fef3c  vmaddfp 11, 16, 1, 15
  04fef40  vmaddfp 10, 12, 14, 10
  04fef44  vspltisw 1, -1
  04fef48  vslw 12, 17, 17
  04fef4c  vnmsubfp 14, 13, 0, 2
  04fef50  vslw 1, 1, 1
  04fef54  vmaddfp 4, 4, 10, 8
  04fef58  stvx 5, 5, 3
  04fef5c  vmaddfp 12, 13, 14, 12
  04fef60  vnmsubfp 5, 11, 19, 2
  04fef64  vspltisw 10, -1
  04fef68  li 5, 80
  04fef6c  li 0, 64
  04fef70  std 30, 304(1)
  04fef74  vslw 10, 10, 10
  04fef78  std 29, 296(1)
  04fef7c  li 30, 64
  04fef80  std 28, 288(1)
  04fef84  li 29, 48
  04fef88  std 27, 280(1)
  04fef8c  li 28, 64
  04fef90  li 27, 80
  04fef94  li 12, 0
  04fef98  lis 10, 32640
  04fef9c  stvx 4, 4, 3
  04fefa0  vnmsubfp 4, 12, 0, 2
  04fefa4  li 4, 96
  04fefa8  vmaddfp 5, 11, 5, 1
  04fefac  lvx 11, 1, 0
  04fefb0  stvx 3, 4, 3
  04fefb4  li 4, 48
  04fefb8  vmaddfp 4, 12, 4, 10
  04fefbc  vmaddfp 5, 11, 5, 8
  04fefc0  vmaddfp 3, 9, 4, 8
  04fefc4  stvx 5, 5, 3
  04fefc8  addic 5, 3, 16
  04fefcc  stvx 3, 30, 3
  04fefd0  lvx 5, 29, 31
  04fefd4  lvx 4, 28, 31
  04fefd8  <unknown>
  04fefdc  vspltw 3, 3, 0
  04fefe0  rlwinm 31, 12, 0, 30, 30
  04fefe4  li 29, 0
  04fefe8  rlwinm 30, 12, 0, 29, 29
  04fefec  li 28, 0
  04feff0  subc 31, 29, 31
  04feff4  subc 30, 28, 30
  04feff8  cntlzw 31, 31
  04feffc  cntlzw 30, 30
  04ff000  sldi 31, 31, 58
  04ff004  sldi 30, 30, 58
  04ff008  subc 29, 6, 7
  04ff00c  sradi 31, 31, 63
  04ff010  subc 28, 3, 5
  04ff014  sradi 30, 30, 63
  04ff018  and 31, 31, 29
  04ff01c  and 30, 30, 28
  04ff020  addc 31, 7, 31
  04ff024  addc 30, 5, 30
  04ff028  li 29, 0
  04ff02c  clrlwi 28, 12, 31
  04ff030  lvx 13, 0, 31
  04ff034  subc 29, 29, 28
  04ff038  lvx 12, 0, 30
  04ff03c  subc 28, 8, 9
  04ff040  vperm 9, 13, 13, 5
  04ff044  cntlzw 31, 29
  04ff048  vperm 10, 12, 12, 4
  04ff04c  sldi 31, 31, 58
  04ff050  vperm 1, 13, 13, 4
  04ff054  sradi 31, 31, 63
  04ff058  vmaddfp 11, 9, 10, 8
  04ff05c  vperm 14, 12, 12, 5
  04ff060  and 31, 31, 28
  04ff064  addc 31, 9, 31
  04ff068  lvx 0, 0, 31
  04ff06c  vperm 18, 0, 0, 5
  04ff070  vperm 17, 0, 0, 4
  04ff074  vnmsubfp 11, 1, 14, 11
  04ff078  vperm 15, 0, 0, 6
  04ff07c  vmaddfp 1, 18, 1, 8
  04ff080  vperm 16, 0, 0, 7
  04ff084  vmaddfp 14, 14, 17, 8
  04ff088  vmaddfp 19, 0, 11, 8
  04ff08c  vperm 31, 11, 11, 6
  04ff090  vperm 30, 11, 11, 7
  04ff094  vnmsubfp 9, 17, 9, 1
  04ff098  vnmsubfp 10, 10, 18, 14
  04ff09c  vmaddfp 1, 15, 31, 19
  04ff0a0  vmaddfp 1, 16, 30, 1
  04ff0a4  vspltw 1, 1, 0
  04ff0a8  stvewx 1, 4, 1
  04ff0ac  lwz 31, 48(1)
  04ff0b0  rlwinm 31, 31, 0, 1, 8
  04ff0b4  cmpwi 31, 0
  04ff0b8  cmpw 1, 31, 10
  04ff0bc  bt 2, 0x4ff130
  04ff0c0  bt 6, 0x4ff130
  04ff0c4  <unknown>
  04ff0c8  vspltw 0, 0, 3
  04ff0cc  vrefp 15, 14
  04ff0d0  vspltisw 1, -1
  04ff0d4  vspltw 13, 13, 3
  04ff0d8  vmaddfp 11, 11, 0, 8
  04ff0dc  vspltw 12, 12, 3
  04ff0e0  vspltisw 16, -1
  04ff0e4  vslw 1, 1, 1
  04ff0e8  vmaddfp 10, 10, 13, 8
  04ff0ec  vmaddfp 9, 9, 12, 8
  04ff0f0  vslw 16, 16, 16
  04ff0f4  vspltisw 13, -1
  04ff0f8  addic 31, 11, 112
  04ff0fc  vnmsubfp 0, 15, 14, 2
  04ff100  vslw 13, 13, 13
  04ff104  vaddfp 10, 11, 10
  04ff108  vmaddfp 0, 15, 0, 1
  04ff10c  vaddfp 9, 10, 9
  04ff110  vnmsubfp 11, 0, 14, 2
  04ff114  vxor 9, 9, 3
  04ff118  vmaddfp 10, 0, 11, 16
  04ff11c  vnmsubfp 11, 10, 14, 2
  04ff120  vmaddfp 10, 10, 11, 13
  04ff124  vspltw 10, 10, 0
  04ff128  vmaddfp 9, 9, 10, 8
  04ff12c  stvx 9, 0, 31
  04ff130  addic 12, 12, 1
  04ff134  addic 11, 11, 16
  04ff138  cmpwi 12, 8
  04ff13c  bt 0, 0x4fefe0
  04ff140  li 0, 80
  04ff144  lvx 20, 1, 0
  04ff148  addic 0, 0, 16
  04ff14c  lvx 21, 1, 0
  04ff150  addic 0, 0, 16
  04ff154  lvx 22, 1, 0
  04ff158  addic 0, 0, 16
  04ff15c  lvx 23, 1, 0
  04ff160  addic 0, 0, 16
  04ff164  lvx 24, 1, 0
  04ff168  addic 0, 0, 16
  04ff16c  lvx 25, 1, 0
  04ff170  addic 0, 0, 16
  04ff174  lvx 26, 1, 0
  04ff178  addic 0, 0, 16
  04ff17c  lvx 27, 1, 0
  04ff180  addic 0, 0, 16
  04ff184  lvx 28, 1, 0
  04ff188  addic 0, 0, 16
  04ff18c  lvx 29, 1, 0
  04ff190  addic 0, 0, 16
  04ff194  lvx 30, 1, 0
  04ff198  addic 0, 0, 16
  04ff19c  lvx 31, 1, 0
  04ff1a0  ld 27, 280(1)
  04ff1a4  ld 28, 288(1)
  04ff1a8  ld 29, 296(1)
  04ff1ac  ld 30, 304(1)
  04ff1b0  ld 31, 312(1)
  04ff1b4  addi 1, 1, 320
  04ff1b8  blr

FUN_004ff210:   # 0x4ff210, 0xbc bytes
  04ff210  stdu 1, -64(1)
  04ff214  lis 4, 80
  04ff218  stfs 1, 48(1)
  04ff21c  stfs 1, 52(1)
  04ff220  li 9, 48
  04ff224  addi 8, 4, -3648
  04ff228  stfs 1, 56(1)
  04ff22c  li 4, 16
  04ff230  stfs 1, 60(1)
  04ff234  li 10, 32
  04ff238  vspltisw 6, 0
  04ff23c  li 6, 0
  04ff240  li 7, 1
  04ff244  <unknown>
  04ff248  li 11, 64
  04ff24c  lvx 7, 4, 8
  04ff250  li 0, 48
  04ff254  vspltw 4, 3, 0
  04ff258  ori 5, 6, 0
  04ff25c  lvx 3, 9, 8
  04ff260  ori 4, 7, 0
  04ff264  lvx 5, 10, 8
  04ff268  vperm 7, 2, 4, 7
  04ff26c  vperm 4, 2, 4, 3
  04ff270  lvx 3, 11, 8
  04ff274  lvx 2, 1, 0
  04ff278  cmpwi 7, 0
  04ff27c  bt 2, 0x4ff2c0
  04ff280  lvx 8, 0, 3
  04ff284  vmaddfp 9, 8, 7, 6
  04ff288  vperm 8, 8, 8, 5
  04ff28c  ori 7, 5, 0
  04ff290  vmaddfp 8, 8, 4, 9
  04ff294  vperm 9, 8, 8, 3
  04ff298  vaddfp 8, 9, 8
  04ff29c  vspltw 8, 8, 0
  04ff2a0  vaddfp 8, 8, 2
  04ff2a4  vcmpgefp. 8, 8, 6
  04ff2a8  bt 26, 0x4ff2b0
  04ff2ac  ori 7, 4, 0
  04ff2b0  addic 6, 6, 1
  04ff2b4  addic 3, 3, 16
  04ff2b8  cmpwi 6, 6
  04ff2bc  bt 0, 0x4ff278
  04ff2c0  ori 3, 7, 0
  04ff2c4  addi 1, 1, 64
  04ff2c8  blr

FastCheckBsphere:   # 0x4ff328, 0x154 bytes
  04ff328  stdu 1, -64(1)
  04ff32c  lis 4, 80
  04ff330  stfs 1, 48(1)
  04ff334  stfs 1, 52(1)
  04ff338  li 10, 48
  04ff33c  addi 9, 4, -3376
  04ff340  stfs 1, 56(1)
  04ff344  li 4, 16
  04ff348  stfs 1, 60(1)
  04ff34c  li 11, 32
  04ff350  vspltisw 7, 0
  04ff354  li 8, 0
  04ff358  li 6, 1
  04ff35c  <unknown>
  04ff360  li 12, 64
  04ff364  li 0, 48
  04ff368  lvx 9, 4, 9
  04ff36c  vspltw 8, 8, 0
  04ff370  vsldoi 3, 2, 2, 0
  04ff374  lvx 5, 10, 9
  04ff378  ori 5, 8, 0
  04ff37c  lvx 6, 11, 9
  04ff380  ori 7, 3, 0
  04ff384  lvx 4, 12, 9
  04ff388  ori 4, 6, 0
  04ff38c  vperm 9, 3, 8, 9
  04ff390  vperm 5, 3, 8, 5
  04ff394  lvx 2, 1, 0
  04ff398  cmpwi 6, 0
  04ff39c  bt 2, 0x4ff470
  04ff3a0  lvx 10, 0, 7
  04ff3a4  vmaddfp 11, 10, 9, 7
  04ff3a8  vperm 10, 10, 10, 6
  04ff3ac  ori 6, 5, 0
  04ff3b0  vmaddfp 10, 10, 5, 11
  04ff3b4  vperm 11, 10, 10, 4
  04ff3b8  vaddfp 10, 11, 10
  04ff3bc  vspltw 10, 10, 0
  04ff3c0  vaddfp 10, 10, 2
  04ff3c4  vcmpgefp. 10, 10, 7
  04ff3c8  bt 26, 0x4ff3d0
  04ff3cc  ori 6, 4, 0
  04ff3d0  addic 8, 8, 1
  04ff3d4  addic 7, 7, 16
  04ff3d8  cmpwi 8, 5
  04ff3dc  bt 0, 0x4ff398
  04ff3e0  cmpwi 6, 0
  04ff3e4  bt 2, 0x4ff470
  04ff3e8  addic 3, 3, 96
  04ff3ec  li 6, 80
  04ff3f0  lvx 5, 0, 3
  04ff3f4  vsubfp 3, 5, 3
  04ff3f8  lis 3, 80
  04ff3fc  addi 3, 3, -3376
  04ff400  li 0, 48
  04ff404  vmaddfp 5, 3, 3, 7
  04ff408  vperm 6, 3, 3, 6
  04ff40c  vperm 3, 3, 3, 4
  04ff410  <unknown>
  04ff414  vspltw 4, 4, 0
  04ff418  ori 6, 5, 0
  04ff41c  stfs 2, 48(1)
  04ff420  stfs 2, 52(1)
  04ff424  stfs 2, 56(1)
  04ff428  stfs 2, 60(1)
  04ff42c  vmaddfp 5, 6, 6, 5
  04ff430  vmaddfp 3, 3, 3, 5
  04ff434  vrsqrtefp 5, 3
  04ff438  vcmpeqfp 6, 3, 7
  04ff43c  vmaddfp 9, 5, 3, 7
  04ff440  vcmpeqfp 10, 5, 7
  04ff444  vor 6, 6, 10
  04ff448  vmaddfp 4, 9, 4, 7
  04ff44c  vnmsubfp 5, 5, 9, 8
  04ff450  lvx 7, 1, 0
  04ff454  vmaddfp 4, 5, 4, 9
  04ff458  vsel 3, 4, 3, 6
  04ff45c  vspltw 3, 3, 0
  04ff460  vsubfp 2, 3, 2
  04ff464  vcmpgtfp. 2, 2, 7
  04ff468  bf 26, 0x4ff470
  04ff46c  ori 6, 4, 0
  04ff470  ori 3, 6, 0
  04ff474  addi 1, 1, 64
  04ff478  blr

FUN_004ff480:   # 0x4ff480, 0x2c bytes
  04ff480  stdu 1, -112(1)
  04ff484  mflr 0
  04ff488  std 0, 128(1)
  04ff48c  lis 3, 102
  04ff490  addic 3, 3, -2540
  04ff494  bl 0x5cd098
  04ff498  nop
  04ff49c  ld 0, 128(1)
  04ff4a0  mtlr 0
  04ff4a4  addi 1, 1, 112
  04ff4a8  blr

FUN_004ff4ac:   # 0x4ff4ac, 0x74 bytes
  04ff4ac  stdu 1, -128(1)
  04ff4b0  mflr 0
  04ff4b4  std 0, 144(1)
  04ff4b8  std 31, 120(1)
  04ff4bc  lis 31, 345
  04ff4c0  ori 5, 4, 0
  04ff4c4  addic 31, 31, 13144
  04ff4c8  ori 4, 3, 0
  04ff4cc  ori 3, 31, 0
  04ff4d0  bl 0x5cd52c
  04ff4d4  nop
  04ff4d8  lis 3, 144
  04ff4dc  lwz 3, 11944(3)
  04ff4e0  cmpwi 3, 0
  04ff4e4  bt 2, 0x4ff50c
  04ff4e8  ori 5, 3, 0
  04ff4ec  li 3, 1
  04ff4f0  ori 4, 31, 0
  04ff4f4  lwz 6, 0(5)
  04ff4f8  std 2, 40(1)
  04ff4fc  mtctr 6
  04ff500  lwz 2, 4(5)
  04ff504  bcctrl 20, 30
  04ff508  ld 2, 40(1)
  04ff50c  ld 0, 144(1)
  04ff510  mtlr 0
  04ff514  ld 31, 120(1)
  04ff518  addi 1, 1, 128
  04ff51c  blr

idol::print_mem_error:   # 0x4ff520, 0xc0 bytes
  04ff520  stdu 1, -128(1)
  04ff524  mflr 0
  04ff528  std 0, 144(1)
  04ff52c  std 31, 120(1)
  04ff530  lis 31, 345
  04ff534  li 11, 128
  04ff538  addic 31, 31, 13144
  04ff53c  addc 12, 1, 11
  04ff540  std 30, 112(1)
  04ff544  addc 11, 1, 11
  04ff548  ori 30, 3, 0
  04ff54c  addic 11, 11, 56
  04ff550  stw 3, 52(12)
  04ff554  std 4, 56(12)
  04ff558  ori 3, 31, 0
  04ff55c  std 5, 64(12)
  04ff560  ori 4, 30, 0
  04ff564  std 6, 72(12)
  04ff568  clrldi 5, 11, 32
  04ff56c  std 7, 80(12)
  04ff570  std 8, 88(12)
  04ff574  std 9, 96(12)
  04ff578  std 10, 104(12)
  04ff57c  bl 0x5cd52c
  04ff580  nop
  04ff584  lis 3, 144
  04ff588  lwz 3, 11944(3)
  04ff58c  cmpwi 3, 0
  04ff590  bt 2, 0x4ff5b8
  04ff594  ori 5, 3, 0
  04ff598  li 3, 1
  04ff59c  ori 4, 31, 0
  04ff5a0  lwz 6, 0(5)
  04ff5a4  std 2, 40(1)
  04ff5a8  mtctr 6
  04ff5ac  lwz 2, 4(5)
  04ff5b0  bcctrl 20, 30
  04ff5b4  ld 2, 40(1)
  04ff5b8  lis 3, 102
  04ff5bc  addic 3, 3, -2540
  04ff5c0  bl 0x5cd098
  04ff5c4  nop
  04ff5c8  ld 0, 144(1)
  04ff5cc  mtlr 0
  04ff5d0  ld 30, 112(1)
  04ff5d4  ld 31, 120(1)
  04ff5d8  addi 1, 1, 128
  04ff5dc  blr

FUN_004ff5e0:   # 0x4ff5e0, 0xc bytes
  04ff5e0  lis 4, 144
  04ff5e4  stw 3, 11960(4)
  04ff5e8  blr

FUN_004ff5ec:   # 0x4ff5ec, 0xc bytes
  04ff5ec  lis 4, 144
  04ff5f0  stw 3, 11956(4)
  04ff5f4  blr

FUN_004ff5f8:   # 0x4ff5f8, 0xc bytes
  04ff5f8  lis 4, 144
  04ff5fc  stw 3, 11952(4)
  04ff600  blr

FUN_004ff604:   # 0x4ff604, 0xc bytes
  04ff604  lis 4, 144
  04ff608  stw 3, 11948(4)
  04ff60c  blr

FUN_004ff610:   # 0x4ff610, 0xc bytes
  04ff610  lis 4, 144
  04ff614  stw 3, 11944(4)
  04ff618  blr

FUN_004ff61c:   # 0x4ff61c, 0x2c bytes
  04ff61c  lis 7, 144
  04ff620  lis 8, 144
  04ff624  lis 9, 144
  04ff628  lis 10, 144
  04ff62c  lis 11, 144
  04ff630  stw 3, 11944(7)
  04ff634  stw 6, 11960(8)
  04ff638  stw 4, 11948(9)
  04ff63c  stw 4, 11952(10)
  04ff640  stw 5, 11956(11)
  04ff644  blr

FUN_004ff648:   # 0x4ff648, 0x2c bytes
  04ff648  lis 8, 144
  04ff64c  lis 9, 144
  04ff650  lis 10, 144
  04ff654  lis 11, 144
  04ff658  lis 12, 144
  04ff65c  stw 3, 11944(8)
  04ff660  stw 7, 11960(9)
  04ff664  stw 4, 11948(10)
  04ff668  stw 5, 11952(11)
  04ff66c  stw 6, 11956(12)
  04ff670  blr

FUN_004ff674:   # 0x4ff674, 0x5c bytes
  04ff674  stdu 1, -112(1)
  04ff678  mflr 0
  04ff67c  std 0, 128(1)
  04ff680  lis 6, 144
  04ff684  ori 7, 5, 0
  04ff688  ori 5, 3, 0
  04ff68c  ori 3, 7, 0
  04ff690  lwz 6, 11960(6)
  04ff694  cmpwi 6, 0
  04ff698  bt 2, 0x4ff6c0
  04ff69c  ori 7, 3, 0
  04ff6a0  ori 3, 5, 0
  04ff6a4  ori 5, 7, 0
  04ff6a8  lwz 7, 0(6)
  04ff6ac  std 2, 40(1)
  04ff6b0  mtctr 7
  04ff6b4  lwz 2, 4(6)
  04ff6b8  bcctrl 20, 30
  04ff6bc  ld 2, 40(1)
  04ff6c0  ld 0, 128(1)
  04ff6c4  mtlr 0
  04ff6c8  addi 1, 1, 112
  04ff6cc  blr

print_tty:   # 0x4ff6d0, 0xb0 bytes
  04ff6d0  stdu 1, -128(1)
  04ff6d4  mflr 0
  04ff6d8  std 0, 144(1)
  04ff6dc  std 31, 120(1)
  04ff6e0  lis 31, 345
  04ff6e4  li 11, 128
  04ff6e8  addic 31, 31, 13144
  04ff6ec  addc 12, 1, 11
  04ff6f0  std 30, 112(1)
  04ff6f4  addc 11, 1, 11
  04ff6f8  ori 30, 3, 0
  04ff6fc  addic 11, 11, 56
  04ff700  stw 3, 52(12)
  04ff704  std 4, 56(12)
  04ff708  ori 3, 31, 0
  04ff70c  std 5, 64(12)
  04ff710  ori 4, 30, 0
  04ff714  std 6, 72(12)
  04ff718  clrldi 5, 11, 32
  04ff71c  std 7, 80(12)
  04ff720  std 8, 88(12)
  04ff724  std 9, 96(12)
  04ff728  std 10, 104(12)
  04ff72c  bl 0x5cd52c
  04ff730  nop
  04ff734  lis 3, 144
  04ff738  lwz 3, 11944(3)
  04ff73c  cmpwi 3, 0
  04ff740  bt 2, 0x4ff768
  04ff744  ori 5, 3, 0
  04ff748  li 3, 1
  04ff74c  ori 4, 31, 0
  04ff750  lwz 6, 0(5)
  04ff754  std 2, 40(1)
  04ff758  mtctr 6
  04ff75c  lwz 2, 4(5)
  04ff760  bcctrl 20, 30
  04ff764  ld 2, 40(1)
  04ff768  ld 0, 144(1)
  04ff76c  mtlr 0
  04ff770  ld 30, 112(1)
  04ff774  ld 31, 120(1)
  04ff778  addi 1, 1, 128
  04ff77c  blr

FUN_004ff780:   # 0x4ff780, 0xe8 bytes
  04ff780  stdu 1, -128(1)
  04ff784  mflr 0
  04ff788  std 0, 144(1)
  04ff78c  std 31, 120(1)
  04ff790  lis 31, 345
  04ff794  li 11, 128
  04ff798  addic 31, 31, 13144
  04ff79c  addc 12, 1, 11
  04ff7a0  std 30, 112(1)
  04ff7a4  addc 11, 1, 11
  04ff7a8  ori 30, 3, 0
  04ff7ac  addic 11, 11, 56
  04ff7b0  stw 3, 52(12)
  04ff7b4  std 4, 56(12)
  04ff7b8  ori 3, 31, 0
  04ff7bc  std 5, 64(12)
  04ff7c0  ori 4, 30, 0
  04ff7c4  std 6, 72(12)
  04ff7c8  clrldi 5, 11, 32
  04ff7cc  std 7, 80(12)
  04ff7d0  std 8, 88(12)
  04ff7d4  std 9, 96(12)
  04ff7d8  std 10, 104(12)
  04ff7dc  bl 0x5cd52c
  04ff7e0  nop
  04ff7e4  lis 3, 144
  04ff7e8  lwz 3, 11944(3)
  04ff7ec  cmpwi 3, 0
  04ff7f0  bt 2, 0x4ff820
  04ff7f4  ori 5, 3, 0
  04ff7f8  li 3, 1
  04ff7fc  ori 4, 31, 0
  04ff800  lwz 6, 0(5)
  04ff804  std 2, 40(1)
  04ff808  mtctr 6
  04ff80c  lwz 2, 4(5)
  04ff810  bcctrl 20, 30
  04ff814  lis 3, 144
  04ff818  ld 2, 40(1)
  04ff81c  lwz 3, 11944(3)
  04ff820  cmpwi 3, 0
  04ff824  bt 2, 0x4ff850
  04ff828  ori 5, 3, 0
  04ff82c  lis 4, 102
  04ff830  li 3, 1
  04ff834  addic 4, 4, -2528
  04ff838  lwz 6, 0(5)
  04ff83c  std 2, 40(1)
  04ff840  mtctr 6
  04ff844  lwz 2, 4(5)
  04ff848  bcctrl 20, 30
  04ff84c  ld 2, 40(1)
  04ff850  ld 0, 144(1)
  04ff854  mtlr 0
  04ff858  ld 30, 112(1)
  04ff85c  ld 31, 120(1)
  04ff860  addi 1, 1, 128
  04ff864  blr

FUN_004ff868:   # 0x4ff868, 0x74 bytes
  04ff868  stdu 1, -128(1)
  04ff86c  mflr 0
  04ff870  std 0, 144(1)
  04ff874  std 31, 120(1)
  04ff878  lis 31, 345
  04ff87c  ori 5, 4, 0
  04ff880  addic 31, 31, 13144
  04ff884  ori 4, 3, 0
  04ff888  ori 3, 31, 0
  04ff88c  bl 0x5cd52c
  04ff890  nop
  04ff894  lis 3, 144
  04ff898  lwz 3, 11948(3)
  04ff89c  cmpwi 3, 0
  04ff8a0  bt 2, 0x4ff8c8
  04ff8a4  ori 5, 3, 0
  04ff8a8  li 3, 3
  04ff8ac  ori 4, 31, 0
  04ff8b0  lwz 6, 0(5)
  04ff8b4  std 2, 40(1)
  04ff8b8  mtctr 6
  04ff8bc  lwz 2, 4(5)
  04ff8c0  bcctrl 20, 30
  04ff8c4  ld 2, 40(1)
  04ff8c8  ld 0, 144(1)
  04ff8cc  mtlr 0
  04ff8d0  ld 31, 120(1)
  04ff8d4  addi 1, 1, 128
  04ff8d8  blr

FUN_004ff8dc:   # 0x4ff8dc, 0xb0 bytes
  04ff8dc  stdu 1, -128(1)
  04ff8e0  mflr 0
  04ff8e4  std 0, 144(1)
  04ff8e8  std 31, 120(1)
  04ff8ec  lis 31, 345
  04ff8f0  li 11, 128
  04ff8f4  addic 31, 31, 13144
  04ff8f8  addc 12, 1, 11
  04ff8fc  std 30, 112(1)
  04ff900  addc 11, 1, 11
  04ff904  ori 30, 3, 0
  04ff908  addic 11, 11, 56
  04ff90c  stw 3, 52(12)
  04ff910  std 4, 56(12)
  04ff914  ori 3, 31, 0
  04ff918  std 5, 64(12)
  04ff91c  ori 4, 30, 0
  04ff920  std 6, 72(12)
  04ff924  clrldi 5, 11, 32
  04ff928  std 7, 80(12)
  04ff92c  std 8, 88(12)
  04ff930  std 9, 96(12)
  04ff934  std 10, 104(12)
  04ff938  bl 0x5cd52c
  04ff93c  nop
  04ff940  lis 3, 144
  04ff944  lwz 3, 11948(3)
  04ff948  cmpwi 3, 0
  04ff94c  bt 2, 0x4ff974
  04ff950  ori 5, 3, 0
  04ff954  li 3, 3
  04ff958  ori 4, 31, 0
  04ff95c  lwz 6, 0(5)
  04ff960  std 2, 40(1)
  04ff964  mtctr 6
  04ff968  lwz 2, 4(5)
  04ff96c  bcctrl 20, 30
  04ff970  ld 2, 40(1)
  04ff974  ld 0, 144(1)
  04ff978  mtlr 0
  04ff97c  ld 30, 112(1)
  04ff980  ld 31, 120(1)
  04ff984  addi 1, 1, 128
  04ff988  blr

FUN_004ff98c:   # 0x4ff98c, 0xc0 bytes
  04ff98c  stdu 1, -128(1)
  04ff990  mflr 0
  04ff994  std 0, 144(1)
  04ff998  std 31, 120(1)
  04ff99c  lis 31, 345
  04ff9a0  li 11, 128
  04ff9a4  addic 31, 31, 13144
  04ff9a8  addc 12, 1, 11
  04ff9ac  std 30, 112(1)
  04ff9b0  addc 11, 1, 11
  04ff9b4  ori 30, 3, 0
  04ff9b8  addic 11, 11, 56
  04ff9bc  stw 3, 52(12)
  04ff9c0  std 4, 56(12)
  04ff9c4  ori 3, 31, 0
  04ff9c8  std 5, 64(12)
  04ff9cc  ori 4, 30, 0
  04ff9d0  std 6, 72(12)
  04ff9d4  clrldi 5, 11, 32
  04ff9d8  std 7, 80(12)
  04ff9dc  std 8, 88(12)
  04ff9e0  std 9, 96(12)
  04ff9e4  std 10, 104(12)
  04ff9e8  bl 0x5cd52c
  04ff9ec  nop
  04ff9f0  lis 3, 144
  04ff9f4  lwz 3, 11944(3)
  04ff9f8  cmpwi 3, 0
  04ff9fc  bt 2, 0x4ffa24
  04ffa00  ori 5, 3, 0
  04ffa04  li 3, 1
  04ffa08  ori 4, 31, 0
  04ffa0c  lwz 6, 0(5)
  04ffa10  std 2, 40(1)
  04ffa14  mtctr 6
  04ffa18  lwz 2, 4(5)
  04ffa1c  bcctrl 20, 30
  04ffa20  ld 2, 40(1)
  04ffa24  lis 3, 102
  04ffa28  addic 3, 3, -2540
  04ffa2c  bl 0x5cd098
  04ffa30  nop
  04ffa34  ld 0, 144(1)
  04ffa38  mtlr 0
  04ffa3c  ld 30, 112(1)
  04ffa40  ld 31, 120(1)
  04ffa44  addi 1, 1, 128
  04ffa48  blr

FUN_004ffa4c:   # 0x4ffa4c, 0x78 bytes
  04ffa4c  stdu 1, -128(1)
  04ffa50  mflr 0
  04ffa54  std 0, 144(1)
  04ffa58  std 30, 112(1)
  04ffa5c  std 31, 120(1)
  04ffa60  lis 30, 345
  04ffa64  ori 31, 3, 0
  04ffa68  addic 30, 30, 13144
  04ffa6c  ori 3, 30, 0
  04ffa70  bl 0x5cd52c
  04ffa74  nop
  04ffa78  lis 3, 144
  04ffa7c  lwz 3, 11952(3)
  04ffa80  cmpwi 3, 0
  04ffa84  bt 2, 0x4ffaac
  04ffa88  ori 5, 3, 0
  04ffa8c  ori 3, 31, 0
  04ffa90  ori 4, 30, 0
  04ffa94  lwz 6, 0(5)
  04ffa98  std 2, 40(1)
  04ffa9c  mtctr 6
  04ffaa0  lwz 2, 4(5)
  04ffaa4  bcctrl 20, 30
  04ffaa8  ld 2, 40(1)
  04ffaac  ld 0, 144(1)
  04ffab0  mtlr 0
  04ffab4  ld 30, 112(1)
  04ffab8  ld 31, 120(1)
  04ffabc  addi 1, 1, 128
  04ffac0  blr

FUN_004ffac4:   # 0x4ffac4, 0xb8 bytes
  04ffac4  stdu 1, -128(1)
  04ffac8  mflr 0
  04ffacc  std 0, 144(1)
  04ffad0  std 31, 120(1)
  04ffad4  ori 31, 3, 0
  04ffad8  std 30, 112(1)
  04ffadc  li 3, 128
  04ffae0  lis 30, 345
  04ffae4  addc 11, 1, 3
  04ffae8  addc 3, 1, 3
  04ffaec  addic 30, 30, 13144
  04ffaf0  addic 12, 3, 64
  04ffaf4  ori 3, 30, 0
  04ffaf8  stw 4, 60(11)
  04ffafc  std 5, 64(11)
  04ffb00  std 6, 72(11)
  04ffb04  clrldi 5, 12, 32
  04ffb08  std 7, 80(11)
  04ffb0c  std 8, 88(11)
  04ffb10  std 9, 96(11)
  04ffb14  std 10, 104(11)
  04ffb18  bl 0x5cd52c
  04ffb1c  nop
  04ffb20  lis 3, 144
  04ffb24  lwz 3, 11952(3)
  04ffb28  cmpwi 3, 0
  04ffb2c  bt 2, 0x4ffb54
  04ffb30  ori 5, 3, 0
  04ffb34  ori 3, 31, 0
  04ffb38  ori 4, 30, 0
  04ffb3c  lwz 6, 0(5)
  04ffb40  std 2, 40(1)
  04ffb44  mtctr 6
  04ffb48  lwz 2, 4(5)
  04ffb4c  bcctrl 20, 30
  04ffb50  ld 2, 40(1)
  04ffb54  lis 3, 102
  04ffb58  addic 3, 3, -2540
  04ffb5c  bl 0x5cd098
  04ffb60  nop
  04ffb64  ld 0, 144(1)
  04ffb68  mtlr 0
  04ffb6c  ld 30, 112(1)
  04ffb70  ld 31, 120(1)
  04ffb74  addi 1, 1, 128
  04ffb78  blr

FUN_004ffb7c:   # 0x4ffb7c, 0x78 bytes
  04ffb7c  stdu 1, -128(1)
  04ffb80  mflr 0
  04ffb84  std 0, 144(1)
  04ffb88  std 31, 120(1)
  04ffb8c  std 30, 112(1)
  04ffb90  lis 31, 345
  04ffb94  clrlwi 30, 3, 24
  04ffb98  addic 31, 31, 13144
  04ffb9c  ori 3, 31, 0
  04ffba0  bl 0x5cd52c
  04ffba4  nop
  04ffba8  lis 3, 144
  04ffbac  lwz 3, 11956(3)
  04ffbb0  cmpwi 3, 0
  04ffbb4  bt 2, 0x4ffbdc
  04ffbb8  ori 5, 3, 0
  04ffbbc  ori 3, 30, 0
  04ffbc0  ori 4, 31, 0
  04ffbc4  lwz 6, 0(5)
  04ffbc8  std 2, 40(1)
  04ffbcc  mtctr 6
  04ffbd0  lwz 2, 4(5)
  04ffbd4  bcctrl 20, 30
  04ffbd8  ld 2, 40(1)
  04ffbdc  ld 0, 144(1)
  04ffbe0  mtlr 0
  04ffbe4  ld 30, 112(1)
  04ffbe8  ld 31, 120(1)
  04ffbec  addi 1, 1, 128
  04ffbf0  blr

FUN_004ffbf4:   # 0x4ffbf4, 0xa8 bytes
  04ffbf4  stdu 1, -128(1)
  04ffbf8  mflr 0
  04ffbfc  std 0, 144(1)
  04ffc00  std 31, 120(1)
  04ffc04  lis 31, 345
  04ffc08  std 30, 112(1)
  04ffc0c  li 11, 128
  04ffc10  clrlwi 30, 3, 24
  04ffc14  addc 12, 1, 11
  04ffc18  addc 3, 1, 11
  04ffc1c  addic 31, 31, 13144
  04ffc20  addic 11, 3, 64
  04ffc24  ori 3, 31, 0
  04ffc28  stw 4, 60(12)
  04ffc2c  std 5, 64(12)
  04ffc30  std 6, 72(12)
  04ffc34  clrldi 5, 11, 32
  04ffc38  std 7, 80(12)
  04ffc3c  std 8, 88(12)
  04ffc40  std 9, 96(12)
  04ffc44  std 10, 104(12)
  04ffc48  bl 0x5cd52c
  04ffc4c  nop
  04ffc50  lis 3, 144
  04ffc54  lwz 3, 11956(3)
  04ffc58  cmpwi 3, 0
  04ffc5c  bt 2, 0x4ffc84
  04ffc60  ori 5, 3, 0
  04ffc64  ori 3, 30, 0
  04ffc68  ori 4, 31, 0
  04ffc6c  lwz 6, 0(5)
  04ffc70  std 2, 40(1)
  04ffc74  mtctr 6
  04ffc78  lwz 2, 4(5)
  04ffc7c  bcctrl 20, 30
  04ffc80  ld 2, 40(1)
  04ffc84  ld 0, 144(1)
  04ffc88  mtlr 0
  04ffc8c  ld 30, 112(1)
  04ffc90  ld 31, 120(1)
  04ffc94  addi 1, 1, 128
  04ffc98  blr

print_tty2:   # 0x4ffc9c, 0xb0 bytes
  04ffc9c  stdu 1, -128(1)
  04ffca0  mflr 0
  04ffca4  std 0, 144(1)
  04ffca8  std 31, 120(1)
  04ffcac  lis 31, 345
  04ffcb0  li 11, 128
  04ffcb4  addic 31, 31, 13144
  04ffcb8  addc 12, 1, 11
  04ffcbc  std 30, 112(1)
  04ffcc0  addc 11, 1, 11
  04ffcc4  ori 30, 3, 0
  04ffcc8  addic 11, 11, 56
  04ffccc  stw 3, 52(12)
  04ffcd0  std 4, 56(12)
  04ffcd4  ori 3, 31, 0
  04ffcd8  std 5, 64(12)
  04ffcdc  ori 4, 30, 0
  04ffce0  std 6, 72(12)
  04ffce4  clrldi 5, 11, 32
  04ffce8  std 7, 80(12)
  04ffcec  std 8, 88(12)
  04ffcf0  std 9, 96(12)
  04ffcf4  std 10, 104(12)
  04ffcf8  bl 0x5cd52c
  04ffcfc  nop
  04ffd00  lis 3, 144
  04ffd04  lwz 3, 11952(3)
  04ffd08  cmpwi 3, 0
  04ffd0c  bt 2, 0x4ffd34
  04ffd10  ori 5, 3, 0
  04ffd14  li 3, 4
  04ffd18  ori 4, 31, 0
  04ffd1c  lwz 6, 0(5)
  04ffd20  std 2, 40(1)
  04ffd24  mtctr 6
  04ffd28  lwz 2, 4(5)
  04ffd2c  bcctrl 20, 30
  04ffd30  ld 2, 40(1)
  04ffd34  ld 0, 144(1)
  04ffd38  mtlr 0
  04ffd3c  ld 30, 112(1)
  04ffd40  ld 31, 120(1)
  04ffd44  addi 1, 1, 128
  04ffd48  blr

FUN_004ffd4c:   # 0x4ffd4c, 0xa8 bytes
  04ffd4c  stdu 1, -128(1)
  04ffd50  mflr 0
  04ffd54  std 0, 144(1)
  04ffd58  std 31, 120(1)
  04ffd5c  ori 31, 3, 0
  04ffd60  std 30, 112(1)
  04ffd64  li 3, 128
  04ffd68  lis 30, 345
  04ffd6c  addc 11, 1, 3
  04ffd70  addc 3, 1, 3
  04ffd74  addic 30, 30, 13144
  04ffd78  addic 12, 3, 64
  04ffd7c  ori 3, 30, 0
  04ffd80  stw 4, 60(11)
  04ffd84  std 5, 64(11)
  04ffd88  std 6, 72(11)
  04ffd8c  clrldi 5, 12, 32
  04ffd90  std 7, 80(11)
  04ffd94  std 8, 88(11)
  04ffd98  std 9, 96(11)
  04ffd9c  std 10, 104(11)
  04ffda0  bl 0x5cd52c
  04ffda4  nop
  04ffda8  lis 3, 144
  04ffdac  lwz 3, 11952(3)
  04ffdb0  cmpwi 3, 0
  04ffdb4  bt 2, 0x4ffddc
  04ffdb8  ori 5, 3, 0
  04ffdbc  ori 3, 31, 0
  04ffdc0  ori 4, 30, 0
  04ffdc4  lwz 6, 0(5)
  04ffdc8  std 2, 40(1)
  04ffdcc  mtctr 6
  04ffdd0  lwz 2, 4(5)
  04ffdd4  bcctrl 20, 30
  04ffdd8  ld 2, 40(1)
  04ffddc  ld 0, 144(1)
  04ffde0  mtlr 0
  04ffde4  ld 30, 112(1)
  04ffde8  ld 31, 120(1)
  04ffdec  addi 1, 1, 128
  04ffdf0  blr

FUN_004ffdf4:   # 0x4ffdf4, 0xe0 bytes
  04ffdf4  stdu 1, -128(1)
  04ffdf8  mflr 0
  04ffdfc  std 0, 144(1)
  04ffe00  std 31, 120(1)
  04ffe04  ori 31, 3, 0
  04ffe08  std 30, 112(1)
  04ffe0c  li 3, 128
  04ffe10  lis 30, 345
  04ffe14  addc 11, 1, 3
  04ffe18  addc 3, 1, 3
  04ffe1c  addic 30, 30, 13144
  04ffe20  addic 12, 3, 64
  04ffe24  ori 3, 30, 0
  04ffe28  stw 4, 60(11)
  04ffe2c  std 5, 64(11)
  04ffe30  std 6, 72(11)
  04ffe34  clrldi 5, 12, 32
  04ffe38  std 7, 80(11)
  04ffe3c  std 8, 88(11)
  04ffe40  std 9, 96(11)
  04ffe44  std 10, 104(11)
  04ffe48  bl 0x5cd52c
  04ffe4c  nop
  04ffe50  lis 3, 144
  04ffe54  lwz 3, 11952(3)
  04ffe58  cmpwi 3, 0
  04ffe5c  bt 2, 0x4ffe84
  04ffe60  ori 5, 3, 0
  04ffe64  ori 3, 31, 0
  04ffe68  ori 4, 30, 0
  04ffe6c  lwz 6, 0(5)
  04ffe70  std 2, 40(1)
  04ffe74  mtctr 6
  04ffe78  lwz 2, 4(5)
  04ffe7c  bcctrl 20, 30
  04ffe80  ld 2, 40(1)
  04ffe84  lis 3, 144
  04ffe88  lwz 3, 11944(3)
  04ffe8c  cmpwi 3, 0
  04ffe90  bt 2, 0x4ffebc
  04ffe94  ori 5, 3, 0
  04ffe98  lis 4, 102
  04ffe9c  li 3, 1
  04ffea0  addic 4, 4, -2528
  04ffea4  lwz 6, 0(5)
  04ffea8  std 2, 40(1)
  04ffeac  mtctr 6
  04ffeb0  lwz 2, 4(5)
  04ffeb4  bcctrl 20, 30
  04ffeb8  ld 2, 40(1)
  04ffebc  ld 0, 144(1)
  04ffec0  mtlr 0
  04ffec4  ld 30, 112(1)
  04ffec8  ld 31, 120(1)
  04ffecc  addi 1, 1, 128
  04ffed0  blr

FUN_004ffed4:   # 0x4ffed4, 0x10 bytes
  04ffed4  lis 3, 144
  04ffed8  lwz 3, 11936(3)
  04ffedc  extsw 3, 3
  04ffee0  blr

FUN_004ffee4:   # 0x4ffee4, 0x10 bytes
  04ffee4  lis 3, 144
  04ffee8  lwz 3, 11940(3)
  04ffeec  extsw 3, 3
  04ffef0  blr

FUN_004ffef4:   # 0x4ffef4, 0xc bytes
  04ffef4  lis 4, 144
  04ffef8  stw 3, 11936(4)
  04ffefc  blr

FUN_004fff00:   # 0x4fff00, 0xc bytes
  04fff00  lis 4, 144
  04fff04  stw 3, 11940(4)
  04fff08  blr

FUN_004fff0c:   # 0x4fff0c, 0x28 bytes
  04fff0c  stdu 1, -112(1)
  04fff10  mflr 0
  04fff14  std 0, 128(1)
  04fff18  ori 3, 4, 0
  04fff1c  bl 0x5cd098
  04fff20  nop
  04fff24  ld 0, 128(1)
  04fff28  mtlr 0
  04fff2c  addi 1, 1, 112
  04fff30  blr

FUN_004fff34:   # 0x4fff34, 0x28 bytes
  04fff34  stdu 1, -112(1)
  04fff38  mflr 0
  04fff3c  std 0, 128(1)
  04fff40  ori 3, 4, 0
  04fff44  bl 0x5cd098
  04fff48  nop
  04fff4c  ld 0, 128(1)
  04fff50  mtlr 0
  04fff54  addi 1, 1, 112
  04fff58  blr
