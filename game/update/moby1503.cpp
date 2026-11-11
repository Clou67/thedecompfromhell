// game/update/moby1503.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x28d1f8-0x28d97c
// shared update function UpdateMoby_a_lot_8; registered for oClasses 1503, 1505, 1506, 1507, 1508, 1517, 1518, 1522, 1525, 1526, 1528, 1529, 1533, 1534, 1537, 1538, 1539, 1569, 1570, 1571, 1572, 1588, 1589, 1590, 1591, 1592, 1593, 1594, 1595, 1596, 1597, 1598, 1599, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611, 1612, 1613, 1614, 1615, 1616, 1617, 1618, 1619, 1620, 1621, 1622, 1623, 1624, 1652, 1653, 1654, 1656, 1657, 1658, 1659, 1661, 1662, 1665, 1666, 1673, 1674, 1675, 1676, 1678, 1679, 1680, 1688, 1689, 1690, 1692, 1693, 1694, 1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1716, 1717, 1718, 1719, 1720, 1721, 1722, 1724, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1737, 1738, 1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1751, 1752, 1753, 1754, 1755, 1756, 1757, 1759, 1760, 1761, 1762, 1763, 1764, 1765, 1769, 1770, 1786, 1787, 1790, 1791, 1792, 1793, 1794, 1796, 1801, 1802, 1803, 1804, 1814, 1815, 1817, 1821, 1822, 1823, 1824, 1829, 1830, 1831, 1832, 1833, 1836, 1837, 1838, 1839, 1846, 1847, 1851, 1858, 1861, 1864, 1867, 1868, 1869, 1870, 1875, 1878, 1881, 1883, 1889, 1909, 1914, 1915, 1916, 1917, 1922, 1924, 1925, 1926, 1927, 1933, 1934, 1935, 1936, 1939, 1940, 1941, 1942, 1944, 1945, 1946, 1961, 1962, 1963
#include "game/update/moby1503.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 1503, 1505, 1506, 1507, 1508, 1517, 1518, 1522, 1525, 1526, 1528, 1529, 1533, 1534, 1537, 1538, 1539, 1569, 1570, 1571, 1572, 1588, 1589, 1590, 1591, 1592, 1593, 1594, 1595, 1596, 1597, 1598, 1599, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611, 1612, 1613, 1614, 1615, 1616, 1617, 1618, 1619, 1620, 1621, 1622, 1623, 1624, 1652, 1653, 1654, 1656, 1657, 1658, 1659, 1661, 1662, 1665, 1666, 1673, 1674, 1675, 1676, 1678, 1679, 1680, 1688, 1689, 1690, 1692, 1693, 1694, 1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1716, 1717, 1718, 1719, 1720, 1721, 1722, 1724, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1737, 1738, 1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1751, 1752, 1753, 1754, 1755, 1756, 1757, 1759, 1760, 1761, 1762, 1763, 1764, 1765, 1769, 1770, 1786, 1787, 1790, 1791, 1792, 1793, 1794, 1796, 1801, 1802, 1803, 1804, 1814, 1815, 1817, 1821, 1822, 1823, 1824, 1829, 1830, 1831, 1832, 1833, 1836, 1837, 1838, 1839, 1846, 1847, 1851, 1858, 1861, 1864, 1867, 1868, 1869, 1870, 1875, 1878, 1881, 1883, 1889, 1909, 1914, 1915, 1916, 1917, 1922, 1924, 1925, 1926, 1927, 1933, 1934, 1935, 1936, 1939, 1940, 1941, 1942, 1944, 1945, 1946, 1961, 1962, 1963
// 0x028d1f8 (0x784 bytes)
// inlined: FastRSqrt @0x28d6d4, FastRSqrt @0x28d8a4
/* Moby 1503
   Moby 1505
   Moby 1506
   Moby 1507
   Moby 1508
   Moby 1517
   Moby 1518
   Moby 1522
   Moby 1525
   Moby 1526
   Moby 1528
   Moby 1529
   Moby 1533
   Moby 1534
   Moby 1537
   Moby 1538
   Moby 1539
   Moby 1569
   Moby 1570
   Moby 1571
   Moby 1572
   Moby 1588
   Moby 1589
   Moby 1590
   Moby 1591
   Moby 1592
   Moby 1593
   Moby 1594
   Moby 1595
   Moby 1596
   Moby 1597
   Moby 1598
   Moby 1599
   Moby 1601
   Moby 1602
   Moby 1603
   Moby 1604
   Moby 1605
   Moby 1606
   Moby 1607
   Moby 1608
   Moby 1609
   Moby 1610
   Moby 1611
   Moby 1612
   Moby 1613
   Moby 1614
   Moby 1615
   Moby 1616
   Moby 1617
   Moby 1618
   Moby 1619
   Moby 1620
   Moby 1621
   Moby 1622
   Moby 1623
   Moby 1624
   Moby 1652
   Moby 1653
   Moby 1654
   Moby 1656
   Moby 1657
   Moby 1658
   Moby 1659
   Moby 1661
   Moby 1662
   Moby 1665
   Moby 1666
   Moby 1673
   Moby 1674
   Moby 1675
   Moby 1676
   Moby 1678
   Moby 1679
   Moby 1680
   Moby 1688
   Moby 1689
   Moby 1690
   Moby 1692
   Moby 1693
   Moby 1694
   Moby 1695
   Moby 1696
   Moby 1697
   Moby 1698
   Moby 1699
   Moby 1700
   Moby 1701
   Moby 1702
   Moby 1703
   Moby 1704
   Moby 1705
   Moby 1706
   Moby 1707
   Moby 1708
   Moby 1709
   Moby 1710
   Moby 1711
   Moby 1712
   Moby 1713
   Moby 1714
   Moby 1715
   Moby 1716
   Moby 1717
   Moby 1718
   Moby 1719
   Moby 1720
   Moby 1721
   Moby 1722
   Moby 1724
   Moby 1726
   Moby 1727
   Moby 1728
   Moby 1729
   Moby 1730
   Moby 1731
   Moby 1732
   Moby 1733
   Moby 1734
   Moby 1735
   Moby 1736
   Moby 1737
   Moby 1738
   Moby 1739
   Moby 1740
   Moby 1741
   Moby 1742
   Moby 1743
   Moby 1744
   Moby 1745
   Moby 1746
   Moby 1747
   Moby 1748
   Moby 1749
   Moby 1751
   Moby 1752
   Moby 1753
   Moby 1754
   Moby 1755
   Moby 1756
   Moby 1757
   Moby 1759
   Moby 1760
   Moby 1761
   Moby 1762
   Moby 1763
   Moby 1764
   Moby 1765
   Moby 1769
   Moby 1770
   Moby 1786
   Moby 1787
   Moby 1790
   Moby 1791
   Moby 1792
   Moby 1793
   Moby 1794
   Moby 1796
   Moby 1801
   Moby 1802
   Moby 1803
   Moby 1804
   Moby 1814
   Moby 1815
   Moby 1817
   Moby 1821
   Moby 1822
   Moby 1823
   Moby 1824
   Moby 1829
   Moby 1830
   Moby 1831
   Moby 1832
   Moby 1833
   Moby 1836
   Moby 1837
   Moby 1838
   Moby 1839
   Moby 1846
   Moby 1847
   Moby 1851
   Moby 1858
   Moby 1861
   Moby 1864
   Moby 1867
   Moby 1868
   Moby 1869
   Moby 1870
   Moby 1875
   Moby 1878
   Moby 1881
   Moby 1883
   Moby 1889
   Moby 1909
   Moby 1914
   Moby 1915
   Moby 1916
   Moby 1917
   Moby 1922
   Moby 1924
   Moby 1925
   Moby 1926
   Moby 1927
   Moby 1933
   Moby 1934
   Moby 1935
   Moby 1936
   Moby 1939
   Moby 1940
   Moby 1941
   Moby 1942
   Moby 1944
   Moby 1945
   Moby 1946
   Moby 1961
   Moby 1962
   Moby 1963 */

void UpdateMoby_1503(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  s8 sVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  float local_d0 [4];
  GPiece<48> auStack_c0;
  GPiece<88> auStack_90;
  
  lVar7 = (longlong)(int)moby;
  bVar2 = moby->state;
  pfVar5 = (float *)moby->pVar;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      DeleteMoby(moby);
      return;
    }
    iVar8 = FastDecTimerS32(pfVar5 + 0xc);
    if (iVar8 != 0) {
      moby->state = (char)(ZERO_MASK(((uint)pfVar5[0xd] & 1))) + '\x03';
      fVar9 = (float)FastDoubleToInt((double)(animationSpeed * 10.0));
      pfVar5[0xc] = fVar9;
      return;
    }
  }
  else {
    if (bVar2 < 3) {
      if (((uint)pfVar5[0xd] & 2) == 0) {
        dVar14 = (double)(float)((double)pfVar5[0xb] * 0.5);
        MB_genericExplosion
                  (0,0,(double)pfVar5[0xb],dVar14,0x4022000000000000,dVar14,0,lVar7,&DAT_00a15d30,
                   local_e0,0,0xffffffffffffffff,5,3,5);
      }
      else {
        MB_SpawnExplosionSparks2
                  ((double)(pfVar5[0xb] * 0.5),0,lVar7,local_e0,&DAT_0028d1e0,0xffffffffffffffff);
      }
      DeleteMoby(moby);
      return;
    }
    if (bVar2 < 4) {
      iVar8 = FastDecTimerS32(pfVar5 + 0xc);
      if (iVar8 != 0) {
        DeleteMoby(moby);
        return;
      }
      sVar10 = FastDoubleToInt
                         ((double)(((float)(longlong)(int)pfVar5[0xc] / (animationSpeed * 10.0)) *
                                  128.0));
      moby->alpha = sVar10;
    }
  }
  FastEulerToMtx(auStack_c0,(MobyInstance *)(pfVar5 + 4));
  fVar9 = pfVar5[9];
  fVar3 = pfVar5[8];
  fVar4 = pfVar5[10];
  dVar16 = (double)((moby->transform).v2.x * fVar4 +
                   (moby->transform).v0.x * fVar3 + (moby->transform).v1.x * fVar9);
  dVar15 = (double)((moby->transform).v2.y * fVar4 +
                   (moby->transform).v0.y * fVar3 + (moby->transform).v1.y * fVar9);
  dVar14 = (double)((moby->transform).v2.z * fVar4 +
                   (moby->transform).v0.z * fVar3 + (moby->transform).v1.z * fVar9);
  FastVecMtx4MultBatch3(lVar7 + 0xc0,auStack_c0,lVar7 + 0xc0);
  fVar9 = pfVar5[9];
  fVar3 = pfVar5[8];
  fVar4 = pfVar5[10];
  fVar1 = (moby->pos).x -
          (float)((double)((moby->transform).v2.x * fVar4 +
                          (moby->transform).v0.x * fVar3 + (moby->transform).v1.x * fVar9) - dVar16)
  ;
  fVar6 = (moby->pos).y -
          (float)((double)((moby->transform).v2.y * fVar4 +
                          (moby->transform).v0.y * fVar3 + (moby->transform).v1.y * fVar9) - dVar15)
  ;
  fVar9 = (moby->pos).z -
          (float)((double)((moby->transform).v2.z * fVar4 +
                          (moby->transform).v0.z * fVar3 + (moby->transform).v1.z * fVar9) - dVar14)
  ;
  (moby->pos).x = fVar1;
  (moby->pos).y = fVar6;
  (moby->pos).z = fVar9;
  (moby->pos).x = fVar1 + *pfVar5;
  (moby->pos).y = fVar6 + pfVar5[1];
  (moby->pos).z = fVar9 + pfVar5[2];
  pfVar5[2] = pfVar5[2] - pfVar5[0xe];
  iVar8 = CollSphere((double)pfVar5[0xb],local_f0);
  if (iVar8 != 0) {
    dVar17 = 0.0;
    fVar9 = g_CollOutput.normal.z * g_CollOutput.normal.z +
            g_CollOutput.normal.x * g_CollOutput.normal.x + g_CollOutput.normal.y * g_CollOutput.normal.y;
    dVar14 = dVar17;
    dVar15 = dVar17;
    dVar16 = dVar17;
    if (SQRT(fVar9) != 0.0) {
      fVar3 = 1.0 / SQRT(fVar9);
      fVar3 = -(fVar9 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar9 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar9 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      dVar16 = (double)(g_CollOutput.normal.x * fVar3);
      dVar14 = (double)(g_CollOutput.normal.y * fVar3);
      dVar15 = (double)(g_CollOutput.normal.z * fVar3);
    }
    g_CollOutput.normal.x = (float)dVar16;
    g_CollOutput.normal.y = (float)dVar14;
    g_CollOutput.normal.z = (float)dVar15;
    dVar11 = (double)pfVar5[1];
    dVar12 = (double)*pfVar5;
    dVar13 = (double)pfVar5[2];
    dVar15 = (double)(float)(dVar13 * dVar15 +
                            (double)(float)(dVar12 * dVar16 + (double)(float)(dVar11 * dVar14)));
    dVar14 = (double)SQRT((float)(dVar13 * dVar13 +
                                 (double)(float)(dVar12 * dVar12 + (double)(float)(dVar11 * dVar11))
                                 ));
    if (dVar15 < 0.0) {
      FastVecNormalize(pfVar5,pfVar5,0xa10980);
      dVar16 = (double)SQRT(g_CollOutput.normal.z * g_CollOutput.normal.z +
                            g_CollOutput.normal.x * g_CollOutput.normal.x +
                            g_CollOutput.normal.y * g_CollOutput.normal.y);
      fVar9 = (float)((double)(float)(dVar15 * 0.5) / dVar16);
      dVar15 = dVar17;
      if (dVar17 - dVar16 < 0.0) {
        dVar15 = (double)(g_CollOutput.normal.y * fVar9);
      }
      dVar11 = dVar17;
      if (dVar17 - dVar16 < 0.0) {
        dVar11 = (double)(g_CollOutput.normal.x * fVar9);
      }
      dVar12 = dVar17;
      if (dVar17 - dVar16 < 0.0) {
        dVar12 = (double)(g_CollOutput.normal.z * fVar9);
      }
      if (dVar16 - dVar17 < 0.0) {
        dVar15 = (double)(g_CollOutput.normal.y * fVar9);
      }
      if (dVar16 - dVar17 < 0.0) {
        dVar11 = (double)(g_CollOutput.normal.x * fVar9);
      }
      if (dVar16 - dVar17 < 0.0) {
        dVar12 = (double)(g_CollOutput.normal.z * fVar9);
      }
      fVar9 = (float)((double)pfVar5[1] + dVar15);
      fVar3 = (float)((double)*pfVar5 + dVar11);
      fVar4 = (float)((double)pfVar5[2] + dVar12);
      dVar15 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar9 * fVar9);
      fVar1 = (float)(dVar14 / dVar15);
      dVar14 = dVar17;
      if (dVar17 - dVar15 < 0.0) {
        dVar14 = (double)(fVar3 * fVar1);
      }
      dVar16 = dVar17;
      if (dVar17 - dVar15 < 0.0) {
        dVar16 = (double)(fVar9 * fVar1);
      }
      dVar11 = dVar17;
      if (dVar17 - dVar15 < 0.0) {
        dVar11 = (double)(fVar4 * fVar1);
      }
      if (dVar15 - dVar17 < 0.0) {
        dVar14 = (double)(fVar3 * fVar1);
      }
      if (dVar15 - dVar17 < 0.0) {
        dVar16 = (double)(fVar9 * fVar1);
      }
      if (dVar15 - dVar17 < 0.0) {
        dVar11 = (double)(fVar4 * fVar1);
      }
      *pfVar5 = (float)dVar14;
      pfVar5[1] = (float)dVar16;
      pfVar5[2] = (float)dVar11;
      MB_AxisAngleToQuat
                (SQRT(pfVar5[6] * pfVar5[6] + pfVar5[4] * pfVar5[4] + pfVar5[5] * pfVar5[5]),
                 local_d0,local_d0);
      FastQuaternionToMtx4Identity(local_d0,auStack_90);
      MB_MtxToEuler((int)auStack_90,(MobyInstance *)(pfVar5 + 4));
    }
  }
  return;
}


