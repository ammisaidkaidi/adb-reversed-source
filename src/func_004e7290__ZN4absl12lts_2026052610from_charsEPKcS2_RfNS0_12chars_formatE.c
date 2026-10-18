// Function: _ZN4absl12lts_2026052610from_charsEPKcS2_RfNS0_12chars_formatE
// Address: 004e7290
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004e7af2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004e7af7) */
/* WARNING: Removing unreachable block (ram,0x004e8426) */
/* WARNING: Removing unreachable block (ram,0x004e83f7) */
/* WARNING: Removing unreachable block (ram,0x004e82db) */
/* WARNING: Type propagation algorithm not settling */

char *******
_ZN4absl12lts_2026052610from_charsEPKcS2_RfNS0_12chars_formatE
          (char *******param_1,char *******param_2,uint *param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  char *******pppppppcVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  char *******pppppppcVar19;
  char *******pppppppcVar20;
  ulong uVar21;
  char *******extraout_RDX;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  undefined **ppuVar25;
  char *******pppppppcVar26;
  char *******pppppppcVar27;
  undefined1 *puVar28;
  char *******pppppppcVar29;
  char *******pppppppcVar30;
  char cVar31;
  char *******unaff_R13;
  char *******pppppppcVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  char *******unaff_R15;
  char *******pppppppcVar36;
  long in_FS_OFFSET;
  bool bVar37;
  uint uVar38;
  uint auStack_3e4 [185];
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  char *******pppppppcStack_f0;
  char *******pppppppcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char *******pppppppcStack_d0;
  long lStack_c8;
  char *******pppppppcStack_c0;
  char *******pppppppcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char *******pppppppcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar25 = (undefined **)auStack_f8;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = 0;
  pppppppcVar14 = param_1;
  if (param_1 == param_2) {
    pppppppcVar20 = param_1;
    pppppppcVar26 = param_1;
    if ((param_4 & 4) == 0) goto code_r0x004e72e6;
code_r0x004e739c:
    if ((param_4 & 4) == 0) goto code_r0x004e73a5;
    lStack_c8 = 0;
    pppppppcStack_c0 = (char *******)0x0;
    uStack_d8 = 0;
    pppppppcStack_d0 = (char *******)0x0;
    pppppppcStack_e8 = (char *******)0x0;
    uStack_e0 = 0;
    pppppppcVar27 = (char *******)&pppppppcStack_e8;
    puStack_100 = &UNK_004e7455;
    _ZN4absl12lts_2026052616strings_internal10ParseFloatILi16EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
              ();
    pppppppcVar36 = pppppppcVar27;
    pppppppcVar20 = unaff_R15;
    if (pppppppcStack_c0 == (char *******)0x0) goto code_r0x004e7c45;
    if ((int)uStack_d8 == 1) goto code_r0x004e7515;
    if ((int)uStack_d8 == 2) goto code_r0x004e747d;
    pppppppcVar27 = (char *******)0x0;
    if (pppppppcStack_e8 == (char *******)0x0) goto code_r0x004e758c;
    lVar1 = 0x3f;
    if (pppppppcStack_e8 != (char *******)0x0) {
      for (; (ulong)pppppppcStack_e8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar34 = (int)lVar1 - 0x17;
    uVar38 = -(uint)uStack_e0 - 0x95;
    if ((int)(-(uint)uStack_e0 - 0x95) < (int)uVar34) {
      uVar38 = uVar34;
    }
    bVar17 = (byte)uVar38;
    if ((int)uVar38 < 1) {
      pppppppcVar14 = (char *******)0x0;
      if ((-bVar17 & 0x40) == 0) {
        pppppppcVar14 = (char *******)((long)pppppppcStack_e8 << (-bVar17 & 0x3f));
      }
    }
    else if (uVar38 < 0x80) {
      bVar15 = (byte)(uVar38 - 1);
      bVar16 = bVar15 & 0x3f;
      pppppppcVar14 = (char *******)(1L << (bVar15 & 0x3f));
      param_1 = (char *******)0x0;
      pppppppcVar20 = pppppppcVar14;
      pppppppcVar26 = (char *******)(0L << bVar16 | 1UL >> 0x40 - bVar16);
      if ((uVar38 - 1 & 0x40) != 0) {
        pppppppcVar20 = param_1;
        pppppppcVar26 = pppppppcVar14;
      }
      bVar37 = (uVar38 & 0x40) != 0;
      pppppppcVar36 = (char *******)(-1L << (bVar17 & 0x3f));
      if (bVar37) {
        pppppppcVar36 = param_1;
      }
      pppppppcVar14 =
           (char *******)((ulong)pppppppcStack_e8 >> (bVar17 & 0x3f) | 0L << 0x40 - (bVar17 & 0x3f))
      ;
      if (bVar37) {
        pppppppcVar14 = param_1;
      }
      if (pppppppcVar26 <
          (char *******)
          (ulong)(pppppppcVar20 < (char *******)(~(ulong)pppppppcVar36 & (ulong)pppppppcStack_e8)))
      {
        pppppppcVar14 = (char *******)((long)pppppppcVar14 + 1);
      }
      else if (pppppppcVar20 == (char *******)(~(ulong)pppppppcVar36 & (ulong)pppppppcStack_e8) &&
               pppppppcVar26 == (char *******)0x0) {
        pppppppcVar14 = (char *******)((long)pppppppcVar14 + (ulong)((uint)pppppppcVar14 & 1));
        param_1 = (char *******)0x0;
      }
    }
    else {
      pppppppcVar14 = (char *******)0x0;
    }
    pppppppcVar20 = (char *******)&UNK_00800000;
    if (pppppppcVar14 != (char *******)0x1000000) {
      pppppppcVar20 = pppppppcVar14;
    }
    uVar38 = (uint)(pppppppcVar14 == (char *******)0x1000000) + uVar38 + (uint)uStack_e0;
    pppppppcVar27 = (char *******)(ulong)uVar38;
    pppppppcVar26 = (char *******)0xfffe7961;
    if (pppppppcVar20 != (char *******)0x0) {
      pppppppcVar26 = pppppppcVar27;
    }
    if (((int)uVar38 < 0x69) && (iVar11 = (int)pppppppcVar26, iVar11 != 99999)) {
      if (iVar11 != -99999) {
        uVar38 = (int)uVar22 * -0x80000000;
        iVar11 = iVar11 * 0x800000 + 0x4b000000;
        if ((uint)pppppppcVar20 < 0x800000) {
          iVar11 = 0;
        }
        uVar34 = iVar11 + uVar38 | (uint)pppppppcVar20 & 0x7fffff;
        pppppppcVar26 = (char *******)(ulong)uVar34;
        *param_3 = uVar34;
        pppppppcVar14 = pppppppcStack_c0;
        pppppppcVar36 = (char *******)(ulong)uVar38;
        pppppppcVar20 = unaff_R15;
        goto code_r0x004e7c45;
      }
      goto code_r0x004e7c20;
    }
code_r0x004e7bd6:
    if ((char)uVar22 == '\0') {
      uVar38 = 0x7f7fffff;
    }
    else {
      uVar38 = 0xff7fffff;
    }
code_r0x004e7c3c:
    *param_3 = uVar38;
    pppppppcVar14 = pppppppcStack_c0;
    pppppppcVar36 = pppppppcVar27;
    pppppppcVar20 = unaff_R15;
code_r0x004e7c45:
    uVar34 = (uint)pppppppcVar26;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return pppppppcVar14;
    }
    puStack_100 = &UNK_004e7c8d;
    func_0x0099bd00();
    pppppppcVar14 = extraout_RDX;
  }
  else {
    uVar22 = (ulong)(*(char *)param_1 == '-');
    pppppppcVar26 = (char *******)((long)param_1 + uVar22);
    pppppppcVar20 = pppppppcVar26;
    if ((param_4 & 4) != 0) goto code_r0x004e739c;
code_r0x004e72e6:
    pppppppcVar26 = pppppppcVar20;
    if ((long)param_2 - (long)pppppppcVar20 < 2) goto code_r0x004e739c;
    if ((*(char *)pppppppcVar20 == '0') && ((*(byte *)((long)pppppppcVar20 + 1) | 0x20) == 0x78)) {
      uStack_98 = 0;
      pppppppcStack_90 = (char *******)0x0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      pppppppcStack_b8 = (char *******)0x0;
      uStack_b0 = 0;
      pppppppcVar36 = (char *******)&pppppppcStack_b8;
      unaff_R13 = (char *******)(ulong)param_4;
      puStack_100 = &UNK_004e733d;
      _ZN4absl12lts_2026052616strings_internal10ParseFloatILi16EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
                (pppppppcVar36,(char *)((long)pppppppcVar20 + 2));
      cVar31 = (char)uVar22;
      pppppppcVar26 = pppppppcStack_90;
      if ((pppppppcStack_90 == (char *******)0x0) || ((int)uStack_a8 != 0)) {
        if (param_4 != 1) {
          if (cVar31 == '\0') {
            uVar38 = 0;
          }
          else {
            uVar38 = 0x80000000;
          }
          pppppppcVar14 = (char *******)((long)pppppppcVar20 + 1);
          *param_3 = uVar38;
          param_1 = pppppppcVar14;
        }
      }
      else {
        pppppppcVar14 = pppppppcStack_90;
        pppppppcVar36 = pppppppcStack_b8;
        param_1 = pppppppcStack_90;
        if (pppppppcStack_b8 == (char *******)0x0) {
          if (cVar31 == '\0') {
            uVar38 = 0;
          }
          else {
            uVar38 = 0x80000000;
          }
          *param_3 = uVar38;
        }
        else {
          lVar1 = 0x3f;
          if (pppppppcStack_b8 != (char *******)0x0) {
            for (; (ulong)pppppppcStack_b8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          uVar34 = (int)lVar1 - 0x17;
          uVar38 = -(int)uStack_b0 - 0x95U;
          if ((int)(-(int)uStack_b0 - 0x95U) < (int)uVar34) {
            uVar38 = uVar34;
          }
          bVar17 = (byte)uVar38;
          if ((int)uVar38 < 1) {
            pppppppcVar36 = (char *******)((long)pppppppcStack_b8 << (-bVar17 & 0x3f));
            pppppppcVar27 = (char *******)0x0;
            if ((-bVar17 & 0x40) == 0) {
              pppppppcVar27 = pppppppcVar36;
            }
          }
          else if (uVar38 < 0x80) {
            bVar15 = (byte)(uVar38 - 1);
            bVar16 = bVar15 & 0x3f;
            pppppppcVar27 = (char *******)(1L << (bVar15 & 0x3f));
            pppppppcVar32 = (char *******)0x0;
            pppppppcVar30 = pppppppcVar27;
            pppppppcVar19 = (char *******)(0L << bVar16 | 1UL >> 0x40 - bVar16);
            if ((uVar38 - 1 & 0x40) != 0) {
              pppppppcVar30 = pppppppcVar32;
              pppppppcVar19 = pppppppcVar27;
            }
            bVar37 = (uVar38 & 0x40) != 0;
            pppppppcVar29 = (char *******)(-1L << (bVar17 & 0x3f));
            if (bVar37) {
              pppppppcVar29 = pppppppcVar32;
            }
            pppppppcVar27 =
                 (char *******)
                 ((ulong)pppppppcStack_b8 >> (bVar17 & 0x3f) | 0L << 0x40 - (bVar17 & 0x3f));
            if (bVar37) {
              pppppppcVar27 = pppppppcVar32;
            }
            if (pppppppcVar19 <
                (char *******)
                (ulong)(pppppppcVar30 <
                       (char *******)(~(ulong)pppppppcVar29 & (ulong)pppppppcStack_b8))) {
              pppppppcVar27 = (char *******)((long)pppppppcVar27 + 1);
            }
            else if (pppppppcVar30 ==
                     (char *******)(~(ulong)pppppppcVar29 & (ulong)pppppppcStack_b8) &&
                     pppppppcVar19 == (char *******)0x0) {
              pppppppcVar27 = (char *******)((long)pppppppcVar27 + (ulong)((uint)pppppppcVar27 & 1))
              ;
            }
          }
          else {
            pppppppcVar27 = (char *******)0x0;
          }
          pppppppcVar19 = (char *******)&UNK_00800000;
          if (pppppppcVar27 != (char *******)0x1000000) {
            pppppppcVar19 = pppppppcVar27;
          }
          iVar23 = (uint)(pppppppcVar27 == (char *******)0x1000000) + uVar38 + (int)uStack_b0;
          iVar11 = -99999;
          if (pppppppcVar19 != (char *******)0x0) {
            iVar11 = iVar23;
          }
          if ((iVar23 < 0x69) && (iVar11 != 99999)) {
            if (iVar11 != -99999) {
              uVar38 = (int)uVar22 * -0x80000000;
              iVar11 = iVar11 * 0x800000 + 0x4b000000;
              if ((uint)pppppppcVar19 < 0x800000) {
                iVar11 = 0;
              }
              *param_3 = iVar11 + uVar38 | (uint)pppppppcVar19 & 0x7fffff;
              pppppppcVar36 = (char *******)(ulong)uVar38;
              goto code_r0x004e7c45;
            }
            if (cVar31 == '\0') {
              uVar38 = 0;
            }
            else {
              uVar38 = 0x80000000;
            }
          }
          else if (cVar31 == '\0') {
            uVar38 = 0x7f7fffff;
          }
          else {
            uVar38 = 0xff7fffff;
          }
          *param_3 = uVar38;
        }
      }
      goto code_r0x004e7c45;
    }
code_r0x004e73a5:
    lStack_c8 = 0;
    pppppppcStack_c0 = (char *******)0x0;
    uStack_d8 = 0;
    pppppppcStack_d0 = (char *******)0x0;
    pppppppcStack_e8 = (char *******)0x0;
    uStack_e0 = 0;
    pppppppcVar27 = (char *******)&pppppppcStack_e8;
    puStack_100 = &UNK_004e73c9;
    _ZN4absl12lts_2026052616strings_internal10ParseFloatILi10EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
              ();
    pppppppcVar36 = pppppppcVar27;
    pppppppcVar20 = unaff_R15;
    if (pppppppcStack_c0 == (char *******)0x0) goto code_r0x004e7c45;
    if ((int)uStack_d8 == 1) {
code_r0x004e7515:
      pppppppcVar14 = pppppppcStack_c0;
      if ((char)uVar22 == '\0') {
        uVar38 = 0x7f800000;
        pppppppcVar20 = unaff_R15;
      }
      else {
        uVar38 = 0xff800000;
        pppppppcVar20 = unaff_R15;
      }
code_r0x004e759e:
      *param_3 = uVar38;
      pppppppcVar36 = pppppppcVar27;
      goto code_r0x004e7c45;
    }
    if ((int)uStack_d8 == 2) {
code_r0x004e747d:
      pppppppcVar14 = pppppppcStack_c0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      pppppppcStack_90 = (char *******)0x0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      pppppppcStack_b8 = (char *******)0x0;
      uStack_b0 = 0;
      pppppppcVar26 = pppppppcStack_d0;
      if (pppppppcStack_d0 != (char *******)0x0) {
        param_1 = (char *******)0x7f;
        if (lStack_c8 - (long)pppppppcStack_d0 < 0x7f) {
          param_1 = (char *******)(lStack_c8 - (long)pppppppcStack_d0);
        }
        puStack_100 = &UNK_004e74df;
        func_0x0099bda0(&pppppppcStack_b8,pppppppcStack_d0,param_1);
        *(char *)((long)&pppppppcStack_b8 + (long)param_1) = '\0';
      }
      pppppppcVar27 = (char *******)&pppppppcStack_b8;
      puStack_100 = &UNK_004e74f4;
      uVar38 = func_0x0099c7c0();
      pppppppcVar20 = pppppppcVar14;
      if ((char)uVar22 != '\0') {
        uVar38 = uVar38 ^ 0x80000000;
      }
      goto code_r0x004e759e;
    }
    pppppppcVar26 = pppppppcStack_e8;
    if (pppppppcStack_e8 == (char *******)0x0) {
code_r0x004e758c:
      pppppppcVar14 = pppppppcStack_c0;
      if ((char)uVar22 == '\0') {
        uVar38 = 0;
        pppppppcVar20 = unaff_R15;
      }
      else {
        uVar38 = 0x80000000;
        pppppppcVar20 = unaff_R15;
      }
      goto code_r0x004e759e;
    }
    pppppppcVar14 = pppppppcStack_c0;
    unaff_R15 = pppppppcStack_d0;
    if (pppppppcStack_d0 != (char *******)0x0) {
      if ((int)(uint)uStack_e0 < -0x156) {
        iVar11 = -99999;
        pppppppcVar26 = (char *******)0x0;
      }
      else {
        if ((int)(uint)uStack_e0 < 0x135) {
          uVar38 = (int)((uint)uStack_e0 * 0x3526a) >> 0x10;
          goto code_r0x004e7762;
        }
        iVar11 = 99999;
        pppppppcVar26 = (char *******)0x0;
      }
code_r0x004e7bce:
      if (iVar11 == 99999) goto code_r0x004e7bd6;
      if ((iVar11 != -99999) && (pppppppcVar26 != (char *******)0x0)) {
        uVar38 = (int)uVar22 * -0x80000000;
        iVar11 = iVar11 * 0x800000 + 0x4b000000;
        if ((uint)pppppppcVar26 < 0x800000) {
          iVar11 = 0;
        }
        *param_3 = iVar11 + uVar38 | (uint)pppppppcVar26 & 0x7fffff;
        pppppppcVar36 = (char *******)(ulong)uVar38;
        pppppppcVar20 = unaff_R15;
        goto code_r0x004e7c45;
      }
code_r0x004e7c20:
      if ((char)uVar22 == '\0') {
        uVar38 = 0;
      }
      else {
        uVar38 = 0x80000000;
      }
      goto code_r0x004e7c3c;
    }
    if ((int)(uint)uStack_e0 < -0x40) goto code_r0x004e7c20;
    if (0x26 < (int)(uint)uStack_e0) goto code_r0x004e7bd6;
    pppppppcStack_f0 = pppppppcStack_c0;
    uVar12 = 0x3f;
    if (pppppppcStack_e8 != (char *******)0x0) {
      for (; (ulong)pppppppcStack_e8 >> uVar12 == 0; uVar12 = uVar12 - 1) {
      }
    }
    pppppppcVar36 = (char *******)(uVar12 ^ 0x3f);
    uVar12 = (long)pppppppcStack_e8 << ((byte)pppppppcVar36 & 0x3f);
    unaff_R13 = (char *******)(ulong)((uint)uStack_e0 + 0x156);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar12;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulong *)(&UNK_00201690 + (long)unaff_R13 * 8);
    auVar3 = auVar3 * auVar6;
    uVar38 = (int)((uint)uStack_e0 * 0x3526a) >> 0x10;
    if (CARRY8(auVar3._0_8_,uVar12) && (~auVar3._8_8_ & 0x3fffffffff) == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar12;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulong *)(&UNK_00202af0 + (long)unaff_R13 * 8);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = SUB168(auVar4 * auVar7,8);
      auVar3 = auVar3 + auVar10;
      unaff_R13 = (char *******)(~auVar3._0_8_ | ~auVar3._8_8_ & 0x3fffffffff);
      if (unaff_R13 != (char *******)0x0) goto code_r0x004e79b2;
      if (CARRY8(SUB168(auVar4 * auVar7,0),uVar12)) goto code_r0x004e7762;
      uVar34 = auVar3._12_4_ >> 0x1f;
      uVar12 = auVar3._8_8_ >> (0x26U - (auVar3[0xf] >> 7) & 0x3f);
    }
    else {
code_r0x004e79b2:
      uVar34 = auVar3._12_4_ >> 0x1f;
      uVar12 = auVar3._8_8_ >> (0x26U - (auVar3[0xf] >> 7) & 0x3f);
      if ((auVar3._0_8_ == 0) && (((uint)uVar12 & 3) == 1 && (auVar3._8_8_ & 0x3fffffffff) == 0))
      goto code_r0x004e7762;
    }
    uVar12 = ((uint)uVar12 & 1) + uVar12;
    iVar11 = (((uVar38 - (int)pppppppcVar36) - (uVar34 ^ 1)) + 0xc0) - (uint)(uVar12 < 0x2000000);
    if (0xffffff01 < iVar11 - 0xffU) {
      uVar24 = iVar11 * 0x800000;
      uVar35 = (uint)(uVar12 >> 1) & 0x7fffff;
      uVar34 = uVar35 + uVar24 + 0x80000000;
      if ((char)uVar22 == '\0') {
        uVar34 = uVar24 | uVar35;
      }
      *param_3 = uVar34;
      param_1 = (char *******)(ulong)uVar38;
      pppppppcVar20 = pppppppcStack_d0;
      goto code_r0x004e7c45;
    }
code_r0x004e7762:
    pppppppcStack_f0 = pppppppcStack_c0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = pppppppcStack_e8;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulong *)(&UNK_00202140 + (long)(int)(uint)uStack_e0 * 8);
    auVar9 = auVar5 * auVar8;
    uVar13 = auVar9._8_8_;
    uVar12 = auVar9._0_8_;
    iVar11 = uVar38 - 0x3f;
    if (pppppppcStack_d0 == (char *******)0x0) {
      if ((uint)uStack_e0 < 0x1c) {
        if (uVar13 == 0) {
          lVar1 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar12;
          iVar23 = (int)lVar1 + 1;
          if (uVar12 == 0) {
            iVar23 = 0;
          }
          bVar16 = 1;
        }
        else {
          lVar1 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar23 = (int)lVar1 + 0x41;
          bVar16 = 1;
        }
      }
      else {
        if (uVar13 == 0) {
          lVar1 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar23 = 0;
          if (uVar12 != 0) {
            iVar23 = (int)lVar1 + 1;
          }
        }
        else {
          lVar1 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar23 = (int)lVar1 + 0x41;
        }
        bVar16 = (byte)(iVar23 - 0x3fU);
        bVar17 = bVar16 & 0x3f;
        uVar21 = uVar13 >> (bVar16 & 0x3f);
        bVar16 = 0;
        bVar37 = (iVar23 - 0x3fU & 0x40) != 0;
        uVar12 = uVar12 >> bVar17 | uVar13 << 0x40 - bVar17;
        if (bVar37) {
          uVar12 = uVar21;
        }
        uVar13 = 0;
        if (!bVar37) {
          uVar13 = uVar21;
        }
        auVar9._8_8_ = uVar13;
        auVar9._0_8_ = uVar12;
        iVar11 = iVar11 + iVar23 + -0x3f;
        iVar23 = 0x3f;
      }
    }
    else {
      if (uVar13 == 0) {
        lVar1 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar23 = 0;
        if (uVar12 != 0) {
          iVar23 = (int)lVar1 + 1;
        }
      }
      else {
        lVar1 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar23 = (int)lVar1 + 0x41;
      }
      bVar16 = (byte)(iVar23 - 0x3aU);
      bVar17 = bVar16 & 0x3f;
      uVar21 = uVar13 >> (bVar16 & 0x3f);
      bVar16 = 0;
      bVar37 = (iVar23 - 0x3aU & 0x40) != 0;
      uVar12 = uVar12 >> bVar17 | uVar13 << 0x40 - bVar17;
      if (bVar37) {
        uVar12 = uVar21;
      }
      uVar13 = 0;
      if (!bVar37) {
        uVar13 = uVar21;
      }
      auVar9._8_8_ = uVar13;
      auVar9._0_8_ = uVar12;
      iVar11 = iVar11 + iVar23 + -0x3a;
      iVar23 = 0x3a;
    }
    uVar13 = auVar9._8_8_;
    uVar12 = auVar9._0_8_;
    uVar38 = -iVar11 - 0x95U;
    if ((int)(-iVar11 - 0x95U) < (int)(iVar23 - 0x18U)) {
      uVar38 = iVar23 - 0x18U;
    }
    uVar34 = iVar11 + uVar38;
    param_1 = (char *******)(ulong)uVar34;
    bVar17 = (byte)uVar38;
    if (0 < (int)uVar38) {
      if (uVar38 < 0x80) {
        unaff_R13 = (char *******)0x0;
        pppppppcVar36 = (char *******)(uVar12 >> (bVar17 & 0x3f) | uVar13 << 0x40 - (bVar17 & 0x3f))
        ;
        if ((uVar38 & 0x40) != 0) {
          pppppppcVar36 = (char *******)(uVar13 >> (bVar17 & 0x3f));
        }
        pppppppcVar27 = (char *******)(-1L << (bVar17 & 0x3f));
        pppppppcVar20 = pppppppcVar27;
        pppppppcVar26 = unaff_R13;
        if ((uVar38 & 0x40) == 0) {
          pppppppcVar20 = (char *******)0xffffffffffffffff;
          pppppppcVar26 = pppppppcVar27;
        }
        bVar17 = bVar17 - 1;
        pppppppcVar30 = (char *******)(1L << (bVar17 & 0x3f));
        pppppppcVar19 = pppppppcVar30;
        pppppppcVar27 = (char *******)(0L << (bVar17 & 0x3f) | 1UL >> 0x40 - (bVar17 & 0x3f));
        if ((bVar17 & 0x40) != 0) {
          pppppppcVar19 = unaff_R13;
          pppppppcVar27 = pppppppcVar30;
        }
        pppppppcVar30 = (char *******)(~(ulong)pppppppcVar26 & uVar12);
        pppppppcVar26 = (char *******)(~(ulong)pppppppcVar20 & uVar13);
        if (pppppppcVar27 < pppppppcVar26 ||
            (ulong)((long)pppppppcVar27 - (long)pppppppcVar26) <
            (ulong)(pppppppcVar19 < pppppppcVar30)) {
          pppppppcVar36 = (char *******)((long)pppppppcVar36 + 1);
        }
        else if (pppppppcVar26 == pppppppcVar27 && pppppppcVar30 == pppppppcVar19) {
          pppppppcVar36 =
               (char *******)
               ((long)pppppppcVar36 + (ulong)((byte)(~bVar16 | (byte)pppppppcVar36) & 1));
        }
        else if (bVar16 == 0 &&
                 (pppppppcVar26 ==
                  (char *******)
                  ((long)pppppppcVar27 + ((ulong)(pppppppcVar19 != (char *******)0x0) - 1)) &&
                 pppppppcVar30 == (char *******)((long)pppppppcVar19 + -1))) goto code_r0x004e7ae2;
      }
      else {
        pppppppcVar36 = (char *******)0x0;
      }
code_r0x004e7b98:
      pppppppcVar20 = (char *******)&UNK_00800000;
      if (pppppppcVar36 != (char *******)0x1000000) {
        pppppppcVar20 = pppppppcVar36;
      }
      uVar34 = uVar34 + (pppppppcVar36 == (char *******)0x1000000);
      param_1 = (char *******)(ulong)uVar34;
      pppppppcVar27 = (char *******)0xfffe7961;
      if (pppppppcVar20 != (char *******)0x0) {
        pppppppcVar27 = (char *******)(ulong)uVar34;
      }
      iVar11 = 99999;
      pppppppcVar26 = (char *******)0x0;
      unaff_R15 = pppppppcVar36;
      if ((int)uVar34 < 0x69) {
        iVar11 = (int)pppppppcVar27;
        pppppppcVar26 = pppppppcVar20;
      }
      goto code_r0x004e7bce;
    }
    pppppppcVar36 = (char *******)0x0;
    if ((-bVar17 & 0x40) == 0) {
      pppppppcVar36 = (char *******)(uVar12 << (-bVar17 & 0x3f));
    }
    if (bVar16 != 0) goto code_r0x004e7b98;
code_r0x004e7ae2:
    pppppppcVar14 = (char *******)&pppppppcStack_e8;
    ppuVar25 = &puStack_100;
    puStack_100 = &UNK_004e7af7;
    unaff_R13 = pppppppcStack_c0;
    pppppppcVar20 = pppppppcVar36;
  }
  *(undefined1 **)((long)ppuVar25 + -8) = &stack0xfffffffffffffff8;
  *(char ********)((long)ppuVar25 + -0x10) = pppppppcVar20;
  *(char ********)((long)ppuVar25 + -0x18) = param_1;
  *(char ********)((long)ppuVar25 + -0x20) = unaff_R13;
  *(ulong *)((long)ppuVar25 + -0x28) = uVar22;
  *(uint **)((long)ppuVar25 + -0x30) = param_3;
  *(undefined8 *)((long)ppuVar25 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e7cd0;
  func_0x0099bdb0((undefined1 *)((long)ppuVar25 + -0x194),0,0x154);
  *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e7ce0;
  iVar11 = _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE17ReadFloatMantissaERKNS1_11ParsedFloatEi
                     ((undefined1 *)((long)ppuVar25 + -0x194),pppppppcVar14,0x300);
  *(char ********)((long)ppuVar25 + -0x300) = pppppppcVar36;
  uVar22 = (long)pppppppcVar36 * 2 + 1;
  *(uint *)((long)ppuVar25 + -0x2ec) = uVar34 - 1;
  if (iVar11 < 0) {
    *(ulong *)((long)ppuVar25 + -0x2f8) = (ulong)uVar34;
    *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e7db5;
    func_0x0099bdb0((undefined1 *)((long)ppuVar25 + -0x2e8),0,0x154);
    *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e7dc2;
    _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE12FiveToTheNthEi
              ((undefined1 *)((long)ppuVar25 + -0x2e8));
    *(ulong *)((long)ppuVar25 + -0x40) = uVar22;
    uVar38 = *(uint *)((long)ppuVar25 + -0x2e8);
    uVar12 = (ulong)uVar38;
    if (((ulong)pppppppcVar36 & 0x7fffffffffffffff) >> 0x1f == 0) {
      if (0 < (int)uVar38 && ((ulong)pppppppcVar36 & 0x7fffffffffffffff) != 0) {
        if (uVar38 == 1) {
          uVar13 = 0;
          uVar21 = 0;
code_r0x004e8054:
          uVar33 = uVar22 * *(uint *)((long)ppuVar25 + uVar13 * 4 + -0x2e4) + uVar21;
          *(int *)((long)ppuVar25 + uVar13 * 4 + -0x2e4) = (int)uVar33;
          uVar21 = uVar33 >> 0x20;
        }
        else {
          uVar13 = 0;
          uVar21 = 0;
          do {
            uVar34 = *(uint *)((long)ppuVar25 + uVar13 * 4 + -0x2e4);
            *(int *)((long)ppuVar25 + uVar13 * 4 + -0x2e4) = (int)(uVar34 * uVar22 + uVar21);
            uVar33 = *(uint *)((long)ppuVar25 + uVar13 * 4 + -0x2e0) * uVar22 +
                     (uVar34 * uVar22 + uVar21 >> 0x20);
            *(int *)((long)ppuVar25 + uVar13 * 4 + -0x2e0) = (int)uVar33;
            uVar21 = uVar33 >> 0x20;
            uVar13 = uVar13 + 2;
          } while ((uVar38 & 0x7ffffffe) != uVar13);
          if ((uVar38 & 1) != 0) goto code_r0x004e8054;
        }
        if ((uVar38 < 0x54) && (uVar33 >> 0x20 != 0)) {
          *(int *)((long)ppuVar25 + uVar12 * 4 + -0x2e4) = (int)uVar21;
          *(uint *)((long)ppuVar25 + -0x2e8) = uVar38 + 1;
        }
      }
    }
    else if (-1 < (int)uVar38) {
      uVar22 = 0x53;
      if (uVar38 < 0x53) {
        uVar22 = uVar12;
      }
      do {
        iVar23 = (int)uVar22;
        *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e7e76;
        _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE12MultiplyStepEiPKjii
                  ((undefined1 *)((long)ppuVar25 + -0x2e8),uVar12,
                   (undefined1 *)((long)ppuVar25 + -0x40),2,uVar22);
        uVar22 = (ulong)(iVar23 - 1);
      } while (iVar23 != 0);
    }
    if (iVar11 < *(int *)((long)ppuVar25 + -0x2f8)) {
      uVar38 = *(int *)((long)ppuVar25 + -0x2ec) - iVar11;
      if (uVar38 != 0 && iVar11 <= *(int *)((long)ppuVar25 + -0x2ec)) {
        uVar34 = *(uint *)((long)ppuVar25 + -0x2e8);
        if (uVar38 < 0xa80) {
          uVar24 = uVar38 >> 5;
          uVar34 = uVar34 + uVar24;
          uVar35 = 0x54;
          if ((int)uVar34 < 0x54) {
            uVar35 = uVar34;
          }
          *(uint *)((long)ppuVar25 + -0x2e8) = uVar35;
          if ((uVar38 & 0x1f) == 0) {
            *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e8374;
            func_0x0099bd90((undefined1 *)((long)ppuVar25 + ((ulong)(uVar24 * 4) - 0x2e4)));
          }
          else {
            uVar18 = 0x53;
            if ((int)uVar34 < 0x53) {
              uVar18 = uVar34;
            }
            if ((int)uVar24 < (int)uVar18) {
              uVar22 = (ulong)uVar18;
              do {
                bVar17 = (byte)uVar38 & 0x1f;
                *(uint *)((long)ppuVar25 + uVar22 * 4 + -0x2e4) =
                     *(int *)((long)ppuVar25 + uVar22 * 4 + -(ulong)(uVar24 * 4) + -0x2e4) << bVar17
                     | *(uint *)((long)ppuVar25 + uVar22 * 4 + -(ulong)(uVar24 * 4) + -0x2e8) >>
                       0x20 - bVar17;
                uVar22 = uVar22 - 1;
              } while (uVar24 < uVar22);
            }
            *(int *)((long)ppuVar25 + (ulong)uVar24 * 4 + -0x2e4) =
                 *(int *)((long)ppuVar25 + -0x2e4) << (sbyte)(uVar38 & 0x1f);
            if (((int)uVar34 < 0x54) &&
               (*(int *)((long)ppuVar25 + (long)(int)uVar35 * 4 + -0x2e4) != 0)) {
              *(uint *)((long)ppuVar25 + -0x2e8) = uVar35 + 1;
            }
          }
          if (0x1f < uVar38) {
            puVar28 = (undefined1 *)((long)ppuVar25 + -0x2e4);
            goto code_r0x004e83b3;
          }
        }
        else {
          if (0 < (int)uVar34) {
            *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e80d4;
            func_0x0099bdb0((undefined1 *)((long)ppuVar25 + -0x2e4),0,(ulong)uVar34 << 2);
          }
          *(undefined4 *)((long)ppuVar25 + -0x2e8) = 0;
        }
      }
    }
    else {
      uVar34 = iVar11 - *(int *)((long)ppuVar25 + -0x2ec);
      uVar38 = *(uint *)((long)ppuVar25 + -0x194);
      if (uVar34 < 0xa80) {
        uVar24 = uVar34 >> 5;
        uVar38 = uVar38 + uVar24;
        uVar35 = 0x54;
        if ((int)uVar38 < 0x54) {
          uVar35 = uVar38;
        }
        *(uint *)((long)ppuVar25 + -0x194) = uVar35;
        if ((uVar34 & 0x1f) == 0) {
          *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e8262;
          func_0x0099bd90((undefined1 *)((long)ppuVar25 + ((ulong)(uVar24 * 4) - 400)));
        }
        else {
          uVar18 = 0x53;
          if ((int)uVar38 < 0x53) {
            uVar18 = uVar38;
          }
          if ((int)uVar24 < (int)uVar18) {
            uVar22 = (ulong)uVar18;
            do {
              bVar17 = (byte)uVar34 & 0x1f;
              *(uint *)((long)ppuVar25 + uVar22 * 4 + -400) =
                   *(int *)((long)ppuVar25 + uVar22 * 4 + -(ulong)(uVar24 * 4) + -400) << bVar17 |
                   *(uint *)((long)ppuVar25 + uVar22 * 4 + -(ulong)(uVar24 * 4) + -0x194) >>
                   0x20 - bVar17;
              uVar22 = uVar22 - 1;
            } while (uVar24 < uVar22);
          }
          *(int *)((long)ppuVar25 + (ulong)uVar24 * 4 + -400) =
               *(int *)((long)ppuVar25 + -400) << (sbyte)(uVar34 & 0x1f);
          if (((int)uVar38 < 0x54) && (*(int *)((long)ppuVar25 + (long)(int)uVar35 * 4 + -400) != 0)
             ) {
            *(uint *)((long)ppuVar25 + -0x194) = uVar35 + 1;
          }
        }
        if (0x1f < uVar34) {
          puVar28 = (undefined1 *)((long)ppuVar25 + -400);
code_r0x004e83b3:
          *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e83c4;
          func_0x0099bdb0(puVar28,0,(ulong)(uVar24 - 1) * 4 + 4);
        }
      }
      else {
        if (0 < (int)uVar38) {
          *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e810f;
          func_0x0099bdb0((undefined1 *)((long)ppuVar25 + -400),0,(ulong)uVar38 << 2);
        }
        *(undefined4 *)((long)ppuVar25 + -0x194) = 0;
      }
    }
    uVar38 = *(uint *)((long)ppuVar25 + -0x194);
    uVar34 = *(uint *)((long)ppuVar25 + -0x2e8);
    uVar35 = uVar34;
    if ((int)uVar34 < (int)uVar38) {
      uVar35 = uVar38;
    }
    uVar22 = (ulong)uVar35;
    do {
      iVar11 = (int)uVar22;
      if (iVar11 < 1) goto code_r0x004e8428;
      uVar24 = 0;
      uVar35 = 0;
      if (iVar11 <= (int)uVar38) {
        uVar35 = *(uint *)((long)ppuVar25 + uVar22 * 4 + -0x194);
      }
      if ((iVar11 <= (int)uVar34) &&
         (uVar24 = *(uint *)((long)ppuVar25 + uVar22 * 4 + -0x2e8), uVar35 < uVar24))
      goto code_r0x004e843d;
      uVar22 = uVar22 - 1;
    } while (uVar35 <= uVar24);
  }
  else {
    puVar28 = (undefined1 *)((long)ppuVar25 + -0x194);
    *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e7d1c;
    _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE22MultiplyByFiveToTheNthEi(puVar28);
    iVar23 = 2 - (uint)(((ulong)pppppppcVar36 & 0x7fffffffffffffff) >> 0x1f == 0);
    *(int *)((long)ppuVar25 + -0x2e8) = iVar23;
    *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e7d45;
    func_0x0099bdb0((undefined1 *)((long)ppuVar25 + -0x2dc),0,0x148);
    *(ulong *)((long)ppuVar25 + -0x2e4) = uVar22;
    if (iVar11 < (int)uVar34) {
      uVar38 = *(int *)((long)ppuVar25 + -0x2ec) - iVar11;
      if (uVar38 != 0 && iVar11 <= *(int *)((long)ppuVar25 + -0x2ec)) {
        puVar28 = (undefined1 *)((long)ppuVar25 + -0x2e4);
        if (uVar38 < 0xa80) {
          uVar35 = uVar38 >> 5;
          uVar24 = iVar23 + uVar35;
          uVar34 = 0x54;
          if (uVar24 < 0x54) {
            uVar34 = uVar24;
          }
          *(uint *)((long)ppuVar25 + -0x2e8) = uVar34;
          if ((uVar38 & 0x1f) == 0) {
            *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e8235;
            func_0x0099bd90(puVar28 + uVar35 * 4);
          }
          else {
            if (uVar38 < 0xa60) {
              uVar22 = 0x53;
              if (uVar24 < 0x53) {
                uVar22 = (ulong)uVar24;
              }
              do {
                bVar17 = (byte)uVar38 & 0x1f;
                *(uint *)((long)ppuVar25 + uVar22 * 4 + -0x2e4) =
                     *(int *)(puVar28 + (uVar22 * 4 - (ulong)(uVar35 * 4))) << bVar17 |
                     *(uint *)(puVar28 + uVar22 * 4 + (-4 - (ulong)(uVar35 * 4))) >> 0x20 - bVar17;
                uVar22 = uVar22 - 1;
              } while (uVar35 < uVar22);
              uVar22 = (ulong)*(uint *)((long)ppuVar25 + -0x2e4);
            }
            *(int *)((long)ppuVar25 + (ulong)uVar35 * 4 + -0x2e4) =
                 (int)uVar22 << (sbyte)(uVar38 & 0x1f);
            if ((uVar24 < 0x54) && (*(int *)((long)ppuVar25 + (ulong)uVar34 * 4 + -0x2e4) != 0)) {
              *(uint *)((long)ppuVar25 + -0x2e8) = uVar34 + 1;
            }
          }
          if (0x1f < uVar38) goto code_r0x004e82a4;
        }
        else {
          *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e7d89;
          func_0x0099bdb0(puVar28,0,iVar23 * 4);
          *(undefined4 *)((long)ppuVar25 + -0x2e8) = 0;
        }
      }
    }
    else {
      uVar34 = iVar11 - *(int *)((long)ppuVar25 + -0x2ec);
      uVar38 = *(uint *)((long)ppuVar25 + -0x194);
      if (uVar34 < 0xa80) {
        uVar35 = uVar34 >> 5;
        uVar38 = uVar38 + uVar35;
        uVar24 = 0x54;
        if ((int)uVar38 < 0x54) {
          uVar24 = uVar38;
        }
        *(uint *)((long)ppuVar25 + -0x194) = uVar24;
        if ((uVar34 & 0x1f) == 0) {
          *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e7fa7;
          func_0x0099bd90((undefined1 *)((long)ppuVar25 + ((ulong)(uVar35 * 4) - 400)));
        }
        else {
          uVar18 = 0x53;
          if ((int)uVar38 < 0x53) {
            uVar18 = uVar38;
          }
          if ((int)uVar35 < (int)uVar18) {
            uVar22 = (ulong)uVar18;
            do {
              bVar17 = (byte)uVar34 & 0x1f;
              *(uint *)((long)ppuVar25 + uVar22 * 4 + -400) =
                   *(int *)(puVar28 + uVar22 * 4 + (4 - (ulong)(uVar35 * 4))) << bVar17 |
                   *(uint *)(puVar28 + (uVar22 * 4 - (ulong)(uVar35 * 4))) >> 0x20 - bVar17;
              uVar22 = uVar22 - 1;
            } while (uVar35 < uVar22);
          }
          *(int *)((long)ppuVar25 + (ulong)uVar35 * 4 + -400) =
               *(int *)((long)ppuVar25 + -400) << (sbyte)(uVar34 & 0x1f);
          if (((int)uVar38 < 0x54) && (*(int *)((long)ppuVar25 + (long)(int)uVar24 * 4 + -400) != 0)
             ) {
            *(uint *)((long)ppuVar25 + -0x194) = uVar24 + 1;
          }
        }
        if (0x1f < uVar34) {
          puVar28 = (undefined1 *)((long)ppuVar25 + -400);
code_r0x004e82a4:
          *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e82ab;
          func_0x0099bdb0(puVar28,0,(ulong)(uVar35 - 1) * 4 + 4);
        }
      }
      else {
        if (0 < (int)uVar38) {
          *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e7e29;
          func_0x0099bdb0((undefined1 *)((long)ppuVar25 + -400),0,(ulong)uVar38 << 2);
        }
        *(undefined4 *)((long)ppuVar25 + -0x194) = 0;
      }
    }
    uVar38 = *(uint *)((long)ppuVar25 + -0x194);
    uVar34 = *(uint *)((long)ppuVar25 + -0x2e8);
    uVar22 = (ulong)uVar34;
    if ((int)uVar34 < (int)uVar38) {
      uVar22 = (ulong)uVar38;
    }
    do {
      iVar11 = (int)uVar22;
      if (iVar11 < 1) goto code_r0x004e8428;
      uVar24 = 0;
      uVar35 = 0;
      if (iVar11 <= (int)uVar38) {
        uVar35 = *(uint *)((long)ppuVar25 + uVar22 * 4 + -0x194);
      }
      if ((iVar11 <= (int)uVar34) &&
         (uVar24 = *(uint *)((long)ppuVar25 + uVar22 * 4 + -0x2e8), uVar35 < uVar24))
      goto code_r0x004e843d;
      uVar22 = uVar22 - 1;
    } while (uVar35 <= uVar24);
  }
  bVar37 = false;
  goto code_r0x004e842e;
code_r0x004e843d:
  pppppppcVar14 = (char *******)0x0;
  goto code_r0x004e8448;
code_r0x004e8428:
  bVar37 = true;
code_r0x004e842e:
  pppppppcVar14 = (char *******)0x1;
  if (bVar37) {
    pppppppcVar14 = (char *******)(*(ulong *)((long)ppuVar25 + -0x300) & 0xffffffffffffff01);
  }
code_r0x004e8448:
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)((long)ppuVar25 + -0x38)) {
    *(undefined **)((long)ppuVar25 + -0x310) = &UNK_004e846e;
    func_0x0099bd00();
    pcVar2 = (code *)swi(3);
    pppppppcVar14 = (char *******)(*pcVar2)();
    return pppppppcVar14;
  }
  return pppppppcVar14;
}


