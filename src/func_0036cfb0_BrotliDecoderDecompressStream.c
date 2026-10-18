// Function: BrotliDecoderDecompressStream
// Address: 0036cfb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0036e5e8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BrotliDecoderDecompressStream
              (int *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
              undefined8 *param_6)

{
  ushort *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  long extraout_RDX;
  int **ppiVar18;
  undefined1 *unaff_RBP;
  undefined1 *puVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  byte *pbVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  int iVar28;
  long in_FS_OFFSET;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  long lVar35;
  undefined *puStack_a0;
  int *piStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  ulong uStack_58;
  long *plStack_50;
  long lStack_48;
  ulong uStack_40;
  long lStack_38;
  
  puVar19 = &stack0xfffffffffffffff8;
  ppiVar18 = &piStack_98;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_48 = *param_2;
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = *(undefined8 *)(param_1 + 0x6c);
  }
  plStack_70 = param_4;
  if (param_1[0x20] < 0) {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return 0;
    }
code_r0x0036e631:
    puStack_a0 = &UNK_0036e636;
    func_0x0099bd00();
    iVar8 = (int)param_2;
    lStack_48 = extraout_RDX;
    puVar19 = &stack0xfffffffffffffff8;
code_r0x0036e640:
    *(undefined1 **)((long)ppiVar18 + -8) = puVar19;
    param_1[0x20] = iVar8;
    *(long *)(param_1 + 0xba) = *(long *)(param_1 + 0xba) + lStack_48;
    if ((*(long *)(param_1 + 0x14) != 0) && (*(long *)(param_1 + 6) == *(long *)(param_1 + 10))) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
    }
    iVar10 = 0;
    if (iVar8 - 1U < 3) {
      iVar10 = iVar8;
    }
    return iVar10;
  }
  if (*param_4 == 0) {
    param_5 = (long *)0x0;
  }
  else if ((param_5 == (long *)0x0) || (*param_5 == 0)) {
    lStack_48 = lStack_48 - *param_2;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      iVar8 = -0x14;
      ppiVar18 = (int **)register0x00000020;
      puVar19 = unaff_RBP;
      goto code_r0x0036e640;
    }
    goto code_r0x0036e631;
  }
  lVar17 = *(long *)(param_1 + 0x14);
  if (lVar17 == 0) {
    piVar15 = (int *)*param_3;
    lVar17 = *param_2;
    *(int **)(param_1 + 6) = piVar15;
    lVar21 = (long)piVar15 + lVar17;
    iVar8 = 1;
  }
  else {
    piVar15 = param_1 + 0x12;
    *(int **)(param_1 + 6) = piVar15;
    lVar21 = (long)param_1 + lVar17 + 0x48;
    iVar8 = 2;
  }
  *(long *)(param_1 + 10) = lVar21;
  piVar11 = (int *)(lVar21 + -0x1b);
  if (0xffffffffffffffe2 < lVar17 - 0x1cU) {
    piVar11 = piVar15;
  }
  *(int **)(param_1 + 8) = piVar11;
  puStack_80 = param_6;
  plStack_78 = param_5;
  plStack_68 = param_3;
  plStack_50 = param_2;
code_r0x0036d0c0:
  plVar7 = plStack_50;
  plVar6 = plStack_68;
  piVar15 = param_1 + 0xd8;
  if (iVar8 != 1) {
    if (iVar8 != 2) {
      if (*(long *)(param_1 + 0x14) == 0) {
        uVar22 = *(ulong *)(param_1 + 4);
        if (uVar22 < 8) {
          lVar17 = *(long *)(param_1 + 6);
        }
        else {
          lVar17 = *(long *)(param_1 + 6) - (uVar22 >> 3);
        }
        *(long *)(param_1 + 6) = lVar17;
        uVar13 = (uint)uVar22 & 7;
        *(ulong *)(param_1 + 4) = (ulong)uVar13;
        *(ulong *)(param_1 + 2) = (ulong)(uint)(~(-1 << (sbyte)uVar13) & param_1[2]);
        *plStack_50 = *(long *)(param_1 + 10) - lVar17;
        *plStack_68 = *(long *)(param_1 + 6);
      }
      else {
        param_1[0x14] = 0;
        param_1[0x15] = 0;
      }
      goto code_r0x0036e5df;
    }
    if (*(long *)(param_1 + 0x22) != 0) {
      puStack_a0 = &UNK_0036d0fe;
      iVar8 = func_0x0036e680(param_1,plStack_70,plStack_78,puStack_80);
      if (iVar8 < 0) goto code_r0x0036e5df;
    }
    lVar17 = *(long *)(param_1 + 6);
    if (*(long *)(param_1 + 0x14) == 0) {
      *plVar6 = lVar17;
      lVar17 = *(long *)(param_1 + 10) - lVar17;
      *plVar7 = lVar17;
      while (iVar8 = 2, lVar17 != 0) {
        *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0x14) + 0x48) = *(undefined1 *)*plVar6;
        *(long *)(param_1 + 0x14) = *(long *)(param_1 + 0x14) + 1;
        *plVar6 = *plVar6 + 1;
        *plVar7 = *plVar7 + -1;
        lVar17 = *plVar7;
      }
code_r0x0036e5df:
      lStack_48 = lStack_48 - *plVar7;
      goto code_r0x0036e5e8;
    }
    if (lVar17 == *(long *)(param_1 + 10)) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      lVar21 = *plVar6;
      lVar27 = *plVar7;
      *(long *)(param_1 + 6) = lVar21;
      lVar17 = lVar21 + lVar27;
      *(long *)(param_1 + 10) = lVar17;
      if (lVar27 - 0x1cU < 0xffffffffffffffe3) {
        *(long *)(param_1 + 8) = lVar17 + -0x1b;
        iVar8 = 1;
      }
      else {
        *(long *)(param_1 + 8) = lVar21;
        iVar8 = 1;
      }
    }
    else {
      if (*plVar7 == 0) {
        iVar8 = 2;
        goto code_r0x0036e5df;
      }
      *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0x14) + 0x48) = *(undefined1 *)*plVar6;
      lVar17 = *(long *)(param_1 + 0x14);
      *(long *)(param_1 + 0x14) = lVar17 + 1;
      piVar15 = param_1 + 0x12;
      *(int **)(param_1 + 6) = piVar15;
      *(long *)(param_1 + 10) = (long)piVar15 + lVar17 + 1;
      piVar11 = (int *)((long)param_1 + lVar17 + 0x2e);
      if (0xffffffffffffffe2 < lVar17 - 0x1bU) {
        piVar11 = piVar15;
      }
      *(int **)(param_1 + 8) = piVar11;
      *plVar6 = *plVar6 + 1;
      *plVar7 = *plVar7 + -1;
      iVar8 = 1;
    }
    goto code_r0x0036d0c0;
  }
  iVar8 = 1;
  switch(*param_1) {
  case 0:
    puStack_a0 = &UNK_0036d354;
    iVar10 = func_0x00374290(param_1 + 2);
    iVar8 = 2;
    if (iVar10 != 0) {
      uVar13 = param_1[0xc1];
      param_1[0xc1] = uVar13 & 0xffffffdf;
      uVar22 = *(ulong *)(param_1 + 2);
      lVar17 = *(long *)(param_1 + 4);
      *(long *)(param_1 + 4) = lVar17 + -1;
      *(ulong *)(param_1 + 2) = uVar22 >> 1;
      if ((uVar22 & 1) == 0) {
        uVar13 = uVar13 & 0xfffff01f | 0x400;
      }
      else {
        *(long *)(param_1 + 4) = lVar17 + -4;
        *(ulong *)(param_1 + 2) = uVar22 >> 4;
        uVar25 = uVar22 >> 1 & 7;
        if (uVar25 == 0) {
          *(long *)(param_1 + 4) = lVar17 + -7;
          *(ulong *)(param_1 + 2) = uVar22 >> 7;
          uVar25 = uVar22 >> 4 & 7;
          if (uVar25 == 0) {
            uVar13 = uVar13 & 0xfffff01f | 0x440;
          }
          else {
            iVar8 = (int)uVar25;
            if (iVar8 == 1) {
              iVar8 = -0xd;
              if ((uVar13 & 0x20) == 0) goto code_r0x0036d0c0;
              *(long *)(param_1 + 4) = lVar17 + -8;
              *(ulong *)(param_1 + 2) = uVar22 >> 8;
              if ((char)uVar22 < '\0') goto code_r0x0036d0c0;
            }
            else {
              uVar13 = (uVar13 & 0xfffff01f) + iVar8 * 0x40 + 0x200;
            }
          }
        }
        else {
          uVar13 = (uVar13 & 0xfffff01f) + (int)uVar25 * 0x40 + 0x440;
        }
      }
      param_1[0xc1] = uVar13;
      if ((uVar13 & 0x20) == 0) {
        *param_1 = 2;
        iVar8 = 1;
      }
      else {
        *param_1 = 1;
        iVar8 = 1;
      }
    }
    goto code_r0x0036d0c0;
  case 1:
    uVar22 = *(ulong *)(param_1 + 4);
    if (uVar22 < 6) {
      pbVar23 = *(byte **)(param_1 + 6);
      iVar8 = 2;
      if (pbVar23 == *(byte **)(param_1 + 10)) goto code_r0x0036d0c0;
      uVar25 = (ulong)*pbVar23 << ((byte)uVar22 & 0x3f) | *(ulong *)(param_1 + 2);
      uVar22 = uVar22 | 8;
      *(byte **)(param_1 + 6) = pbVar23 + 1;
    }
    else {
      uVar25 = *(ulong *)(param_1 + 2);
    }
    *(ulong *)(param_1 + 4) = uVar22 - 6;
    *(ulong *)(param_1 + 2) = uVar25 >> 6;
    uVar14 = (uint)uVar25 & 0x3f;
    uVar13 = param_1[0xc1] & 0xfffff03fU | uVar14 << 6;
    param_1[0xc1] = uVar13;
    iVar8 = -0xd;
    if (uVar14 - 0x1f < 0xffffffeb) goto code_r0x0036d0c0;
    *param_1 = 2;
    break;
  case 2:
    uVar13 = param_1[0xc1];
    break;
  case 3:
    goto code_r0x0036d5a6;
  case 4:
    goto code_r0x0036d5b5;
  case 5:
    uVar22 = *(ulong *)(param_1 + 4);
    if (uVar22 < 6) {
      pbVar23 = *(byte **)(param_1 + 6);
      iVar8 = 2;
      if (pbVar23 == *(byte **)(param_1 + 10)) goto code_r0x0036d0c0;
      uVar25 = (ulong)*pbVar23 << ((byte)uVar22 & 0x3f) | *(ulong *)(param_1 + 2);
      uVar22 = uVar22 | 8;
      *(byte **)(param_1 + 6) = pbVar23 + 1;
    }
    else {
      uVar25 = *(ulong *)(param_1 + 2);
    }
    *(ulong *)(param_1 + 4) = uVar22 - 6;
    *(ulong *)(param_1 + 2) = uVar25 >> 6;
    uVar13 = (uint)uVar25 & 3;
    *(ulong *)(param_1 + 0x60) = (ulong)uVar13;
    *(ulong *)(param_1 + 0x62) = (ulong)((uint)uVar25 >> 2 & 0xf) << (sbyte)uVar13;
    puStack_a0 = &UNK_0036d734;
    lVar17 = (**(code **)(param_1 + 0xc))(*(undefined8 *)(param_1 + 0x10));
    *(long *)(param_1 + 0xc6) = lVar17;
    iVar8 = -0x15;
    if (lVar17 != 0) {
      param_1[0] = 6;
      param_1[1] = 0;
      iVar8 = 0;
      goto code_r0x0036d755;
    }
    goto code_r0x0036d0c0;
  case 6:
    iVar8 = param_1[1];
code_r0x0036d755:
    lVar17 = *(long *)(param_1 + 0x4e);
    if (iVar8 < (int)lVar17) {
      lVar21 = (long)iVar8;
      do {
        uVar22 = *(ulong *)(param_1 + 4);
        if (uVar22 < 2) {
          pbVar23 = *(byte **)(param_1 + 6);
          if (pbVar23 == *(byte **)(param_1 + 10)) {
            param_1[1] = (int)lVar21;
            iVar8 = 2;
            goto code_r0x0036d0c0;
          }
          uVar25 = (ulong)*pbVar23 << ((byte)uVar22 & 0x3f) | *(ulong *)(param_1 + 2);
          uVar22 = uVar22 | 8;
          *(byte **)(param_1 + 6) = pbVar23 + 1;
        }
        else {
          uVar25 = *(ulong *)(param_1 + 2);
        }
        *(ulong *)(param_1 + 4) = uVar22 - 2;
        *(ulong *)(param_1 + 2) = uVar25 >> 2;
        *(byte *)(*(long *)(param_1 + 0xc6) + lVar21) = (byte)uVar25 & 3;
        lVar21 = lVar21 + 1;
        lVar17 = *(long *)(param_1 + 0x4e);
      } while (lVar21 < (int)lVar17);
    }
    *param_1 = 0x16;
code_r0x0036d7df:
    puStack_a0 = &UNK_0036d7f9;
    iVar8 = func_0x0036fe10(lVar17 << 6,param_1 + 0xc2,param_1 + 0xc4,param_1);
    if (iVar8 != 1) goto code_r0x0036d0c0;
    *(undefined1 (*) [16])(param_1 + 0xd0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xcc) = (undefined1  [16])0x0;
    uVar22 = *(ulong *)(param_1 + 0x4e);
    if (uVar22 != 0) {
      lVar21 = *(long *)(param_1 + 0xc4);
      lVar17 = lVar21 + 4;
      uVar25 = 0;
      do {
        uVar3 = *(undefined1 *)(lVar21 + uVar25 * 0x40);
        auVar30 = ZEXT216(CONCAT11(uVar3,uVar3));
        auVar30 = pshuflw(auVar30,auVar30,0);
        uVar24 = 0xfffffffffffffffc;
        uVar13 = 0;
        do {
          auVar31 = ZEXT416(*(uint *)(lVar17 + uVar24)) ^ auVar30;
          auVar33._0_4_ = auVar31._0_4_ >> 0x10;
          auVar33._4_4_ = 0;
          auVar33._8_4_ = auVar31._8_4_ >> 0x10;
          auVar33._12_4_ = auVar31._12_4_ >> 0x10;
          auVar32 = ZEXT416(*(uint *)(lVar17 + 4 + uVar24)) ^ auVar30;
          auVar34._0_4_ = auVar32._0_4_ >> 0x10;
          auVar34._4_4_ = 0;
          auVar34._8_4_ = auVar32._8_4_ >> 0x10;
          auVar34._12_4_ = auVar32._12_4_ >> 0x10;
          uVar13 = (uint)(ushort)(SUB162(auVar34 | auVar32,0) >> 8) |
                   SUB164(auVar34 | auVar32,0) & 0xff |
                   (uint)(ushort)(SUB162(auVar33 | auVar31,0) >> 8) |
                   SUB164(auVar33 | auVar31,0) & 0xff | uVar13;
          uVar24 = uVar24 + 8;
        } while (uVar24 < 0x3c);
        if (uVar13 == 0) {
          puVar2 = (uint *)(*(undefined1 (*) [16])(param_1 + 0xcc) + (uVar25 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar25 & 0x1f);
        }
        uVar25 = uVar25 + 1;
        lVar17 = lVar17 + 0x40;
      } while (uVar25 != uVar22);
    }
    *param_1 = 0x17;
code_r0x0036d910:
    bVar12 = (byte)param_1[0x60] + 1;
    lVar17 = *(long *)(param_1 + 0x62);
    if ((*(byte *)(param_1 + 0xc1) & 0x20) == 0) {
      lVar17 = lVar17 + (ulong)(uint)(0x18 << (bVar12 & 0x1f)) + 0x10;
    }
    else {
      if ((uint)lVar17 < 0x7ffffffc) {
        uVar13 = (0x7ffffffc - (uint)lVar17 >> ((byte)param_1[0x60] & 0x1f)) + 4;
        do {
          bVar29 = 3 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar29);
      }
      lVar17 = (ulong)(uint)(0x3e << (bVar12 & 0x1f)) + lVar17 + 0x10;
    }
    puStack_a0 = &UNK_0036dc5d;
    iVar8 = func_0x0036fe10(*(long *)(param_1 + 0x52) << 2,param_1 + 100,param_1 + 0x66,param_1);
    if (iVar8 != 1) goto code_r0x0036d0c0;
    plStack_60 = (long *)(param_1 + 0x2e);
    puStack_a0 = &UNK_0036dc8d;
    uVar13 = func_0x00375270(param_1,plStack_60,0x100,0x100,*(undefined8 *)(param_1 + 0xc2));
    puStack_a0 = &UNK_0036dcb0;
    uVar14 = func_0x00375270(param_1,param_1 + 0x34,0x2c0,0x2c0,*(undefined8 *)(param_1 + 0x50));
    puStack_a0 = &UNK_0036dcd2;
    uVar9 = func_0x00375270(param_1,param_1 + 0x3a,lVar17);
    if ((uVar9 & uVar14 & uVar13 & 1) == 0) {
      lStack_48 = lStack_48 - *plStack_50;
      iVar8 = -0x16;
      goto code_r0x0036e5e8;
    }
    param_1[0] = 0x18;
    param_1[1] = 0;
    iVar10 = 0;
    iVar8 = param_1[0xd4];
    plVar6 = plStack_60;
    goto joined_r0x0036db2f;
  case 7:
  case 8:
  case 9:
  case 10:
    goto code_r0x0036e241;
  case 0xb:
    puStack_a0 = &UNK_0036d48c;
    iVar8 = func_0x0036fa50(plStack_70,plStack_78,puStack_80,param_1);
    iVar10 = iVar8;
    goto joined_r0x0036d334;
  case 0xc:
    puStack_a0 = &UNK_0036d32a;
    iVar10 = func_0x0036fc40(param_1);
    iVar8 = 2;
joined_r0x0036d334:
    if (iVar10 == 1) goto code_r0x0036dfc3;
    goto code_r0x0036d0c0;
  case 0xd:
  case 0xf:
  case 0x10:
    puStack_a0 = &UNK_0036d1b2;
    iVar8 = func_0x0036e680(param_1,plStack_70,plStack_78,puStack_80);
    if (iVar8 == 1) {
      puStack_a0 = &UNK_0036d1c3;
      func_0x00371ff0(param_1);
      iVar8 = param_1[0x19];
      if (iVar8 == 1 << ((byte)((uint)param_1[0xc1] >> 6) & 0x1f)) {
        param_1[0x18] = param_1[0x17];
      }
      if (*param_1 == 0x10) {
        *param_1 = 10;
        iVar8 = 1;
        goto code_r0x0036d0c0;
      }
      if (*param_1 == 0xf) {
        lVar17 = *(long *)(param_1 + 0xca);
        if ((lVar17 != 0) && (iVar10 = *(int *)(lVar17 + 0x14), *(int *)(lVar17 + 0x10) != iVar10))
        {
          iVar20 = param_1[0x16];
          uStack_58 = CONCAT44(uStack_58._4_4_,iVar20);
          do {
            iVar26 = *(int *)(lVar17 + 0x10) - iVar10;
            iVar28 = iVar8;
            if (iVar26 == 0) break;
            plStack_60 = (long *)CONCAT44(plStack_60._4_4_,iVar20);
            lVar21 = (long)*(int *)(lVar17 + 8);
            iVar28 = *(int *)(lVar17 + 0x9c + lVar21 * 4) -
                     (*(int *)(lVar17 + 0x98 + lVar21 * 4) + *(int *)(lVar17 + 0xc));
            if (iVar28 <= iVar26) {
              iVar26 = iVar28;
            }
            if (iVar8 - iVar20 <= iVar26) {
              iVar26 = iVar8 - iVar20;
            }
            puStack_a0 = &UNK_0036d2d6;
            func_0x0099bda0(*(long *)(param_1 + 0x22) + (long)iVar20,
                            (long)*(int *)(lVar17 + 0xc) + *(long *)(lVar17 + 0x18 + lVar21 * 8),
                            (long)iVar26);
            *(int *)(lVar17 + 0xc) = *(int *)(lVar17 + 0xc) + iVar26;
            iVar10 = *(int *)(lVar17 + 0x14) + iVar26;
            *(int *)(lVar17 + 0x14) = iVar10;
            if (iVar26 == iVar28) {
              *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
              *(undefined4 *)(lVar17 + 0xc) = 0;
            }
            iVar20 = (int)plStack_60 + iVar26;
            iVar8 = param_1[0x19];
            iVar28 = iVar20;
          } while (iVar20 != iVar8);
          iVar10 = (iVar20 - (int)uStack_58) + param_1[0x16];
          param_1[0x16] = iVar10;
          iVar8 = 1;
          if (iVar28 <= iVar10) goto code_r0x0036d0c0;
        }
        iVar8 = 7;
        if (param_1[0x21] == 0) {
          iVar8 = 0xe;
        }
        *param_1 = iVar8;
        iVar8 = 1;
        goto code_r0x0036d0c0;
      }
      if (param_1[1] == 0) {
        if (param_1[0x21] == 0) goto code_r0x0036dfc3;
        *param_1 = 9;
        iVar8 = 1;
      }
      else {
        *param_1 = 8;
        iVar8 = 1;
      }
    }
    goto code_r0x0036d0c0;
  case 0xe:
    iVar8 = -10;
    if (-1 < param_1[0x21]) {
      puStack_a0 = &UNK_0036d3c5;
      func_0x003750b0(param_1);
      if ((*(byte *)(param_1 + 0xc1) & 1) == 0) {
        *param_1 = 3;
        iVar8 = 1;
      }
      else {
        uVar22 = *(ulong *)(param_1 + 4);
        uVar25 = uVar22 & 7;
        if (uVar25 == 0) {
          bVar29 = false;
        }
        else {
          uVar24 = *(ulong *)(param_1 + 2);
          uVar22 = uVar22 & 0xfffffffffffffff8;
          *(ulong *)(param_1 + 4) = uVar22;
          *(ulong *)(param_1 + 2) = uVar24 >> (sbyte)uVar25;
          bVar29 = (*(ulong *)(&UNK_001afae0 + uVar25 * 8) & uVar24) != 0;
        }
        if (uVar22 < 0x40) {
          *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + 2) & ~(-1L << ((byte)uVar22 & 0x3f));
        }
        iVar8 = -0xf;
        if (!bVar29) {
          if (*(long *)(param_1 + 0x14) == 0) {
            if (uVar22 < 8) {
              lVar17 = *(long *)(param_1 + 6);
            }
            else {
              lVar17 = *(long *)(param_1 + 6) - (uVar22 >> 3);
            }
            *(long *)(param_1 + 6) = lVar17;
            uVar13 = (uint)uVar22 & 7;
            *(ulong *)(param_1 + 4) = (ulong)uVar13;
            *(ulong *)(param_1 + 2) = (ulong)(uint)(~(-1 << (sbyte)uVar13) & param_1[2]);
            *plStack_50 = *(long *)(param_1 + 10) - lVar17;
            *plStack_68 = *(long *)(param_1 + 6);
          }
          *param_1 = 0x1a;
          goto code_r0x0036e4d8;
        }
      }
    }
    goto code_r0x0036d0c0;
  case 0x11:
    goto code_r0x0036d663;
  case 0x12:
    iVar8 = param_1[1];
    if (iVar8 < 3) goto code_r0x0036d69b;
    *param_1 = 5;
    iVar8 = 1;
    goto code_r0x0036d0c0;
  case 0x13:
    iVar8 = param_1[1];
    lVar17 = (long)iVar8;
    goto code_r0x0036d9ce;
  case 0x14:
    goto code_r0x0036da0b;
  case 0x15:
    goto code_r0x0036da41;
  case 0x16:
    lVar17 = *(long *)(param_1 + 0x4e);
    goto code_r0x0036d7df;
  case 0x17:
    goto code_r0x0036d910;
  case 0x18:
    iVar10 = param_1[1];
    if (iVar10 == 0) {
      iVar8 = param_1[0xd4];
      plVar6 = (long *)(param_1 + 0x2e);
    }
    else {
      if (iVar10 != 2) {
        if (iVar10 == 1) {
          iVar8 = param_1[0xd4];
          plVar6 = (long *)(param_1 + 0x34);
          goto joined_r0x0036db2f;
        }
        lStack_48 = lStack_48 - *plStack_50;
        iVar8 = -0x1f;
        goto code_r0x0036e5e8;
      }
      iVar8 = param_1[0xd4];
      plVar6 = (long *)(param_1 + 0x3a);
    }
joined_r0x0036db2f:
    if (iVar8 == 1) {
      iVar8 = param_1[0x29b];
    }
    else {
      *(long *)(param_1 + 0x29c) = plVar6[1];
      param_1[0x29b] = 0;
      param_1[0xd4] = 1;
      iVar8 = 0;
    }
    if (iVar8 < (int)(uint)*(ushort *)((long)plVar6 + 0x14)) {
      lVar17 = *(long *)(param_1 + 0x29c);
      do {
        uStack_40 = 0;
        puStack_a0 = &UNK_0036dd5b;
        iVar8 = func_0x0036ee70((short)plVar6[2],*(undefined2 *)((long)plVar6 + 0x12),lVar17,
                                &uStack_40);
        if (iVar8 != 1) goto code_r0x0036d0c0;
        lVar17 = *(long *)(param_1 + 0x29c);
        *(long *)(*plVar6 + (long)param_1[0x29b] * 8) = lVar17;
        lVar17 = lVar17 + uStack_40 * 4;
        *(long *)(param_1 + 0x29c) = lVar17;
        iVar8 = param_1[0x29b];
        param_1[0x29b] = iVar8 + 1;
      } while (iVar8 + 1 < (int)(uint)*(ushort *)((long)plVar6 + 0x14));
      iVar10 = param_1[1];
    }
    param_1[0xd4] = 0;
    param_1[1] = iVar10 + 1;
    iVar8 = 1;
    if (1 < iVar10) {
      *param_1 = 0x19;
code_r0x0036ddcb:
      uVar22 = *(ulong *)(param_1 + 0x56);
      *(ulong *)(param_1 + 0x2a) = *(long *)(param_1 + 0xc4) + uVar22 * 0x40;
      param_1[0x44] =
           (uint)(((uint)param_1[(uVar22 >> 5) + 0xcc] >> ((uint)uVar22 & 0x1f) & 1) != 0);
      *(undefined8 *)(param_1 + 0x68) =
           *(undefined8 *)
            (*(long *)(param_1 + 0x2e) +
            (ulong)*(byte *)(*(long *)(param_1 + 0xc4) + uVar22 * 0x40) * 8);
      *(undefined1 **)(param_1 + 0x28) =
           _kBrotliContextLookupTable + ((*(byte *)(*(long *)(param_1 + 0xc6) + uVar22) & 3) << 9);
      *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0x66);
      *(undefined8 *)(param_1 + 0x26) = **(undefined8 **)(param_1 + 0x34);
      puStack_a0 = &UNK_0036de66;
      iVar10 = func_0x003702c0(param_1);
      auVar30._8_4_ = 0xffffffff;
      auVar30._0_8_ = 0xffffffffffffffff;
      auVar30._12_4_ = 0xffffffff;
      iVar8 = -0x1b;
      if (iVar10 != 0) {
        uStack_58 = *(ulong *)(param_1 + 0x62);
        uVar4 = *(ushort *)((long)param_1 + 0xfa);
        uVar13 = (uint)*(undefined8 *)(param_1 + 0x60);
        bVar12 = (byte)*(undefined8 *)(param_1 + 0x60);
        uVar14 = 1 << (bVar12 & 0x1f);
        uStack_88 = (ulong)uVar14;
        uVar22 = 0x10;
        if (uStack_58 != 0) {
          if ((uStack_58 < 4) ||
             (piVar15 < param_1 + 0x17c + uStack_58 * 2 &&
              param_1 + 0x17c < (int *)((long)piVar15 + uStack_58))) {
            uVar25 = 0;
          }
          else {
            uVar25 = uStack_58 & 0xfffffffffffffffc;
            uVar22 = uVar25 + 0x10;
            uVar24 = 0;
            lVar17 = 0;
            lVar21 = 1;
            do {
              *(undefined4 *)((long)piVar15 + uVar24) = 0;
              *(long *)(param_1 + uVar24 * 2 + 0x17c) = lVar17 + 1;
              *(long *)((long)(param_1 + uVar24 * 2 + 0x17c) + 8) = lVar21 - auVar30._8_8_;
              *(long *)(param_1 + uVar24 * 2 + 0x180) = lVar17 + 3;
              *(long *)((long)(param_1 + uVar24 * 2 + 0x180) + 8) = lVar21 + 3;
              uVar24 = uVar24 + 4;
              lVar17 = lVar17 + 4;
              lVar21 = lVar21 + 4;
            } while (uVar25 != uVar24);
            if (uStack_58 == uVar25) goto code_r0x0036e052;
          }
          uVar16 = uVar25;
          for (uVar24 = uStack_58 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
            *(undefined1 *)((long)param_1 + uVar22 + 0x350) = 0;
            uVar16 = uVar16 + 1;
            *(ulong *)(param_1 + uVar22 * 2 + 0x15c) = uVar16;
            uVar22 = uVar22 + 1;
          }
          if (uVar25 - uStack_58 < 0xfffffffffffffffd) {
            lVar17 = 0;
            do {
              *(undefined1 *)((long)param_1 + lVar17 + uVar22 + 0x350) = 0;
              *(ulong *)(param_1 + uVar22 * 2 + lVar17 * 2 + 0x15c) = uVar16 + lVar17 + 1;
              *(undefined1 *)((long)param_1 + lVar17 + uVar22 + 0x351) = 0;
              *(ulong *)(param_1 + uVar22 * 2 + lVar17 * 2 + 0x15e) = uVar16 + 2 + lVar17;
              *(undefined1 *)((long)param_1 + lVar17 + uVar22 + 0x352) = 0;
              *(ulong *)(param_1 + uVar22 * 2 + lVar17 * 2 + 0x160) = uVar16 + 3 + lVar17;
              *(undefined1 *)((long)param_1 + lVar17 + uVar22 + 0x353) = 0;
              *(ulong *)(param_1 + uVar22 * 2 + lVar17 * 2 + 0x162) = uVar16 + lVar17 + 4;
              lVar17 = lVar17 + 4;
            } while (uStack_58 - uVar16 != lVar17);
            uVar22 = uVar22 + lVar17;
          }
        }
code_r0x0036e052:
        if (uVar22 < uVar4) {
          plStack_60 = (long *)(uStack_58 + 1);
          lStack_90 = (long)param_1 + uStack_88 + 0x350;
          piStack_98 = param_1 + uStack_88 * 2 + 0x15c;
          lVar17 = 1;
          uVar25 = 0;
          do {
            bVar5 = (byte)lVar17;
            lVar27 = (uVar25 + 2 << (bVar5 & 0x3f)) + -4 << (bVar12 & 0x3f);
            lVar21 = (long)plStack_60 + lVar27;
            if ((uVar13 < 2) ||
               (((int *)((long)param_1 + uVar22 + 0x350) < piStack_98 + uVar22 * 2 &&
                (param_1 + uVar22 * 2 + 0x15c < (int *)(lStack_90 + uVar22))))) {
              if (uVar13 == 0) {
                uVar24 = 0;
              }
              else {
                lVar27 = lVar27 + uStack_58;
                uVar24 = 0;
                do {
                  *(byte *)((long)param_1 + uVar24 + uVar22 + 0x350) = bVar5;
                  *(ulong *)(param_1 + uVar22 * 2 + uVar24 * 2 + 0x15c) = lVar27 + uVar24 + 1;
                  *(byte *)((long)param_1 + uVar24 + uVar22 + 0x351) = bVar5;
                  *(ulong *)(param_1 + uVar22 * 2 + uVar24 * 2 + 0x15e) = lVar27 + uVar24 + 2;
                  uVar24 = uVar24 + 2;
                } while ((uVar14 & 0xfffffffe) != uVar24);
                uVar22 = uVar22 + uVar24;
                uVar16 = uVar22;
                if ((uVar14 & 1) == 0) goto code_r0x0036e0bb;
              }
              *(byte *)((long)param_1 + uVar22 + 0x350) = bVar5;
              *(ulong *)(param_1 + uVar22 * 2 + 0x15c) = lVar21 + uVar24;
              uVar16 = uVar22 + 1;
            }
            else {
              auVar32._8_4_ = (int)lVar21;
              auVar32._0_8_ = lVar21;
              auVar32._12_4_ = (int)((ulong)lVar21 >> 0x20);
              uVar24 = 0;
              auVar31 = _UNK_00155fc0;
              do {
                *(ushort *)((long)param_1 + uVar24 + uVar22 + 0x350) = CONCAT11(bVar5,bVar5);
                *(ushort *)((long)param_1 + uVar24 + uVar22 + 0x352) = CONCAT11(bVar5,bVar5);
                lVar27 = auVar31._0_8_;
                lVar35 = auVar31._8_8_;
                *(long *)(param_1 + uVar22 * 2 + uVar24 * 2 + 0x15c) = lVar21 + lVar27;
                *(long *)((long)(param_1 + uVar22 * 2 + uVar24 * 2 + 0x15c) + 8) =
                     auVar32._8_8_ + lVar35;
                *(long *)(param_1 + uVar22 * 2 + uVar24 * 2 + 0x160) = lVar27 + lVar21 + 2;
                *(long *)((long)(param_1 + uVar22 * 2 + uVar24 * 2 + 0x160) + 8) =
                     lVar35 + auVar32._8_8_ + 2;
                uVar24 = uVar24 + 4;
                auVar31._0_8_ = lVar27 + 4;
                auVar31._8_8_ = lVar35 + 4;
                uVar16 = uVar22 + (uVar14 & 0xfffffffc);
              } while ((uVar14 & 0xfffffffc) != uVar24);
            }
code_r0x0036e0bb:
            uVar22 = uVar16;
            lVar17 = lVar17 + uVar25;
            uVar25 = uVar25 ^ 1;
          } while (uVar22 < uVar4);
        }
        *param_1 = 7;
code_r0x0036e241:
        puStack_a0 = &UNK_0036e249;
        iVar8 = func_0x00370380(param_1);
        if (iVar8 == 2) {
          puStack_a0 = &UNK_0036e25a;
          iVar8 = func_0x00371050(param_1);
        }
      }
    }
    goto code_r0x0036d0c0;
  case 0x19:
    goto code_r0x0036ddcb;
  case 0x1a:
code_r0x0036e4d8:
    if (*(long *)(param_1 + 0x22) != 0) goto code_r0x0036e4e2;
    goto code_r0x0036e505;
  default:
    goto code_r0x0036d0c0;
  }
  param_1[0x17] = (1 << ((byte)(uVar13 >> 6) & 0x1f)) + -0x10;
  puStack_a0 = &UNK_0036d579;
  lVar17 = (**(code **)(param_1 + 0xc))(*(undefined8 *)(param_1 + 0x10));
  *(long *)(param_1 + 0x40) = lVar17;
  iVar8 = -0x1e;
  if (lVar17 != 0) {
    *(long *)(param_1 + 0x42) = lVar17 + 0x1da0;
    *param_1 = 3;
code_r0x0036d5a6:
    puStack_a0 = &UNK_0036d5ae;
    func_0x00374ff0(param_1);
    *param_1 = 4;
code_r0x0036d5b5:
    puStack_a0 = &UNK_0036d5c1;
    iVar8 = func_0x0036e7c0(param_1);
    if (iVar8 == 1) {
      if ((param_1[0xc1] & 6U) != 0) {
        uVar22 = *(ulong *)(param_1 + 4);
        uVar25 = uVar22 & 7;
        if (uVar25 == 0) {
          bVar29 = false;
        }
        else {
          uVar24 = *(ulong *)(param_1 + 2);
          uVar22 = uVar22 & 0xfffffffffffffff8;
          *(ulong *)(param_1 + 4) = uVar22;
          *(ulong *)(param_1 + 2) = uVar24 >> (sbyte)uVar25;
          bVar29 = (*(ulong *)(&UNK_001afae0 + uVar25 * 8) & uVar24) != 0;
        }
        if (uVar22 < 0x40) {
          *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + 2) & ~(-1L << ((byte)uVar22 & 0x3f));
        }
        iVar8 = -0xe;
        if (bVar29) goto code_r0x0036d0c0;
        if ((param_1[0xc1] & 4U) != 0) {
          *param_1 = 0xc;
          iVar8 = 1;
          if (*(code **)(param_1 + 0xb4) != (code *)0x0) {
            puStack_a0 = &UNK_0036dc1c;
            (**(code **)(param_1 + 0xb4))(*(undefined8 *)(param_1 + 0xb8));
            iVar8 = 1;
          }
          goto code_r0x0036d0c0;
        }
      }
      if (param_1[0x21] == 0) {
code_r0x0036dfc3:
        *param_1 = 0xe;
        iVar8 = 1;
      }
      else {
        puStack_a0 = &UNK_0036d655;
        func_0x0036ec70(param_1);
        if ((*(byte *)(param_1 + 0xc1) & 2) == 0) {
code_r0x0036d663:
          param_1[0xd8] = 0;
          param_1[0xd9] = 0;
          *(int **)(param_1 + 0x104) = param_1 + 0x10e;
          param_1[0xd6] = 0;
          param_1[0xd4] = 0;
          param_1[0xd5] = 0;
          param_1[0] = 0x12;
          param_1[1] = 0;
          iVar8 = 0;
code_r0x0036d69b:
          puStack_a0 = &UNK_0036d6b4;
          iVar8 = func_0x0036ece0(param_1,param_1 + 2,param_1 + (long)iVar8 * 2 + 0x4e);
          if (iVar8 == 1) {
            *(long *)(param_1 + (long)param_1[1] * 2 + 0x4e) =
                 *(long *)(param_1 + (long)param_1[1] * 2 + 0x4e) + 1;
            iVar8 = param_1[1];
            lVar17 = (long)iVar8;
            if (*(ulong *)(param_1 + lVar17 * 2 + 0x4e) < 2) {
              param_1[1] = iVar8 + 1;
              iVar8 = 1;
            }
            else {
              *param_1 = 0x13;
code_r0x0036d9ce:
              puStack_a0 = &UNK_0036d9fb;
              iVar8 = func_0x0036ee70(*(long *)(param_1 + lVar17 * 2 + 0x4e) + 2,
                                      *(long *)(param_1 + lVar17 * 2 + 0x4e) + 2,
                                      (long)(iVar8 * 0x278) * 4 + *(long *)(param_1 + 0x40),0);
              if (iVar8 == 1) {
                *param_1 = 0x14;
code_r0x0036da0b:
                puStack_a0 = &UNK_0036da31;
                iVar8 = func_0x0036ee70(0x1a,0x1a,
                                        (long)param_1[1] * 0x630 + *(long *)(param_1 + 0x42),0);
                if (iVar8 == 1) {
                  *param_1 = 0x15;
code_r0x0036da41:
                  iVar8 = param_1[1];
                  lVar17 = (long)iVar8 * 0x630 + *(long *)(param_1 + 0x42);
                  uStack_40 = 0;
                  if (param_1[0xbf] == 0) {
                    uVar22 = *(ulong *)(param_1 + 4);
                    if (uVar22 < 0xf) {
                      pbVar23 = *(byte **)(param_1 + 6);
                      if (pbVar23 == *(byte **)(param_1 + 10)) {
code_r0x0036dfd4:
                        puStack_a0 = &UNK_0036dfdd;
                        iVar10 = func_0x00372210(lVar17,param_1 + 2,&uStack_40);
                        uVar22 = uStack_40;
                        if (iVar10 != 0) goto code_r0x0036e35b;
                        iVar8 = 2;
                        goto code_r0x0036d0c0;
                      }
                      uVar24 = (ulong)*pbVar23 << ((byte)uVar22 & 0x3f) | *(ulong *)(param_1 + 2);
                      *(ulong *)(param_1 + 2) = uVar24;
                      uVar25 = uVar22 + 8;
                      *(ulong *)(param_1 + 4) = uVar25;
                      *(byte **)(param_1 + 6) = pbVar23 + 1;
                      if (uVar22 < 7) {
                        if (pbVar23 + 1 == *(byte **)(param_1 + 10)) goto code_r0x0036dfd4;
                        uVar24 = (ulong)pbVar23[1] << ((byte)uVar25 & 0x3f) |
                                 *(ulong *)(param_1 + 2);
                        *(ulong *)(param_1 + 2) = uVar24;
                        *(ulong *)(param_1 + 4) = uVar22 | 0x10;
                        *(byte **)(param_1 + 6) = pbVar23 + 2;
                        uVar25 = uVar22 | 0x10;
                      }
                    }
                    else {
                      uVar24 = *(ulong *)(param_1 + 2);
                      uVar25 = uVar22;
                    }
                    lVar21 = lVar17 + (uVar24 & 0xff) * 4;
                    bVar12 = *(byte *)(lVar17 + (uVar24 & 0xff) * 4);
                    uVar16 = (ulong)bVar12;
                    uVar22 = uVar24;
                    if (8 < uVar16) {
                      uVar25 = uVar25 - 8;
                      *(ulong *)(param_1 + 4) = uVar25;
                      uVar22 = uVar24 >> 8;
                      *(ulong *)(param_1 + 2) = uVar22;
                      puVar1 = (ushort *)(lVar21 + 2);
                      lVar17 = lVar21 + (ulong)(*(uint *)(&UNK_001afae0 + (ulong)(bVar12 - 8) * 8) &
                                                (uint)(uVar24 >> 8) & 0x7f) * 4;
                      lVar21 = lVar17 + (ulong)*puVar1 * 4;
                      uVar16 = (ulong)*(byte *)(lVar17 + (ulong)*puVar1 * 4);
                    }
                    *(ulong *)(param_1 + 4) = uVar25 - uVar16;
                    *(ulong *)(param_1 + 2) = uVar22 >> ((byte)uVar16 & 0x3f);
                    uVar22 = (ulong)*(ushort *)(lVar21 + 2);
                  }
                  else {
                    uVar22 = *(ulong *)(param_1 + 0x4c);
                  }
code_r0x0036e35b:
                  bVar12 = _kBrotliPrefixCodeRanges[uVar22 * 4 + 2];
                  uVar24 = (ulong)bVar12;
                  uVar4 = *(ushort *)(_kBrotliPrefixCodeRanges + uVar22 * 4);
                  uVar25 = *(ulong *)(param_1 + 4);
                  if (uVar25 < uVar24) {
                    pbVar23 = *(byte **)(param_1 + 6);
                    do {
                      if (pbVar23 == *(byte **)(param_1 + 10)) {
                        *(ulong *)(param_1 + 0x4c) = uVar22;
                        param_1[0xbf] = 1;
                        iVar8 = 2;
                        goto code_r0x0036d0c0;
                      }
                      uVar16 = (ulong)*pbVar23 << ((byte)uVar25 & 0x3f) | *(ulong *)(param_1 + 2);
                      *(ulong *)(param_1 + 2) = uVar16;
                      uVar25 = uVar25 + 8;
                      *(ulong *)(param_1 + 4) = uVar25;
                      pbVar23 = pbVar23 + 1;
                      *(byte **)(param_1 + 6) = pbVar23;
                    } while (uVar25 < uVar24);
                  }
                  else {
                    uVar16 = *(ulong *)(param_1 + 2);
                  }
                  uVar22 = *(ulong *)(&UNK_001afae0 + uVar24 * 8);
                  *(ulong *)(param_1 + 4) = uVar25 - uVar24;
                  *(ulong *)(param_1 + 2) = uVar16 >> (bVar12 & 0x3f);
                  *(ulong *)(param_1 + (long)iVar8 * 2 + 0x46) = (uVar22 & uVar16) + (ulong)uVar4;
                  param_1[0xbf] = 0;
                  param_1[1] = param_1[1] + 1;
                  *param_1 = 0x12;
                  iVar8 = 1;
                }
              }
            }
          }
        }
        else {
          *param_1 = 0xb;
          iVar8 = 1;
        }
      }
    }
  }
  goto code_r0x0036d0c0;
code_r0x0036e4e2:
  puStack_a0 = &UNK_0036e4fc;
  iVar8 = func_0x0036e680(param_1,plStack_70,plStack_78,puStack_80);
  if (iVar8 == 1) goto code_r0x0036e505;
  goto code_r0x0036d0c0;
code_r0x0036e505:
  lStack_48 = lStack_48 - *plStack_50;
  iVar8 = 1;
code_r0x0036e5e8:
  ppiVar18 = (int **)&puStack_a0;
  goto code_r0x0036e640;
}


