// Function: _ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEeRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004d9500
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

undefined8
_ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEeRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
          (byte *******param_1,byte *******param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined3 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint3 uVar26;
  unkbyte10 Var27;
  uint3 uVar28;
  ushort uVar29;
  char cVar30;
  int iVar31;
  undefined2 *puVar32;
  undefined1 *puVar33;
  byte *pbVar34;
  long lVar35;
  byte bVar36;
  ulong uVar37;
  undefined8 uVar38;
  byte *******pppppppbVar39;
  byte *******pppppppbVar40;
  byte *******pppppppbVar41;
  byte *pbVar42;
  long lVar43;
  undefined2 *puVar44;
  uint uVar45;
  byte *******unaff_RBX;
  ulong uVar46;
  long lVar47;
  byte *******pppppppbVar48;
  undefined1 *puVar49;
  undefined8 **ppuVar50;
  byte bVar51;
  int iVar52;
  undefined2 *puVar53;
  byte *******pppppppbVar54;
  byte *******pppppppbVar55;
  ulong uVar56;
  undefined *puVar57;
  ulong uVar58;
  byte bVar59;
  uint uVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  undefined7 uVar64;
  int iVar65;
  byte *******unaff_R13;
  uint uVar66;
  byte *******pppppppbVar67;
  undefined1 uVar68;
  undefined8 unaff_R15;
  ulong uVar69;
  ulong uVar70;
  byte *pbVar71;
  long in_FS_OFFSET;
  bool bVar72;
  bool bVar73;
  bool bVar74;
  bool bVar75;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  float fVar76;
  double dVar77;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  longdouble in_stack_00000008;
  undefined8 *puStack_208;
  undefined2 uStack_200;
  undefined6 uStack_1fe;
  undefined1 auStack_1f8 [16];
  long lStack_1e8;
  ushort uStack_1e0;
  uint uStack_1d4;
  byte *******pppppppbStack_1d0;
  byte *******pppppppbStack_1c8;
  byte *******pppppppbStack_1c0;
  undefined1 auStack_1b8 [12];
  uint uStack_1ac;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  long lStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  byte *******pppppppbStack_170;
  byte *******pppppppbStack_168;
  byte *******pppppppbStack_160;
  byte *******pppppppbStack_158;
  byte *******pppppppbStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  undefined2 uStack_118;
  undefined1 auStack_108 [4];
  undefined1 auStack_104 [4];
  undefined8 *puStack_100;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [2];
  undefined1 auStack_de [6];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined2 uStack_6f;
  undefined5 uStack_6d;
  undefined1 uStack_68;
  undefined2 uStack_67;
  undefined5 uStack_65;
  undefined1 uStack_60;
  undefined2 uStack_5f;
  undefined5 uStack_5d;
  undefined8 uStack_58;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  long lStack_38;
  
  puVar49 = &stack0xfffffffffffffff8;
  auStack_1f8._0_10_ = in_stack_00000008;
  Var27 = auStack_1f8._0_10_;
  auStack_1f8._8_2_ = (undefined2)((unkuint10)in_stack_00000008 >> 0x40);
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar64 = (undefined7)((ulong)unaff_R15 >> 8);
  if ((short)auStack_1f8._8_2_ < 0) {
    in_stack_00000008 = -in_stack_00000008;
    pppppppbVar54 = (byte *******)CONCAT71(uVar64,0x2d);
code_r0x004d956e:
    _auStack_108 = (byte ******)((ulong)(uint)auStack_104 << 0x20);
    puVar44 = (undefined2 *)(auStack_108 + 1);
    _auStack_108 = (byte ******)CONCAT71(stack0xfffffffffffffef9,(char)pppppppbVar54);
  }
  else {
    pppppppbVar54 = (byte *******)CONCAT71(uVar64,0x2b);
    if ((((ulong)*param_1 & 0x200) != 0) ||
       (pppppppbVar54 = (byte *******)CONCAT71(uVar64,0x20), ((ulong)*param_1 & 0x400) != 0))
    goto code_r0x004d956e;
    _auStack_108 = (byte ******)((ulong)(uint)auStack_104 << 0x20);
    puVar44 = (undefined2 *)auStack_108;
    pppppppbVar54 = (byte *******)0x0;
  }
  auStack_1f8._0_10_ = Var27;
  if (NAN(in_stack_00000008)) {
    bVar51 = *(byte *)param_1;
    puVar53 = (undefined2 *)&UNK_001839d4;
    puVar32 = (undefined2 *)&UNK_00184eb5;
code_r0x004d95d9:
    if ((bVar51 & 0xf9) == 9) {
      puVar32 = puVar53;
    }
    if (bVar51 == 7) {
      puVar32 = puVar53;
    }
    *(undefined1 *)(puVar44 + 1) = *(undefined1 *)(puVar32 + 1);
    *puVar44 = *puVar32;
    pppppppbVar39 = (byte *******)auStack_108;
    pppppppbVar40 = param_2;
    auStack_1b8._0_10_ = in_stack_00000008;
    cVar30 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                       (param_2,pppppppbVar39,(long)puVar44 + (3 - (long)pppppppbVar39),
                        *(undefined4 *)((long)param_1 + 4));
    uVar38 = 1;
    in_stack_00000008 = (longdouble)auStack_1b8._0_10_;
    if (cVar30 != '\0') goto code_r0x004db089;
  }
  else {
    lStack_1e8 = SUB108(in_stack_00000008,0);
    uStack_1e0 = (ushort)((unkuint10)in_stack_00000008 >> 0x40);
    if ((~uStack_1e0 & 0x7fff) == 0 && lStack_1e8 == -0x8000000000000000) {
      bVar51 = *(byte *)param_1;
      puVar53 = (undefined2 *)&UNK_001743fa;
      puVar32 = (undefined2 *)&UNK_0016b346;
      goto code_r0x004d95d9;
    }
  }
  uVar37 = 6;
  if (-1 < (int)*(uint *)(param_1 + 1)) {
    uVar37 = (ulong)*(uint *)(param_1 + 1);
  }
  auStack_1b8._0_8_ = uVar37;
  uStack_148 = 0;
  uStack_140 = 0;
  pppppppbStack_158 = (byte *******)0x0;
  pppppppbStack_150 = (byte *******)0x0;
  puStack_208 = SUB108(in_stack_00000008,0);
  uStack_200 = (undefined2)((unkuint10)in_stack_00000008 >> 0x40);
  func_0x0099c750(&uStack_1d4);
  unaff_R13 = (byte *******)(ulong)uStack_1d4;
  puStack_208 = (undefined8 *)in_ST0;
  uStack_200 = (undefined2)((unkuint10)in_ST0 >> 0x40);
  func_0x0099c760(0x40);
  uVar45 = uStack_1d4 - 0x40;
  unaff_RBX = (byte *******)(ulong)uVar45;
  puStack_208 = (undefined8 *)in_ST1;
  uStack_200 = (undefined2)((unkuint10)in_ST1 >> 0x40);
  pppppppbVar40 = (byte *******)&pppppppbStack_158;
  _ZN4absl12lts_202605267uint128C1Ee();
  pppppppbVar41 = pppppppbStack_150;
  uStack_148 = CONCAT44(uStack_148._4_4_,uVar45);
  bVar51 = *(byte *)param_1;
  pppppppbVar39 = (byte *******)(ulong)bVar51;
  uVar38 = 0;
  bVar59 = (byte)uVar45;
  uVar68 = SUB81(pppppppbVar54,0);
  cVar30 = (char)uStack_1d4;
  switch(bVar51 & 0xfe) {
  case 8:
    uStack_138 = (byte ******)CONCAT71(uStack_138._1_7_,uVar68);
    pppppppbStack_130 = (byte *******)auStack_1b8._0_8_;
    if ((int)uStack_1d4 < 0x40) {
      if (uVar45 < 0xffffff80) {
        pppppppbVar39 = pppppppbStack_150;
        pppppppbVar40 = pppppppbStack_158;
        pppppppbStack_128 = param_1;
        pppppppbStack_120 = param_2;
        func_0x004dc240(pppppppbStack_158,pppppppbStack_150,0x40 - uStack_1d4,&uStack_138,0);
        goto code_r0x004db085;
      }
      uStack_e8 = 0;
      uStack_68 = 0;
      uStack_67 = 0;
      uStack_65 = 0;
      uStack_60 = 0;
      uStack_5f = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6d = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      ppuStack_f8 = (undefined8 **)0x0;
      ppuStack_f0 = (undefined8 **)0x0;
      _auStack_108 = (byte ******)0x0;
      puStack_100 = (undefined8 *)0x0;
      puVar33 = auStack_e0 + 2;
      _auStack_e0 = &UNK_002e0000;
      uStack_1d4 = 0x40 - uStack_1d4;
      pppppppbVar40 = param_1;
      if (uVar45 == 0xffffff80) {
        uVar37 = 0;
      }
      else {
        bVar51 = (byte)uStack_1d4 & 0x3f;
        uVar37 = (ulong)pppppppbStack_150 >> ((byte)uStack_1d4 & 0x3f);
        uVar56 = 0;
        if ((uStack_1d4 & 0x40) == 0) {
          uVar56 = uVar37;
          uVar37 = (ulong)pppppppbStack_158 >> bVar51 | (long)pppppppbStack_150 << 0x40 - bVar51;
        }
        if (uVar56 != 0) {
          unaff_RBX = (byte *******)0x1999999999999999;
          do {
            iVar31 = (int)(uVar56 % 10);
            pppppppbVar40 = (byte *******)(ulong)(uint)(iVar31 * 3);
            iVar31 = (int)uVar37 + (int)(uVar37 / 10) * -10 + iVar31 * 6;
            uVar45 = (iVar31 * 0xcd & 0xffffU) >> 0xb;
            uVar37 = (ulong)uVar45 + (uVar56 % 10) * 0x1999999999999999 + uVar37 / 10;
            puVar33[-1] = (char)iVar31 + (char)uVar45 * -10 | 0x30;
            puVar33 = puVar33 + -1;
            bVar72 = 9 < uVar56;
            uVar56 = uVar56 / 10;
          } while (bVar72);
        }
      }
      pppppppbVar54 = (byte *******)(puVar33 + -1);
      do {
        pppppppbVar39 = pppppppbVar54;
        *(byte *)pppppppbVar39 = (char)uVar37 + (char)(uVar37 / 10) * -10 | 0x30;
        pppppppbVar54 = (byte *******)((long)pppppppbVar39 + -1);
        bVar72 = 9 < uVar37;
        uVar37 = uVar37 / 10;
      } while (bVar72);
      *(byte *)pppppppbVar54 = 0x30;
      pppppppbStack_128 = param_1;
      pppppppbStack_120 = param_2;
      puVar33 = (undefined1 *)
                func_0x004dd190(pppppppbStack_158,pppppppbStack_150,auStack_e0 + 3,uStack_1d4,
                                auStack_1b8._0_8_);
      param_1 = pppppppbVar40;
      if (*(byte *)pppppppbVar54 != 0x30) {
        pppppppbVar39 = pppppppbVar54;
      }
    }
    else {
      if (pppppppbStack_150 == (byte *******)0x0) {
        lVar35 = 0x3f;
        if (pppppppbStack_158 != (byte *******)0x0) {
          for (; (ulong)pppppppbStack_158 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uStack_1d4 = uStack_1d4 - ((uint)lVar35 ^ 0x3f);
        unaff_R13 = (byte *******)(ulong)uStack_1d4;
        if (0x80 < uStack_1d4) goto code_r0x004d9eb1;
      }
      else {
        lVar35 = 0x3f;
        if (pppppppbStack_150 != (byte *******)0x0) {
          for (; (ulong)pppppppbStack_150 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar60 = (uStack_1d4 - ((uint)lVar35 ^ 0x3f)) + 0x40;
        unaff_R13 = (byte *******)(ulong)uVar60;
        if (0x80 < (int)uVar60) {
code_r0x004d9eb1:
          uStack_178 = (byte *******)((ulong)uStack_178._1_7_ << 8);
          _auStack_108 = (byte ******)&uStack_138;
          puStack_100 = &uStack_178;
          puVar57 = &UNK_004dc900;
          pppppppbStack_128 = param_1;
          pppppppbStack_120 = param_2;
          goto code_r0x004d9f57;
        }
      }
      uStack_e8 = 0;
      uStack_68 = 0;
      uStack_67 = 0;
      uStack_65 = 0;
      uStack_60 = 0;
      uStack_5f = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6d = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      ppuStack_f8 = (undefined8 **)0x0;
      ppuStack_f0 = (undefined8 **)0x0;
      _auStack_108 = (byte ******)0x0;
      puStack_100 = (undefined8 *)0x0;
      pppppppbVar39 = (byte *******)(auStack_e0 + 2);
      _auStack_e0 = &UNK_002e0000;
      puVar33 = auStack_e0 + 3;
      if ((int)unaff_R13 < 0x41) {
        uVar37 = (long)pppppppbStack_158 << (bVar59 & 0x3f);
        do {
          *(byte *)((long)pppppppbVar39 + -1) = (char)uVar37 + (char)(uVar37 / 10) * -10 | 0x30;
          pppppppbVar39 = (byte *******)((long)pppppppbVar39 + -1);
          bVar72 = 9 < uVar37;
          uVar37 = uVar37 / 10;
          pppppppbStack_128 = param_1;
          pppppppbStack_120 = param_2;
        } while (bVar72);
      }
      else {
        uVar56 = (long)pppppppbStack_158 << (bVar59 & 0x3f);
        uVar37 = 0;
        if ((uVar45 & 0x40) == 0) {
          uVar37 = uVar56;
          uVar56 = (long)pppppppbStack_150 << (bVar59 & 0x3f) |
                   (ulong)pppppppbStack_158 >> 0x40 - (bVar59 & 0x3f);
        }
        if (uVar56 != 0) {
          do {
            iVar31 = (int)(uVar56 % 10);
            unaff_RBX = (byte *******)(ulong)(uint)(iVar31 * 3);
            iVar31 = (int)uVar37 + (int)(uVar37 / 10) * -10 + iVar31 * 6;
            uVar45 = (iVar31 * 0xcd & 0xffffU) >> 0xb;
            uVar37 = (ulong)uVar45 + (uVar56 % 10) * 0x1999999999999999 + uVar37 / 10;
            *(byte *)((long)pppppppbVar39 + -1) = (char)iVar31 + (char)uVar45 * -10 | 0x30;
            pppppppbVar39 = (byte *******)((long)pppppppbVar39 + -1);
            bVar72 = 9 < uVar56;
            uVar56 = uVar56 / 10;
          } while (bVar72);
        }
        do {
          *(byte *)((long)pppppppbVar39 + -1) = (char)uVar37 + (char)(uVar37 / 10) * -10 | 0x30;
          pppppppbVar39 = (byte *******)((long)pppppppbVar39 + -1);
          bVar72 = 9 < uVar37;
          uVar37 = uVar37 / 10;
          pppppppbStack_128 = param_1;
          pppppppbStack_120 = param_2;
        } while (bVar72);
      }
    }
    pppppppbVar48 = (byte *******)(puVar33 + -(long)pppppppbVar39);
    if ((pppppppbStack_130 == (byte *******)0x0) && (((ulong)*pppppppbStack_128 & 0x800) == 0)) {
      pppppppbVar48 = (byte *******)((long)pppppppbVar48 + -1);
    }
    pppppppbVar55 =
         (byte *******)((long)pppppppbStack_130 + (long)(auStack_e0 + (3 - (long)puVar33)));
    uStack_178 = (byte *******)&UNK_00162ac9;
    pppppppbStack_170 = (byte *******)0x0;
    puStack_208 = (undefined8 *)&UNK_00162ac9;
    uStack_200 = 0;
    uStack_1fe = 0;
    uVar38 = 0;
    break;
  case 10:
    bVar51 = bVar51 & 0xf9;
    pppppppbVar67 = (byte *******)(ulong)bVar51;
    uStack_178 = (byte *******)CONCAT71(uStack_178._1_7_,uVar68);
    pppppppbStack_170 = (byte *******)auStack_1b8._0_8_;
    pppppppbStack_168 = param_1;
    pppppppbStack_160 = param_2;
    if ((int)uStack_1d4 < 0x41) {
      if ((int)uStack_1d4 < -0x40) {
        pppppppbVar39 = pppppppbStack_150;
        pppppppbVar40 = pppppppbStack_158;
        func_0x004dd630(pppppppbStack_158,pppppppbStack_150,uVar45,bVar51 == 9,&uStack_178,0);
        param_1 = pppppppbVar41;
        goto code_r0x004db085;
      }
    }
    else {
      if (pppppppbStack_150 == (byte *******)0x0) {
        lVar35 = 0x3f;
        if (pppppppbStack_158 != (byte *******)0x0) {
          for (; (ulong)pppppppbStack_158 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar60 = ((uint)lVar35 ^ 0x3f) + 0x40;
      }
      else {
        lVar35 = 0x3f;
        if (pppppppbStack_150 != (byte *******)0x0) {
          for (; (ulong)pppppppbStack_150 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar60 = (uint)lVar35 ^ 0x3f;
      }
      if (0x80 < (int)((uStack_1d4 - uVar60) + 0x40)) {
        puStack_188 = (undefined8 *)CONCAT71(puStack_188._1_7_,bVar51 == 9);
        uStack_138 = (byte ******)0x0;
        _auStack_108 = (byte ******)&uStack_178;
        puStack_100 = &uStack_138;
        puVar57 = &UNK_004dd690;
        goto code_r0x004d9f4d;
      }
    }
    if (pppppppbStack_150 != (byte *******)0x0 || pppppppbStack_158 != (byte *******)0x0) {
      if (pppppppbStack_150 == (byte *******)0x0) {
        lVar35 = 0x3f;
        if (pppppppbStack_158 != (byte *******)0x0) {
          for (; (ulong)pppppppbStack_158 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar60 = ((uint)lVar35 ^ 0x3f) + 0x40;
      }
      else {
        lVar35 = 0x3f;
        if (pppppppbStack_150 != (byte *******)0x0) {
          for (; (ulong)pppppppbStack_150 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar60 = (uint)lVar35 ^ 0x3f;
      }
      uStack_68 = 0;
      uStack_67 = 0;
      uStack_65 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6d = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      _auStack_e0 = (undefined *)0x0;
      ppuStack_f8 = (undefined8 **)0x0;
      ppuStack_f0 = (undefined8 **)0x0;
      _auStack_108 = (byte ******)0x0;
      puStack_100 = (undefined8 *)0x0;
      if ((int)uStack_1d4 < 0x40) {
        uStack_1ac = (uint)bVar51;
        uVar20 = (undefined3)(uStack_1d4 >> 8);
        if (uVar45 < 0xffffff81) {
          pppppppbVar40 = (byte *******)(auStack_e0 + 1);
          _auStack_e0 = (undefined *)0x3000;
          pbVar71 = (byte *)(auStack_1b8._0_8_ + 1);
          uVar37 = 1;
          pbVar42 = (byte *)0x0;
          bVar72 = false;
          auStack_1b8[0] = 1;
          pppppppbVar39 = pppppppbStack_158;
code_r0x004da534:
          bVar51 = cVar30 + 0x40;
          unaff_R13 = (byte *******)(ulong)CONCAT31(uVar20,bVar51);
          uVar61 = (long)pppppppbVar39 << (bVar51 & 0x3f);
          uVar45 = 0;
          bVar74 = (bVar51 & 0x40) != 0;
          uVar56 = (long)pppppppbVar41 << (bVar51 & 0x3f) |
                   (ulong)pppppppbVar39 >> 0x40 - (bVar51 & 0x3f);
          if (bVar74) {
            uVar56 = uVar61;
          }
          uVar46 = 0;
          if (!bVar74) {
            uVar46 = uVar61;
          }
          bVar74 = uVar46 != 0;
          pbVar71 = pbVar71 + uVar37;
          pppppppbVar48 = pppppppbVar40;
          if ((pbVar71 == (byte *)0x0) || (uVar46 == 0)) {
            pppppppbVar54 = (byte *******)(ulong)auStack_1b8[0];
          }
          else {
            uVar45 = 0;
            unaff_R13 = (byte *******)0xa;
            pppppppbVar54 = (byte *******)(ulong)auStack_1b8[0];
            do {
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar46;
              uVar46 = SUB168(auVar5 * ZEXT816(10),0);
              auVar22._8_8_ = 0;
              auVar22._0_8_ = SUB168(auVar5 * ZEXT816(10),8);
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar56;
              auVar22 = auVar6 * ZEXT816(10) + auVar22;
              uVar56 = auVar22._0_8_;
              if (((char)pppppppbVar54 == '\x01') && (auVar22._8_8_ == 0)) {
                uVar45 = uVar45 + 1;
                pppppppbVar54 = (byte *******)0x1;
              }
              else {
                *(byte *)pppppppbVar48 = auVar22[8] + 0x30;
                pppppppbVar48 = (byte *******)((long)pppppppbVar48 + 1);
                pbVar71 = pbVar71 + -1;
                pppppppbVar54 = (byte *******)0x0;
              }
              bVar74 = uVar46 != 0;
            } while ((pbVar71 != (byte *)0x0) && (uVar46 != 0));
          }
          bVar73 = uVar56 != 0;
          if ((pbVar71 != (byte *)0x0) && (uVar56 != 0)) {
            unaff_R13 = (byte *******)0x199999999999999a;
            do {
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar56;
              uVar37 = SUB168(auVar7 * ZEXT816(10),0);
              if (((char)pppppppbVar54 == '\x01') && (uVar56 < 0x199999999999999a)) {
                uVar45 = uVar45 + 1;
                pppppppbVar54 = (byte *******)0x1;
              }
              else {
                *(byte *)pppppppbVar48 = SUB161(auVar7 * ZEXT816(10),8) | 0x30;
                pppppppbVar48 = (byte *******)((long)pppppppbVar48 + 1);
                pbVar71 = pbVar71 + -1;
                pppppppbVar54 = (byte *******)0x0;
              }
              bVar73 = uVar37 != 0;
            } while ((pbVar71 != (byte *)0x0) && (uVar56 = uVar37, uVar37 != 0));
          }
        }
        else {
          bVar51 = 0x40 - cVar30;
          pppppppbStack_1c0 = pppppppbStack_158;
          uVar56 = (ulong)pppppppbStack_150 >> (bVar51 & 0x3f);
          uVar61 = 0;
          if ((bVar51 & 0x40) == 0) {
            uVar61 = uVar56;
            uVar56 = (ulong)pppppppbStack_158 >> (bVar51 & 0x3f) |
                     (long)pppppppbStack_150 << 0x40 - (bVar51 & 0x3f);
          }
          pppppppbVar54 = (byte *******)(auStack_108 + 2);
          pppppppbVar40 =
               (byte *******)
               _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferENS0_7uint128EPc
                         (uVar56,uVar61,pppppppbVar54);
          *(byte *)pppppppbVar40 = 0x30;
          bVar72 = uVar56 == 0 && uVar61 == 0;
          auStack_1b8[0] = bVar72;
          if (bVar72) {
            bVar72 = false;
            pbVar42 = (byte *)0x0;
          }
          else {
            pbVar42 = (byte *)((long)pppppppbVar40 - (long)pppppppbVar54);
            bVar72 = false;
            if (((byte *)((long)pppppppbStack_170 + 2) < pbVar42) &&
               ((byte *******)((long)pppppppbStack_170 + (long)(auStack_108 + 4)) != pppppppbVar40))
            {
              pppppppbVar39 = (byte *******)((long)pppppppbStack_170 + (long)(auStack_108 + 5));
              do {
                bVar72 = *(byte *)((long)pppppppbVar39 + -1) != 0x30;
                if (bVar72) break;
                bVar74 = pppppppbVar39 != pppppppbVar40;
                pppppppbVar39 = (byte *******)((long)pppppppbVar39 + 1);
              } while (bVar74);
            }
          }
          pbVar34 = (byte *)((long)pppppppbStack_170 + 1);
          uVar45 = 0;
          pbVar71 = (byte *)0x0;
          if (pbVar42 <= pbVar34) {
            pbVar71 = pbVar34 + -(long)pbVar42;
          }
          uVar37 = (ulong)(pbVar42 <= pbVar34);
          pppppppbVar39 = pppppppbStack_1c0;
          if ((int)uStack_1d4 < 0) goto code_r0x004da534;
          bVar75 = uVar56 == 0 && uVar61 == 0;
          bVar51 = cVar30 + 0x40;
          unaff_R13 = (byte *******)(ulong)CONCAT31(uVar20,bVar51);
          uVar56 = (long)pppppppbStack_1c0 << (bVar51 & 0x3f);
          bVar74 = (bVar51 & 0x40) != 0;
          uVar37 = (long)pppppppbVar41 << (bVar51 & 0x3f) |
                   (ulong)pppppppbStack_1c0 >> 0x40 - (bVar51 & 0x3f);
          if (bVar74) {
            uVar37 = uVar56;
          }
          uVar61 = 0;
          if (!bVar74) {
            uVar61 = uVar56;
          }
          bVar74 = uVar61 != 0;
          pppppppbVar39 = (byte *******)(pbVar71 + (pbVar42 <= pbVar34));
          pppppppbVar48 = pppppppbVar40;
          if ((pppppppbVar39 != (byte *******)0x0) && (uVar61 != 0)) {
            uVar45 = 0;
            pppppppbVar54 = (byte *******)0xa;
            do {
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar61;
              uVar61 = SUB168(auVar3 * ZEXT816(10),0);
              auVar21._8_8_ = 0;
              auVar21._0_8_ = SUB168(auVar3 * ZEXT816(10),8);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = uVar37;
              auVar21 = auVar4 * ZEXT816(10) + auVar21;
              uVar37 = auVar21._0_8_;
              if ((bVar75) && (auVar21._8_8_ == 0)) {
                uVar45 = uVar45 + 1;
                bVar75 = true;
              }
              else {
                *(byte *)pppppppbVar48 = auVar21[8] + 0x30;
                pppppppbVar48 = (byte *******)((long)pppppppbVar48 + 1);
                pppppppbVar39 = (byte *******)((long)pppppppbVar39 + -1);
                bVar75 = false;
              }
              bVar74 = uVar61 != 0;
            } while ((pppppppbVar39 != (byte *******)0x0) && (uVar61 != 0));
          }
          bVar73 = uVar37 != 0;
          if ((pppppppbVar39 != (byte *******)0x0) && (uVar37 != 0)) {
            pppppppbVar54 = (byte *******)0x199999999999999a;
            do {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar37;
              uVar56 = SUB168(auVar8 * ZEXT816(10),0);
              if ((bVar75) && (uVar37 < 0x199999999999999a)) {
                uVar45 = uVar45 + 1;
                bVar75 = true;
                pppppppbVar41 = pppppppbVar39;
              }
              else {
                *(byte *)pppppppbVar48 = SUB161(auVar8 * ZEXT816(10),8) | 0x30;
                pppppppbVar48 = (byte *******)((long)pppppppbVar48 + 1);
                pppppppbVar41 = (byte *******)((long)pppppppbVar39 + -1);
                bVar75 = false;
              }
              bVar73 = uVar56 != 0;
              unaff_R13 = pppppppbVar39;
            } while ((pppppppbVar41 != (byte *******)0x0) &&
                    (uVar37 = uVar56, unaff_R13 = pppppppbVar41, pppppppbVar39 = pppppppbVar41,
                    uVar56 != 0));
          }
        }
        bVar72 = (bool)(bVar72 | bVar73 | bVar74);
        *(byte *)pppppppbVar48 = 0x30;
        pbVar71 = (byte *)((long)pppppppbVar48 + ((long)pbVar42 - (long)pppppppbVar40));
        pppppppbVar39 = (byte *******)(auStack_108 + 2);
        if (auStack_1b8[0] != '\0') {
          pppppppbVar39 = pppppppbVar40;
        }
        uVar60 = ~(uint)(auStack_108 + 2) + (int)pppppppbVar40;
        if (auStack_1b8[0] != '\0') {
          uVar60 = ~uVar45;
        }
        bVar51 = (byte)uStack_1ac;
      }
      else {
        uVar60 = (uStack_1d4 - uVar60) + 0x40;
        unaff_R13 = (byte *******)(ulong)uVar60;
        if ((int)uVar60 < 0x41) {
          pppppppbVar48 =
               (byte *******)
               _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEmPc
                         ((long)pppppppbStack_158 << (bVar59 & 0x3f),auStack_108 + 2);
        }
        else {
          uVar37 = (long)pppppppbStack_158 << (bVar59 & 0x3f);
          uVar56 = 0;
          if ((uVar45 & 0x40) == 0) {
            uVar56 = uVar37;
            uVar37 = (long)pppppppbStack_150 << (bVar59 & 0x3f) |
                     (ulong)pppppppbStack_158 >> 0x40 - (bVar59 & 0x3f);
          }
          pppppppbVar48 =
               (byte *******)
               _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferENS0_7uint128EPc
                         (uVar56,uVar37,auStack_108 + 2);
        }
        pppppppbVar39 = (byte *******)(auStack_108 + 2);
        *(byte *)pppppppbVar48 = 0x30;
        pbVar71 = (byte *)((long)pppppppbVar48 - (long)pppppppbVar39);
        uVar60 = (int)pbVar71 - 1;
        bVar72 = false;
        pppppppbVar54 = pppppppbVar67;
        if (((byte *)((long)pppppppbStack_170 + 2) < pbVar71) &&
           ((byte *******)((long)pppppppbStack_170 + (long)(auStack_108 + 4)) != pppppppbVar48)) {
          pppppppbVar40 = (byte *******)((long)pppppppbStack_170 + (long)(auStack_108 + 5));
          do {
            bVar72 = *(byte *)((long)pppppppbVar40 + -1) != 0x30;
            if (bVar72) break;
            bVar74 = pppppppbVar40 != pppppppbVar48;
            pppppppbVar40 = (byte *******)((long)pppppppbVar40 + 1);
          } while (bVar74);
        }
      }
      unaff_RBX = (byte *******)((byte *)((long)pppppppbStack_170 + 1) + -(long)pbVar71);
      if ((byte *)((long)pppppppbStack_170 + 1) < pbVar71 || unaff_RBX == (byte *******)0x0) {
        *(byte *)((long)pppppppbVar39 + -1) = 0x30;
        pbVar71 = (byte *)((long)pppppppbVar39 + (long)pppppppbStack_170);
        pppppppbVar48 = (byte *******)(pbVar71 + 1);
        if ('5' < (char)((byte *)((long)pppppppbVar39 + 1))[(long)pppppppbStack_170]) {
          pbVar71 = (byte *)((long)pppppppbStack_170 + (long)pppppppbVar39);
          do {
            bVar59 = *pbVar71;
            if (bVar59 != 0x2e) {
              if (bVar59 != 0x39) goto code_r0x004da813;
              *pbVar71 = 0x30;
            }
            pbVar71 = pbVar71 + -1;
          } while( true );
        }
        if (((byte *)((long)pppppppbVar39 + 1))[(long)pppppppbStack_170] == 0x35) {
          if (bVar72) {
            pbVar71 = (byte *)((long)pppppppbStack_170 + (long)pppppppbVar39);
            do {
              bVar59 = *pbVar71;
              if (bVar59 != 0x2e) {
                if (bVar59 != 0x39) goto code_r0x004da813;
                *pbVar71 = 0x30;
              }
              pbVar71 = pbVar71 + -1;
            } while( true );
          }
          pbVar71 = pbVar71 + -(ulong)(*pbVar71 == 0x2e);
          bVar59 = *pbVar71;
          if ((bVar59 & 0x81) == 1) {
            do {
              if (bVar59 != 0x2e) {
                if (bVar59 != 0x39) goto code_r0x004da813;
                *pbVar71 = 0x30;
              }
              bVar59 = pbVar71[-1];
              pbVar71 = pbVar71 + -1;
            } while( true );
          }
        }
        goto joined_r0x004da87a;
      }
      goto joined_r0x004da87a;
    }
    if (((byte *******)auStack_1b8._0_8_ == (byte *******)0x0) && (((ulong)*param_1 & 0x800) == 0))
    {
      unaff_RBX = (byte *******)&UNK_0017eb28;
    }
    else {
      unaff_RBX = (byte *******)&UNK_0016f16d;
    }
    pppppppbVar48 = (byte *******)func_0x0099bcf0(unaff_RBX);
    puStack_208 = (undefined8 *)&UNK_00159b05;
    if (bVar51 == 9) {
      puStack_208 = (undefined8 *)&UNK_001806ec;
    }
    uStack_180 = 4;
    uStack_200 = 4;
    uStack_1fe = 0;
    pppppppbVar40 = (byte *******)&uStack_178;
    uVar38 = 0;
    pppppppbVar39 = unaff_RBX;
    pppppppbVar55 = (byte *******)auStack_1b8._0_8_;
    puStack_188 = puStack_208;
    goto code_r0x004db080;
  case 0xc:
    pppppppbStack_1c0 = param_1;
    pppppppbVar55 = (byte *******)(auStack_1b8._0_8_ + -1);
    if ((byte *******)auStack_1b8._0_8_ == (byte *******)0x0) {
      pppppppbVar55 = (byte *******)auStack_1b8._0_8_;
    }
    if (pppppppbStack_150 == (byte *******)0x0) {
      lVar35 = 0x3f;
      if (pppppppbStack_158 != (byte *******)0x0) {
        for (; (ulong)pppppppbStack_158 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      uVar60 = ((uint)lVar35 ^ 0x3f) + 0x40;
    }
    else {
      lVar35 = 0x3f;
      if (pppppppbStack_150 != (byte *******)0x0) {
        for (; (ulong)pppppppbStack_150 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      uVar60 = (uint)lVar35 ^ 0x3f;
    }
    if (((int)uStack_1d4 < 0x40) || ((int)((uStack_1d4 - uVar60) + 0x40) < 0x81)) {
      if ((int)uStack_1d4 < -0x40) {
        uStack_138 = (byte ******)CONCAT71(uStack_138._1_7_,uVar68);
        uStack_178 = pppppppbStack_158;
        puStack_198 = (undefined8 *)CONCAT71(puStack_198._1_7_,(bVar51 & 0xf9) == 9);
        pppppppbStack_170 = pppppppbStack_150;
        puStack_188 = (undefined8 *)CONCAT44(puStack_188._4_4_,uVar45);
        _auStack_108 = (byte ******)&uStack_138;
        puStack_100 = &uStack_178;
        ppuStack_f8 = &puStack_188;
        ppuStack_f0 = &puStack_198;
        pppppppbVar39 = pppppppbStack_150;
        pppppppbVar40 = pppppppbStack_158;
        pppppppbStack_130 = pppppppbVar55;
        pppppppbStack_128 = param_1;
        pppppppbStack_120 = param_2;
        func_0x004dcc80(pppppppbStack_158,pppppppbStack_150,0x40 - uStack_1d4,auStack_108,
                        &UNK_004debf0);
        param_1 = pppppppbVar41;
        goto code_r0x004db085;
      }
      uStack_178 = (byte *******)CONCAT71(uStack_178._1_7_,uVar68);
      pppppppbStack_170 = pppppppbVar55;
      pppppppbStack_168 = param_1;
      pppppppbStack_160 = param_2;
      if (pppppppbStack_150 == (byte *******)0x0 && pppppppbStack_158 == (byte *******)0x0) {
        bVar72 = ((ulong)*param_1 & 0x800) != 0;
        pppppppbVar39 = (byte *******)&UNK_0016f16d;
        if (!bVar72) {
          pppppppbVar39 = (byte *******)&UNK_0017eb28;
          pppppppbVar55 = (byte *******)0x0;
        }
        pppppppbVar48 = (byte *******)((ulong)bVar72 + 1);
        puStack_188 = (undefined8 *)&UNK_00162ac9;
        uStack_180 = 0;
        puStack_208 = (undefined8 *)&UNK_00162ac9;
        uStack_200 = 0;
        uStack_1fe = 0;
        pppppppbVar40 = (byte *******)&uStack_178;
        uVar38 = 0;
        pppppppbVar67 = param_2;
        goto code_r0x004db080;
      }
      if (pppppppbStack_150 == (byte *******)0x0) {
        lVar35 = 0x3f;
        if (pppppppbStack_158 != (byte *******)0x0) {
          for (; (ulong)pppppppbStack_158 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar60 = ((uint)lVar35 ^ 0x3f) + 0x40;
      }
      else {
        lVar35 = 0x3f;
        if (pppppppbStack_150 != (byte *******)0x0) {
          for (; (ulong)pppppppbStack_150 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar60 = (uint)lVar35 ^ 0x3f;
      }
      uVar66 = uStack_1d4 + 0x40;
      pppppppbVar67 = (byte *******)(ulong)uVar66;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_67 = 0;
      uStack_65 = 0;
      uStack_60 = 0;
      uStack_5f = 0;
      uStack_5d = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6d = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      _auStack_e0 = (undefined *)0x0;
      ppuStack_f8 = (undefined8 **)0x0;
      ppuStack_f0 = (undefined8 **)0x0;
      _auStack_108 = (byte ******)0x0;
      puStack_100 = (undefined8 *)0x0;
      uStack_49 = 0;
      uStack_48 = 0;
      pbVar71 = (byte *)&uStack_e8;
      uStack_1ac = (uint)(bVar51 & 0xf9);
      pppppppbStack_1c8 = pppppppbVar55;
      if ((int)uStack_1d4 < 0x40) {
        bVar51 = (byte)uVar66;
        if (uVar45 < 0xffffff81) {
          pbVar42 = (byte *)((long)&uStack_c8 + 7);
          uStack_c8 = 0x3000000000000000;
          pbVar71 = (byte *)((long)pppppppbVar55 + 1);
          uVar37 = 1;
          auStack_1b8._0_10_ = (unkuint10)(ushort)auStack_1b8._8_2_ << 0x40;
          bVar72 = false;
          bVar74 = true;
          pppppppbVar54 = pppppppbStack_158;
code_r0x004daa70:
          uVar61 = (long)pppppppbVar54 << (bVar51 & 0x3f);
          uVar45 = 0;
          bVar73 = (uVar66 & 0x40) != 0;
          uVar56 = (long)pppppppbVar41 << (bVar51 & 0x3f) |
                   (ulong)pppppppbVar54 >> 0x40 - (bVar51 & 0x3f);
          if (bVar73) {
            uVar56 = uVar61;
          }
          uVar46 = 0;
          if (!bVar73) {
            uVar46 = uVar61;
          }
          bVar75 = uVar46 != 0;
          pbVar71 = pbVar71 + uVar37;
          pbVar34 = pbVar42;
          bVar73 = bVar74;
          if ((pbVar71 != (byte *)0x0) && (uVar46 != 0)) {
            uVar45 = 0;
            pppppppbVar67 = (byte *******)0xa;
            do {
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar46;
              uVar46 = SUB168(auVar11 * ZEXT816(10),0);
              auVar24._8_8_ = 0;
              auVar24._0_8_ = SUB168(auVar11 * ZEXT816(10),8);
              auVar12._8_8_ = 0;
              auVar12._0_8_ = uVar56;
              auVar24 = auVar12 * ZEXT816(10) + auVar24;
              uVar56 = auVar24._0_8_;
              if ((bVar73 == true) && (auVar24._8_8_ == 0)) {
                uVar45 = uVar45 + 1;
                bVar73 = true;
              }
              else {
                *pbVar34 = auVar24[8] + 0x30;
                pbVar34 = pbVar34 + 1;
                pbVar71 = pbVar71 + -1;
                bVar73 = false;
              }
              bVar75 = uVar46 != 0;
            } while ((pbVar71 != (byte *)0x0) && (uVar46 != 0));
          }
          pppppppbStack_1d0 = (byte *******)CONCAT71(pppppppbStack_1d0._1_7_,bVar74);
          bVar74 = uVar56 != 0;
          if ((pbVar71 != (byte *)0x0) && (uVar56 != 0)) {
            pppppppbVar67 = (byte *******)0x199999999999999a;
            do {
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar56;
              uVar37 = SUB168(auVar13 * ZEXT816(10),0);
              if ((bVar73 == true) && (uVar56 < 0x199999999999999a)) {
                uVar45 = uVar45 + 1;
                bVar73 = true;
              }
              else {
                *pbVar34 = SUB161(auVar13 * ZEXT816(10),8) | 0x30;
                pbVar34 = pbVar34 + 1;
                pbVar71 = pbVar71 + -1;
                bVar73 = false;
              }
              bVar74 = uVar37 != 0;
            } while ((pbVar71 != (byte *)0x0) && (uVar56 = uVar37, uVar37 != 0));
          }
        }
        else {
          bVar59 = 0x40 - cVar30;
          pppppppbStack_1d0 = pppppppbStack_158;
          uVar37 = (ulong)pppppppbStack_150 >> (bVar59 & 0x3f);
          uVar61 = uVar37;
          uVar56 = (ulong)pppppppbStack_158 >> (bVar59 & 0x3f) |
                   (long)pppppppbStack_150 << 0x40 - (bVar59 & 0x3f);
          if ((bVar59 & 0x40) != 0) {
            uVar61 = 0;
            uVar56 = uVar37;
          }
          pbVar42 = (byte *)_ZN4absl12lts_2026052616numbers_internal15FastIntToBufferENS0_7uint128EPc
                                      (uVar56,uVar61,&uStack_e8);
          *pbVar42 = 0x30;
          bVar74 = uVar56 == 0 && uVar61 == 0;
          if (bVar74) {
            bVar72 = false;
            pbVar34 = (byte *)0x0;
          }
          else {
            pbVar34 = pbVar42 + -(long)&uStack_e8;
            bVar72 = false;
            if (((byte *)((long)pppppppbStack_1c8 + 2) < pbVar34) &&
               ((byte *)((long)pppppppbStack_1c8 + (long)&uStack_e8 + 2) != pbVar42)) {
              pbVar71 = (byte *)((long)&uStack_e8 +
                                (ulong)(auStack_1b8._0_8_ == 0) + auStack_1b8._0_8_ + 2);
              do {
                bVar72 = pbVar71[-1] != 0x30;
                if (bVar72) break;
                bVar73 = pbVar71 != pbVar42;
                pbVar71 = pbVar71 + 1;
              } while (bVar73);
            }
          }
          pbVar1 = (byte *)((long)pppppppbStack_1c8 + 1);
          uVar45 = 0;
          pbVar71 = (byte *)0x0;
          if (pbVar34 <= pbVar1) {
            pbVar71 = pbVar1 + -(long)pbVar34;
          }
          uVar37 = (ulong)(pbVar34 <= pbVar1);
          auStack_1b8._0_8_ = pbVar34;
          pppppppbVar54 = pppppppbStack_1d0;
          if ((int)uStack_1d4 < 0) goto code_r0x004daa70;
          bVar73 = uVar56 == 0 && uVar61 == 0;
          uVar56 = (long)pppppppbStack_1d0 << (bVar51 & 0x3f);
          bVar75 = (uVar66 & 0x40) != 0;
          uVar37 = (long)pppppppbVar41 << (bVar51 & 0x3f) |
                   (ulong)pppppppbStack_1d0 >> 0x40 - (bVar51 & 0x3f);
          if (bVar75) {
            uVar37 = uVar56;
          }
          uVar61 = 0;
          if (!bVar75) {
            uVar61 = uVar56;
          }
          bVar75 = uVar61 != 0;
          pbVar71 = pbVar71 + (pbVar34 <= pbVar1);
          pbVar34 = pbVar42;
          if ((pbVar71 != (byte *)0x0) && (uVar61 != 0)) {
            uVar45 = 0;
            pppppppbVar67 = (byte *******)0xa;
            do {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar61;
              uVar61 = SUB168(auVar9 * ZEXT816(10),0);
              auVar23._8_8_ = 0;
              auVar23._0_8_ = SUB168(auVar9 * ZEXT816(10),8);
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar37;
              auVar23 = auVar10 * ZEXT816(10) + auVar23;
              uVar37 = auVar23._0_8_;
              if ((bVar73) && (auVar23._8_8_ == 0)) {
                uVar45 = uVar45 + 1;
                bVar73 = true;
              }
              else {
                *pbVar34 = auVar23[8] + 0x30;
                pbVar34 = pbVar34 + 1;
                pbVar71 = pbVar71 + -1;
                bVar73 = false;
              }
              bVar75 = uVar61 != 0;
            } while ((pbVar71 != (byte *)0x0) && (uVar61 != 0));
          }
          pppppppbStack_1d0 = (byte *******)CONCAT71(pppppppbStack_1d0._1_7_,bVar74);
          bVar74 = uVar37 != 0;
          if ((pbVar71 != (byte *)0x0) && (uVar37 != 0)) {
            pppppppbVar67 = (byte *******)0x199999999999999a;
            do {
              auVar14._8_8_ = 0;
              auVar14._0_8_ = uVar37;
              uVar56 = SUB168(auVar14 * ZEXT816(10),0);
              if ((bVar73) && (uVar37 < 0x199999999999999a)) {
                uVar45 = uVar45 + 1;
                bVar73 = true;
              }
              else {
                *pbVar34 = SUB161(auVar14 * ZEXT816(10),8) | 0x30;
                pbVar34 = pbVar34 + 1;
                pbVar71 = pbVar71 + -1;
                bVar73 = false;
              }
              bVar74 = uVar56 != 0;
            } while ((pbVar71 != (byte *)0x0) && (uVar37 = uVar56, uVar56 != 0));
          }
        }
        bVar72 = (bool)(bVar72 | bVar74 | bVar75);
        *pbVar34 = 0x30;
        pppppppbVar54 = (byte *******)(pbVar34 + (auStack_1b8._0_8_ - (long)pbVar42));
        pbVar71 = (byte *)&uStack_e8;
        uVar60 = ~(uint)&uStack_e8 + (int)pbVar42;
        if ((char)pppppppbStack_1d0 != '\0') {
          pbVar71 = pbVar42;
          uVar60 = ~uVar45;
        }
      }
      else {
        pppppppbVar67 = (byte *******)(ulong)(uVar66 - uVar60);
        if ((int)(uVar66 - uVar60) < 0x41) {
          pbVar34 = (byte *)_ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEmPc
                                      ((long)pppppppbStack_158 << (bVar59 & 0x3f),pbVar71);
        }
        else {
          uVar37 = (long)pppppppbStack_158 << (bVar59 & 0x3f);
          uVar56 = 0;
          if ((uVar45 & 0x40) == 0) {
            uVar56 = uVar37;
            uVar37 = (long)pppppppbStack_150 << (bVar59 & 0x3f) |
                     (ulong)pppppppbStack_158 >> 0x40 - (bVar59 & 0x3f);
          }
          pbVar34 = (byte *)_ZN4absl12lts_2026052616numbers_internal15FastIntToBufferENS0_7uint128EPc
                                      (uVar56,uVar37,pbVar71);
        }
        *pbVar34 = 0x30;
        pppppppbVar54 = (byte *******)(pbVar34 + -(long)pbVar71);
        uVar60 = (int)pppppppbVar54 - 1;
        bVar72 = false;
        if (((byte *******)((long)pppppppbStack_1c8 + 2) < pppppppbVar54) &&
           ((byte *)((long)pppppppbStack_1c8 + (long)&uStack_e8 + 2) != pbVar34)) {
          pbVar42 = (byte *)((long)&uStack_e8 +
                            (ulong)(auStack_1b8._0_8_ == 0) + auStack_1b8._0_8_ + 2);
          do {
            bVar72 = pbVar42[-1] != 0x30;
            if (bVar72) break;
            bVar74 = pbVar42 != pbVar34;
            pbVar42 = pbVar42 + 1;
          } while (bVar74);
        }
      }
      pppppppbVar41 = pppppppbStack_1c0;
      pppppppbVar39 = (byte *******)((long)pppppppbStack_1c8 + 1);
      unaff_RBX = (byte *******)((long)pppppppbVar39 - (long)pppppppbVar54);
      if (pppppppbVar39 < pppppppbVar54 || unaff_RBX == (byte *******)0x0) {
        pbVar71[-1] = 0x30;
        pbVar42 = pbVar71 + (long)pppppppbStack_1c8;
        pbVar34 = pbVar42 + 1;
        if ('5' < (char)(pbVar71 + 1)[(long)pppppppbStack_1c8]) {
          pbVar42 = pbVar71 + (long)pppppppbStack_1c8;
          do {
            bVar51 = *pbVar42;
            if (bVar51 != 0x2e) {
              if (bVar51 != 0x39) goto code_r0x004dacd9;
              *pbVar42 = 0x30;
            }
            pbVar42 = pbVar42 + -1;
          } while( true );
        }
        if ((pbVar71 + 1)[(long)pppppppbStack_1c8] == 0x35) {
          if (bVar72) {
            pbVar42 = pbVar71 + (long)pppppppbStack_1c8;
            do {
              bVar51 = *pbVar42;
              if (bVar51 != 0x2e) {
                if (bVar51 != 0x39) goto code_r0x004dacd9;
                *pbVar42 = 0x30;
              }
              pbVar42 = pbVar42 + -1;
            } while( true );
          }
          pbVar42 = pbVar42 + -(ulong)(*pbVar42 == 0x2e);
          bVar51 = *pbVar42;
          if ((bVar51 & 0x81) == 1) {
            do {
              if (bVar51 != 0x2e) {
                if (bVar51 != 0x39) goto code_r0x004dacd9;
                *pbVar42 = 0x30;
              }
              bVar51 = pbVar42[-1];
              pbVar42 = pbVar42 + -1;
            } while( true );
          }
        }
        goto code_r0x004dacf6;
      }
      goto code_r0x004dacf8;
    }
    uStack_138 = (byte ******)CONCAT71(uStack_138._1_7_,uVar68);
    uStack_178 = pppppppbStack_158;
    pppppppbStack_170 = pppppppbStack_150;
    puStack_188 = (undefined8 *)CONCAT44(puStack_188._4_4_,uVar45);
    puStack_198 = (undefined8 *)CONCAT71(puStack_198._1_7_,(bVar51 & 0xf9) == 9);
    _auStack_108 = (byte ******)&uStack_138;
    puStack_100 = &uStack_178;
    ppuStack_f0 = &puStack_198;
    puVar57 = &UNK_004de8e0;
    pppppppbStack_130 = pppppppbVar55;
    pppppppbStack_128 = param_1;
    pppppppbStack_120 = param_2;
code_r0x004d9f4d:
    ppuStack_f8 = &puStack_188;
    param_1 = pppppppbStack_150;
code_r0x004d9f57:
    pppppppbVar39 = pppppppbStack_150;
    pppppppbVar40 = pppppppbStack_158;
    func_0x004dc3b0(pppppppbStack_158,pppppppbStack_150,uVar45,auStack_108,puVar57);
    goto code_r0x004db085;
  case 0xe:
    uStack_138 = (byte ******)CONCAT71(uStack_138._1_7_,uVar68);
    pppppppbStack_130 = (byte *******)auStack_1b8._0_8_;
    iVar31 = *(int *)(param_1 + 1);
    iVar65 = uStack_1d4 + 0x40;
    if (pppppppbStack_158 != (byte *******)0x0 || pppppppbStack_150 != (byte *******)0x0) {
      pppppppbVar54 = pppppppbStack_158;
      pppppppbVar39 = pppppppbStack_150;
      iVar52 = -0x3ffe;
      if (iVar65 < -0x3ffe) {
        iVar52 = iVar65;
      }
      do {
        pppppppbVar41 = pppppppbVar39;
        pppppppbVar40 = pppppppbVar54;
        if ((long)pppppppbVar41 < 0) goto code_r0x004d98fa;
        if (iVar65 < -0x3ffd) {
          bVar59 = 2 - (char)iVar52;
          uVar46 = (ulong)pppppppbVar41 >> (bVar59 & 0x3f);
          uVar61 = 0;
          uVar56 = uVar46;
          uVar37 = (ulong)pppppppbVar40 >> (bVar59 & 0x3f) |
                   (long)pppppppbVar41 << 0x40 - (bVar59 & 0x3f);
          if ((bVar59 & 0x40) != 0) {
            uVar56 = 0;
            uVar37 = uVar46;
          }
          unaff_R13 = (byte *******)0xffffc002;
          goto joined_r0x004daf10;
        }
        pppppppbVar54 = (byte *******)((long)pppppppbVar40 * 2);
        pppppppbVar39 = (byte *******)((long)pppppppbVar41 << 1 | (ulong)pppppppbVar40 >> 0x3f);
        iVar65 = iVar65 + -1;
      } while ((pppppppbVar54 != (byte *******)0x0) ||
              ((long)pppppppbVar40 < 0 || pppppppbVar41 != (byte *******)0x0));
    }
    pppppppbVar41 = (byte *******)0x0;
    pppppppbVar40 = (byte *******)0x0;
code_r0x004d98fa:
    uVar61 = (ulong)pppppppbVar41 >> 0x3c;
    uVar45 = iVar65 - 4;
    if (pppppppbVar40 == (byte *******)0x0 && pppppppbVar41 == (byte *******)0x0) {
      uVar45 = 0;
    }
    unaff_R13 = (byte *******)(ulong)uVar45;
    uVar56 = (long)pppppppbVar41 << 4 | (ulong)pppppppbVar40 >> 0x3c;
    uVar37 = (long)pppppppbVar40 << 4;
joined_r0x004daf10:
    if (-1 < iVar31) {
      uVar46 = 0;
      uVar58 = 0x20 - auStack_1b8._0_8_;
      if ((byte *******)0x20 < (ulong)auStack_1b8._0_8_) {
        uVar58 = uVar46;
      }
      uVar62 = 0xffffffffffffffff;
      if ((uint)auStack_1b8._0_10_ < 0x20) {
        pppppppbStack_1c8 = (byte *******)CONCAT44(pppppppbStack_1c8._4_4_,iVar31);
        uVar60 = (int)uVar58 * 4;
        uVar45 = (int)uVar58 * -4 + 0x80;
        uVar63 = 0xffffffffffffffff >> ((byte)uVar45 & 0x3f);
        uVar46 = 0;
        uVar62 = uVar63;
        if ((uVar45 & 0x40) == 0) {
          uVar62 = 0xffffffffffffffff;
          uVar46 = uVar63;
        }
        bVar36 = (byte)(uVar60 - 4);
        bVar59 = bVar36 & 0x3f;
        uVar69 = 8L << (bVar36 & 0x3f);
        uVar46 = uVar46 & uVar56;
        uVar70 = uVar69;
        uVar63 = 0L << bVar59 | 8UL >> 0x40 - bVar59;
        if ((uVar60 - 4 & 0x40) != 0) {
          uVar70 = 0;
          uVar63 = uVar69;
        }
        bVar59 = (byte)uVar60;
        if ((uVar37 & uVar62) == uVar70 && uVar46 == uVar63) {
          uVar46 = uVar61;
          if (uVar58 != 0x20) {
            uVar46 = 0xfL << (bVar59 & 0x3f);
            uVar70 = uVar46;
            uVar63 = 0L << (bVar59 & 0x3f) | 0xfUL >> 0x40 - (bVar59 & 0x3f);
            if ((uVar60 & 0x40) != 0) {
              uVar70 = 0;
              uVar63 = uVar46;
            }
            uVar46 = (uVar63 & uVar56) >> (bVar59 & 0x3f);
            if ((uVar60 & 0x40) == 0) {
              uVar46 = (uVar70 & uVar37) >> (bVar59 & 0x3f) |
                       (uVar63 & uVar56) << 0x40 - (bVar59 & 0x3f);
            }
          }
          if ((uVar46 & 1) != 0) {
code_r0x004da159:
            uVar69 = 1L << (bVar59 & 0x3f);
            uVar70 = 0;
            uVar63 = uVar69;
            uVar46 = 0L << (bVar59 & 0x3f) | 1UL >> 0x40 - (bVar59 & 0x3f);
            if ((uVar60 & 0x40) != 0) {
              uVar63 = uVar70;
              uVar46 = uVar69;
            }
            if (0x1f < uVar58) {
              uVar63 = uVar70;
              uVar46 = uVar70;
            }
            bVar72 = CARRY8(uVar37,uVar63);
            uVar37 = uVar37 + uVar63;
            uVar46 = uVar46 + uVar56 + (ulong)bVar72;
            bVar59 = (char)uVar61 + (-1 < (long)uVar46 && (long)uVar56 < 0 || 0x1f < uVar58);
            uVar61 = (ulong)bVar59;
            uVar56 = uVar46;
            if (0xf < bVar59) {
              unaff_R13 = (byte *******)(ulong)((int)unaff_R13 + 4);
              uVar61 = 1;
              uVar37 = 0;
              uVar56 = 0;
            }
          }
        }
        else if (uVar63 < uVar46 || uVar63 - uVar46 < (ulong)(uVar70 < (uVar37 & uVar62)))
        goto code_r0x004da159;
        bVar59 = (byte)uVar45 & 0x3f;
        uVar46 = 0xffffffffffffffffU >> bVar59 | 0L << 0x40 - bVar59;
        if ((uVar45 & 0x40) != 0) {
          uVar46 = 0;
        }
        uVar62 = ~uVar62;
        pppppppbStack_1c0 = param_1;
      }
      uVar37 = uVar37 & uVar62;
      uVar56 = uVar56 & ~uVar46;
    }
    lVar35 = (ulong)(bVar51 != 0xf) * 0x10;
    pppppppbStack_170 = (byte *******)0x0;
    pppppppbStack_168 = (byte *******)((ulong)pppppppbStack_168 & 0xffffffff00000000);
    uVar26 = CONCAT12((&UNK_00159b0a)[uVar61 + lVar35],CONCAT11((bVar51 != 0xf) << 5,0x30));
    uStack_178._0_3_ = uVar26 | 0x5800;
    uVar28 = (uint3)uStack_178;
    uStack_178 = (byte *******)((ulong)uVar26 | 0x5800);
    if ((((iVar31 < 0) || ((uint)auStack_1b8._0_10_ == 0)) &&
        ((-1 < iVar31 || (uVar37 == 0 && uVar56 == 0)))) && (((ulong)*param_1 & 0x800) == 0)) {
      lVar47 = (long)&uStack_178 + 3;
    }
    else {
      lVar47 = (long)&uStack_178 + 4;
      uStack_178 = (byte *******)(ulong)CONCAT13(0x2e,uVar28);
    }
    if (uVar37 == 0 && uVar56 == 0) {
      lVar43 = 0;
      pppppppbStack_128 = param_1;
      pppppppbStack_120 = param_2;
    }
    else {
      lVar43 = 0;
      pppppppbStack_128 = param_1;
      pppppppbStack_120 = param_2;
      do {
        *(undefined *)(lVar47 + lVar43) = (&UNK_00159b0a)[(uVar56 >> 0x3c) + lVar35];
        uVar56 = uVar56 << 4 | uVar37 >> 0x3c;
        uVar37 = uVar37 << 4;
        lVar43 = lVar43 + 1;
      } while (uVar37 != 0 || uVar56 != 0);
      lVar47 = lVar47 + lVar43;
    }
    pppppppbVar55 = (byte *******)0x0;
    if (-1 < iVar31) {
      pppppppbVar55 = (byte *******)(auStack_1b8._0_8_ - lVar43);
    }
    pppppppbVar39 = (byte *******)&uStack_178;
    pppppppbVar48 = (byte *******)(lVar47 - (long)pppppppbVar39);
    puStack_100 = (undefined8 *)0x0;
    ppuStack_f8 = (undefined8 **)0x0;
    ppuStack_f0 = (undefined8 **)0x0;
    uStack_e8 = uStack_e8 & 0xffffffffffff0000;
    _auStack_108 = (byte ******)
                   (ulong)(ushort)(CONCAT11((char)((ulong)unaff_R13 >> 0x1f) * '\x02' + '+',
                                            (bVar51 != 0xf) << 5) | 0x50);
    pppppppbVar54 = (byte *******)(ulong)(uint)-(int)unaff_R13;
    if (-(int)unaff_R13 < 0) {
      pppppppbVar54 = unaff_R13;
    }
    uStack_1ac = (uint)bVar51;
    _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc(pppppppbVar54,auStack_108 + 2);
    puStack_188 = (undefined8 *)auStack_108;
    uStack_180 = func_0x0099bcf0();
    puStack_208 = puStack_188;
    uStack_200 = (undefined2)uStack_180;
    uStack_1fe = (undefined6)((ulong)uStack_180 >> 0x10);
    uVar38 = 2;
    unaff_RBX = pppppppbVar48;
    pppppppbVar54 = pppppppbVar39;
    break;
  default:
    goto code_r0x004db089;
  }
  pppppppbVar40 = (byte *******)&uStack_138;
  pppppppbVar41 = param_1;
  pppppppbVar67 = pppppppbVar55;
  goto code_r0x004db080;
code_r0x004dacd9:
  *pbVar42 = bVar51 + 1;
  bVar72 = pbVar71[-1] == 0x31;
  if (bVar72) {
    pbVar71 = pbVar71 + -1;
  }
  uVar60 = uVar60 + bVar72;
  pbVar34 = pbVar34 + -(ulong)bVar72;
code_r0x004dacf6:
  unaff_RBX = (byte *******)0x0;
code_r0x004dacf8:
  if ((pppppppbStack_1c8 != (byte *******)0x0) || (((ulong)*pppppppbStack_1c0 & 0x800) != 0)) {
    pbVar71[-1] = *pbVar71;
    *pbVar71 = 0x2e;
    pbVar71 = pbVar71 + -1;
  }
  if ((int)uVar60 < 0) {
    if (uVar60 < 0xfffffffc) {
      auStack_1b8._0_8_ = pbVar71;
      goto code_r0x004dade0;
    }
    pbVar71[1] = *pbVar71;
    if ((pppppppbStack_1c8 == (byte *******)0x0) && (((ulong)*pppppppbStack_1c0 & 0x800) == 0)) {
      pbVar34 = pbVar34 + 1;
    }
    if (uVar60 != 0xffffffff) {
      uVar37 = (ulong)(-uVar60 - 2);
      func_0x0099bdb0((long)pbVar71 - uVar37,0x30,uVar37 + 1);
      pppppppbVar67 = (byte *******)~uVar37;
      pbVar71 = pbVar71 + (long)pppppppbVar67;
    }
    pbVar71[-1] = 0x30;
    pbVar71[0] = 0x2e;
    auStack_1b8._0_8_ = pbVar71 + -1;
    pppppppbVar54 = (byte *******)0x0;
  }
  else {
    auStack_1b8._0_8_ = pbVar71;
    pppppppbVar67 = (byte *******)(ulong)uVar60;
    if (pppppppbVar67 < pppppppbVar39) {
      pppppppbVar54 = (byte *******)0x0;
      if (uVar60 != 0) {
        pppppppbStack_1c8 = (byte *******)CONCAT71(pppppppbStack_1c8._1_7_,pbVar71[1]);
        func_0x0099bd90(pbVar71 + 1,pbVar71 + 2,pppppppbVar67);
        (pbVar71 + 1)[(long)pppppppbVar67] = (byte)pppppppbStack_1c8;
        pppppppbVar41 = pppppppbStack_1c0;
      }
    }
    else {
code_r0x004dade0:
      auStack_1b8._0_8_ = pbVar71;
      pppppppbVar54 = (byte *******)(ulong)uVar60;
    }
  }
  if (((ulong)*pppppppbVar41 & 0x800) == 0) {
    do {
      pbVar71 = pbVar34;
      pbVar34 = pbVar71 + -1;
    } while (pbVar71[-1] == 0x30);
    if (pbVar71[-1] != 0x2e) {
      pbVar34 = pbVar71;
    }
    unaff_RBX = (byte *******)0x0;
  }
  pppppppbVar39 = (byte *******)auStack_1b8._0_8_;
  if ((int)pppppppbVar54 == 0) {
    puStack_1a8 = &UNK_00162ac9;
    uStack_1a0 = 0;
    puStack_208 = (undefined8 *)&UNK_00162ac9;
    uStack_200 = 0;
    uStack_1fe = 0;
  }
  else {
    pppppppbStack_130 = (byte *******)0x0;
    pppppppbStack_128 = (byte *******)0x0;
    pppppppbStack_120 = (byte *******)0x0;
    uStack_118 = 0;
    uVar45 = -(int)pppppppbVar54;
    pppppppbVar40 = (byte *******)(ulong)uVar45;
    if ((int)uVar45 < 0) {
      pppppppbVar40 = pppppppbVar54;
    }
    uStack_138._0_2_ =
         CONCAT11((char)((ulong)pppppppbVar54 >> 0x1f) * '\x02' + '+',
                  ((char)uStack_1ac != '\t') << 5) | 0x45;
    uVar29 = (ushort)uStack_138;
    uStack_138 = (byte ******)(ulong)(ushort)uStack_138;
    if ((uint)pppppppbVar40 < 10) {
      lVar35 = (long)&uStack_138 + 3;
      uStack_138._0_3_ = CONCAT12(0x30,uVar29);
      uStack_138 = (byte ******)(ulong)(uint3)uStack_138;
    }
    else {
      lVar35 = (long)&uStack_138 + 2;
    }
    lStack_190 = _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc(pppppppbVar40,lVar35)
    ;
    puStack_208 = &uStack_138;
    lStack_190 = lStack_190 - (long)puStack_208;
    uStack_200 = (undefined2)lStack_190;
    uStack_1fe = (undefined6)((ulong)lStack_190 >> 0x10);
    pppppppbVar67 = pppppppbVar39;
    puStack_198 = puStack_208;
  }
  pppppppbVar48 = (byte *******)(pbVar34 + -(long)pppppppbVar39);
  unaff_R13 = pppppppbVar48;
  goto code_r0x004daede;
code_r0x004da813:
  *pbVar71 = bVar59 + 1;
  bVar72 = *(byte *)((long)pppppppbVar39 + -1) == 0x31;
  if (bVar72) {
    pppppppbVar39 = (byte *******)((long)pppppppbVar39 + -1);
  }
  uVar60 = uVar60 + bVar72;
  pppppppbVar48 = (byte *******)((long)pppppppbVar48 - (ulong)bVar72);
joined_r0x004da87a:
  unaff_RBX = (byte *******)0x0;
joined_r0x004da87a:
  if ((pppppppbStack_170 != (byte *******)0x0) || (((ulong)*pppppppbStack_168 & 0x800) != 0)) {
    *(byte *)((long)pppppppbVar39 + -1) = *(byte *)pppppppbVar39;
    *(byte *)pppppppbVar39 = 0x2e;
    pppppppbVar39 = (byte *******)((long)pppppppbVar39 + -1);
  }
  pppppppbStack_130 = (byte *******)0x0;
  pppppppbStack_128 = (byte *******)0x0;
  pppppppbStack_120 = (byte *******)0x0;
  uStack_118 = 0;
  uVar45 = -uVar60;
  if ((int)-uVar60 < 0) {
    uVar45 = uVar60;
  }
  uStack_138._0_2_ = CONCAT11((char)((int)uVar60 >> 0x1f) * -2 + '+',(bVar51 != 9) << 5) | 0x45;
  uVar29 = (ushort)uStack_138;
  uStack_138 = (byte ******)(ulong)(ushort)uStack_138;
  if (uVar45 < 10) {
    lVar35 = (long)&uStack_138 + 3;
    uStack_138._0_3_ = CONCAT12(0x30,uVar29);
    uStack_138 = (byte ******)(ulong)(uint3)uStack_138;
  }
  else {
    lVar35 = (long)&uStack_138 + 2;
  }
  lStack_190 = _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc(uVar45,lVar35);
  pppppppbVar48 = (byte *******)((long)pppppppbVar48 - (long)pppppppbVar39);
  puStack_208 = &uStack_138;
  lStack_190 = lStack_190 - (long)puStack_208;
  uStack_200 = (undefined2)lStack_190;
  uStack_1fe = (undefined6)((ulong)lStack_190 >> 0x10);
  pppppppbVar41 = pppppppbVar39;
  pppppppbVar67 = pppppppbVar48;
  puStack_198 = puStack_208;
code_r0x004daede:
  pppppppbVar40 = (byte *******)&uStack_178;
  uVar38 = 0;
  pppppppbVar55 = unaff_RBX;
code_r0x004db080:
  func_0x004dd2b0(pppppppbVar40,pppppppbVar39,pppppppbVar48,uVar38,pppppppbVar55);
  param_1 = pppppppbVar41;
  param_2 = pppppppbVar67;
code_r0x004db085:
  uVar38 = 1;
code_r0x004db089:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar38;
  }
  fVar76 = (float)func_0x0099bd00();
  dVar77 = (double)fVar76;
  ppuVar50 = &puStack_208;
  uVar37 = extraout_XMM0_Qb;
code_r0x004db120:
  *(undefined1 **)((long)ppuVar50 + -8) = puVar49;
  *(byte ********)((long)ppuVar50 + -0x10) = pppppppbVar54;
  *(byte ********)((long)ppuVar50 + -0x18) = param_2;
  *(byte ********)((long)ppuVar50 + -0x20) = unaff_R13;
  *(byte ********)((long)ppuVar50 + -0x28) = param_1;
  *(byte ********)((long)ppuVar50 + -0x30) = unaff_RBX;
  *(undefined8 *)((long)ppuVar50 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar64 = (undefined7)((ulong)param_1 >> 8);
  if ((long)dVar77 < 0) {
    dVar77 = -dVar77;
    uVar37 = uVar37 ^ 0x8000000000000000;
    param_1 = (byte *******)CONCAT71(uVar64,0x2d);
code_r0x004db185:
    *(undefined4 *)((long)ppuVar50 + -0x118) = 0;
    puVar44 = (undefined2 *)((long)ppuVar50 + -0x117);
    *(char *)((long)ppuVar50 + -0x118) = (char)param_1;
  }
  else {
    param_1 = (byte *******)CONCAT71(uVar64,0x2b);
    if ((((ulong)*pppppppbVar40 & 0x200) != 0) ||
       (param_1 = (byte *******)CONCAT71(uVar64,0x20), ((ulong)*pppppppbVar40 & 0x400) != 0))
    goto code_r0x004db185;
    *(undefined4 *)((long)ppuVar50 + -0x118) = 0;
    puVar44 = (undefined2 *)((long)ppuVar50 + -0x118);
    param_1 = (byte *******)0x0;
  }
  param_2 = pppppppbVar40;
  pppppppbVar54 = pppppppbVar39;
  if (!NAN(dVar77)) {
    pppppppbVar41 = pppppppbVar39;
    if (ABS(dVar77) == INFINITY) {
      *(double *)((long)ppuVar50 + -0x168) = dVar77;
      *(ulong *)((long)ppuVar50 + -0x160) = uVar37;
      bVar51 = *(byte *)pppppppbVar40;
      puVar53 = (undefined2 *)&UNK_001743fa;
      puVar32 = (undefined2 *)&UNK_0016b346;
      goto code_r0x004db1e7;
    }
code_r0x004db243:
    uVar37 = 6;
    if (-1 < (int)*(uint *)(pppppppbVar40 + 1)) {
      uVar37 = (ulong)*(uint *)(pppppppbVar40 + 1);
    }
    *(ulong *)((long)ppuVar50 + -0x168) = uVar37;
    *(undefined4 *)((long)ppuVar50 + -0x118) = 0;
    *(undefined **)((long)ppuVar50 + -400) = &UNK_004db26e;
    func_0x0099c770((undefined1 *)((long)ppuVar50 + -0x118));
    pppppppbVar55 = (byte *******)0x35;
    *(undefined **)((long)ppuVar50 + -400) = &UNK_004db278;
    dVar77 = (double)func_0x0099c780();
    bVar51 = *(byte *)pppppppbVar40;
    uVar38 = 0;
    if (6 < (bVar51 & 0xfffffffe) - 8) goto code_r0x004dc106;
    uVar45 = *(uint *)((long)ppuVar50 + -0x118);
    unaff_R13 = (byte *******)(ulong)uVar45;
    uVar60 = uVar45 - 0x35;
    pppppppbVar54 = (byte *******)(ulong)uVar60;
    unaff_RBX = (byte *******)
                ((long)(dVar77 - 9.223372036854776e+18) & (long)dVar77 >> 0x3f | (long)dVar77);
    uVar68 = SUB81(param_1,0);
    cVar30 = (char)uVar45;
    uVar20 = (undefined3)(uVar45 >> 8);
    bVar59 = (byte)uVar60;
    pppppppbVar55 = unaff_RBX;
    switch(bVar51 & 0xfffffffe) {
    case 8:
      *(undefined1 *)((long)ppuVar50 + -0x68) = uVar68;
      lVar35 = *(long *)((long)ppuVar50 + -0x168);
      *(long *)((long)ppuVar50 + -0x60) = lVar35;
      *(byte ********)((long)ppuVar50 + -0x58) = pppppppbVar40;
      *(byte ********)((long)ppuVar50 + -0x50) = pppppppbVar39;
      if ((int)uVar45 < 0x35) {
        if (uVar60 < 0xffffff80) {
          pppppppbVar41 = (byte *******)0x0;
          *(undefined **)((long)ppuVar50 + -400) = &UNK_004dc1d3;
          func_0x004dc240(unaff_RBX,0,0x35 - uVar45,(undefined1 *)((long)ppuVar50 + -0x68),0);
          break;
        }
        *(undefined8 *)((long)ppuVar50 + -0xf8) = 0;
        *(undefined8 *)((long)ppuVar50 + -0xf0) = 0;
        *(undefined8 *)((long)ppuVar50 + -0x7d) = 0;
        *(undefined8 *)((long)ppuVar50 + -0x75) = 0;
        *(undefined8 *)((long)ppuVar50 + -0x88) = 0;
        *(undefined8 *)((long)ppuVar50 + -0x80) = 0;
        *(undefined8 *)((long)ppuVar50 + -0x98) = 0;
        *(undefined8 *)((long)ppuVar50 + -0x90) = 0;
        *(undefined8 *)((long)ppuVar50 + -0xa8) = 0;
        *(undefined8 *)((long)ppuVar50 + -0xa0) = 0;
        *(undefined8 *)((long)ppuVar50 + -0xb8) = 0;
        *(undefined8 *)((long)ppuVar50 + -0xb0) = 0;
        *(undefined8 *)((long)ppuVar50 + -200) = 0;
        *(undefined8 *)((long)ppuVar50 + -0xc0) = 0;
        *(undefined8 *)((long)ppuVar50 + -0xd8) = 0;
        *(undefined8 *)((long)ppuVar50 + -0xd0) = 0;
        *(undefined8 *)((long)ppuVar50 + -0xe8) = 0;
        *(undefined8 *)((long)ppuVar50 + -0xe0) = 0;
        *(undefined8 *)((long)ppuVar50 + -0x108) = 0;
        *(undefined8 *)((long)ppuVar50 + -0x100) = 0;
        *(undefined8 *)((long)ppuVar50 + -0x118) = 0;
        *(undefined8 *)((long)ppuVar50 + -0x110) = 0;
        *(undefined1 *)((long)ppuVar50 + -0xee) = 0x2e;
        uVar37 = 0;
        if (0xffffffc0 < uVar60) {
          uVar37 = (ulong)unaff_RBX >> ((byte)(0x35 - uVar45) & 0x3f);
        }
        pppppppbVar67 = (byte *******)((long)ppuVar50 + -0xef);
        do {
          pppppppbVar41 = pppppppbVar67;
          *(byte *)pppppppbVar41 = (char)uVar37 + (char)(uVar37 / 10) * -10 | 0x30;
          pppppppbVar67 = (byte *******)((long)pppppppbVar41 + -1);
          bVar72 = 9 < uVar37;
          uVar37 = uVar37 / 10;
        } while (bVar72);
        pppppppbVar54 = (byte *******)((long)ppuVar50 + -0xed);
        *(byte *)pppppppbVar67 = 0x30;
        if (uVar60 < 0xffffffc0) {
          *(undefined **)((long)ppuVar50 + -400) = &UNK_004db976;
          pppppppbVar55 =
               (byte *******)func_0x004dd190(unaff_RBX,0,pppppppbVar54,0x35 - uVar45,lVar35);
          unaff_RBX = pppppppbVar41;
          param_1 = pppppppbVar54;
        }
        else {
          unaff_R13 = (byte *******)(ulong)CONCAT31(uVar20,cVar30 + 0xbU);
          pppppppbVar40 = (byte *******)((long)unaff_RBX << (cVar30 + 0xbU & 0x3f));
          pppppppbVar55 = pppppppbVar54;
          for (; lVar35 != 0; lVar35 = lVar35 + -1) {
            unaff_RBX = (byte *******)0x0;
            if (pppppppbVar40 == (byte *******)0x0) goto code_r0x004dbd50;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = pppppppbVar40;
            pppppppbVar40 = SUB168(auVar15 * ZEXT816(10),0);
            *(byte *)pppppppbVar55 = SUB161(auVar15 * ZEXT816(10),8) | 0x30;
            pppppppbVar55 = (byte *******)((long)pppppppbVar55 + 1);
          }
          unaff_RBX = pppppppbVar40;
          if ((long)pppppppbVar40 < 0) {
            pbVar71 = (byte *)((long)pppppppbVar55 + -1);
            unaff_RBX = (byte *******)-(long)pppppppbVar40;
            if (!SBORROW8(0,(long)pppppppbVar40)) {
              do {
                bVar51 = *pbVar71;
                if (bVar51 != 0x2e) {
                  if (bVar51 != 0x39) goto code_r0x004dbd4c;
                  *pbVar71 = 0x30;
                }
                pbVar71 = pbVar71 + -1;
              } while( true );
            }
            pbVar71 = pbVar71 + -(ulong)(*(byte *)((long)pppppppbVar55 + -1) == 0x2e);
            bVar51 = *pbVar71;
            if ((bVar51 & 0x81) == 1) {
              do {
                if (bVar51 != 0x2e) {
                  if (bVar51 != 0x39) goto code_r0x004dbd4c;
                  *pbVar71 = 0x30;
                }
                bVar51 = pbVar71[-1];
                pbVar71 = pbVar71 + -1;
              } while( true );
            }
          }
        }
        goto code_r0x004dbd50;
      }
      lVar35 = 0x3f;
      if (unaff_RBX != (byte *******)0x0) {
        for (; (ulong)unaff_RBX >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      uVar45 = (uVar45 - ((uint)lVar35 ^ 0x3f)) + 0xb;
      unaff_R13 = (byte *******)(ulong)uVar45;
      if (0x80 < (int)uVar45) {
        *(undefined1 *)((long)ppuVar50 + -0x138) = 0;
        *(undefined1 **)((long)ppuVar50 + -0x118) = (undefined1 *)((long)ppuVar50 + -0x68);
        *(undefined1 **)((long)ppuVar50 + -0x110) = (undefined1 *)((long)ppuVar50 + -0x138);
        puVar57 = &UNK_004dc900;
code_r0x004db4f9:
        pppppppbVar41 = (byte *******)0x0;
        *(undefined **)((long)ppuVar50 + -400) = &UNK_004db50d;
        func_0x004dc3b0(unaff_RBX,0,pppppppbVar54,(undefined1 *)((long)ppuVar50 + -0x118),puVar57);
        break;
      }
      *(undefined8 *)((long)ppuVar50 + -0xf8) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xf0) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x7d) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x75) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x88) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x80) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x98) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x90) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xa8) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xa0) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xb8) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xb0) = 0;
      *(undefined8 *)((long)ppuVar50 + -200) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xc0) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xd8) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xd0) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xe8) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xe0) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x108) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x100) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x118) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x110) = 0;
      pppppppbVar41 = (byte *******)((long)ppuVar50 + -0xee);
      *(undefined1 *)((long)ppuVar50 + -0xee) = 0x2e;
      pppppppbVar55 = (byte *******)((long)ppuVar50 + -0xed);
      if ((int)uVar45 < 0x41) {
        pppppppbVar54 = (byte *******)((long)unaff_RBX << (bVar59 & 0x3f));
        do {
          unaff_RBX = (byte *******)((ulong)pppppppbVar54 / 10);
          *(byte *)((long)pppppppbVar41 + -1) = (char)pppppppbVar54 + (char)unaff_RBX * -10 | 0x30;
          pppppppbVar41 = (byte *******)((long)pppppppbVar41 + -1);
          bVar72 = (byte *******)0x9 < pppppppbVar54;
          pppppppbVar54 = unaff_RBX;
          pppppppbVar67 = pppppppbVar40;
        } while (bVar72);
      }
      else {
        pppppppbVar67 = (byte *******)((long)unaff_RBX << (bVar59 & 0x3f));
        pppppppbVar54 = pppppppbVar67;
        pppppppbVar48 =
             (byte *******)(0L << (bVar59 & 0x3f) | (ulong)unaff_RBX >> 0x40 - (bVar59 & 0x3f));
        if ((uVar60 & 0x40) != 0) {
          pppppppbVar54 = (byte *******)0x0;
          pppppppbVar48 = pppppppbVar67;
        }
        if (pppppppbVar48 != (byte *******)0x0) {
          do {
            iVar31 = (int)((ulong)pppppppbVar48 % 10);
            pppppppbVar40 = (byte *******)(ulong)(uint)(iVar31 * 3);
            iVar31 = (int)pppppppbVar54 + (int)((ulong)pppppppbVar54 / 10) * -10 + iVar31 * 6;
            uVar45 = (iVar31 * 0xcd & 0xffffU) >> 0xb;
            pppppppbVar54 =
                 (byte *******)
                 ((ulong)uVar45 +
                 ((ulong)pppppppbVar48 % 10) * 0x1999999999999999 + (ulong)pppppppbVar54 / 10);
            *(byte *)((long)pppppppbVar41 + -1) = (char)iVar31 + (char)uVar45 * -10 | 0x30;
            pppppppbVar41 = (byte *******)((long)pppppppbVar41 + -1);
            bVar72 = (byte *******)0x9 < pppppppbVar48;
            pppppppbVar48 = (byte *******)((ulong)pppppppbVar48 / 10);
          } while (bVar72);
        }
        do {
          unaff_RBX = (byte *******)((ulong)pppppppbVar54 / 10);
          *(byte *)((long)pppppppbVar41 + -1) = (char)pppppppbVar54 + (char)unaff_RBX * -10 | 0x30;
          pppppppbVar41 = (byte *******)((long)pppppppbVar41 + -1);
          bVar72 = (byte *******)0x9 < pppppppbVar54;
          pppppppbVar54 = unaff_RBX;
          pppppppbVar67 = pppppppbVar40;
        } while (bVar72);
      }
      goto code_r0x004dbd58;
    case 10:
      bVar51 = bVar51 & 0xf9;
      pppppppbVar67 = (byte *******)(ulong)bVar51;
      *(undefined1 *)((long)ppuVar50 + -0x138) = uVar68;
      pppppppbVar48 = *(byte ********)((long)ppuVar50 + -0x168);
      *(byte ********)((long)ppuVar50 + -0x130) = pppppppbVar48;
      *(byte ********)((long)ppuVar50 + -0x128) = pppppppbVar40;
      *(byte ********)((long)ppuVar50 + -0x120) = pppppppbVar39;
      param_1 = pppppppbVar48;
      if ((int)uVar45 < 0x36) {
        if ((int)uVar45 < -0x4b) {
          pppppppbVar41 = (byte *******)0x0;
          *(undefined **)((long)ppuVar50 + -400) = &UNK_004dc1f8;
          func_0x004dd630(unaff_RBX,0,pppppppbVar54,bVar51 == 9,
                          (undefined1 *)((long)ppuVar50 + -0x138),0);
          break;
        }
      }
      else {
        lVar35 = 0x3f;
        if (unaff_RBX != (byte *******)0x0) {
          for (; (ulong)unaff_RBX >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        if (0x80 < (int)((uVar45 - ((uint)lVar35 ^ 0x3f)) + 0xb)) {
          *(bool *)((long)ppuVar50 + -0x148) = bVar51 == 9;
          *(undefined8 *)((long)ppuVar50 + -0x68) = 0;
          *(undefined1 **)((long)ppuVar50 + -0x118) = (undefined1 *)((long)ppuVar50 + -0x138);
          *(undefined1 **)((long)ppuVar50 + -0x110) = (undefined1 *)((long)ppuVar50 + -0x68);
          *(undefined1 **)((long)ppuVar50 + -0x108) = (undefined1 *)((long)ppuVar50 + -0x148);
          puVar57 = &UNK_004dd690;
          goto code_r0x004db4f9;
        }
      }
      if (unaff_RBX == (byte *******)0x0) {
        if ((pppppppbVar48 == (byte *******)0x0) && (((ulong)*pppppppbVar40 & 0x800) == 0)) {
          unaff_RBX = (byte *******)&UNK_0017eb28;
        }
        else {
          unaff_RBX = (byte *******)&UNK_0016f16d;
        }
        *(undefined **)((long)ppuVar50 + -400) = &UNK_004db9f5;
        pppppppbVar54 = (byte *******)func_0x0099bcf0(unaff_RBX);
        puVar57 = &UNK_00159b05;
        if (bVar51 == 9) {
          puVar57 = &UNK_001806ec;
        }
        *(undefined **)((long)ppuVar50 + -0x148) = puVar57;
        *(undefined8 *)((long)ppuVar50 + -0x140) = 4;
        *(undefined8 *)((long)ppuVar50 + -0x188) = *(undefined8 *)((long)ppuVar50 + -0x148);
        *(undefined8 *)((long)ppuVar50 + -0x180) = *(undefined8 *)((long)ppuVar50 + -0x140);
        pppppppbVar55 = (byte *******)((long)ppuVar50 + -0x138);
        uVar38 = 0;
        pppppppbVar41 = unaff_RBX;
        goto code_r0x004dc0ff;
      }
      *(undefined8 *)((long)ppuVar50 + -0x7f) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x77) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x88) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x80) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x98) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x90) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xa8) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xa0) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xb8) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xb0) = 0;
      *(undefined8 *)((long)ppuVar50 + -200) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xc0) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xd8) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xd0) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xe8) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xe0) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xf8) = 0;
      *(undefined8 *)((long)ppuVar50 + -0xf0) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x108) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x100) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x118) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x110) = 0;
      pppppppbVar41 = (byte *******)((long)ppuVar50 + -0x116);
      if ((int)uVar45 < 0x35) {
        *(uint *)((long)ppuVar50 + -0x16c) = (uint)bVar51;
        bVar72 = uVar60 < 0xffffffc1;
        uVar64 = (undefined7)((ulong)pppppppbVar48 >> 8);
        pppppppbVar67 = (byte *******)CONCAT71(uVar64,bVar72);
        if (bVar72) {
          pppppppbVar39 = (byte *******)((long)ppuVar50 + -0xef);
          *(undefined1 *)((long)ppuVar50 + -0xef) = 0x30;
          bVar74 = false;
          uVar37 = 0;
code_r0x004db9ad:
          uVar56 = *(long *)((long)ppuVar50 + -0x168) + 1;
          uVar61 = 0;
          bVar73 = uVar37 <= uVar56;
          lVar47 = 0;
          if (bVar73) {
            lVar47 = uVar56 - uVar37;
          }
          if (-0xc < (int)uVar45) {
            *(bool *)((long)ppuVar50 + -0x168) = bVar72;
            goto code_r0x004dbed9;
          }
          bVar51 = cVar30 + 0x4b;
          unaff_R13 = (byte *******)(ulong)CONCAT31(uVar20,bVar51);
          uVar62 = (long)unaff_RBX << (bVar51 & 0x3f);
          uVar58 = uVar62;
          uVar46 = 0L << (bVar51 & 0x3f) | (ulong)unaff_RBX >> 0x40 - (bVar51 & 0x3f);
          if ((bVar51 & 0x40) != 0) {
            uVar58 = uVar61;
            uVar46 = uVar62;
          }
          bVar73 = uVar58 != 0;
          pppppppbVar67 = (byte *******)CONCAT71(uVar64,1);
          lVar47 = lVar47 + (ulong)(uVar37 <= uVar56);
          pppppppbVar54 = pppppppbVar39;
          if ((lVar47 != 0) && (uVar58 != 0)) {
            pppppppbVar67 = (byte *******)CONCAT71(uVar64,1);
            uVar61 = 0;
            unaff_R13 = (byte *******)0xa;
            do {
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar58;
              uVar58 = SUB168(auVar16 * ZEXT816(10),0);
              auVar25._8_8_ = 0;
              auVar25._0_8_ = SUB168(auVar16 * ZEXT816(10),8);
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar46;
              auVar25 = auVar17 * ZEXT816(10) + auVar25;
              uVar46 = auVar25._0_8_;
              if (((char)pppppppbVar67 == '\x01') && (auVar25._8_8_ == 0)) {
                uVar61 = (ulong)((int)uVar61 + 1);
                pppppppbVar67 = (byte *******)CONCAT71((int7)((ulong)pppppppbVar67 >> 8),1);
              }
              else {
                *(byte *)pppppppbVar54 = auVar25[8] + 0x30;
                pppppppbVar54 = (byte *******)((long)pppppppbVar54 + 1);
                lVar47 = lVar47 + -1;
                pppppppbVar67 = (byte *******)0x0;
              }
              bVar73 = uVar58 != 0;
            } while ((lVar47 != 0) && (uVar58 != 0));
          }
          uVar45 = (uint)uVar61;
          bVar72 = uVar46 != 0;
          if ((lVar47 != 0) && (uVar46 != 0)) {
            unaff_R13 = (byte *******)0xa;
            do {
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar46;
              uVar56 = SUB168(auVar18 * ZEXT816(10),0);
              if (((char)pppppppbVar67 == '\x01') && (uVar46 < 0x199999999999999a)) {
                uVar61 = (ulong)((int)uVar61 + 1);
                pppppppbVar67 = (byte *******)CONCAT71((int7)((ulong)pppppppbVar67 >> 8),1);
              }
              else {
                *(byte *)pppppppbVar54 = SUB161(auVar18 * ZEXT816(10),8) | 0x30;
                pppppppbVar54 = (byte *******)((long)pppppppbVar54 + 1);
                lVar47 = lVar47 + -1;
                pppppppbVar67 = (byte *******)0x0;
              }
              uVar45 = (uint)uVar61;
              bVar72 = uVar56 != 0;
            } while ((lVar47 != 0) && (uVar46 = uVar56, uVar56 != 0));
          }
          bVar72 = (bool)(bVar72 | bVar73);
          cVar30 = '\x01';
        }
        else {
          uVar37 = (ulong)unaff_RBX >> (0x35U - cVar30 & 0x3f);
          *(undefined **)((long)ppuVar50 + -400) = &UNK_004dbc82;
          pppppppbVar39 =
               (byte *******)
               _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEmPc(uVar37,pppppppbVar41);
          *(byte *)pppppppbVar39 = 0x30;
          if (uVar37 == 0) {
            *(undefined1 *)((long)ppuVar50 + -0x168) = 1;
            lVar35 = *(long *)((long)ppuVar50 + -0x130);
            uVar37 = 0;
          }
          else {
            uVar37 = (long)pppppppbVar39 - (long)pppppppbVar41;
            lVar35 = *(long *)((long)ppuVar50 + -0x130);
            if ((lVar35 + 2U < uVar37) &&
               ((byte *******)((long)pppppppbVar41 + lVar35 + 2) != pppppppbVar39)) {
              *(long *)((long)ppuVar50 + -0x168) = lVar35;
              pppppppbVar54 = (byte *******)((long)ppuVar50 + lVar35 + -0x113);
              do {
                bVar74 = *(byte *)((long)pppppppbVar54 + -1) != 0x30;
                if (bVar74) break;
                bVar73 = pppppppbVar54 != pppppppbVar39;
                pppppppbVar54 = (byte *******)((long)pppppppbVar54 + 1);
              } while (bVar73);
              goto code_r0x004db9ad;
            }
            *(undefined1 *)((long)ppuVar50 + -0x168) = 0;
          }
          bVar74 = false;
          bVar73 = uVar37 <= lVar35 + 1U;
          lVar47 = 0;
          if (bVar73) {
            lVar47 = (lVar35 + 1U) - uVar37;
          }
code_r0x004dbed9:
          unaff_R13 = (byte *******)(ulong)CONCAT31(uVar20,cVar30 + 0xbU);
          uVar56 = (long)unaff_RBX << (cVar30 + 0xbU & 0x3f);
          uVar45 = 0;
          bVar72 = uVar56 != 0;
          pppppppbVar54 = pppppppbVar39;
          if ((bVar72) && (lVar47 = lVar47 + (ulong)bVar73, lVar47 != 0)) {
            uVar45 = 0;
            pppppppbVar67 = (byte *******)0xa;
            unaff_R13 = (byte *******)(ulong)*(byte *)((long)ppuVar50 + -0x168);
            do {
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar56;
              uVar61 = SUB168(auVar19 * ZEXT816(10),0);
              bVar51 = uVar56 < 0x199999999999999a & (byte)unaff_R13;
              unaff_R13 = (byte *******)(ulong)bVar51;
              if (bVar51 == 1) {
                uVar45 = uVar45 + 1;
              }
              else {
                *(byte *)pppppppbVar54 = SUB161(auVar19 * ZEXT816(10),8) | 0x30;
                pppppppbVar54 = (byte *******)((long)pppppppbVar54 + 1);
                lVar47 = lVar47 + -1;
              }
              bVar72 = uVar61 != 0;
            } while ((bVar72) && (uVar56 = uVar61, lVar47 != 0));
          }
          cVar30 = *(char *)((long)ppuVar50 + -0x168);
        }
        bVar74 = (bool)(bVar74 | bVar72);
        *(byte *)pppppppbVar54 = 0x30;
        pbVar71 = (byte *)((long)pppppppbVar54 + (uVar37 - (long)pppppppbVar39));
        uVar60 = (uint)pppppppbVar41;
        if (cVar30 != '\0') {
          pppppppbVar41 = pppppppbVar39;
        }
        uVar60 = ~uVar60 + (int)pppppppbVar39;
        if (cVar30 != '\0') {
          uVar60 = ~uVar45;
        }
        lVar35 = *(long *)((long)ppuVar50 + -0x130);
        bVar51 = (byte)*(undefined4 *)((long)ppuVar50 + -0x16c);
      }
      else {
        lVar35 = 0x3f;
        if (unaff_RBX != (byte *******)0x0) {
          for (; (ulong)unaff_RBX >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar45 = (uVar45 - ((uint)lVar35 ^ 0x3f)) + 0xb;
        unaff_R13 = (byte *******)(ulong)uVar45;
        if ((int)uVar45 < 0x41) {
          *(undefined **)((long)ppuVar50 + -400) = &UNK_004db81a;
          pppppppbVar54 =
               (byte *******)
               _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEmPc
                         ((long)unaff_RBX << (bVar59 & 0x3f),pppppppbVar41);
        }
        else {
          uVar61 = (long)unaff_RBX << (bVar59 & 0x3f);
          uVar56 = uVar61;
          uVar37 = 0L << (bVar59 & 0x3f) | (ulong)unaff_RBX >> 0x40 - (bVar59 & 0x3f);
          if ((uVar60 & 0x40) != 0) {
            uVar56 = 0;
            uVar37 = uVar61;
          }
          *(undefined **)((long)ppuVar50 + -400) = &UNK_004dbbf8;
          pppppppbVar54 =
               (byte *******)
               _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferENS0_7uint128EPc
                         (uVar56,uVar37,pppppppbVar41);
        }
        *(byte *)pppppppbVar54 = 0x30;
        pbVar71 = (byte *)((long)pppppppbVar54 - (long)pppppppbVar41);
        uVar60 = (int)pbVar71 - 1;
        lVar35 = *(long *)((long)ppuVar50 + -0x130);
        bVar74 = false;
        if (((byte *)(lVar35 + 2) < pbVar71) &&
           ((byte *******)((long)pppppppbVar41 + lVar35 + 2) != pppppppbVar54)) {
          pppppppbVar39 = (byte *******)((long)ppuVar50 + lVar35 + -0x113);
          do {
            bVar74 = *(byte *)((long)pppppppbVar39 + -1) != 0x30;
            if (bVar74) break;
            bVar72 = pppppppbVar39 != pppppppbVar54;
            pppppppbVar39 = (byte *******)((long)pppppppbVar39 + 1);
          } while (bVar72);
        }
      }
      unaff_RBX = (byte *******)((byte *)(lVar35 + 1) + -(long)pbVar71);
      if ((byte *)(lVar35 + 1) < pbVar71 || unaff_RBX == (byte *******)0x0) {
        *(byte *)((long)pppppppbVar41 + -1) = 0x30;
        lVar35 = *(long *)((long)ppuVar50 + -0x130);
        pbVar71 = (byte *)((long)pppppppbVar41 + lVar35);
        pppppppbVar54 = (byte *******)(pbVar71 + 1);
        bVar59 = *(byte *)((long)pppppppbVar41 + lVar35 + 1);
        if ('5' < (char)bVar59) {
          pbVar71 = (byte *)((long)pppppppbVar41 + lVar35);
          do {
            bVar59 = *pbVar71;
            if (bVar59 != 0x2e) {
              if (bVar59 != 0x39) goto code_r0x004dbff3;
              *pbVar71 = 0x30;
            }
            pbVar71 = pbVar71 + -1;
          } while( true );
        }
        if (bVar59 != 0x35) {
          unaff_RBX = (byte *******)0x0;
          goto joined_r0x004dc05a;
        }
        if (bVar74) {
          pbVar71 = (byte *)((long)pppppppbVar41 + lVar35);
          do {
            bVar59 = *pbVar71;
            if (bVar59 != 0x2e) {
              if (bVar59 != 0x39) goto code_r0x004dbff3;
              *pbVar71 = 0x30;
            }
            pbVar71 = pbVar71 + -1;
          } while( true );
        }
        pbVar71 = pbVar71 + -(ulong)(*pbVar71 == 0x2e);
        bVar59 = *pbVar71;
        if ((bVar59 & 0x81) == 1) {
          do {
            if (bVar59 != 0x2e) {
              if (bVar59 != 0x39) goto code_r0x004dbff3;
              *pbVar71 = 0x30;
            }
            bVar59 = pbVar71[-1];
            pbVar71 = pbVar71 + -1;
          } while( true );
        }
        goto joined_r0x004dc01c;
      }
joined_r0x004dc05a:
      if (lVar35 == 0) goto code_r0x004dc05c;
      goto code_r0x004dc069;
    case 0xc:
      lVar35 = *(long *)((long)ppuVar50 + -0x168) + -1;
      if (*(long *)((long)ppuVar50 + -0x168) == 0) {
        lVar35 = 0;
      }
      if (0x34 < (int)uVar45) {
        lVar47 = 0x3f;
        if (unaff_RBX != (byte *******)0x0) {
          for (; (ulong)unaff_RBX >> lVar47 == 0; lVar47 = lVar47 + -1) {
          }
        }
        if (0x80 < (int)((uVar45 - ((uint)lVar47 ^ 0x3f)) + 0xb)) {
          *(undefined1 *)((long)ppuVar50 + -0x68) = uVar68;
          *(long *)((long)ppuVar50 + -0x60) = lVar35;
          *(byte ********)((long)ppuVar50 + -0x58) = pppppppbVar40;
          *(byte ********)((long)ppuVar50 + -0x50) = pppppppbVar39;
          *(byte ********)((long)ppuVar50 + -0x138) = unaff_RBX;
          *(uint *)((long)ppuVar50 + -0x148) = uVar60;
          *(bool *)((long)ppuVar50 + -0x158) = (bVar51 & 0xf9) == 9;
          *(undefined1 **)((long)ppuVar50 + -0x118) = (undefined1 *)((long)ppuVar50 + -0x68);
          *(undefined1 **)((long)ppuVar50 + -0x110) = (undefined1 *)((long)ppuVar50 + -0x138);
          *(undefined1 **)((long)ppuVar50 + -0x108) = (undefined1 *)((long)ppuVar50 + -0x148);
          *(undefined1 **)((long)ppuVar50 + -0x100) = (undefined1 *)((long)ppuVar50 + -0x158);
          puVar57 = &UNK_004dfa40;
          goto code_r0x004db4f9;
        }
      }
      if ((int)uVar45 < -0x4b) {
        *(undefined1 *)((long)ppuVar50 + -0x118) = uVar68;
        *(long *)((long)ppuVar50 + -0x110) = lVar35;
        *(byte ********)((long)ppuVar50 + -0x108) = pppppppbVar40;
        *(byte ********)((long)ppuVar50 + -0x100) = pppppppbVar39;
        *(undefined **)((long)ppuVar50 + -400) = &UNK_004db64a;
        func_0x004df200(unaff_RBX,pppppppbVar54,(bVar51 & 0xf9) == 9,
                        (undefined1 *)((long)ppuVar50 + -0x118));
        pppppppbVar41 = pppppppbVar54;
      }
      else {
        *(undefined1 *)((long)ppuVar50 + -0x118) = uVar68;
        *(long *)((long)ppuVar50 + -0x110) = lVar35;
        *(byte ********)((long)ppuVar50 + -0x108) = pppppppbVar40;
        *(byte ********)((long)ppuVar50 + -0x100) = pppppppbVar39;
        *(undefined **)((long)ppuVar50 + -400) = &UNK_004db87f;
        func_0x004df270(unaff_RBX,pppppppbVar54,(bVar51 & 0xf9) == 9,
                        (undefined1 *)((long)ppuVar50 + -0x118));
        pppppppbVar41 = pppppppbVar54;
      }
      break;
    case 0xe:
      *(undefined1 *)((long)ppuVar50 + -0x68) = uVar68;
      uVar37 = *(ulong *)((long)ppuVar50 + -0x168);
      *(ulong *)((long)ppuVar50 + -0x60) = uVar37;
      *(byte ********)((long)ppuVar50 + -0x58) = pppppppbVar40;
      *(byte ********)((long)ppuVar50 + -0x50) = pppppppbVar39;
      iVar31 = *(int *)(pppppppbVar40 + 1);
      iVar65 = uVar45 + 0xb;
      if (0 < (long)unaff_RBX) {
        iVar52 = -0x3fe;
        if (iVar65 < -0x3fe) {
          iVar52 = iVar65;
        }
        do {
          if (iVar65 < -0x3fd) {
            uVar56 = (ulong)unaff_RBX >> (2U - (char)iVar52 & 0x3f);
            iVar52 = -0x3fe;
            uVar61 = 0;
            goto code_r0x004db57e;
          }
          unaff_RBX = (byte *******)((long)unaff_RBX * 2);
          iVar65 = iVar65 + -1;
        } while (0 < (long)unaff_RBX);
      }
      uVar61 = (ulong)unaff_RBX >> 0x3f;
      iVar52 = 0;
      if (unaff_RBX != (byte *******)0x0) {
        iVar52 = iVar65 + -1;
      }
      uVar56 = (long)unaff_RBX * 2;
code_r0x004db57e:
      bVar59 = (byte)uVar61;
      unaff_R13 = (byte *******)((long)ppuVar50 + -0x118);
      uVar46 = uVar56;
      if (-1 < iVar31) {
        uVar46 = 0;
        if (uVar37 < 0x11) {
          uVar46 = 0x10 - uVar37;
        }
        uVar58 = 0xffffffffffffffff;
        if ((uint)uVar37 < 0x10) {
          bVar36 = (char)uVar46 * '\x04';
          uVar58 = 0xffffffffffffffff >> ((char)uVar46 * -4 & 0x3fU);
          uVar37 = uVar56 & uVar58;
          uVar62 = 8L << (bVar36 - 4 & 0x3f);
          if (uVar37 == uVar62) {
            if (uVar46 != 0x10) {
              uVar61 = (0xfL << (bVar36 & 0x3f) & uVar56) >> (bVar36 & 0x3f) & 0xffffffff;
            }
            if ((uVar61 & 1) != 0) {
code_r0x004dba43:
              lVar35 = 0;
              if (0xf >= uVar46) {
                lVar35 = 1L << (bVar36 & 0x3f);
              }
              bVar72 = (long)uVar56 < 0;
              uVar56 = uVar56 + lVar35;
              bVar59 = bVar59 + (-1 < (long)uVar56 && bVar72 || 0xf < uVar46);
            }
          }
          else if (uVar62 < uVar37) goto code_r0x004dba43;
          uVar58 = ~uVar58;
          uVar37 = *(ulong *)((long)ppuVar50 + -0x168);
        }
        uVar56 = uVar56 & uVar58;
        uVar46 = uVar37;
      }
      *(undefined8 *)((long)ppuVar50 + -0x138) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x130) = 0;
      *(undefined4 *)((long)ppuVar50 + -0x128) = 0;
      lVar35 = (ulong)(bVar51 != 0xf) * 0x10;
      *(undefined1 *)((long)ppuVar50 + -0x138) = 0x30;
      *(byte *)((long)ppuVar50 + -0x137) = (bVar51 != 0xf) << 5 | 0x58;
      *(undefined *)((long)ppuVar50 + -0x136) = (&UNK_00159b0a)[(ulong)bVar59 + lVar35];
      if ((uVar46 == 0) && (((ulong)*pppppppbVar40 & 0x800) == 0)) {
        puVar49 = (undefined1 *)((long)ppuVar50 + -0x135);
      }
      else {
        puVar49 = (undefined1 *)((long)ppuVar50 + -0x134);
        *(undefined1 *)((long)ppuVar50 + -0x135) = 0x2e;
      }
      lVar47 = 0;
      if (uVar56 != 0) {
        do {
          puVar49[lVar47] = (&UNK_00159b0a)[(uVar56 >> 0x3c) + lVar35];
          uVar56 = uVar56 << 4;
          lVar47 = lVar47 + 1;
        } while (uVar56 != 0);
        puVar49 = puVar49 + lVar47;
      }
      pppppppbVar48 = (byte *******)0x0;
      if (-1 < iVar31) {
        pppppppbVar48 = (byte *******)(uVar37 - lVar47);
      }
      pppppppbVar41 = (byte *******)((long)ppuVar50 + -0x138);
      pppppppbVar54 = (byte *******)(puVar49 + -(long)pppppppbVar41);
      *(undefined8 *)((long)ppuVar50 + -0x118) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x110) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x108) = 0;
      *(undefined8 *)((long)ppuVar50 + -0x100) = 0;
      *(undefined2 *)((long)ppuVar50 + -0xf8) = 0;
      *(byte *)((long)ppuVar50 + -0x118) = (bVar51 != 0xf) << 5 | 0x50;
      *(char *)((long)ppuVar50 + -0x117) = (char)(iVar52 >> 0x1f) * -2 + '+';
      iVar31 = -iVar52;
      if (-iVar52 < 0) {
        iVar31 = iVar52;
      }
      *(undefined **)((long)ppuVar50 + -400) = &UNK_004dbb99;
      _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc
                (iVar31,(undefined1 *)((long)ppuVar50 + -0x116));
      *(byte ********)((long)ppuVar50 + -0x148) = unaff_R13;
      *(undefined **)((long)ppuVar50 + -400) = &UNK_004dbba8;
      uVar38 = func_0x0099bcf0(unaff_R13);
      *(undefined8 *)((long)ppuVar50 + -0x140) = uVar38;
      *(undefined8 *)((long)ppuVar50 + -0x188) = *(undefined8 *)((long)ppuVar50 + -0x148);
      *(undefined8 *)((long)ppuVar50 + -0x180) = *(undefined8 *)((long)ppuVar50 + -0x140);
      pppppppbVar55 = (byte *******)((long)ppuVar50 + -0x68);
      uVar38 = 2;
      unaff_RBX = pppppppbVar54;
      param_1 = (byte *******)(uVar37 - lVar47);
      pppppppbVar67 = pppppppbVar48;
      pppppppbVar39 = pppppppbVar41;
      goto code_r0x004dc0ff;
    }
    goto code_r0x004dc104;
  }
  *(double *)((long)ppuVar50 + -0x168) = dVar77;
  *(ulong *)((long)ppuVar50 + -0x160) = uVar37;
  bVar51 = *(byte *)pppppppbVar40;
  puVar53 = (undefined2 *)&UNK_001839d4;
  puVar32 = (undefined2 *)&UNK_00184eb5;
code_r0x004db1e7:
  if ((bVar51 & 0xf9) == 9) {
    puVar32 = puVar53;
  }
  if (bVar51 == 7) {
    puVar32 = puVar53;
  }
  *(undefined1 *)(puVar44 + 1) = *(undefined1 *)(puVar32 + 1);
  *puVar44 = *puVar32;
  pppppppbVar41 = (byte *******)((long)ppuVar50 + -0x118);
  uVar2 = *(undefined4 *)((long)pppppppbVar40 + 4);
  bVar51 = *(byte *)((long)pppppppbVar40 + 1);
  *(undefined **)((long)ppuVar50 + -400) = &UNK_004db22b;
  pppppppbVar55 = pppppppbVar39;
  cVar30 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                     (pppppppbVar39,pppppppbVar41,(long)puVar44 + (3 - (long)pppppppbVar41),uVar2,
                      0xffffffff,bVar51 & 1);
  uVar38 = 1;
  if (cVar30 == '\0') goto code_r0x004db243;
  goto code_r0x004dc106;
code_r0x004dbff3:
  *pbVar71 = bVar59 + 1;
  bVar72 = *(byte *)((long)pppppppbVar41 + -1) == 0x31;
  if (bVar72) {
    pppppppbVar41 = (byte *******)((long)pppppppbVar41 + -1);
  }
  uVar60 = uVar60 + bVar72;
  pppppppbVar54 = (byte *******)((long)pppppppbVar54 - (ulong)bVar72);
  lVar35 = *(long *)((long)ppuVar50 + -0x130);
joined_r0x004dc01c:
  unaff_RBX = (byte *******)0x0;
  if (lVar35 == 0) {
code_r0x004dc05c:
    if ((*(byte *)(*(long *)((long)ppuVar50 + -0x128) + 1) & 8) != 0) goto code_r0x004dc069;
  }
  else {
code_r0x004dc069:
    *(byte *)((long)pppppppbVar41 + -1) = *(byte *)pppppppbVar41;
    *(byte *)pppppppbVar41 = 0x2e;
    pppppppbVar41 = (byte *******)((long)pppppppbVar41 + -1);
  }
  *(undefined8 *)((long)ppuVar50 + -0x68) = 0;
  *(undefined8 *)((long)ppuVar50 + -0x60) = 0;
  *(undefined8 *)((long)ppuVar50 + -0x58) = 0;
  *(undefined8 *)((long)ppuVar50 + -0x50) = 0;
  *(undefined2 *)((long)ppuVar50 + -0x48) = 0;
  *(byte *)((long)ppuVar50 + -0x68) = (bVar51 != 9) << 5 | 0x45;
  uVar45 = -uVar60;
  if ((int)-uVar60 < 0) {
    uVar45 = uVar60;
  }
  *(char *)((long)ppuVar50 + -0x67) = (char)((int)uVar60 >> 0x1f) * -2 + '+';
  if (uVar45 < 10) {
    puVar49 = (undefined1 *)((long)ppuVar50 + -0x65);
    *(undefined1 *)((long)ppuVar50 + -0x66) = 0x30;
  }
  else {
    puVar49 = (undefined1 *)((long)ppuVar50 + -0x66);
  }
  *(undefined **)((long)ppuVar50 + -400) = &UNK_004dc0c8;
  lVar35 = _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc(uVar45,puVar49);
  pppppppbVar54 = (byte *******)((long)pppppppbVar54 - (long)pppppppbVar41);
  *(undefined1 **)((long)ppuVar50 + -0x158) = (undefined1 *)((long)ppuVar50 + -0x68);
  *(long *)((long)ppuVar50 + -0x150) = lVar35 - ((long)ppuVar50 + -0x68);
  *(undefined8 *)((long)ppuVar50 + -0x188) = *(undefined8 *)((long)ppuVar50 + -0x158);
  *(undefined8 *)((long)ppuVar50 + -0x180) = *(undefined8 *)((long)ppuVar50 + -0x150);
  pppppppbVar55 = (byte *******)((long)ppuVar50 + -0x138);
  uVar38 = 0;
  pppppppbVar48 = unaff_RBX;
  param_1 = pppppppbVar67;
  pppppppbVar67 = pppppppbVar41;
  pppppppbVar39 = pppppppbVar54;
code_r0x004dc0ff:
  *(undefined **)((long)ppuVar50 + -400) = &UNK_004dc104;
  func_0x004dd2b0(pppppppbVar55,pppppppbVar41,pppppppbVar54,uVar38,pppppppbVar48);
  pppppppbVar40 = pppppppbVar67;
code_r0x004dc104:
  uVar38 = 1;
  param_2 = pppppppbVar40;
  pppppppbVar54 = pppppppbVar39;
code_r0x004dc106:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar50 + -0x38)) {
    return uVar38;
  }
  *(undefined **)((long)ppuVar50 + -400) = &UNK_004dc226;
  dVar77 = (double)func_0x0099bd00();
  *(undefined1 **)((long)ppuVar50 + -400) = (undefined1 *)((long)ppuVar50 + -8);
  puVar49 = *(undefined1 **)((long)ppuVar50 + -400);
  ppuVar50 = (undefined8 **)((long)ppuVar50 + -0x188);
  pppppppbVar39 = pppppppbVar41;
  pppppppbVar40 = pppppppbVar55;
  uVar37 = extraout_XMM0_Qb_00;
  goto code_r0x004db120;
code_r0x004dbd4c:
  *pbVar71 = bVar51 + 1;
code_r0x004dbd50:
  if (*(byte *)pppppppbVar67 != 0x30) {
    pppppppbVar41 = pppppppbVar67;
  }
code_r0x004dbd58:
  pppppppbVar54 = (byte *******)((long)pppppppbVar55 - (long)pppppppbVar41);
  if ((*(long *)((long)ppuVar50 + -0x60) == 0) &&
     ((*(byte *)(*(long *)((long)ppuVar50 + -0x58) + 1) & 8) == 0)) {
    pppppppbVar54 = (byte *******)((long)pppppppbVar54 + -1);
  }
  pppppppbVar48 =
       (byte *******)
       ((long)ppuVar50 + *(long *)((long)ppuVar50 + -0x60) + (-0xed - (long)pppppppbVar55));
  *(undefined **)((long)ppuVar50 + -0x138) = &UNK_00162ac9;
  *(undefined8 *)((long)ppuVar50 + -0x130) = 0;
  *(undefined8 *)((long)ppuVar50 + -0x188) = *(undefined8 *)((long)ppuVar50 + -0x138);
  *(undefined8 *)((long)ppuVar50 + -0x180) = *(undefined8 *)((long)ppuVar50 + -0x130);
  pppppppbVar55 = (byte *******)((long)ppuVar50 + -0x68);
  uVar38 = 0;
  goto code_r0x004dc0ff;
}


