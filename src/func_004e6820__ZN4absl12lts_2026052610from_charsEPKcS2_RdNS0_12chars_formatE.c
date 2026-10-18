// Function: _ZN4absl12lts_2026052610from_charsEPKcS2_RdNS0_12chars_formatE
// Address: 004e6820
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004e7af2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004e70c7: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004e7af7) */
/* WARNING: Removing unreachable block (ram,0x004e70cc) */
/* WARNING: Removing unreachable block (ram,0x004e8426) */
/* WARNING: Removing unreachable block (ram,0x004e83f7) */
/* WARNING: Removing unreachable block (ram,0x004e82db) */
/* WARNING: Type propagation algorithm not settling */

char *******
_ZN4absl12lts_2026052610from_charsEPKcS2_RdNS0_12chars_formatE
          (char *******param_1,char *******param_2,ulong *param_3,uint param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  char *******pppppppcVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  ulong *extraout_RDX;
  char *******pppppppcVar28;
  char *******extraout_RDX_00;
  ulong uVar29;
  int iVar30;
  uint uVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  char *******pppppppcVar34;
  char *******pppppppcVar35;
  undefined1 *puVar36;
  char *******pppppppcVar37;
  char *******pppppppcVar38;
  char *******pppppppcVar39;
  char *******pppppppcVar40;
  char *******pppppppcVar41;
  char cVar42;
  char *******unaff_R13;
  ulong uVar43;
  uint uVar44;
  uint uVar45;
  char *******unaff_R15;
  long in_FS_OFFSET;
  bool bVar46;
  undefined4 uVar47;
  uint uVar48;
  undefined8 uVar49;
  undefined4 uVar50;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  char *******pppppppcStack_1d8;
  char *******pppppppcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  char *******pppppppcStack_1b8;
  long lStack_1b0;
  char *******pppppppcStack_1a8;
  char *******pppppppcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  char *******pppppppcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  ulong *puStack_118;
  ulong uStack_110;
  char *******pppppppcStack_108;
  char *******pppppppcStack_100;
  char *******pppppppcStack_f8;
  undefined *puStack_f0;
  char *******pppppppcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char *******pppppppcStack_d0;
  long lStack_c8;
  char *******pppppppcStack_c0;
  char ******ppppppcStack_b8;
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
  ulong uStack_38;
  
  ppuVar33 = (undefined **)&stack0xfffffffffffffff8;
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar29 = 0;
  if (param_1 == param_2) {
    pppppppcVar21 = param_1;
    pppppppcVar34 = param_1;
    if ((param_4 & 4) == 0) goto code_r0x004e6876;
code_r0x004e692c:
    if ((param_4 & 4) == 0) goto code_r0x004e6935;
    lStack_c8 = 0;
    pppppppcStack_c0 = (char *******)0x0;
    uStack_d8 = 0;
    pppppppcStack_d0 = (char *******)0x0;
    pppppppcStack_e8 = (char *******)0x0;
    uStack_e0 = 0;
    pppppppcVar28 = (char *******)&pppppppcStack_e8;
    puStack_f0 = &UNK_004e69e5;
    _ZN4absl12lts_2026052616strings_internal10ParseFloatILi16EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
              ();
    pppppppcVar35 = param_1;
    pppppppcVar21 = unaff_R15;
    if (pppppppcStack_c0 == (char *******)0x0) goto code_r0x004e7213;
    if ((int)uStack_d8 == 1) goto code_r0x004e6aa9;
    if ((int)uStack_d8 == 2) goto code_r0x004e6a0d;
    pppppppcVar28 = (char *******)0x0;
    if (pppppppcStack_e8 == (char *******)0x0) goto code_r0x004e6b2e;
    lVar26 = 0x3f;
    if (pppppppcStack_e8 != (char *******)0x0) {
      for (; (ulong)pppppppcStack_e8 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar44 = (int)lVar26 - 0x34;
    uVar48 = -(uint)uStack_e0 - 0x432;
    if ((int)(-(uint)uStack_e0 - 0x432) < (int)uVar44) {
      uVar48 = uVar44;
    }
    bVar24 = (byte)uVar48;
    if ((int)uVar48 < 1) {
      pppppppcVar21 = (char *******)0x0;
      if ((-bVar24 & 0x40) == 0) {
        pppppppcVar21 = (char *******)((long)pppppppcStack_e8 << (-bVar24 & 0x3f));
      }
    }
    else if (uVar48 < 0x80) {
      bVar22 = (byte)(uVar48 - 1);
      bVar23 = bVar22 & 0x3f;
      pppppppcVar21 = (char *******)(1L << (bVar22 & 0x3f));
      param_1 = (char *******)0x0;
      pppppppcVar28 = pppppppcVar21;
      pppppppcVar34 = (char *******)(0L << bVar23 | 1UL >> 0x40 - bVar23);
      if ((uVar48 - 1 & 0x40) != 0) {
        pppppppcVar28 = param_1;
        pppppppcVar34 = pppppppcVar21;
      }
      bVar46 = (uVar48 & 0x40) != 0;
      pppppppcVar35 = (char *******)(-1L << (bVar24 & 0x3f));
      if (bVar46) {
        pppppppcVar35 = param_1;
      }
      pppppppcVar21 =
           (char *******)((ulong)pppppppcStack_e8 >> (bVar24 & 0x3f) | 0L << 0x40 - (bVar24 & 0x3f))
      ;
      if (bVar46) {
        pppppppcVar21 = param_1;
      }
      if (pppppppcVar34 <
          (char *******)
          (ulong)(pppppppcVar28 < (char *******)(~(ulong)pppppppcVar35 & (ulong)pppppppcStack_e8)))
      {
        pppppppcVar21 = (char *******)((long)pppppppcVar21 + 1);
      }
      else if (pppppppcVar28 == (char *******)(~(ulong)pppppppcVar35 & (ulong)pppppppcStack_e8) &&
               pppppppcVar34 == (char *******)0x0) {
        pppppppcVar21 = (char *******)((long)pppppppcVar21 + (ulong)((uint)pppppppcVar21 & 1));
        param_1 = (char *******)0x0;
      }
    }
    else {
      pppppppcVar21 = (char *******)0x0;
    }
    pppppppcVar34 = (char *******)0x10000000000000;
    if (pppppppcVar21 != (char *******)0x20000000000000) {
      pppppppcVar34 = pppppppcVar21;
    }
    uVar48 = (uint)(pppppppcVar21 == (char *******)0x20000000000000) + uVar48 + (uint)uStack_e0;
    pppppppcVar28 = (char *******)0xfffe7961;
    if (pppppppcVar34 != (char *******)0x0) {
      pppppppcVar28 = (char *******)(ulong)uVar48;
    }
    if (((int)uVar48 < 0x3cc) && (iVar18 = (int)pppppppcVar28, iVar18 != 99999)) {
      if (iVar18 != -99999) {
        lVar26 = (ulong)(iVar18 + 0x433) << 0x34;
        if (pppppppcVar34 < (char *******)0x10000000000000) {
          lVar26 = 0;
        }
        pppppppcVar28 =
             (char *******)(lVar26 + (uVar29 << 0x3f) | (ulong)pppppppcVar34 & 0xfffffffffffff);
        *param_3 = (ulong)pppppppcVar28;
        pppppppcVar35 = pppppppcStack_c0;
        pppppppcVar21 = unaff_R15;
        goto code_r0x004e7213;
      }
      goto code_r0x004e7234;
    }
code_r0x004e71bc:
    if ((char)uVar29 == '\0') {
      uVar47 = 0xffffffff;
      uVar50 = 0x7fefffff;
    }
    else {
      uVar47 = 0xffffffff;
      uVar50 = 0xffefffff;
    }
code_r0x004e7250:
    *param_3 = CONCAT44(uVar50,uVar47);
    pppppppcVar35 = pppppppcStack_c0;
    pppppppcVar21 = unaff_R15;
code_r0x004e7213:
    uVar19 = *(ulong *)(in_FS_OFFSET + 0x28);
    if (uVar19 == uStack_38) {
      return pppppppcVar35;
    }
    puStack_f0 = &UNK_004e7282;
    func_0x0099bd00();
    ppuVar33 = &puStack_f0;
    puStack_f0 = &stack0xfffffffffffffff8;
    pppppppcStack_f8 = pppppppcVar21;
    pppppppcStack_100 = param_1;
    pppppppcStack_108 = unaff_R13;
    uStack_110 = uVar29;
    puStack_118 = param_3;
    ppuVar32 = (undefined **)auStack_1e0;
    lStack_120 = *(long *)(in_FS_OFFSET + 0x28);
    uVar29 = 0;
    param_3 = extraout_RDX;
    pppppppcVar39 = pppppppcVar28;
    if (pppppppcVar28 == pppppppcVar34) {
      pppppppcVar41 = pppppppcVar28;
      pppppppcVar35 = pppppppcVar28;
      if ((uVar19 & 4) == 0) goto code_r0x004e72e6;
code_r0x004e739c:
      if ((uVar19 & 4) == 0) goto code_r0x004e73a5;
      lStack_1b0 = 0;
      pppppppcStack_1a8 = (char *******)0x0;
      uStack_1c0 = 0;
      pppppppcStack_1b8 = (char *******)0x0;
      pppppppcStack_1d0 = (char *******)0x0;
      uStack_1c8 = 0;
      pppppppcVar34 = (char *******)&pppppppcStack_1d0;
      puStack_1e8 = &UNK_004e7455;
      _ZN4absl12lts_2026052616strings_internal10ParseFloatILi16EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
                ();
      unaff_R15 = pppppppcVar34;
      pppppppcVar41 = pppppppcVar21;
      if (pppppppcStack_1a8 == (char *******)0x0) goto code_r0x004e7c45;
      if ((int)uStack_1c0 == 1) goto code_r0x004e7515;
      if ((int)uStack_1c0 == 2) goto code_r0x004e747d;
      pppppppcVar34 = (char *******)0x0;
      if (pppppppcStack_1d0 == (char *******)0x0) goto code_r0x004e758c;
      lVar26 = 0x3f;
      if (pppppppcStack_1d0 != (char *******)0x0) {
        for (; (ulong)pppppppcStack_1d0 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar44 = (int)lVar26 - 0x17;
      uVar48 = -(uint)uStack_1c8 - 0x95;
      if ((int)(-(uint)uStack_1c8 - 0x95) < (int)uVar44) {
        uVar48 = uVar44;
      }
      bVar24 = (byte)uVar48;
      if ((int)uVar48 < 1) {
        pppppppcVar34 = (char *******)0x0;
        if ((-bVar24 & 0x40) == 0) {
          pppppppcVar34 = (char *******)((long)pppppppcStack_1d0 << (-bVar24 & 0x3f));
        }
      }
      else if (uVar48 < 0x80) {
        bVar22 = (byte)(uVar48 - 1);
        bVar23 = bVar22 & 0x3f;
        pppppppcVar34 = (char *******)(1L << (bVar22 & 0x3f));
        pppppppcVar39 = (char *******)0x0;
        pppppppcVar35 = pppppppcVar34;
        pppppppcVar28 = (char *******)(0L << bVar23 | 1UL >> 0x40 - bVar23);
        if ((uVar48 - 1 & 0x40) != 0) {
          pppppppcVar35 = pppppppcVar39;
          pppppppcVar28 = pppppppcVar34;
        }
        bVar46 = (uVar48 & 0x40) != 0;
        pppppppcVar41 = (char *******)(-1L << (bVar24 & 0x3f));
        if (bVar46) {
          pppppppcVar41 = pppppppcVar39;
        }
        pppppppcVar34 =
             (char *******)
             ((ulong)pppppppcStack_1d0 >> (bVar24 & 0x3f) | 0L << 0x40 - (bVar24 & 0x3f));
        if (bVar46) {
          pppppppcVar34 = pppppppcVar39;
        }
        if (pppppppcVar28 <
            (char *******)
            (ulong)(pppppppcVar35 < (char *******)(~(ulong)pppppppcVar41 & (ulong)pppppppcStack_1d0)
                   )) {
          pppppppcVar34 = (char *******)((long)pppppppcVar34 + 1);
        }
        else if (pppppppcVar35 == (char *******)(~(ulong)pppppppcVar41 & (ulong)pppppppcStack_1d0)
                 && pppppppcVar28 == (char *******)0x0) {
          pppppppcVar34 = (char *******)((long)pppppppcVar34 + (ulong)((uint)pppppppcVar34 & 1));
          pppppppcVar39 = (char *******)0x0;
        }
      }
      else {
        pppppppcVar34 = (char *******)0x0;
      }
      pppppppcVar28 = (char *******)&UNK_00800000;
      if (pppppppcVar34 != (char *******)0x1000000) {
        pppppppcVar28 = pppppppcVar34;
      }
      uVar48 = (uint)(pppppppcVar34 == (char *******)0x1000000) + uVar48 + (uint)uStack_1c8;
      pppppppcVar34 = (char *******)(ulong)uVar48;
      pppppppcVar35 = (char *******)0xfffe7961;
      if (pppppppcVar28 != (char *******)0x0) {
        pppppppcVar35 = pppppppcVar34;
      }
      if (((int)uVar48 < 0x69) && (iVar18 = (int)pppppppcVar35, iVar18 != 99999)) {
        if (iVar18 != -99999) {
          uVar48 = (int)uVar29 * -0x80000000;
          iVar18 = iVar18 * 0x800000 + 0x4b000000;
          if ((uint)pppppppcVar28 < 0x800000) {
            iVar18 = 0;
          }
          uVar44 = iVar18 + uVar48 | (uint)pppppppcVar28 & 0x7fffff;
          pppppppcVar35 = (char *******)(ulong)uVar44;
          *(uint *)extraout_RDX = uVar44;
          pppppppcVar28 = pppppppcStack_1a8;
          unaff_R15 = (char *******)(ulong)uVar48;
          pppppppcVar41 = pppppppcVar21;
          goto code_r0x004e7c45;
        }
        goto code_r0x004e7c20;
      }
code_r0x004e7bd6:
      if ((char)uVar29 == '\0') {
        uVar48 = 0x7f7fffff;
      }
      else {
        uVar48 = 0xff7fffff;
      }
code_r0x004e7c3c:
      *(uint *)extraout_RDX = uVar48;
      pppppppcVar28 = pppppppcStack_1a8;
      unaff_R15 = pppppppcVar34;
      pppppppcVar41 = pppppppcVar21;
    }
    else {
      uVar29 = (ulong)(*(char *)pppppppcVar28 == '-');
      pppppppcVar35 = (char *******)((long)pppppppcVar28 + uVar29);
      pppppppcVar41 = pppppppcVar35;
      if ((uVar19 & 4) != 0) goto code_r0x004e739c;
code_r0x004e72e6:
      pppppppcVar35 = pppppppcVar41;
      if ((long)pppppppcVar34 - (long)pppppppcVar41 < 2) goto code_r0x004e739c;
      if ((*(char *)pppppppcVar41 == '0') && ((*(byte *)((long)pppppppcVar41 + 1) | 0x20) == 0x78))
      {
        uStack_180 = 0;
        pppppppcStack_178 = (char *******)0x0;
        uStack_190 = 0;
        uStack_188 = 0;
        pppppppcStack_1a0 = (char *******)0x0;
        uStack_198 = 0;
        unaff_R15 = (char *******)&pppppppcStack_1a0;
        unaff_R13 = (char *******)(uVar19 & 0xffffffff);
        puStack_1e8 = &UNK_004e733d;
        _ZN4absl12lts_2026052616strings_internal10ParseFloatILi16EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
                  (unaff_R15,(char *)((long)pppppppcVar41 + 2));
        cVar42 = (char)uVar29;
        pppppppcVar35 = pppppppcStack_178;
        if ((pppppppcStack_178 == (char *******)0x0) || ((int)uStack_190 != 0)) {
          if ((int)uVar19 != 1) {
            if (cVar42 == '\0') {
              uVar48 = 0;
            }
            else {
              uVar48 = 0x80000000;
            }
            pppppppcVar28 = (char *******)((long)pppppppcVar41 + 1);
            *(uint *)extraout_RDX = uVar48;
            pppppppcVar39 = pppppppcVar28;
          }
        }
        else {
          pppppppcVar28 = pppppppcStack_178;
          unaff_R15 = pppppppcStack_1a0;
          pppppppcVar39 = pppppppcStack_178;
          if (pppppppcStack_1a0 == (char *******)0x0) {
            if (cVar42 == '\0') {
              uVar48 = 0;
            }
            else {
              uVar48 = 0x80000000;
            }
            *(uint *)extraout_RDX = uVar48;
          }
          else {
            lVar26 = 0x3f;
            if (pppppppcStack_1a0 != (char *******)0x0) {
              for (; (ulong)pppppppcStack_1a0 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            uVar44 = (int)lVar26 - 0x17;
            uVar48 = -(int)uStack_198 - 0x95U;
            if ((int)(-(int)uStack_198 - 0x95U) < (int)uVar44) {
              uVar48 = uVar44;
            }
            bVar24 = (byte)uVar48;
            if ((int)uVar48 < 1) {
              unaff_R15 = (char *******)((long)pppppppcStack_1a0 << (-bVar24 & 0x3f));
              pppppppcVar21 = (char *******)0x0;
              if ((-bVar24 & 0x40) == 0) {
                pppppppcVar21 = unaff_R15;
              }
            }
            else if (uVar48 < 0x80) {
              bVar22 = (byte)(uVar48 - 1);
              bVar23 = bVar22 & 0x3f;
              pppppppcVar21 = (char *******)(1L << (bVar22 & 0x3f));
              pppppppcVar37 = (char *******)0x0;
              pppppppcVar40 = pppppppcVar21;
              pppppppcVar34 = (char *******)(0L << bVar23 | 1UL >> 0x40 - bVar23);
              if ((uVar48 - 1 & 0x40) != 0) {
                pppppppcVar40 = pppppppcVar37;
                pppppppcVar34 = pppppppcVar21;
              }
              bVar46 = (uVar48 & 0x40) != 0;
              pppppppcVar38 = (char *******)(-1L << (bVar24 & 0x3f));
              if (bVar46) {
                pppppppcVar38 = pppppppcVar37;
              }
              pppppppcVar21 =
                   (char *******)
                   ((ulong)pppppppcStack_1a0 >> (bVar24 & 0x3f) | 0L << 0x40 - (bVar24 & 0x3f));
              if (bVar46) {
                pppppppcVar21 = pppppppcVar37;
              }
              if (pppppppcVar34 <
                  (char *******)
                  (ulong)(pppppppcVar40 <
                         (char *******)(~(ulong)pppppppcVar38 & (ulong)pppppppcStack_1a0))) {
                pppppppcVar21 = (char *******)((long)pppppppcVar21 + 1);
              }
              else if (pppppppcVar40 ==
                       (char *******)(~(ulong)pppppppcVar38 & (ulong)pppppppcStack_1a0) &&
                       pppppppcVar34 == (char *******)0x0) {
                pppppppcVar21 =
                     (char *******)((long)pppppppcVar21 + (ulong)((uint)pppppppcVar21 & 1));
              }
            }
            else {
              pppppppcVar21 = (char *******)0x0;
            }
            pppppppcVar34 = (char *******)&UNK_00800000;
            if (pppppppcVar21 != (char *******)0x1000000) {
              pppppppcVar34 = pppppppcVar21;
            }
            iVar30 = (uint)(pppppppcVar21 == (char *******)0x1000000) + uVar48 + (int)uStack_198;
            iVar18 = -99999;
            if (pppppppcVar34 != (char *******)0x0) {
              iVar18 = iVar30;
            }
            if ((iVar30 < 0x69) && (iVar18 != 99999)) {
              if (iVar18 != -99999) {
                uVar48 = (int)uVar29 * -0x80000000;
                iVar18 = iVar18 * 0x800000 + 0x4b000000;
                if ((uint)pppppppcVar34 < 0x800000) {
                  iVar18 = 0;
                }
                *(uint *)extraout_RDX = iVar18 + uVar48 | (uint)pppppppcVar34 & 0x7fffff;
                unaff_R15 = (char *******)(ulong)uVar48;
                goto code_r0x004e7c45;
              }
              if (cVar42 == '\0') {
                uVar48 = 0;
              }
              else {
                uVar48 = 0x80000000;
              }
            }
            else if (cVar42 == '\0') {
              uVar48 = 0x7f7fffff;
            }
            else {
              uVar48 = 0xff7fffff;
            }
            *(uint *)extraout_RDX = uVar48;
          }
        }
        goto code_r0x004e7c45;
      }
code_r0x004e73a5:
      lStack_1b0 = 0;
      pppppppcStack_1a8 = (char *******)0x0;
      uStack_1c0 = 0;
      pppppppcStack_1b8 = (char *******)0x0;
      pppppppcStack_1d0 = (char *******)0x0;
      uStack_1c8 = 0;
      pppppppcVar34 = (char *******)&pppppppcStack_1d0;
      puStack_1e8 = &UNK_004e73c9;
      _ZN4absl12lts_2026052616strings_internal10ParseFloatILi10EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
                ();
      unaff_R15 = pppppppcVar34;
      pppppppcVar41 = pppppppcVar21;
      if (pppppppcStack_1a8 != (char *******)0x0) {
        if ((int)uStack_1c0 == 1) {
code_r0x004e7515:
          pppppppcVar41 = pppppppcStack_1a8;
          if ((char)uVar29 == '\0') {
            uVar48 = 0x7f800000;
          }
          else {
            uVar48 = 0xff800000;
          }
        }
        else if ((int)uStack_1c0 == 2) {
code_r0x004e747d:
          pppppppcVar41 = pppppppcStack_1a8;
          uStack_130 = 0;
          uStack_128 = 0;
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_150 = 0;
          uStack_148 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_170 = 0;
          uStack_168 = 0;
          uStack_180 = 0;
          pppppppcStack_178 = (char *******)0x0;
          uStack_190 = 0;
          uStack_188 = 0;
          pppppppcStack_1a0 = (char *******)0x0;
          uStack_198 = 0;
          pppppppcVar35 = pppppppcStack_1b8;
          if (pppppppcStack_1b8 != (char *******)0x0) {
            pppppppcVar28 = (char *******)0x7f;
            if (lStack_1b0 - (long)pppppppcStack_1b8 < 0x7f) {
              pppppppcVar28 = (char *******)(lStack_1b0 - (long)pppppppcStack_1b8);
            }
            puStack_1e8 = &UNK_004e74df;
            func_0x0099bda0(&pppppppcStack_1a0,pppppppcStack_1b8,pppppppcVar28);
            *(char *)((long)&pppppppcStack_1a0 + (long)pppppppcVar28) = '\0';
          }
          pppppppcVar34 = (char *******)&pppppppcStack_1a0;
          puStack_1e8 = &UNK_004e74f4;
          uVar48 = func_0x0099c7c0();
          pppppppcVar39 = pppppppcVar28;
          pppppppcVar21 = pppppppcVar41;
          if ((char)uVar29 != '\0') {
            uVar48 = uVar48 ^ 0x80000000;
          }
        }
        else {
          pppppppcVar35 = pppppppcStack_1d0;
          if (pppppppcStack_1d0 != (char *******)0x0) {
            pppppppcVar21 = pppppppcStack_1b8;
            if (pppppppcStack_1b8 == (char *******)0x0) {
              if (-0x41 < (int)(uint)uStack_1c8) {
                if (0x26 < (int)(uint)uStack_1c8) goto code_r0x004e7bd6;
                pppppppcStack_1d8 = pppppppcStack_1a8;
                uVar19 = 0x3f;
                if (pppppppcStack_1d0 != (char *******)0x0) {
                  for (; (ulong)pppppppcStack_1d0 >> uVar19 == 0; uVar19 = uVar19 - 1) {
                  }
                }
                unaff_R15 = (char *******)(uVar19 ^ 0x3f);
                uVar19 = (long)pppppppcStack_1d0 << ((byte)unaff_R15 & 0x3f);
                unaff_R13 = (char *******)(ulong)((uint)uStack_1c8 + 0x156);
                auVar5._8_8_ = 0;
                auVar5._0_8_ = uVar19;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = *(ulong *)(&UNK_00201690 + (long)unaff_R13 * 8);
                auVar5 = auVar5 * auVar11;
                uVar48 = (int)((uint)uStack_1c8 * 0x3526a) >> 0x10;
                if (CARRY8(auVar5._0_8_,uVar19) && (~auVar5._8_8_ & 0x3fffffffff) == 0) {
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar19;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = *(ulong *)(&UNK_00202af0 + (long)unaff_R13 * 8);
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = SUB168(auVar6 * auVar12,8);
                  auVar5 = auVar5 + auVar17;
                  unaff_R13 = (char *******)(~auVar5._0_8_ | ~auVar5._8_8_ & 0x3fffffffff);
                  if (unaff_R13 != (char *******)0x0) goto code_r0x004e79b2;
                  if (CARRY8(SUB168(auVar6 * auVar12,0),uVar19)) goto code_r0x004e7762;
                  uVar44 = auVar5._12_4_ >> 0x1f;
                  uVar19 = auVar5._8_8_ >> (0x26U - (auVar5[0xf] >> 7) & 0x3f);
                }
                else {
code_r0x004e79b2:
                  uVar44 = auVar5._12_4_ >> 0x1f;
                  uVar19 = auVar5._8_8_ >> (0x26U - (auVar5[0xf] >> 7) & 0x3f);
                  if ((auVar5._0_8_ == 0) &&
                     (((uint)uVar19 & 3) == 1 && (auVar5._8_8_ & 0x3fffffffff) == 0))
                  goto code_r0x004e7762;
                }
                uVar19 = ((uint)uVar19 & 1) + uVar19;
                iVar18 = (((uVar48 - (int)unaff_R15) - (uVar44 ^ 1)) + 0xc0) -
                         (uint)(uVar19 < 0x2000000);
                if (0xffffff01 < iVar18 - 0xffU) {
                  uVar31 = iVar18 * 0x800000;
                  uVar45 = (uint)(uVar19 >> 1) & 0x7fffff;
                  uVar44 = uVar45 + uVar31 + 0x80000000;
                  if ((char)uVar29 == '\0') {
                    uVar44 = uVar31 | uVar45;
                  }
                  *(uint *)extraout_RDX = uVar44;
                  pppppppcVar28 = pppppppcStack_1a8;
                  pppppppcVar39 = (char *******)(ulong)uVar48;
                  pppppppcVar41 = pppppppcStack_1b8;
                  goto code_r0x004e7c45;
                }
code_r0x004e7762:
                pppppppcStack_1d8 = pppppppcStack_1a8;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = pppppppcStack_1d0;
                auVar13._8_8_ = 0;
                auVar13._0_8_ = *(ulong *)(&UNK_00202140 + (long)(int)(uint)uStack_1c8 * 8);
                auVar15 = auVar7 * auVar13;
                uVar20 = auVar15._8_8_;
                uVar19 = auVar15._0_8_;
                iVar18 = uVar48 - 0x3f;
                if (pppppppcStack_1b8 == (char *******)0x0) {
                  if ((uint)uStack_1c8 < 0x1c) {
                    if (uVar20 == 0) {
                      lVar26 = 0x3f;
                      if (uVar19 != 0) {
                        for (; uVar19 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                        }
                      }
                      auVar15._8_8_ = 0;
                      auVar15._0_8_ = uVar19;
                      iVar30 = (int)lVar26 + 1;
                      if (uVar19 == 0) {
                        iVar30 = 0;
                      }
                      bVar23 = 1;
                    }
                    else {
                      lVar26 = 0x3f;
                      if (uVar20 != 0) {
                        for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                        }
                      }
                      iVar30 = (int)lVar26 + 0x41;
                      bVar23 = 1;
                    }
                  }
                  else {
                    if (uVar20 == 0) {
                      lVar26 = 0x3f;
                      if (uVar19 != 0) {
                        for (; uVar19 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                        }
                      }
                      iVar30 = 0;
                      if (uVar19 != 0) {
                        iVar30 = (int)lVar26 + 1;
                      }
                    }
                    else {
                      lVar26 = 0x3f;
                      if (uVar20 != 0) {
                        for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                        }
                      }
                      iVar30 = (int)lVar26 + 0x41;
                    }
                    bVar23 = (byte)(iVar30 - 0x3fU);
                    bVar24 = bVar23 & 0x3f;
                    uVar27 = uVar20 >> (bVar23 & 0x3f);
                    bVar23 = 0;
                    bVar46 = (iVar30 - 0x3fU & 0x40) != 0;
                    uVar19 = uVar19 >> bVar24 | uVar20 << 0x40 - bVar24;
                    if (bVar46) {
                      uVar19 = uVar27;
                    }
                    uVar20 = 0;
                    if (!bVar46) {
                      uVar20 = uVar27;
                    }
                    auVar15._8_8_ = uVar20;
                    auVar15._0_8_ = uVar19;
                    iVar18 = iVar18 + iVar30 + -0x3f;
                    iVar30 = 0x3f;
                  }
                }
                else {
                  if (uVar20 == 0) {
                    lVar26 = 0x3f;
                    if (uVar19 != 0) {
                      for (; uVar19 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                      }
                    }
                    iVar30 = 0;
                    if (uVar19 != 0) {
                      iVar30 = (int)lVar26 + 1;
                    }
                  }
                  else {
                    lVar26 = 0x3f;
                    if (uVar20 != 0) {
                      for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                      }
                    }
                    iVar30 = (int)lVar26 + 0x41;
                  }
                  bVar23 = (byte)(iVar30 - 0x3aU);
                  bVar24 = bVar23 & 0x3f;
                  uVar27 = uVar20 >> (bVar23 & 0x3f);
                  bVar23 = 0;
                  bVar46 = (iVar30 - 0x3aU & 0x40) != 0;
                  uVar19 = uVar19 >> bVar24 | uVar20 << 0x40 - bVar24;
                  if (bVar46) {
                    uVar19 = uVar27;
                  }
                  uVar20 = 0;
                  if (!bVar46) {
                    uVar20 = uVar27;
                  }
                  auVar15._8_8_ = uVar20;
                  auVar15._0_8_ = uVar19;
                  iVar18 = iVar18 + iVar30 + -0x3a;
                  iVar30 = 0x3a;
                }
                uVar20 = auVar15._8_8_;
                uVar19 = auVar15._0_8_;
                uVar48 = -iVar18 - 0x95U;
                if ((int)(-iVar18 - 0x95U) < (int)(iVar30 - 0x18U)) {
                  uVar48 = iVar30 - 0x18U;
                }
                uVar44 = iVar18 + uVar48;
                pppppppcVar39 = (char *******)(ulong)uVar44;
                bVar24 = (byte)uVar48;
                if ((int)uVar48 < 1) {
                  unaff_R15 = (char *******)0x0;
                  if ((-bVar24 & 0x40) == 0) {
                    unaff_R15 = (char *******)(uVar19 << (-bVar24 & 0x3f));
                  }
                  if (bVar23 == 0) {
code_r0x004e7ae2:
                    pppppppcVar21 = (char *******)&pppppppcStack_1d0;
                    ppuVar32 = &puStack_1e8;
                    puStack_1e8 = &UNK_004e7af7;
                    unaff_R13 = pppppppcStack_1a8;
                    pppppppcVar41 = unaff_R15;
                    goto code_r0x004e7c90;
                  }
                }
                else if (uVar48 < 0x80) {
                  unaff_R13 = (char *******)0x0;
                  unaff_R15 = (char *******)
                              (uVar19 >> (bVar24 & 0x3f) | uVar20 << 0x40 - (bVar24 & 0x3f));
                  if ((uVar48 & 0x40) != 0) {
                    unaff_R15 = (char *******)(uVar20 >> (bVar24 & 0x3f));
                  }
                  pppppppcVar28 = (char *******)(-1L << (bVar24 & 0x3f));
                  pppppppcVar34 = pppppppcVar28;
                  pppppppcVar21 = unaff_R13;
                  if ((uVar48 & 0x40) == 0) {
                    pppppppcVar34 = (char *******)0xffffffffffffffff;
                    pppppppcVar21 = pppppppcVar28;
                  }
                  bVar24 = bVar24 - 1;
                  pppppppcVar41 = (char *******)(1L << (bVar24 & 0x3f));
                  pppppppcVar35 = pppppppcVar41;
                  pppppppcVar28 =
                       (char *******)(0L << (bVar24 & 0x3f) | 1UL >> 0x40 - (bVar24 & 0x3f));
                  if ((bVar24 & 0x40) != 0) {
                    pppppppcVar35 = unaff_R13;
                    pppppppcVar28 = pppppppcVar41;
                  }
                  pppppppcVar41 = (char *******)(~(ulong)pppppppcVar21 & uVar19);
                  pppppppcVar21 = (char *******)(~(ulong)pppppppcVar34 & uVar20);
                  if (pppppppcVar28 < pppppppcVar21 ||
                      (ulong)((long)pppppppcVar28 - (long)pppppppcVar21) <
                      (ulong)(pppppppcVar35 < pppppppcVar41)) {
                    unaff_R15 = (char *******)((long)unaff_R15 + 1);
                  }
                  else if (pppppppcVar21 == pppppppcVar28 && pppppppcVar41 == pppppppcVar35) {
                    unaff_R15 = (char *******)
                                ((long)unaff_R15 + (ulong)((byte)(~bVar23 | (byte)unaff_R15) & 1));
                  }
                  else if (bVar23 == 0 &&
                           (pppppppcVar21 ==
                            (char *******)
                            ((long)pppppppcVar28 + ((ulong)(pppppppcVar35 != (char *******)0x0) - 1)
                            ) && pppppppcVar41 == (char *******)((long)pppppppcVar35 + -1)))
                  goto code_r0x004e7ae2;
                }
                else {
                  unaff_R15 = (char *******)0x0;
                }
                pppppppcVar28 = (char *******)&UNK_00800000;
                if (unaff_R15 != (char *******)0x1000000) {
                  pppppppcVar28 = unaff_R15;
                }
                uVar44 = uVar44 + (unaff_R15 == (char *******)0x1000000);
                pppppppcVar39 = (char *******)(ulong)uVar44;
                pppppppcVar34 = (char *******)0xfffe7961;
                if (pppppppcVar28 != (char *******)0x0) {
                  pppppppcVar34 = (char *******)(ulong)uVar44;
                }
                iVar18 = 99999;
                pppppppcVar35 = (char *******)0x0;
                pppppppcVar21 = unaff_R15;
                if ((int)uVar44 < 0x69) {
                  iVar18 = (int)pppppppcVar34;
                  pppppppcVar35 = pppppppcVar28;
                }
                goto code_r0x004e7bce;
              }
            }
            else {
              if ((int)(uint)uStack_1c8 < -0x156) {
                iVar18 = -99999;
                pppppppcVar35 = (char *******)0x0;
              }
              else {
                if ((int)(uint)uStack_1c8 < 0x135) {
                  uVar48 = (int)((uint)uStack_1c8 * 0x3526a) >> 0x10;
                  goto code_r0x004e7762;
                }
                iVar18 = 99999;
                pppppppcVar35 = (char *******)0x0;
              }
code_r0x004e7bce:
              if (iVar18 == 99999) goto code_r0x004e7bd6;
              if ((iVar18 != -99999) && (pppppppcVar35 != (char *******)0x0)) {
                uVar48 = (int)uVar29 * -0x80000000;
                iVar18 = iVar18 * 0x800000 + 0x4b000000;
                if ((uint)pppppppcVar35 < 0x800000) {
                  iVar18 = 0;
                }
                *(uint *)extraout_RDX = iVar18 + uVar48 | (uint)pppppppcVar35 & 0x7fffff;
                pppppppcVar28 = pppppppcStack_1a8;
                unaff_R15 = (char *******)(ulong)uVar48;
                pppppppcVar41 = pppppppcVar21;
                goto code_r0x004e7c45;
              }
            }
code_r0x004e7c20:
            if ((char)uVar29 == '\0') {
              uVar48 = 0;
            }
            else {
              uVar48 = 0x80000000;
            }
            goto code_r0x004e7c3c;
          }
code_r0x004e758c:
          pppppppcVar41 = pppppppcStack_1a8;
          if ((char)uVar29 == '\0') {
            uVar48 = 0;
          }
          else {
            uVar48 = 0x80000000;
          }
        }
        *(uint *)extraout_RDX = uVar48;
        pppppppcVar28 = pppppppcVar41;
        unaff_R15 = pppppppcVar34;
        pppppppcVar41 = pppppppcVar21;
      }
    }
code_r0x004e7c45:
    uVar44 = (uint)pppppppcVar35;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_120) {
      return pppppppcVar28;
    }
    puStack_1e8 = &UNK_004e7c8d;
    func_0x0099bd00();
    pppppppcVar21 = extraout_RDX_00;
    ppuVar33 = &puStack_f0;
  }
  else {
    uVar29 = (ulong)(*(char *)param_1 == '-');
    pppppppcVar34 = (char *******)((long)param_1 + uVar29);
    pppppppcVar21 = pppppppcVar34;
    if ((param_4 & 4) != 0) goto code_r0x004e692c;
code_r0x004e6876:
    pppppppcVar34 = pppppppcVar21;
    if ((long)param_2 - (long)pppppppcVar21 < 2) goto code_r0x004e692c;
    if ((*(char *)pppppppcVar21 == '0') && ((*(byte *)((long)pppppppcVar21 + 1) | 0x20) == 0x78)) {
      uStack_98 = 0;
      pppppppcStack_90 = (char *******)0x0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      ppppppcStack_b8 = (char ******)0x0;
      uStack_b0 = 0;
      pppppppcVar28 = &ppppppcStack_b8;
      unaff_R13 = (char *******)(ulong)param_4;
      puStack_f0 = &UNK_004e68cd;
      _ZN4absl12lts_2026052616strings_internal10ParseFloatILi16EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
                (pppppppcVar28,(char *)((long)pppppppcVar21 + 2));
      cVar42 = (char)uVar29;
      pppppppcVar34 = pppppppcStack_90;
      if ((pppppppcStack_90 == (char *******)0x0) || ((int)uStack_a8 != 0)) {
        pppppppcVar35 = param_1;
        if (param_4 != 1) {
          if (cVar42 == '\0') {
            uVar48 = 0;
          }
          else {
            uVar48 = 0x80000000;
          }
          param_1 = (char *******)((long)pppppppcVar21 + 1);
          *param_3 = (ulong)uVar48 << 0x20;
          pppppppcVar35 = param_1;
        }
      }
      else {
        pppppppcVar35 = pppppppcStack_90;
        param_1 = pppppppcStack_90;
        if (ppppppcStack_b8 == (char ******)0x0) {
          if (cVar42 == '\0') {
            uVar48 = 0;
          }
          else {
            uVar48 = 0x80000000;
          }
          *param_3 = (ulong)uVar48 << 0x20;
          pppppppcVar28 = (char *******)0x0;
        }
        else {
          lVar26 = 0x3f;
          if (ppppppcStack_b8 != (char ******)0x0) {
            for (; (ulong)ppppppcStack_b8 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          uVar44 = (int)lVar26 - 0x34;
          uVar48 = -(int)uStack_b0 - 0x432U;
          if ((int)(-(int)uStack_b0 - 0x432U) < (int)uVar44) {
            uVar48 = uVar44;
          }
          bVar24 = (byte)uVar48;
          if ((int)uVar48 < 1) {
            pppppppcVar39 = (char *******)0x0;
            if ((-bVar24 & 0x40) == 0) {
              pppppppcVar39 = (char *******)((long)ppppppcStack_b8 << (-bVar24 & 0x3f));
            }
          }
          else if (uVar48 < 0x80) {
            bVar22 = (byte)(uVar48 - 1);
            bVar23 = bVar22 & 0x3f;
            pppppppcVar39 = (char *******)(1L << (bVar22 & 0x3f));
            pppppppcVar40 = (char *******)0x0;
            pppppppcVar41 = pppppppcVar39;
            pppppppcVar28 = (char *******)(0L << bVar23 | 1UL >> 0x40 - bVar23);
            if ((uVar48 - 1 & 0x40) != 0) {
              pppppppcVar41 = pppppppcVar40;
              pppppppcVar28 = pppppppcVar39;
            }
            bVar46 = (uVar48 & 0x40) != 0;
            pppppppcVar37 = (char *******)(-1L << (bVar24 & 0x3f));
            if (bVar46) {
              pppppppcVar37 = pppppppcVar40;
            }
            pppppppcVar39 =
                 (char *******)
                 ((ulong)ppppppcStack_b8 >> (bVar24 & 0x3f) | 0L << 0x40 - (bVar24 & 0x3f));
            if (bVar46) {
              pppppppcVar39 = pppppppcVar40;
            }
            if (pppppppcVar28 <
                (char *******)
                (ulong)(pppppppcVar41 <
                       (char *******)(~(ulong)pppppppcVar37 & (ulong)ppppppcStack_b8))) {
              pppppppcVar39 = (char *******)((long)pppppppcVar39 + 1);
            }
            else if (pppppppcVar41 == (char *******)(~(ulong)pppppppcVar37 & (ulong)ppppppcStack_b8)
                     && pppppppcVar28 == (char *******)0x0) {
              pppppppcVar39 = (char *******)((long)pppppppcVar39 + (ulong)((uint)pppppppcVar39 & 1))
              ;
            }
          }
          else {
            pppppppcVar39 = (char *******)0x0;
          }
          pppppppcVar28 = (char *******)0x10000000000000;
          if (pppppppcVar39 != (char *******)0x20000000000000) {
            pppppppcVar28 = pppppppcVar39;
          }
          iVar30 = (uint)(pppppppcVar39 == (char *******)0x20000000000000) + uVar48 + (int)uStack_b0
          ;
          iVar18 = -99999;
          if (pppppppcVar28 != (char *******)0x0) {
            iVar18 = iVar30;
          }
          if ((iVar30 < 0x3cc) && (iVar18 != 99999)) {
            if (iVar18 != -99999) {
              lVar26 = (ulong)(iVar18 + 0x433) << 0x34;
              if (pppppppcVar28 < (char *******)0x10000000000000) {
                lVar26 = 0;
              }
              *param_3 = lVar26 + (uVar29 << 0x3f) | (ulong)pppppppcVar28 & 0xfffffffffffff;
              goto code_r0x004e7213;
            }
            if (cVar42 == '\0') {
              uVar47 = 0;
              uVar50 = 0;
            }
            else {
              uVar47 = 0;
              uVar50 = 0x80000000;
            }
          }
          else if (cVar42 == '\0') {
            uVar47 = 0xffffffff;
            uVar50 = 0x7fefffff;
          }
          else {
            uVar47 = 0xffffffff;
            uVar50 = 0xffefffff;
          }
          *param_3 = CONCAT44(uVar50,uVar47);
        }
      }
      goto code_r0x004e7213;
    }
code_r0x004e6935:
    lStack_c8 = 0;
    pppppppcStack_c0 = (char *******)0x0;
    uStack_d8 = 0;
    pppppppcStack_d0 = (char *******)0x0;
    pppppppcStack_e8 = (char *******)0x0;
    uStack_e0 = 0;
    pppppppcVar28 = (char *******)&pppppppcStack_e8;
    puStack_f0 = &UNK_004e6959;
    _ZN4absl12lts_2026052616strings_internal10ParseFloatILi10EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
              ();
    pppppppcVar35 = param_1;
    pppppppcVar21 = unaff_R15;
    if (pppppppcStack_c0 == (char *******)0x0) goto code_r0x004e7213;
    if ((int)uStack_d8 == 1) {
code_r0x004e6aa9:
      pppppppcVar35 = pppppppcStack_c0;
      if ((char)uVar29 == '\0') {
        *param_3 = 0x7ff0000000000000;
        pppppppcVar21 = unaff_R15;
      }
      else {
        *param_3 = 0xfff0000000000000;
        pppppppcVar21 = unaff_R15;
      }
      goto code_r0x004e7213;
    }
    if ((int)uStack_d8 == 2) {
code_r0x004e6a0d:
      pppppppcVar21 = pppppppcStack_c0;
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
      ppppppcStack_b8 = (char ******)0x0;
      uStack_b0 = 0;
      pppppppcVar34 = pppppppcStack_d0;
      if (pppppppcStack_d0 != (char *******)0x0) {
        param_1 = (char *******)0x7f;
        if (lStack_c8 - (long)pppppppcStack_d0 < 0x7f) {
          param_1 = (char *******)(lStack_c8 - (long)pppppppcStack_d0);
        }
        puStack_f0 = &UNK_004e6a6f;
        func_0x0099bda0(&ppppppcStack_b8,pppppppcStack_d0,param_1);
        *(char *)((long)&ppppppcStack_b8 + (long)param_1) = '\0';
      }
      pppppppcVar28 = &ppppppcStack_b8;
      puStack_f0 = &UNK_004e6a84;
      uVar49 = func_0x0099c7b0();
      uVar48 = (uint)((ulong)uVar49 >> 0x20);
      if ((char)uVar29 != '\0') {
        uVar48 = uVar48 ^ 0x80000000;
      }
      *param_3 = CONCAT44(uVar48,(int)uVar49);
      pppppppcVar35 = pppppppcVar21;
      goto code_r0x004e7213;
    }
    pppppppcVar34 = pppppppcStack_e8;
    if (pppppppcStack_e8 == (char *******)0x0) {
code_r0x004e6b2e:
      pppppppcVar35 = pppppppcStack_c0;
      if ((char)uVar29 == '\0') {
        *param_3 = 0;
        pppppppcVar21 = unaff_R15;
      }
      else {
        *param_3 = 0x8000000000000000;
        pppppppcVar21 = unaff_R15;
      }
      goto code_r0x004e7213;
    }
    pppppppcVar35 = pppppppcStack_c0;
    unaff_R15 = pppppppcStack_d0;
    if (pppppppcStack_d0 != (char *******)0x0) {
      if ((int)(uint)uStack_e0 < -0x156) {
        iVar18 = -99999;
        pppppppcVar21 = (char *******)0x0;
      }
      else {
        if ((int)(uint)uStack_e0 < 0x135) {
          uVar48 = (int)((uint)uStack_e0 * 0x3526a) >> 0x10;
          goto code_r0x004e6d04;
        }
        iVar18 = 99999;
        pppppppcVar21 = (char *******)0x0;
      }
code_r0x004e71b4:
      if (iVar18 == 99999) goto code_r0x004e71bc;
      if ((iVar18 == -99999) || (pppppppcVar21 == (char *******)0x0)) goto code_r0x004e7234;
      pppppppcVar34 = (char *******)(uVar29 << 0x3f);
      pppppppcVar28 = (char *******)((ulong)pppppppcVar21 >> 0x34);
      lVar26 = (ulong)(iVar18 + 0x433) << 0x34;
      if (pppppppcVar28 == (char *******)0x0) {
        lVar26 = 0;
      }
      *param_3 = (ulong)((long)pppppppcVar34 + lVar26) | (ulong)pppppppcVar21 & 0xfffffffffffff;
      pppppppcVar21 = unaff_R15;
      goto code_r0x004e7213;
    }
    if ((int)(uint)uStack_e0 < -0x156) {
code_r0x004e7234:
      if ((char)uVar29 == '\0') {
        uVar47 = 0;
        uVar50 = 0;
      }
      else {
        uVar47 = 0;
        uVar50 = 0x80000000;
      }
      goto code_r0x004e7250;
    }
    if (0x134 < (int)(uint)uStack_e0) goto code_r0x004e71bc;
    uVar19 = 0x3f;
    if (pppppppcStack_e8 != (char *******)0x0) {
      for (; (ulong)pppppppcStack_e8 >> uVar19 == 0; uVar19 = uVar19 - 1) {
      }
    }
    pppppppcVar28 = (char *******)(uVar19 ^ 0x3f);
    uVar19 = (long)pppppppcStack_e8 << ((byte)pppppppcVar28 & 0x3f);
    unaff_R13 = (char *******)(ulong)((uint)uStack_e0 + 0x156);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar19;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulong *)(&UNK_00201690 + (long)unaff_R13 * 8);
    auVar2 = auVar2 * auVar8;
    uVar48 = (int)((uint)uStack_e0 * 0x3526a) >> 0x10;
    param_1 = (char *******)(ulong)uVar48;
    if (CARRY8(auVar2._0_8_,uVar19) && (~auVar2._8_4_ & 0x1ff) == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar19;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulong *)(&UNK_00202af0 + (long)unaff_R13 * 8);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = SUB168(auVar3 * auVar9,8);
      auVar2 = auVar2 + auVar16;
      bVar46 = auVar2._0_8_ != -1 || (~auVar2._8_4_ & 0x1ff) != 0;
      unaff_R13 = (char *******)(ulong)CONCAT31((int3)((uint)uStack_e0 + 0x156 >> 8),bVar46);
      if (bVar46) goto code_r0x004e6f75;
      if (CARRY8(SUB168(auVar3 * auVar9,0),uVar19)) goto code_r0x004e6d04;
      uVar19 = auVar2._8_8_ >> 0x3f;
      uVar20 = auVar2._8_8_ >> (9U - (auVar2[0xf] >> 7) & 0x3f);
    }
    else {
code_r0x004e6f75:
      uVar19 = auVar2._8_8_ >> 0x3f;
      uVar20 = auVar2._8_8_ >> (9U - (auVar2[0xf] >> 7) & 0x3f);
      if ((auVar2._0_8_ == 0) && (((uint)uVar20 & 3) == 1 && (auVar2._8_4_ & 0x1ff) == 0))
      goto code_r0x004e6d04;
    }
    uVar20 = ((uint)uVar20 & 1) + uVar20;
    lVar26 = (((long)(int)((uVar48 - (int)pppppppcVar28) + 0x43f) - (uVar19 ^ 1)) + 1) -
             (ulong)(uVar20 >> 0x36 == 0);
    if (0xfffff801 < (int)lVar26 - 0x7ffU) {
      uVar20 = uVar20 >> 1 & 0xfffffffffffff | lVar26 << 0x34;
      uVar19 = uVar20 | 0x8000000000000000;
      if ((char)uVar29 == '\0') {
        uVar19 = uVar20;
      }
      *param_3 = uVar19;
      pppppppcVar21 = pppppppcStack_d0;
      goto code_r0x004e7213;
    }
code_r0x004e6d04:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = pppppppcStack_e8;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulong *)(&UNK_00202140 + (long)(int)(uint)uStack_e0 * 8);
    auVar14 = auVar4 * auVar10;
    uVar19 = auVar14._8_8_;
    uVar20 = auVar14._0_8_;
    iVar18 = uVar48 - 0x3f;
    if (pppppppcStack_d0 == (char *******)0x0) {
      if ((uint)uStack_e0 < 0x1c) {
        if (uVar19 == 0) {
          lVar26 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          uVar19 = 0;
          iVar30 = (int)lVar26 + 1;
          if (uVar20 == 0) {
            iVar30 = 0;
          }
          bVar23 = 1;
        }
        else {
          lVar26 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar30 = (int)lVar26 + 0x41;
          bVar23 = 1;
        }
      }
      else {
        if (uVar19 == 0) {
          lVar26 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar30 = 0;
          if (uVar20 != 0) {
            iVar30 = (int)lVar26 + 1;
          }
        }
        else {
          lVar26 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar30 = (int)lVar26 + 0x41;
        }
        bVar23 = (byte)(iVar30 - 0x3fU);
        bVar24 = bVar23 & 0x3f;
        uVar27 = uVar19 >> (bVar23 & 0x3f);
        bVar23 = 0;
        bVar46 = (iVar30 - 0x3fU & 0x40) != 0;
        uVar19 = uVar20 >> bVar24 | uVar19 << 0x40 - bVar24;
        if (bVar46) {
          uVar19 = uVar27;
        }
        auVar14._8_8_ = uVar27;
        auVar14._0_8_ = uVar19;
        uVar19 = 0;
        if (!bVar46) {
          uVar19 = uVar27;
        }
        iVar18 = iVar18 + iVar30 + -0x3f;
        iVar30 = 0x3f;
      }
    }
    else {
      if (uVar19 == 0) {
        lVar26 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar30 = 0;
        if (uVar20 != 0) {
          iVar30 = (int)lVar26 + 1;
        }
      }
      else {
        lVar26 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar30 = (int)lVar26 + 0x41;
      }
      bVar23 = (byte)(iVar30 - 0x3aU);
      bVar24 = bVar23 & 0x3f;
      uVar27 = uVar19 >> (bVar23 & 0x3f);
      bVar23 = 0;
      bVar46 = (iVar30 - 0x3aU & 0x40) != 0;
      uVar19 = uVar20 >> bVar24 | uVar19 << 0x40 - bVar24;
      if (bVar46) {
        uVar19 = uVar27;
      }
      auVar14._8_8_ = uVar27;
      auVar14._0_8_ = uVar19;
      uVar19 = 0;
      if (!bVar46) {
        uVar19 = uVar27;
      }
      iVar18 = iVar18 + iVar30 + -0x3a;
      iVar30 = 0x3a;
    }
    uVar20 = auVar14._0_8_;
    uVar48 = -iVar18 - 0x432U;
    if ((int)(-iVar18 - 0x432U) < (int)(iVar30 - 0x35U)) {
      uVar48 = iVar30 - 0x35U;
    }
    uVar44 = iVar18 + uVar48;
    pppppppcVar39 = (char *******)(ulong)uVar44;
    bVar24 = (byte)uVar48;
    if (0 < (int)uVar48) {
      if (uVar48 < 0x80) {
        unaff_R13 = (char *******)0x0;
        unaff_R15 = (char *******)(uVar20 >> (bVar24 & 0x3f) | uVar19 << 0x40 - (bVar24 & 0x3f));
        if ((uVar48 & 0x40) != 0) {
          unaff_R15 = (char *******)(uVar19 >> (bVar24 & 0x3f));
        }
        pppppppcVar28 = (char *******)(-1L << (bVar24 & 0x3f));
        pppppppcVar34 = pppppppcVar28;
        pppppppcVar21 = unaff_R13;
        if ((uVar48 & 0x40) == 0) {
          pppppppcVar34 = (char *******)0xffffffffffffffff;
          pppppppcVar21 = pppppppcVar28;
        }
        bVar24 = bVar24 - 1;
        pppppppcVar40 = (char *******)(1L << (bVar24 & 0x3f));
        pppppppcVar41 = pppppppcVar40;
        pppppppcVar28 = (char *******)(0L << (bVar24 & 0x3f) | 1UL >> 0x40 - (bVar24 & 0x3f));
        if ((bVar24 & 0x40) != 0) {
          pppppppcVar41 = unaff_R13;
          pppppppcVar28 = pppppppcVar40;
        }
        pppppppcVar40 = (char *******)(~(ulong)pppppppcVar21 & uVar20);
        pppppppcVar21 = (char *******)(~(ulong)pppppppcVar34 & uVar19);
        if (pppppppcVar28 < pppppppcVar21 ||
            (ulong)((long)pppppppcVar28 - (long)pppppppcVar21) <
            (ulong)(pppppppcVar41 < pppppppcVar40)) {
          unaff_R15 = (char *******)((long)unaff_R15 + 1);
        }
        else if (pppppppcVar21 == pppppppcVar28 && pppppppcVar40 == pppppppcVar41) {
          unaff_R15 = (char *******)
                      ((long)unaff_R15 + (ulong)((byte)(~bVar23 | (byte)unaff_R15) & 1));
        }
        else if (bVar23 == 0 &&
                 (pppppppcVar21 ==
                  (char *******)
                  ((long)pppppppcVar28 + ((ulong)(pppppppcVar41 != (char *******)0x0) - 1)) &&
                 pppppppcVar40 == (char *******)((long)pppppppcVar41 + -1))) goto code_r0x004e70b7;
      }
      else {
        unaff_R15 = (char *******)0x0;
      }
code_r0x004e716d:
      pppppppcVar34 = (char *******)0x10000000000000;
      if (unaff_R15 != (char *******)0x20000000000000) {
        pppppppcVar34 = unaff_R15;
      }
      uVar44 = uVar44 + (unaff_R15 == (char *******)0x20000000000000);
      param_1 = (char *******)(ulong)uVar44;
      pppppppcVar28 = (char *******)0xfffe7961;
      if (pppppppcVar34 != (char *******)0x0) {
        pppppppcVar28 = (char *******)(ulong)uVar44;
      }
      iVar18 = 99999;
      pppppppcVar21 = (char *******)0x0;
      if ((int)uVar44 < 0x3cc) {
        iVar18 = (int)pppppppcVar28;
        pppppppcVar21 = pppppppcVar34;
      }
      goto code_r0x004e71b4;
    }
    unaff_R15 = (char *******)0x0;
    if ((-bVar24 & 0x40) == 0) {
      unaff_R15 = (char *******)(uVar20 << (-bVar24 & 0x3f));
    }
    if (bVar23 != 0) goto code_r0x004e716d;
code_r0x004e70b7:
    pppppppcVar21 = (char *******)&pppppppcStack_e8;
    ppuVar32 = &puStack_f0;
    puStack_f0 = &UNK_004e70cc;
    unaff_R13 = pppppppcStack_c0;
    pppppppcVar41 = unaff_R15;
  }
code_r0x004e7c90:
  *(undefined ***)((long)ppuVar32 + -8) = ppuVar33;
  *(char ********)((long)ppuVar32 + -0x10) = pppppppcVar41;
  *(char ********)((long)ppuVar32 + -0x18) = pppppppcVar39;
  *(char ********)((long)ppuVar32 + -0x20) = unaff_R13;
  *(ulong *)((long)ppuVar32 + -0x28) = uVar29;
  *(ulong **)((long)ppuVar32 + -0x30) = param_3;
  *(undefined8 *)((long)ppuVar32 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e7cd0;
  func_0x0099bdb0((undefined1 *)((long)ppuVar32 + -0x194),0,0x154);
  *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e7ce0;
  iVar18 = _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE17ReadFloatMantissaERKNS1_11ParsedFloatEi
                     ((undefined1 *)((long)ppuVar32 + -0x194),pppppppcVar21,0x300);
  *(char ********)((long)ppuVar32 + -0x300) = unaff_R15;
  uVar29 = (long)unaff_R15 * 2 + 1;
  *(uint *)((long)ppuVar32 + -0x2ec) = uVar44 - 1;
  if (iVar18 < 0) {
    *(ulong *)((long)ppuVar32 + -0x2f8) = (ulong)uVar44;
    *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e7db5;
    func_0x0099bdb0((undefined1 *)((long)ppuVar32 + -0x2e8),0,0x154);
    *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e7dc2;
    _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE12FiveToTheNthEi
              ((undefined1 *)((long)ppuVar32 + -0x2e8));
    *(ulong *)((long)ppuVar32 + -0x40) = uVar29;
    uVar48 = *(uint *)((long)ppuVar32 + -0x2e8);
    uVar19 = (ulong)uVar48;
    if (((ulong)unaff_R15 & 0x7fffffffffffffff) >> 0x1f == 0) {
      if (0 < (int)uVar48 && ((ulong)unaff_R15 & 0x7fffffffffffffff) != 0) {
        if (uVar48 == 1) {
          uVar20 = 0;
          uVar27 = 0;
code_r0x004e8054:
          uVar43 = uVar29 * *(uint *)((long)ppuVar32 + uVar20 * 4 + -0x2e4) + uVar27;
          *(int *)((long)ppuVar32 + uVar20 * 4 + -0x2e4) = (int)uVar43;
          uVar27 = uVar43 >> 0x20;
        }
        else {
          uVar20 = 0;
          uVar27 = 0;
          do {
            uVar44 = *(uint *)((long)ppuVar32 + uVar20 * 4 + -0x2e4);
            *(int *)((long)ppuVar32 + uVar20 * 4 + -0x2e4) = (int)(uVar44 * uVar29 + uVar27);
            uVar43 = *(uint *)((long)ppuVar32 + uVar20 * 4 + -0x2e0) * uVar29 +
                     (uVar44 * uVar29 + uVar27 >> 0x20);
            *(int *)((long)ppuVar32 + uVar20 * 4 + -0x2e0) = (int)uVar43;
            uVar27 = uVar43 >> 0x20;
            uVar20 = uVar20 + 2;
          } while ((uVar48 & 0x7ffffffe) != uVar20);
          if ((uVar48 & 1) != 0) goto code_r0x004e8054;
        }
        if ((uVar48 < 0x54) && (uVar43 >> 0x20 != 0)) {
          *(int *)((long)ppuVar32 + uVar19 * 4 + -0x2e4) = (int)uVar27;
          *(uint *)((long)ppuVar32 + -0x2e8) = uVar48 + 1;
        }
      }
    }
    else if (-1 < (int)uVar48) {
      uVar29 = 0x53;
      if (uVar48 < 0x53) {
        uVar29 = uVar19;
      }
      do {
        iVar30 = (int)uVar29;
        *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e7e76;
        _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE12MultiplyStepEiPKjii
                  ((undefined1 *)((long)ppuVar32 + -0x2e8),uVar19,
                   (undefined1 *)((long)ppuVar32 + -0x40),2,uVar29);
        uVar29 = (ulong)(iVar30 - 1);
      } while (iVar30 != 0);
    }
    if (iVar18 < *(int *)((long)ppuVar32 + -0x2f8)) {
      uVar48 = *(int *)((long)ppuVar32 + -0x2ec) - iVar18;
      if (uVar48 != 0 && iVar18 <= *(int *)((long)ppuVar32 + -0x2ec)) {
        uVar44 = *(uint *)((long)ppuVar32 + -0x2e8);
        if (uVar48 < 0xa80) {
          uVar31 = uVar48 >> 5;
          uVar44 = uVar44 + uVar31;
          uVar45 = 0x54;
          if ((int)uVar44 < 0x54) {
            uVar45 = uVar44;
          }
          *(uint *)((long)ppuVar32 + -0x2e8) = uVar45;
          if ((uVar48 & 0x1f) == 0) {
            *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e8374;
            func_0x0099bd90((undefined1 *)((long)ppuVar32 + ((ulong)(uVar31 * 4) - 0x2e4)));
          }
          else {
            uVar25 = 0x53;
            if ((int)uVar44 < 0x53) {
              uVar25 = uVar44;
            }
            if ((int)uVar31 < (int)uVar25) {
              uVar29 = (ulong)uVar25;
              do {
                bVar24 = (byte)uVar48 & 0x1f;
                *(uint *)((long)ppuVar32 + uVar29 * 4 + -0x2e4) =
                     *(int *)((long)ppuVar32 + uVar29 * 4 + -(ulong)(uVar31 * 4) + -0x2e4) << bVar24
                     | *(uint *)((long)ppuVar32 + uVar29 * 4 + -(ulong)(uVar31 * 4) + -0x2e8) >>
                       0x20 - bVar24;
                uVar29 = uVar29 - 1;
              } while (uVar31 < uVar29);
            }
            *(int *)((long)ppuVar32 + (ulong)uVar31 * 4 + -0x2e4) =
                 *(int *)((long)ppuVar32 + -0x2e4) << (sbyte)(uVar48 & 0x1f);
            if (((int)uVar44 < 0x54) &&
               (*(int *)((long)ppuVar32 + (long)(int)uVar45 * 4 + -0x2e4) != 0)) {
              *(uint *)((long)ppuVar32 + -0x2e8) = uVar45 + 1;
            }
          }
          if (0x1f < uVar48) {
            puVar36 = (undefined1 *)((long)ppuVar32 + -0x2e4);
            goto code_r0x004e83b3;
          }
        }
        else {
          if (0 < (int)uVar44) {
            *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e80d4;
            func_0x0099bdb0((undefined1 *)((long)ppuVar32 + -0x2e4),0,(ulong)uVar44 << 2);
          }
          *(undefined4 *)((long)ppuVar32 + -0x2e8) = 0;
        }
      }
    }
    else {
      uVar44 = iVar18 - *(int *)((long)ppuVar32 + -0x2ec);
      uVar48 = *(uint *)((long)ppuVar32 + -0x194);
      if (uVar44 < 0xa80) {
        uVar31 = uVar44 >> 5;
        uVar48 = uVar48 + uVar31;
        uVar45 = 0x54;
        if ((int)uVar48 < 0x54) {
          uVar45 = uVar48;
        }
        *(uint *)((long)ppuVar32 + -0x194) = uVar45;
        if ((uVar44 & 0x1f) == 0) {
          *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e8262;
          func_0x0099bd90((undefined1 *)((long)ppuVar32 + ((ulong)(uVar31 * 4) - 400)));
        }
        else {
          uVar25 = 0x53;
          if ((int)uVar48 < 0x53) {
            uVar25 = uVar48;
          }
          if ((int)uVar31 < (int)uVar25) {
            uVar29 = (ulong)uVar25;
            do {
              bVar24 = (byte)uVar44 & 0x1f;
              *(uint *)((long)ppuVar32 + uVar29 * 4 + -400) =
                   *(int *)((long)ppuVar32 + uVar29 * 4 + -(ulong)(uVar31 * 4) + -400) << bVar24 |
                   *(uint *)((long)ppuVar32 + uVar29 * 4 + -(ulong)(uVar31 * 4) + -0x194) >>
                   0x20 - bVar24;
              uVar29 = uVar29 - 1;
            } while (uVar31 < uVar29);
          }
          *(int *)((long)ppuVar32 + (ulong)uVar31 * 4 + -400) =
               *(int *)((long)ppuVar32 + -400) << (sbyte)(uVar44 & 0x1f);
          if (((int)uVar48 < 0x54) && (*(int *)((long)ppuVar32 + (long)(int)uVar45 * 4 + -400) != 0)
             ) {
            *(uint *)((long)ppuVar32 + -0x194) = uVar45 + 1;
          }
        }
        if (0x1f < uVar44) {
          puVar36 = (undefined1 *)((long)ppuVar32 + -400);
code_r0x004e83b3:
          *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e83c4;
          func_0x0099bdb0(puVar36,0,(ulong)(uVar31 - 1) * 4 + 4);
        }
      }
      else {
        if (0 < (int)uVar48) {
          *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e810f;
          func_0x0099bdb0((undefined1 *)((long)ppuVar32 + -400),0,(ulong)uVar48 << 2);
        }
        *(undefined4 *)((long)ppuVar32 + -0x194) = 0;
      }
    }
    uVar48 = *(uint *)((long)ppuVar32 + -0x194);
    uVar44 = *(uint *)((long)ppuVar32 + -0x2e8);
    uVar45 = uVar44;
    if ((int)uVar44 < (int)uVar48) {
      uVar45 = uVar48;
    }
    uVar29 = (ulong)uVar45;
    do {
      iVar18 = (int)uVar29;
      if (iVar18 < 1) goto code_r0x004e8428;
      uVar31 = 0;
      uVar45 = 0;
      if (iVar18 <= (int)uVar48) {
        uVar45 = *(uint *)((long)ppuVar32 + uVar29 * 4 + -0x194);
      }
      if ((iVar18 <= (int)uVar44) &&
         (uVar31 = *(uint *)((long)ppuVar32 + uVar29 * 4 + -0x2e8), uVar45 < uVar31))
      goto code_r0x004e843d;
      uVar29 = uVar29 - 1;
    } while (uVar45 <= uVar31);
  }
  else {
    puVar36 = (undefined1 *)((long)ppuVar32 + -0x194);
    *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e7d1c;
    _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE22MultiplyByFiveToTheNthEi(puVar36);
    iVar30 = 2 - (uint)(((ulong)unaff_R15 & 0x7fffffffffffffff) >> 0x1f == 0);
    *(int *)((long)ppuVar32 + -0x2e8) = iVar30;
    *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e7d45;
    func_0x0099bdb0((undefined1 *)((long)ppuVar32 + -0x2dc),0,0x148);
    *(ulong *)((long)ppuVar32 + -0x2e4) = uVar29;
    if (iVar18 < (int)uVar44) {
      uVar48 = *(int *)((long)ppuVar32 + -0x2ec) - iVar18;
      if (uVar48 != 0 && iVar18 <= *(int *)((long)ppuVar32 + -0x2ec)) {
        puVar36 = (undefined1 *)((long)ppuVar32 + -0x2e4);
        if (uVar48 < 0xa80) {
          uVar45 = uVar48 >> 5;
          uVar31 = iVar30 + uVar45;
          uVar44 = 0x54;
          if (uVar31 < 0x54) {
            uVar44 = uVar31;
          }
          *(uint *)((long)ppuVar32 + -0x2e8) = uVar44;
          if ((uVar48 & 0x1f) == 0) {
            *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e8235;
            func_0x0099bd90(puVar36 + uVar45 * 4);
          }
          else {
            if (uVar48 < 0xa60) {
              uVar29 = 0x53;
              if (uVar31 < 0x53) {
                uVar29 = (ulong)uVar31;
              }
              do {
                bVar24 = (byte)uVar48 & 0x1f;
                *(uint *)((long)ppuVar32 + uVar29 * 4 + -0x2e4) =
                     *(int *)(puVar36 + (uVar29 * 4 - (ulong)(uVar45 * 4))) << bVar24 |
                     *(uint *)(puVar36 + uVar29 * 4 + (-4 - (ulong)(uVar45 * 4))) >> 0x20 - bVar24;
                uVar29 = uVar29 - 1;
              } while (uVar45 < uVar29);
              uVar29 = (ulong)*(uint *)((long)ppuVar32 + -0x2e4);
            }
            *(int *)((long)ppuVar32 + (ulong)uVar45 * 4 + -0x2e4) =
                 (int)uVar29 << (sbyte)(uVar48 & 0x1f);
            if ((uVar31 < 0x54) && (*(int *)((long)ppuVar32 + (ulong)uVar44 * 4 + -0x2e4) != 0)) {
              *(uint *)((long)ppuVar32 + -0x2e8) = uVar44 + 1;
            }
          }
          if (0x1f < uVar48) goto code_r0x004e82a4;
        }
        else {
          *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e7d89;
          func_0x0099bdb0(puVar36,0,iVar30 * 4);
          *(undefined4 *)((long)ppuVar32 + -0x2e8) = 0;
        }
      }
    }
    else {
      uVar44 = iVar18 - *(int *)((long)ppuVar32 + -0x2ec);
      uVar48 = *(uint *)((long)ppuVar32 + -0x194);
      if (uVar44 < 0xa80) {
        uVar45 = uVar44 >> 5;
        uVar48 = uVar48 + uVar45;
        uVar31 = 0x54;
        if ((int)uVar48 < 0x54) {
          uVar31 = uVar48;
        }
        *(uint *)((long)ppuVar32 + -0x194) = uVar31;
        if ((uVar44 & 0x1f) == 0) {
          *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e7fa7;
          func_0x0099bd90((undefined1 *)((long)ppuVar32 + ((ulong)(uVar45 * 4) - 400)));
        }
        else {
          uVar25 = 0x53;
          if ((int)uVar48 < 0x53) {
            uVar25 = uVar48;
          }
          if ((int)uVar45 < (int)uVar25) {
            uVar29 = (ulong)uVar25;
            do {
              bVar24 = (byte)uVar44 & 0x1f;
              *(uint *)((long)ppuVar32 + uVar29 * 4 + -400) =
                   *(int *)(puVar36 + uVar29 * 4 + (4 - (ulong)(uVar45 * 4))) << bVar24 |
                   *(uint *)(puVar36 + (uVar29 * 4 - (ulong)(uVar45 * 4))) >> 0x20 - bVar24;
              uVar29 = uVar29 - 1;
            } while (uVar45 < uVar29);
          }
          *(int *)((long)ppuVar32 + (ulong)uVar45 * 4 + -400) =
               *(int *)((long)ppuVar32 + -400) << (sbyte)(uVar44 & 0x1f);
          if (((int)uVar48 < 0x54) && (*(int *)((long)ppuVar32 + (long)(int)uVar31 * 4 + -400) != 0)
             ) {
            *(uint *)((long)ppuVar32 + -0x194) = uVar31 + 1;
          }
        }
        if (0x1f < uVar44) {
          puVar36 = (undefined1 *)((long)ppuVar32 + -400);
code_r0x004e82a4:
          *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e82ab;
          func_0x0099bdb0(puVar36,0,(ulong)(uVar45 - 1) * 4 + 4);
        }
      }
      else {
        if (0 < (int)uVar48) {
          *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e7e29;
          func_0x0099bdb0((undefined1 *)((long)ppuVar32 + -400),0,(ulong)uVar48 << 2);
        }
        *(undefined4 *)((long)ppuVar32 + -0x194) = 0;
      }
    }
    uVar48 = *(uint *)((long)ppuVar32 + -0x194);
    uVar44 = *(uint *)((long)ppuVar32 + -0x2e8);
    uVar29 = (ulong)uVar44;
    if ((int)uVar44 < (int)uVar48) {
      uVar29 = (ulong)uVar48;
    }
    do {
      iVar18 = (int)uVar29;
      if (iVar18 < 1) goto code_r0x004e8428;
      uVar31 = 0;
      uVar45 = 0;
      if (iVar18 <= (int)uVar48) {
        uVar45 = *(uint *)((long)ppuVar32 + uVar29 * 4 + -0x194);
      }
      if ((iVar18 <= (int)uVar44) &&
         (uVar31 = *(uint *)((long)ppuVar32 + uVar29 * 4 + -0x2e8), uVar45 < uVar31))
      goto code_r0x004e843d;
      uVar29 = uVar29 - 1;
    } while (uVar45 <= uVar31);
  }
  bVar46 = false;
  goto code_r0x004e842e;
code_r0x004e843d:
  pppppppcVar21 = (char *******)0x0;
  goto code_r0x004e8448;
code_r0x004e8428:
  bVar46 = true;
code_r0x004e842e:
  pppppppcVar21 = (char *******)0x1;
  if (bVar46) {
    pppppppcVar21 = (char *******)(*(ulong *)((long)ppuVar32 + -0x300) & 0xffffffffffffff01);
  }
code_r0x004e8448:
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)((long)ppuVar32 + -0x38)) {
    *(undefined **)((long)ppuVar32 + -0x310) = &UNK_004e846e;
    func_0x0099bd00();
    pcVar1 = (code *)swi(3);
    pppppppcVar21 = (char *******)(*pcVar1)();
    return pppppppcVar21;
  }
  return pppppppcVar21;
}


