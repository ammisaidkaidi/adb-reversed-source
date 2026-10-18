// Function: BrotliDecoderDecompress
// Address: 0036cea0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0036e5e8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong BrotliDecoderDecompress
                (long param_1,undefined8 param_2,long *param_3,ulong param_4,ulong *param_5,
                long *param_6)

{
  ushort *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  byte bVar11;
  uint uVar12;
  long *plVar13;
  long *extraout_RDX;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long extraout_RDX_00;
  long **pplVar17;
  undefined **ppuVar18;
  int iVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  int iVar29;
  long in_FS_OFFSET;
  bool bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long lVar37;
  undefined *puStack_1778;
  long *plStack_1770;
  long lStack_1768;
  ulong uStack_1760;
  long *plStack_1758;
  ulong *puStack_1750;
  long *plStack_1748;
  long *plStack_1740;
  long *plStack_1738;
  ulong uStack_1730;
  long *plStack_1728;
  long lStack_1720;
  ulong uStack_1718;
  long lStack_1710;
  long *plStack_1708;
  long *plStack_1700;
  long lStack_16f8;
  ulong uStack_16f0;
  ulong uStack_16e8;
  undefined *puStack_16e0;
  undefined1 auStack_16d8 [8];
  ulong uStack_16d0;
  long lStack_16c8;
  undefined8 uStack_16c0;
  long lStack_16b8;
  long lStack_16b0;
  long alStack_16a8 [718];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = 0;
  puStack_16e0 = &UNK_0036cee3;
  func_0x0099bdb0(alStack_16a8,0,0x1670);
  lStack_16b0 = 0;
  lStack_16c8 = *param_3;
  plVar21 = alStack_16a8;
  plVar20 = (long *)0x0;
  plVar13 = (long *)0x0;
  puStack_16e0 = &UNK_0036cf22;
  uStack_16d0 = param_4;
  uStack_16c0 = param_2;
  lStack_16b8 = param_1;
  iVar6 = func_0x00374eb0(plVar21,0,0);
  plVar14 = param_3;
  if (iVar6 != 0) {
    plVar14 = alStack_16a8;
    plVar20 = &lStack_16b8;
    plVar13 = &lStack_16c8;
    param_5 = &uStack_16d0;
    param_6 = &lStack_16b0;
    puStack_16e0 = &UNK_0036cf58;
    uVar7 = BrotliDecoderDecompressStream(plVar14,plVar20,&uStack_16c0);
    param_4 = (ulong)uVar7;
    *param_3 = lStack_16b0;
    puStack_16e0 = &UNK_0036cf6e;
    plVar21 = plVar14;
    func_0x00375160();
    uVar23 = (ulong)(uVar7 == 1);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar23;
  }
  puStack_16e0 = &UNK_0036cfa2;
  func_0x0099bd00();
  ppuVar18 = &puStack_16e0;
  pplVar17 = &plStack_1770;
  lStack_1710 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_1720 = *plVar20;
  if (param_6 != (long *)0x0) {
    *param_6 = plVar21[0x36];
  }
  plStack_1748 = plVar13;
  plStack_1708 = plVar14;
  plStack_1700 = param_3;
  lStack_16f8 = param_1;
  uStack_16f0 = uVar23;
  uStack_16e8 = param_4;
  if ((int)plVar21[0x10] < 0) {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1710) {
      return 0;
    }
code_r0x0036e631:
    puStack_1778 = &UNK_0036e636;
    puStack_16e0 = &stack0xfffffffffffffff8;
    func_0x0099bd00();
    uVar7 = (uint)plVar20;
    lStack_1720 = extraout_RDX_00;
    ppuVar18 = &puStack_16e0;
code_r0x0036e640:
    *(undefined ***)((long)pplVar17 + -8) = ppuVar18;
    *(uint *)(plVar21 + 0x10) = uVar7;
    plVar21[0x5d] = plVar21[0x5d] + lStack_1720;
    if ((plVar21[10] != 0) && (plVar21[3] == plVar21[5])) {
      plVar21[10] = 0;
    }
    uVar23 = 0;
    if (uVar7 - 1 < 3) {
      uVar23 = (ulong)uVar7;
    }
    return uVar23;
  }
  if (*plVar13 == 0) {
    param_5 = (ulong *)0x0;
  }
  else if ((param_5 == (ulong *)0x0) || (*param_5 == 0)) {
    lStack_1720 = lStack_1720 - *plVar20;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1710) {
      uVar7 = 0xffffffec;
      pplVar17 = (long **)auStack_16d8;
      ppuVar18 = (undefined **)&stack0xfffffffffffffff8;
      goto code_r0x0036e640;
    }
    goto code_r0x0036e631;
  }
  lVar16 = plVar21[10];
  if (lVar16 == 0) {
    plVar14 = (long *)*extraout_RDX;
    lVar16 = *plVar20;
    plVar21[3] = (long)plVar14;
    lVar22 = (long)plVar14 + lVar16;
    uVar7 = 1;
  }
  else {
    plVar14 = plVar21 + 9;
    plVar21[3] = (long)plVar14;
    lVar22 = (long)plVar21 + lVar16 + 0x48;
    uVar7 = 2;
  }
  plVar21[5] = lVar22;
  plVar13 = (long *)(lVar22 + -0x1b);
  if (0xffffffffffffffe2 < lVar16 - 0x1cU) {
    plVar13 = plVar14;
  }
  plVar21[4] = (long)plVar13;
  plStack_1758 = param_6;
  puStack_1750 = param_5;
  plStack_1740 = extraout_RDX;
  plStack_1728 = plVar20;
  puStack_16e0 = &stack0xfffffffffffffff8;
code_r0x0036d0c0:
  plVar20 = plStack_1728;
  plVar14 = plStack_1740;
  plVar13 = plVar21 + 0x6c;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      if (plVar21[10] == 0) {
        uVar23 = plVar21[2];
        if (uVar23 < 8) {
          lVar16 = plVar21[3];
        }
        else {
          lVar16 = plVar21[3] - (uVar23 >> 3);
        }
        plVar21[3] = lVar16;
        uVar12 = (uint)uVar23 & 7;
        plVar21[2] = (ulong)uVar12;
        plVar21[1] = (ulong)(~(-1 << (sbyte)uVar12) & *(uint *)(plVar21 + 1));
        *plStack_1728 = plVar21[5] - lVar16;
        *plStack_1740 = plVar21[3];
      }
      else {
        plVar21[10] = 0;
      }
      goto code_r0x0036e5df;
    }
    if (plVar21[0x11] != 0) {
      puStack_1778 = &UNK_0036d0fe;
      uVar7 = func_0x0036e680(plVar21,plStack_1748,puStack_1750,plStack_1758);
      if ((int)uVar7 < 0) goto code_r0x0036e5df;
    }
    lVar16 = plVar21[3];
    if (plVar21[10] == 0) {
      *plVar14 = lVar16;
      lVar16 = plVar21[5] - lVar16;
      *plVar20 = lVar16;
      while (uVar7 = 2, lVar16 != 0) {
        *(undefined1 *)((long)plVar21 + plVar21[10] + 0x48) = *(undefined1 *)*plVar14;
        plVar21[10] = plVar21[10] + 1;
        *plVar14 = *plVar14 + 1;
        *plVar20 = *plVar20 + -1;
        lVar16 = *plVar20;
      }
code_r0x0036e5df:
      lStack_1720 = lStack_1720 - *plVar20;
      goto code_r0x0036e5e8;
    }
    if (lVar16 == plVar21[5]) {
      plVar21[10] = 0;
      lVar22 = *plVar14;
      lVar28 = *plVar20;
      plVar21[3] = lVar22;
      lVar16 = lVar22 + lVar28;
      plVar21[5] = lVar16;
      if (lVar28 - 0x1cU < 0xffffffffffffffe3) {
        plVar21[4] = lVar16 + -0x1b;
        uVar7 = 1;
      }
      else {
        plVar21[4] = lVar22;
        uVar7 = 1;
      }
    }
    else {
      if (*plVar20 == 0) {
        uVar7 = 2;
        goto code_r0x0036e5df;
      }
      *(undefined1 *)((long)plVar21 + plVar21[10] + 0x48) = *(undefined1 *)*plVar14;
      lVar16 = plVar21[10];
      plVar21[10] = lVar16 + 1;
      plVar13 = plVar21 + 9;
      plVar21[3] = (long)plVar13;
      plVar21[5] = (long)plVar13 + lVar16 + 1;
      plVar10 = (long *)((long)plVar21 + lVar16 + 0x2e);
      if (0xffffffffffffffe2 < lVar16 - 0x1bU) {
        plVar10 = plVar13;
      }
      plVar21[4] = (long)plVar10;
      *plVar14 = *plVar14 + 1;
      *plVar20 = *plVar20 + -1;
      uVar7 = 1;
    }
    goto code_r0x0036d0c0;
  }
  uVar7 = 1;
  switch((int)*plVar21) {
  case 0:
    puStack_1778 = &UNK_0036d354;
    iVar6 = func_0x00374290(plVar21 + 1);
    uVar7 = 2;
    if (iVar6 != 0) {
      uVar12 = *(uint *)((long)plVar21 + 0x304);
      *(uint *)((long)plVar21 + 0x304) = uVar12 & 0xffffffdf;
      uVar23 = plVar21[1];
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
      plVar21[1] = uVar23 >> 1;
      if ((uVar23 & 1) == 0) {
        uVar12 = uVar12 & 0xfffff01f | 0x400;
      }
      else {
        plVar21[2] = lVar16 + -4;
        plVar21[1] = uVar23 >> 4;
        uVar26 = uVar23 >> 1 & 7;
        if (uVar26 == 0) {
          plVar21[2] = lVar16 + -7;
          plVar21[1] = uVar23 >> 7;
          uVar26 = uVar23 >> 4 & 7;
          if (uVar26 == 0) {
            uVar12 = uVar12 & 0xfffff01f | 0x440;
          }
          else {
            iVar6 = (int)uVar26;
            if (iVar6 == 1) {
              uVar7 = 0xfffffff3;
              if ((uVar12 & 0x20) == 0) goto code_r0x0036d0c0;
              plVar21[2] = lVar16 + -8;
              plVar21[1] = uVar23 >> 8;
              if ((char)uVar23 < '\0') goto code_r0x0036d0c0;
            }
            else {
              uVar12 = (uVar12 & 0xfffff01f) + iVar6 * 0x40 + 0x200;
            }
          }
        }
        else {
          uVar12 = (uVar12 & 0xfffff01f) + (int)uVar26 * 0x40 + 0x440;
        }
      }
      *(uint *)((long)plVar21 + 0x304) = uVar12;
      if ((uVar12 & 0x20) == 0) {
        *(int *)plVar21 = 2;
        uVar7 = 1;
      }
      else {
        *(int *)plVar21 = 1;
        uVar7 = 1;
      }
    }
    goto code_r0x0036d0c0;
  case 1:
    uVar23 = plVar21[2];
    if (uVar23 < 6) {
      pbVar24 = (byte *)plVar21[3];
      uVar7 = 2;
      if (pbVar24 == (byte *)plVar21[5]) goto code_r0x0036d0c0;
      uVar26 = (ulong)*pbVar24 << ((byte)uVar23 & 0x3f) | plVar21[1];
      uVar23 = uVar23 | 8;
      plVar21[3] = (long)(pbVar24 + 1);
    }
    else {
      uVar26 = plVar21[1];
    }
    plVar21[2] = uVar23 - 6;
    plVar21[1] = uVar26 >> 6;
    uVar8 = (uint)uVar26 & 0x3f;
    uVar12 = *(uint *)((long)plVar21 + 0x304) & 0xfffff03f | uVar8 << 6;
    *(uint *)((long)plVar21 + 0x304) = uVar12;
    uVar7 = 0xfffffff3;
    if (uVar8 - 0x1f < 0xffffffeb) goto code_r0x0036d0c0;
    *(int *)plVar21 = 2;
    break;
  case 2:
    uVar12 = *(uint *)((long)plVar21 + 0x304);
    break;
  case 3:
    goto code_r0x0036d5a6;
  case 4:
    goto code_r0x0036d5b5;
  case 5:
    uVar23 = plVar21[2];
    if (uVar23 < 6) {
      pbVar24 = (byte *)plVar21[3];
      uVar7 = 2;
      if (pbVar24 == (byte *)plVar21[5]) goto code_r0x0036d0c0;
      uVar26 = (ulong)*pbVar24 << ((byte)uVar23 & 0x3f) | plVar21[1];
      uVar23 = uVar23 | 8;
      plVar21[3] = (long)(pbVar24 + 1);
    }
    else {
      uVar26 = plVar21[1];
    }
    plVar21[2] = uVar23 - 6;
    plVar21[1] = uVar26 >> 6;
    uVar7 = (uint)uVar26 & 3;
    plVar21[0x30] = (ulong)uVar7;
    plVar21[0x31] = (ulong)((uint)uVar26 >> 2 & 0xf) << (sbyte)uVar7;
    puStack_1778 = &UNK_0036d734;
    lVar16 = (*(code *)plVar21[6])(plVar21[8]);
    plVar21[99] = lVar16;
    uVar7 = 0xffffffeb;
    if (lVar16 != 0) {
      *plVar21 = 6;
      iVar6 = 0;
      goto code_r0x0036d755;
    }
    goto code_r0x0036d0c0;
  case 6:
    iVar6 = *(int *)((long)plVar21 + 4);
code_r0x0036d755:
    lVar16 = plVar21[0x27];
    if (iVar6 < (int)lVar16) {
      lVar22 = (long)iVar6;
      do {
        uVar23 = plVar21[2];
        if (uVar23 < 2) {
          pbVar24 = (byte *)plVar21[3];
          if (pbVar24 == (byte *)plVar21[5]) {
            *(int *)((long)plVar21 + 4) = (int)lVar22;
            uVar7 = 2;
            goto code_r0x0036d0c0;
          }
          uVar26 = (ulong)*pbVar24 << ((byte)uVar23 & 0x3f) | plVar21[1];
          uVar23 = uVar23 | 8;
          plVar21[3] = (long)(pbVar24 + 1);
        }
        else {
          uVar26 = plVar21[1];
        }
        plVar21[2] = uVar23 - 2;
        plVar21[1] = uVar26 >> 2;
        *(byte *)(plVar21[99] + lVar22) = (byte)uVar26 & 3;
        lVar22 = lVar22 + 1;
        lVar16 = plVar21[0x27];
      } while (lVar22 < (int)lVar16);
    }
    *(int *)plVar21 = 0x16;
code_r0x0036d7df:
    puStack_1778 = &UNK_0036d7f9;
    uVar7 = func_0x0036fe10(lVar16 << 6,plVar21 + 0x61,plVar21 + 0x62,plVar21);
    if (uVar7 != 1) goto code_r0x0036d0c0;
    *(undefined1 (*) [16])(plVar21 + 0x68) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(plVar21 + 0x66) = (undefined1  [16])0x0;
    uVar23 = plVar21[0x27];
    if (uVar23 != 0) {
      lVar22 = plVar21[0x62];
      lVar16 = lVar22 + 4;
      uVar26 = 0;
      do {
        uVar3 = *(undefined1 *)(lVar22 + uVar26 * 0x40);
        auVar31 = ZEXT216(CONCAT11(uVar3,uVar3));
        auVar31 = pshuflw(auVar31,auVar31,0);
        uVar25 = 0xfffffffffffffffc;
        uVar7 = 0;
        do {
          auVar32 = ZEXT416(*(uint *)(lVar16 + uVar25)) ^ auVar31;
          auVar35._0_4_ = auVar32._0_4_ >> 0x10;
          auVar35._4_4_ = 0;
          auVar35._8_4_ = auVar32._8_4_ >> 0x10;
          auVar35._12_4_ = auVar32._12_4_ >> 0x10;
          auVar33 = ZEXT416(*(uint *)(lVar16 + 4 + uVar25)) ^ auVar31;
          auVar36._0_4_ = auVar33._0_4_ >> 0x10;
          auVar36._4_4_ = 0;
          auVar36._8_4_ = auVar33._8_4_ >> 0x10;
          auVar36._12_4_ = auVar33._12_4_ >> 0x10;
          uVar7 = (uint)(ushort)(SUB162(auVar36 | auVar33,0) >> 8) |
                  SUB164(auVar36 | auVar33,0) & 0xff |
                  (uint)(ushort)(SUB162(auVar35 | auVar32,0) >> 8) |
                  SUB164(auVar35 | auVar32,0) & 0xff | uVar7;
          uVar25 = uVar25 + 8;
        } while (uVar25 < 0x3c);
        if (uVar7 == 0) {
          puVar2 = (uint *)(*(undefined1 (*) [16])(plVar21 + 0x66) + (uVar26 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar26 & 0x1f);
        }
        uVar26 = uVar26 + 1;
        lVar16 = lVar16 + 0x40;
      } while (uVar26 != uVar23);
    }
    *(int *)plVar21 = 0x17;
code_r0x0036d910:
    bVar4 = (byte)(int)plVar21[0x30];
    bVar11 = bVar4 + 1;
    lVar16 = plVar21[0x31];
    if ((*(byte *)((long)plVar21 + 0x304) & 0x20) == 0) {
      lVar16 = lVar16 + (ulong)(uint)(0x18 << (bVar11 & 0x1f)) + 0x10;
    }
    else {
      if ((uint)lVar16 < 0x7ffffffc) {
        uVar7 = (0x7ffffffc - (uint)lVar16 >> (bVar4 & 0x1f)) + 4;
        do {
          bVar30 = 3 < uVar7;
          uVar7 = uVar7 >> 1;
        } while (bVar30);
      }
      lVar16 = (ulong)(uint)(0x3e << (bVar11 & 0x1f)) + lVar16 + 0x10;
    }
    puStack_1778 = &UNK_0036dc5d;
    uVar7 = func_0x0036fe10(plVar21[0x29] << 2,plVar21 + 0x32,plVar21 + 0x33,plVar21);
    if (uVar7 != 1) goto code_r0x0036d0c0;
    plStack_1738 = plVar21 + 0x17;
    puStack_1778 = &UNK_0036dc8d;
    uVar7 = func_0x00375270(plVar21,plStack_1738,0x100,0x100,plVar21[0x61]);
    puStack_1778 = &UNK_0036dcb0;
    uVar12 = func_0x00375270(plVar21,plVar21 + 0x1a,0x2c0,0x2c0,plVar21[0x28]);
    puStack_1778 = &UNK_0036dcd2;
    uVar8 = func_0x00375270(plVar21,plVar21 + 0x1d,lVar16);
    if ((uVar8 & uVar12 & uVar7 & 1) == 0) {
      lStack_1720 = lStack_1720 - *plStack_1728;
      uVar7 = 0xffffffea;
      goto code_r0x0036e5e8;
    }
    *plVar21 = 0x18;
    iVar6 = 0;
    iVar9 = (int)plVar21[0x6a];
    plVar14 = plStack_1738;
    goto joined_r0x0036db2f;
  case 7:
  case 8:
  case 9:
  case 10:
    goto code_r0x0036e241;
  case 0xb:
    puStack_1778 = &UNK_0036d48c;
    uVar7 = func_0x0036fa50(plStack_1748,puStack_1750,plStack_1758,plVar21);
    uVar12 = uVar7;
    goto joined_r0x0036d334;
  case 0xc:
    puStack_1778 = &UNK_0036d32a;
    uVar12 = func_0x0036fc40(plVar21);
    uVar7 = 2;
joined_r0x0036d334:
    if (uVar12 == 1) goto code_r0x0036dfc3;
    goto code_r0x0036d0c0;
  case 0xd:
  case 0xf:
  case 0x10:
    puStack_1778 = &UNK_0036d1b2;
    uVar7 = func_0x0036e680(plVar21,plStack_1748,puStack_1750,plStack_1758);
    if (uVar7 == 1) {
      puStack_1778 = &UNK_0036d1c3;
      func_0x00371ff0(plVar21);
      iVar6 = *(int *)((long)plVar21 + 100);
      if (iVar6 == 1 << ((byte)(*(uint *)((long)plVar21 + 0x304) >> 6) & 0x1f)) {
        *(int *)(plVar21 + 0xc) = *(int *)((long)plVar21 + 0x5c);
      }
      if ((int)*plVar21 == 0x10) {
        *(int *)plVar21 = 10;
        uVar7 = 1;
        goto code_r0x0036d0c0;
      }
      if ((int)*plVar21 == 0xf) {
        lVar16 = plVar21[0x65];
        if ((lVar16 != 0) && (iVar9 = *(int *)(lVar16 + 0x14), *(int *)(lVar16 + 0x10) != iVar9)) {
          iVar19 = (int)plVar21[0xb];
          uStack_1730 = CONCAT44(uStack_1730._4_4_,iVar19);
          do {
            iVar27 = *(int *)(lVar16 + 0x10) - iVar9;
            iVar29 = iVar6;
            if (iVar27 == 0) break;
            plStack_1738 = (long *)CONCAT44(plStack_1738._4_4_,iVar19);
            lVar22 = (long)*(int *)(lVar16 + 8);
            iVar29 = *(int *)(lVar16 + 0x9c + lVar22 * 4) -
                     (*(int *)(lVar16 + 0x98 + lVar22 * 4) + *(int *)(lVar16 + 0xc));
            if (iVar29 <= iVar27) {
              iVar27 = iVar29;
            }
            if (iVar6 - iVar19 <= iVar27) {
              iVar27 = iVar6 - iVar19;
            }
            puStack_1778 = &UNK_0036d2d6;
            func_0x0099bda0(plVar21[0x11] + (long)iVar19,
                            (long)*(int *)(lVar16 + 0xc) + *(long *)(lVar16 + 0x18 + lVar22 * 8),
                            (long)iVar27);
            *(int *)(lVar16 + 0xc) = *(int *)(lVar16 + 0xc) + iVar27;
            iVar9 = *(int *)(lVar16 + 0x14) + iVar27;
            *(int *)(lVar16 + 0x14) = iVar9;
            if (iVar27 == iVar29) {
              *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
              *(undefined4 *)(lVar16 + 0xc) = 0;
            }
            iVar19 = (int)plStack_1738 + iVar27;
            iVar6 = *(int *)((long)plVar21 + 100);
            iVar29 = iVar19;
          } while (iVar19 != iVar6);
          iVar6 = (iVar19 - (int)uStack_1730) + (int)plVar21[0xb];
          *(int *)(plVar21 + 0xb) = iVar6;
          uVar7 = 1;
          if (iVar29 <= iVar6) goto code_r0x0036d0c0;
        }
        iVar6 = 7;
        if (*(int *)((long)plVar21 + 0x84) == 0) {
          iVar6 = 0xe;
        }
        *(int *)plVar21 = iVar6;
        uVar7 = 1;
        goto code_r0x0036d0c0;
      }
      if (*(int *)((long)plVar21 + 4) == 0) {
        if (*(int *)((long)plVar21 + 0x84) == 0) goto code_r0x0036dfc3;
        *(int *)plVar21 = 9;
        uVar7 = 1;
      }
      else {
        *(int *)plVar21 = 8;
        uVar7 = 1;
      }
    }
    goto code_r0x0036d0c0;
  case 0xe:
    uVar7 = 0xfffffff6;
    if (-1 < *(int *)((long)plVar21 + 0x84)) {
      puStack_1778 = &UNK_0036d3c5;
      func_0x003750b0(plVar21);
      if ((*(byte *)((long)plVar21 + 0x304) & 1) == 0) {
        *(int *)plVar21 = 3;
        uVar7 = 1;
      }
      else {
        uVar23 = plVar21[2];
        uVar26 = uVar23 & 7;
        if (uVar26 == 0) {
          bVar30 = false;
        }
        else {
          uVar25 = plVar21[1];
          uVar23 = uVar23 & 0xfffffffffffffff8;
          plVar21[2] = uVar23;
          plVar21[1] = uVar25 >> (sbyte)uVar26;
          bVar30 = (*(ulong *)(&UNK_001afae0 + uVar26 * 8) & uVar25) != 0;
        }
        if (uVar23 < 0x40) {
          plVar21[1] = plVar21[1] & ~(-1L << ((byte)uVar23 & 0x3f));
        }
        uVar7 = 0xfffffff1;
        if (!bVar30) {
          if (plVar21[10] == 0) {
            if (uVar23 < 8) {
              lVar16 = plVar21[3];
            }
            else {
              lVar16 = plVar21[3] - (uVar23 >> 3);
            }
            plVar21[3] = lVar16;
            uVar7 = (uint)uVar23 & 7;
            plVar21[2] = (ulong)uVar7;
            plVar21[1] = (ulong)(~(-1 << (sbyte)uVar7) & *(uint *)(plVar21 + 1));
            *plStack_1728 = plVar21[5] - lVar16;
            *plStack_1740 = plVar21[3];
          }
          *(int *)plVar21 = 0x1a;
          goto code_r0x0036e4d8;
        }
      }
    }
    goto code_r0x0036d0c0;
  case 0x11:
    goto code_r0x0036d663;
  case 0x12:
    iVar6 = *(int *)((long)plVar21 + 4);
    if (iVar6 < 3) goto code_r0x0036d69b;
    *(int *)plVar21 = 5;
    uVar7 = 1;
    goto code_r0x0036d0c0;
  case 0x13:
    iVar6 = *(int *)((long)plVar21 + 4);
    lVar16 = (long)iVar6;
    goto code_r0x0036d9ce;
  case 0x14:
    goto code_r0x0036da0b;
  case 0x15:
    goto code_r0x0036da41;
  case 0x16:
    lVar16 = plVar21[0x27];
    goto code_r0x0036d7df;
  case 0x17:
    goto code_r0x0036d910;
  case 0x18:
    iVar6 = *(int *)((long)plVar21 + 4);
    if (iVar6 == 0) {
      iVar9 = (int)plVar21[0x6a];
      plVar14 = plVar21 + 0x17;
    }
    else {
      if (iVar6 != 2) {
        if (iVar6 == 1) {
          iVar9 = (int)plVar21[0x6a];
          plVar14 = plVar21 + 0x1a;
          goto joined_r0x0036db2f;
        }
        lStack_1720 = lStack_1720 - *plStack_1728;
        uVar7 = 0xffffffe1;
        goto code_r0x0036e5e8;
      }
      iVar9 = (int)plVar21[0x6a];
      plVar14 = plVar21 + 0x1d;
    }
joined_r0x0036db2f:
    if (iVar9 == 1) {
      iVar9 = *(int *)((long)plVar21 + 0xa6c);
    }
    else {
      plVar21[0x14e] = plVar14[1];
      *(int *)((long)plVar21 + 0xa6c) = 0;
      *(int *)(plVar21 + 0x6a) = 1;
      iVar9 = 0;
    }
    if (iVar9 < (int)(uint)*(ushort *)((long)plVar14 + 0x14)) {
      lVar16 = plVar21[0x14e];
      do {
        uStack_1718 = 0;
        puStack_1778 = &UNK_0036dd5b;
        uVar7 = func_0x0036ee70((short)plVar14[2],*(undefined2 *)((long)plVar14 + 0x12),lVar16,
                                &uStack_1718);
        if (uVar7 != 1) goto code_r0x0036d0c0;
        lVar16 = plVar21[0x14e];
        *(long *)(*plVar14 + (long)*(int *)((long)plVar21 + 0xa6c) * 8) = lVar16;
        lVar16 = lVar16 + uStack_1718 * 4;
        plVar21[0x14e] = lVar16;
        iVar6 = *(int *)((long)plVar21 + 0xa6c) + 1;
        *(int *)((long)plVar21 + 0xa6c) = iVar6;
      } while (iVar6 < (int)(uint)*(ushort *)((long)plVar14 + 0x14));
      iVar6 = *(int *)((long)plVar21 + 4);
    }
    *(int *)(plVar21 + 0x6a) = 0;
    *(int *)((long)plVar21 + 4) = iVar6 + 1;
    uVar7 = 1;
    if (1 < iVar6) {
      *(int *)plVar21 = 0x19;
code_r0x0036ddcb:
      uVar23 = plVar21[0x2b];
      plVar21[0x15] = plVar21[0x62] + uVar23 * 0x40;
      *(uint *)(plVar21 + 0x22) =
           (uint)((*(uint *)((long)plVar21 + (uVar23 >> 5) * 4 + 0x330) >> ((uint)uVar23 & 0x1f) & 1
                  ) != 0);
      plVar21[0x34] = *(long *)(plVar21[0x17] + (ulong)*(byte *)(plVar21[0x62] + uVar23 * 0x40) * 8)
      ;
      plVar21[0x14] =
           (long)(_kBrotliContextLookupTable + ((*(byte *)(plVar21[99] + uVar23) & 3) << 9));
      plVar21[0x16] = plVar21[0x33];
      plVar21[0x13] = *(long *)plVar21[0x1a];
      puStack_1778 = &UNK_0036de66;
      iVar6 = func_0x003702c0(plVar21);
      auVar31._8_4_ = 0xffffffff;
      auVar31._0_8_ = 0xffffffffffffffff;
      auVar31._12_4_ = 0xffffffff;
      uVar7 = 0xffffffe5;
      if (iVar6 != 0) {
        uStack_1730 = plVar21[0x31];
        uVar5 = *(ushort *)((long)plVar21 + 0xfa);
        uVar7 = (uint)plVar21[0x30];
        bVar4 = (byte)plVar21[0x30];
        uVar12 = 1 << (bVar4 & 0x1f);
        uStack_1760 = (ulong)uVar12;
        uVar23 = 0x10;
        if (uStack_1730 != 0) {
          if ((uStack_1730 < 4) ||
             (plVar13 < plVar21 + 0xbe + uStack_1730 &&
              plVar21 + 0xbe < (long *)((long)plVar13 + uStack_1730))) {
            uVar26 = 0;
          }
          else {
            uVar26 = uStack_1730 & 0xfffffffffffffffc;
            uVar23 = uVar26 + 0x10;
            uVar25 = 0;
            auVar32 = _UNK_00155fc0;
            do {
              *(undefined4 *)((long)plVar13 + uVar25) = 0;
              lVar16 = auVar32._0_8_;
              lVar22 = auVar32._8_8_;
              plVar21[uVar25 + 0xbe] = lVar16 + 1;
              (plVar21 + uVar25 + 0xbe)[1] = lVar22 - auVar31._8_8_;
              plVar21[uVar25 + 0xc0] = lVar16 + 3;
              (plVar21 + uVar25 + 0xc0)[1] = lVar22 + 3;
              uVar25 = uVar25 + 4;
              auVar32._0_8_ = lVar16 + 4;
              auVar32._8_8_ = lVar22 + 4;
            } while (uVar26 != uVar25);
            if (uStack_1730 == uVar26) goto code_r0x0036e052;
          }
          uVar15 = uVar26;
          for (uVar25 = uStack_1730 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *(undefined1 *)((long)plVar21 + uVar23 + 0x350) = 0;
            uVar15 = uVar15 + 1;
            plVar21[uVar23 + 0xae] = uVar15;
            uVar23 = uVar23 + 1;
          }
          if (uVar26 - uStack_1730 < 0xfffffffffffffffd) {
            lVar16 = 0;
            do {
              *(undefined1 *)((long)plVar21 + lVar16 + uVar23 + 0x350) = 0;
              plVar21[uVar23 + lVar16 + 0xae] = uVar15 + lVar16 + 1;
              *(undefined1 *)((long)plVar21 + lVar16 + uVar23 + 0x351) = 0;
              plVar21[uVar23 + lVar16 + 0xaf] = uVar15 + 2 + lVar16;
              *(undefined1 *)((long)plVar21 + lVar16 + uVar23 + 0x352) = 0;
              plVar21[uVar23 + lVar16 + 0xb0] = uVar15 + 3 + lVar16;
              *(undefined1 *)((long)plVar21 + lVar16 + uVar23 + 0x353) = 0;
              plVar21[uVar23 + lVar16 + 0xb1] = uVar15 + lVar16 + 4;
              lVar16 = lVar16 + 4;
            } while (uStack_1730 - uVar15 != lVar16);
            uVar23 = uVar23 + lVar16;
          }
        }
code_r0x0036e052:
        if (uVar23 < uVar5) {
          plStack_1738 = (long *)(uStack_1730 + 1);
          lStack_1768 = (long)plVar21 + uStack_1760 + 0x350;
          plStack_1770 = plVar21 + uStack_1760 + 0xae;
          lVar16 = 1;
          uVar26 = 0;
          do {
            bVar11 = (byte)lVar16;
            lVar28 = (uVar26 + 2 << (bVar11 & 0x3f)) + -4 << (bVar4 & 0x3f);
            lVar22 = (long)plStack_1738 + lVar28;
            if ((uVar7 < 2) ||
               (((long *)((long)plVar21 + uVar23 + 0x350) < plStack_1770 + uVar23 &&
                (plVar21 + uVar23 + 0xae < (long *)(lStack_1768 + uVar23))))) {
              if (uVar7 == 0) {
                uVar25 = 0;
              }
              else {
                lVar28 = lVar28 + uStack_1730;
                uVar25 = 0;
                do {
                  *(byte *)((long)plVar21 + uVar25 + uVar23 + 0x350) = bVar11;
                  plVar21[uVar23 + uVar25 + 0xae] = lVar28 + uVar25 + 1;
                  *(byte *)((long)plVar21 + uVar25 + uVar23 + 0x351) = bVar11;
                  plVar21[uVar23 + uVar25 + 0xaf] = lVar28 + uVar25 + 2;
                  uVar25 = uVar25 + 2;
                } while ((uVar12 & 0xfffffffe) != uVar25);
                uVar23 = uVar23 + uVar25;
                uVar15 = uVar23;
                if ((uVar12 & 1) == 0) goto code_r0x0036e0bb;
              }
              *(byte *)((long)plVar21 + uVar23 + 0x350) = bVar11;
              plVar21[uVar23 + 0xae] = lVar22 + uVar25;
              uVar15 = uVar23 + 1;
            }
            else {
              auVar34._8_4_ = (int)lVar22;
              auVar34._0_8_ = lVar22;
              auVar34._12_4_ = (int)((ulong)lVar22 >> 0x20);
              uVar25 = 0;
              auVar33 = _UNK_00155fc0;
              do {
                *(ushort *)((long)plVar21 + uVar25 + uVar23 + 0x350) = CONCAT11(bVar11,bVar11);
                *(ushort *)((long)plVar21 + uVar25 + uVar23 + 0x352) = CONCAT11(bVar11,bVar11);
                lVar28 = auVar33._0_8_;
                lVar37 = auVar33._8_8_;
                plVar21[uVar23 + uVar25 + 0xae] = lVar22 + lVar28;
                (plVar21 + uVar23 + uVar25 + 0xae)[1] = auVar34._8_8_ + lVar37;
                plVar21[uVar23 + uVar25 + 0xb0] = lVar28 + lVar22 + 2;
                (plVar21 + uVar23 + uVar25 + 0xb0)[1] = lVar37 + auVar34._8_8_ + 2;
                uVar25 = uVar25 + 4;
                auVar33._0_8_ = lVar28 + 4;
                auVar33._8_8_ = lVar37 + 4;
                uVar15 = uVar23 + (uVar12 & 0xfffffffc);
              } while ((uVar12 & 0xfffffffc) != uVar25);
            }
code_r0x0036e0bb:
            uVar23 = uVar15;
            lVar16 = lVar16 + uVar26;
            uVar26 = uVar26 ^ 1;
          } while (uVar23 < uVar5);
        }
        *(int *)plVar21 = 7;
code_r0x0036e241:
        puStack_1778 = &UNK_0036e249;
        uVar7 = func_0x00370380(plVar21);
        if (uVar7 == 2) {
          puStack_1778 = &UNK_0036e25a;
          uVar7 = func_0x00371050(plVar21);
        }
      }
    }
    goto code_r0x0036d0c0;
  case 0x19:
    goto code_r0x0036ddcb;
  case 0x1a:
code_r0x0036e4d8:
    if (plVar21[0x11] != 0) goto code_r0x0036e4e2;
    goto code_r0x0036e505;
  default:
    goto code_r0x0036d0c0;
  }
  *(int *)((long)plVar21 + 0x5c) = (1 << ((byte)(uVar12 >> 6) & 0x1f)) + -0x10;
  puStack_1778 = &UNK_0036d579;
  lVar16 = (*(code *)plVar21[6])(plVar21[8]);
  plVar21[0x20] = lVar16;
  uVar7 = 0xffffffe2;
  if (lVar16 != 0) {
    plVar21[0x21] = lVar16 + 0x1da0;
    *(int *)plVar21 = 3;
code_r0x0036d5a6:
    puStack_1778 = &UNK_0036d5ae;
    func_0x00374ff0(plVar21);
    *(int *)plVar21 = 4;
code_r0x0036d5b5:
    puStack_1778 = &UNK_0036d5c1;
    uVar7 = func_0x0036e7c0(plVar21);
    if (uVar7 == 1) {
      if ((*(uint *)((long)plVar21 + 0x304) & 6) != 0) {
        uVar23 = plVar21[2];
        uVar26 = uVar23 & 7;
        if (uVar26 == 0) {
          bVar30 = false;
        }
        else {
          uVar25 = plVar21[1];
          uVar23 = uVar23 & 0xfffffffffffffff8;
          plVar21[2] = uVar23;
          plVar21[1] = uVar25 >> (sbyte)uVar26;
          bVar30 = (*(ulong *)(&UNK_001afae0 + uVar26 * 8) & uVar25) != 0;
        }
        if (uVar23 < 0x40) {
          plVar21[1] = plVar21[1] & ~(-1L << ((byte)uVar23 & 0x3f));
        }
        uVar7 = 0xfffffff2;
        if (bVar30) goto code_r0x0036d0c0;
        if ((*(uint *)((long)plVar21 + 0x304) & 4) != 0) {
          *(int *)plVar21 = 0xc;
          uVar7 = 1;
          if ((code *)plVar21[0x5a] != (code *)0x0) {
            puStack_1778 = &UNK_0036dc1c;
            (*(code *)plVar21[0x5a])(plVar21[0x5c]);
            uVar7 = 1;
          }
          goto code_r0x0036d0c0;
        }
      }
      if (*(int *)((long)plVar21 + 0x84) == 0) {
code_r0x0036dfc3:
        *(int *)plVar21 = 0xe;
        uVar7 = 1;
      }
      else {
        puStack_1778 = &UNK_0036d655;
        func_0x0036ec70(plVar21);
        if ((*(byte *)((long)plVar21 + 0x304) & 2) == 0) {
code_r0x0036d663:
          plVar21[0x6c] = 0;
          plVar21[0x82] = (long)(plVar21 + 0x87);
          *(int *)(plVar21 + 0x6b) = 0;
          plVar21[0x6a] = 0;
          *plVar21 = 0x12;
          iVar6 = 0;
code_r0x0036d69b:
          puStack_1778 = &UNK_0036d6b4;
          uVar7 = func_0x0036ece0(plVar21,plVar21 + 1,plVar21 + (long)iVar6 + 0x27);
          if (uVar7 == 1) {
            plVar21[(long)*(int *)((long)plVar21 + 4) + 0x27] =
                 plVar21[(long)*(int *)((long)plVar21 + 4) + 0x27] + 1;
            iVar6 = *(int *)((long)plVar21 + 4);
            lVar16 = (long)iVar6;
            if ((ulong)plVar21[lVar16 + 0x27] < 2) {
              *(int *)((long)plVar21 + 4) = iVar6 + 1;
              uVar7 = 1;
            }
            else {
              *(int *)plVar21 = 0x13;
code_r0x0036d9ce:
              puStack_1778 = &UNK_0036d9fb;
              uVar7 = func_0x0036ee70(plVar21[lVar16 + 0x27] + 2,plVar21[lVar16 + 0x27] + 2,
                                      (long)(iVar6 * 0x278) * 4 + plVar21[0x20],0);
              if (uVar7 == 1) {
                *(int *)plVar21 = 0x14;
code_r0x0036da0b:
                puStack_1778 = &UNK_0036da31;
                uVar7 = func_0x0036ee70(0x1a,0x1a,
                                        (long)*(int *)((long)plVar21 + 4) * 0x630 + plVar21[0x21],0)
                ;
                if (uVar7 == 1) {
                  *(int *)plVar21 = 0x15;
code_r0x0036da41:
                  iVar6 = *(int *)((long)plVar21 + 4);
                  lVar16 = (long)iVar6 * 0x630 + plVar21[0x21];
                  uStack_1718 = 0;
                  if (*(int *)((long)plVar21 + 0x2fc) == 0) {
                    uVar23 = plVar21[2];
                    if (uVar23 < 0xf) {
                      pbVar24 = (byte *)plVar21[3];
                      if (pbVar24 == (byte *)plVar21[5]) {
code_r0x0036dfd4:
                        puStack_1778 = &UNK_0036dfdd;
                        iVar9 = func_0x00372210(lVar16,plVar21 + 1,&uStack_1718);
                        uVar23 = uStack_1718;
                        if (iVar9 != 0) goto code_r0x0036e35b;
                        uVar7 = 2;
                        goto code_r0x0036d0c0;
                      }
                      uVar25 = (ulong)*pbVar24 << ((byte)uVar23 & 0x3f) | plVar21[1];
                      plVar21[1] = uVar25;
                      uVar26 = uVar23 + 8;
                      plVar21[2] = uVar26;
                      plVar21[3] = (long)(pbVar24 + 1);
                      if (uVar23 < 7) {
                        if (pbVar24 + 1 == (byte *)plVar21[5]) goto code_r0x0036dfd4;
                        uVar25 = (ulong)pbVar24[1] << ((byte)uVar26 & 0x3f) | plVar21[1];
                        plVar21[1] = uVar25;
                        plVar21[2] = uVar23 | 0x10;
                        plVar21[3] = (long)(pbVar24 + 2);
                        uVar26 = uVar23 | 0x10;
                      }
                    }
                    else {
                      uVar25 = plVar21[1];
                      uVar26 = uVar23;
                    }
                    lVar22 = lVar16 + (uVar25 & 0xff) * 4;
                    bVar4 = *(byte *)(lVar16 + (uVar25 & 0xff) * 4);
                    uVar15 = (ulong)bVar4;
                    uVar23 = uVar25;
                    if (8 < uVar15) {
                      uVar26 = uVar26 - 8;
                      plVar21[2] = uVar26;
                      uVar23 = uVar25 >> 8;
                      plVar21[1] = uVar23;
                      puVar1 = (ushort *)(lVar22 + 2);
                      lVar16 = lVar22 + (ulong)(*(uint *)(&UNK_001afae0 + (ulong)(bVar4 - 8) * 8) &
                                                (uint)(uVar25 >> 8) & 0x7f) * 4;
                      lVar22 = lVar16 + (ulong)*puVar1 * 4;
                      uVar15 = (ulong)*(byte *)(lVar16 + (ulong)*puVar1 * 4);
                    }
                    plVar21[2] = uVar26 - uVar15;
                    plVar21[1] = uVar23 >> ((byte)uVar15 & 0x3f);
                    uVar23 = (ulong)*(ushort *)(lVar22 + 2);
                  }
                  else {
                    uVar23 = plVar21[0x26];
                  }
code_r0x0036e35b:
                  bVar4 = _kBrotliPrefixCodeRanges[uVar23 * 4 + 2];
                  uVar25 = (ulong)bVar4;
                  uVar5 = *(ushort *)(_kBrotliPrefixCodeRanges + uVar23 * 4);
                  uVar26 = plVar21[2];
                  if (uVar26 < uVar25) {
                    pbVar24 = (byte *)plVar21[3];
                    do {
                      if (pbVar24 == (byte *)plVar21[5]) {
                        plVar21[0x26] = uVar23;
                        *(int *)((long)plVar21 + 0x2fc) = 1;
                        uVar7 = 2;
                        goto code_r0x0036d0c0;
                      }
                      uVar15 = (ulong)*pbVar24 << ((byte)uVar26 & 0x3f) | plVar21[1];
                      plVar21[1] = uVar15;
                      uVar26 = uVar26 + 8;
                      plVar21[2] = uVar26;
                      pbVar24 = pbVar24 + 1;
                      plVar21[3] = (long)pbVar24;
                    } while (uVar26 < uVar25);
                  }
                  else {
                    uVar15 = plVar21[1];
                  }
                  uVar23 = *(ulong *)(&UNK_001afae0 + uVar25 * 8);
                  plVar21[2] = uVar26 - uVar25;
                  plVar21[1] = uVar15 >> (bVar4 & 0x3f);
                  plVar21[(long)iVar6 + 0x23] = (uVar23 & uVar15) + (ulong)uVar5;
                  *(int *)((long)plVar21 + 0x2fc) = 0;
                  *(int *)((long)plVar21 + 4) = *(int *)((long)plVar21 + 4) + 1;
                  *(int *)plVar21 = 0x12;
                  uVar7 = 1;
                }
              }
            }
          }
        }
        else {
          *(int *)plVar21 = 0xb;
          uVar7 = 1;
        }
      }
    }
  }
  goto code_r0x0036d0c0;
code_r0x0036e4e2:
  puStack_1778 = &UNK_0036e4fc;
  uVar7 = func_0x0036e680(plVar21,plStack_1748,puStack_1750,plStack_1758);
  if (uVar7 == 1) goto code_r0x0036e505;
  goto code_r0x0036d0c0;
code_r0x0036e505:
  lStack_1720 = lStack_1720 - *plStack_1728;
  uVar7 = 1;
code_r0x0036e5e8:
  pplVar17 = (long **)&puStack_1778;
  goto code_r0x0036e640;
}


