// Function: _Z19set_file_block_modeN7android4base11borrowed_fdEb
// Address: 003d4660
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _Z19set_file_block_modeN7android4base11borrowed_fdEb(ulong param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auVar4 [8];
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  int *piVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong *extraout_RDX;
  ulong *puVar16;
  undefined *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *unaff_R12;
  byte *pbVar20;
  ulong *unaff_R13;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  ulong *puVar24;
  ulong uVar25;
  uint *unaff_R15;
  ulong *puVar26;
  long in_FS_OFFSET;
  bool bVar27;
  ulong uStack_228;
  undefined1 auStack_220 [8];
  ulong uStack_218;
  ulong *puStack_210;
  undefined8 uStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  ulong *puStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  undefined *puStack_140;
  ulong *puStack_138;
  ulong *puStack_130;
  ulong uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  undefined *apuStack_b8 [2];
  ulong *puStack_a8;
  ulong *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulong uStack_88;
  long lStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  uint *puStack_58;
  undefined *puStack_50;
  uint *puStack_48;
  ulong uStack_40;
  long lStack_38;
  
  puVar26 = (ulong *)(param_1 & 0xffffffff);
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_50 = &UNK_003d4691;
  uVar6 = func_0x0099bf10(param_1,3,0);
  if (uVar6 == 0xffffffff) {
    puVar24 = (ulong *)0x0;
    puVar18 = (ulong *)0x4;
    puVar16 = (ulong *)0x0;
    puStack_50 = &UNK_003d4775;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar5 != '\0') {
      puStack_50 = &UNK_003d477e;
      unaff_R15 = (uint *)func_0x0099bce0();
      uVar6 = *unaff_R15;
      unaff_R12 = (ulong *)(ulong)uVar6;
      puVar24 = (ulong *)0x0;
      unaff_R13 = &uStack_40;
      puStack_50 = &UNK_003d47aa;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R13,&UNK_001895e3,0xee,4,0,unaff_R12);
      puStack_50 = &UNK_003d47b2;
      uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_R13);
      puStack_50 = &UNK_003d47c6;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00178989,0x20);
      puStack_50 = &UNK_003d47d0;
      puVar16 = puVar26;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9);
      puStack_50 = &UNK_003d47d8;
      puVar18 = unaff_R13;
      _ZN7android4base10LogMessageD2Ev();
      *unaff_R15 = uVar6;
    }
  }
  else {
    uVar6 = ((param_2 ^ 1) & 0xff) << 0xb | uVar6 & 0xfffff7ff;
    unaff_R15 = (uint *)(ulong)uVar6;
    puVar16 = (ulong *)0x4;
    puStack_50 = &UNK_003d46bf;
    puVar18 = puVar26;
    iVar7 = func_0x0099bf10(puVar26,4,unaff_R15);
    if (iVar7 == 0) {
      puVar24 = (ulong *)CONCAT71((uint7)(uint3)(param_2 >> 8),1);
    }
    else {
      puVar24 = (ulong *)0x0;
      puVar18 = (ulong *)0x4;
      puVar16 = (ulong *)0x0;
      puStack_50 = &UNK_003d46d6;
      cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar5 != '\0') {
        puStack_50 = &UNK_003d46e3;
        puStack_48 = (uint *)func_0x0099bce0();
        uVar2 = *puStack_48;
        unaff_R13 = (ulong *)(ulong)uVar2;
        puVar24 = (ulong *)0x0;
        unaff_R12 = &uStack_40;
        puStack_50 = &UNK_003d4710;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R12,&UNK_001895e3,0xf3,4,0,unaff_R13);
        puStack_50 = &UNK_003d4718;
        uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
        puStack_50 = &UNK_003d472c;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00186562,0x20);
        puStack_50 = &UNK_003d4736;
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9,puVar26);
        puStack_50 = &UNK_003d474a;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015e02e,8);
        puVar16 = (ulong *)(ulong)uVar6;
        puStack_50 = &UNK_003d4755;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9);
        puStack_50 = &UNK_003d475d;
        puVar18 = unaff_R12;
        _ZN7android4base10LogMessageD2Ev();
        *puStack_48 = uVar2;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar24;
  }
  puStack_50 = &UNK_003d4806;
  func_0x0099bd00();
  puStack_50 = &stack0xfffffffffffffff8;
  puStack_58 = unaff_R15;
  puStack_60 = puVar24;
  puStack_68 = unaff_R13;
  puStack_70 = unaff_R12;
  puStack_78 = puVar26;
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  puVar26 = (ulong *)((long)puVar18 + 1);
  bVar27 = ((byte)*puVar18 & 1) == 0;
  puVar22 = (ulong *)puVar18[2];
  if (bVar27) {
    puVar22 = puVar26;
  }
  uVar14 = (ulong)(byte)((byte)*puVar18 >> 1);
  if (!bVar27) {
    uVar14 = puVar18[1];
  }
  apuStack_b8[0] = &UNK_003d4867;
  cVar5 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                    (puVar22,uVar14,&UNK_00162e1d,4);
  puVar22 = extraout_RDX;
  if (cVar5 == '\0') {
code_r0x003d4947:
    puVar26 = (ulong *)((long)puVar16 + 1);
    bVar27 = ((byte)*puVar16 & 1) == 0;
    puVar21 = (ulong *)puVar16[2];
    if (bVar27) {
      puVar21 = puVar26;
    }
    uVar14 = (ulong)(byte)((byte)*puVar16 >> 1);
    if (!bVar27) {
      uVar14 = puVar16[1];
    }
    apuStack_b8[0] = &UNK_003d4972;
    cVar5 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (puVar21,uVar14,&UNK_00162e1d,4);
    puVar19 = (ulong *)0x1;
    if (cVar5 != '\0') {
      puVar18 = puVar26;
      if ((*puVar16 & 1) != 0) {
        puVar18 = (ulong *)puVar16[2];
      }
      apuStack_b8[0] = &UNK_003d498f;
      plVar10 = (long *)func_0x0099be00();
      puVar18 = (ulong *)((long)puVar18 + 3);
      do {
        puVar21 = puVar18;
        puVar18 = (ulong *)((long)puVar21 + 1);
      } while ((*(byte *)(*plVar10 + 1 + (long)(char)*(byte *)((long)puVar21 + 1) * 2) & 0x20) != 0)
      ;
      puVar24 = (ulong *)0xa;
      if (*(byte *)((long)puVar21 + 1) == 0x30) {
        puVar24 = (ulong *)0x10;
        if ((*(byte *)((long)puVar21 + 2) != 0x78) &&
           (puVar24 = (ulong *)0xa, *(byte *)((long)puVar21 + 2) == 0x58)) {
          puVar24 = (ulong *)0x10;
        }
      }
      apuStack_b8[0] = &UNK_003d49e5;
      puStack_a0 = puVar16;
      puVar16 = (ulong *)func_0x0099bce0();
      *(undefined4 *)puVar16 = 0;
      uStack_98 = (ulong *)0x0;
      apuStack_b8[0] = &UNK_003d4a05;
      puVar21 = puVar18;
      lVar11 = func_0x0099beb0(puVar18,&uStack_98,puVar24);
      if ((int)*puVar16 == 0) {
        uVar8 = 0x16;
        if (((puVar18 == uStack_98) || ((byte)*uStack_98 != 0)) ||
           (uVar8 = 0x22, (int)lVar11 != lVar11)) {
          *(undefined4 *)puVar16 = uVar8;
        }
        else {
          puVar19 = (ulong *)0x1;
          if (0 < lVar11) goto code_r0x003d4a7d;
        }
      }
      if ((*puStack_a0 & 1) != 0) {
        puVar26 = (ulong *)puStack_a0[2];
      }
      puVar17 = &UNK_00183410;
      goto code_r0x003d4a44;
    }
  }
  else {
    puVar24 = puVar26;
    if ((*puVar18 & 1) != 0) {
      puVar24 = (ulong *)puVar18[2];
    }
    apuStack_b8[0] = &UNK_003d4887;
    puStack_a8 = extraout_RDX;
    plVar10 = (long *)func_0x0099be00();
    puVar21 = (ulong *)((long)puVar24 + 3);
    do {
      puVar22 = puVar21;
      puVar21 = (ulong *)((long)puVar22 + 1);
    } while ((*(byte *)(*plVar10 + 1 + (long)(char)*(byte *)((long)puVar22 + 1) * 2) & 0x20) != 0);
    puVar24 = (ulong *)0xa;
    if (*(byte *)((long)puVar22 + 1) == 0x30) {
      puVar24 = (ulong *)0x10;
      if ((*(byte *)((long)puVar22 + 2) != 0x78) &&
         (puVar24 = (ulong *)0xa, *(byte *)((long)puVar22 + 2) == 0x58)) {
        puVar24 = (ulong *)0x10;
      }
    }
    apuStack_b8[0] = &UNK_003d48d3;
    puStack_a0 = puVar16;
    puVar16 = (ulong *)func_0x0099bce0();
    *(undefined4 *)puVar16 = 0;
    uStack_98 = (ulong *)0x0;
    apuStack_b8[0] = &UNK_003d48f3;
    lVar11 = func_0x0099beb0(puVar21,&uStack_98,puVar24);
    puVar22 = puStack_a8;
    if ((int)*puVar16 == 0) {
      uVar8 = 0x16;
      if (((puVar21 == uStack_98) || ((byte)*uStack_98 != 0)) ||
         (uVar8 = 0x22, (int)lVar11 != lVar11)) {
        *(undefined4 *)puVar16 = uVar8;
      }
      else {
        puVar16 = puStack_a0;
        if (-1 < lVar11) goto code_r0x003d4947;
      }
    }
    if ((*puVar18 & 1) != 0) {
      puVar26 = (ulong *)puVar18[2];
    }
    puVar17 = &UNK_0015e037;
code_r0x003d4a44:
    puVar26 = (ulong *)((long)puVar26 + 4);
    puVar21 = &uStack_98;
    apuStack_b8[0] = &UNK_003d4a52;
    _ZN7android4base12StringPrintfEPKcz(puVar21,puVar17,puVar26);
    if ((*puVar22 & 1) != 0) {
      puVar21 = (ulong *)puVar22[2];
      apuStack_b8[0] = &UNK_003d4a6a;
      _ZdaPvSt11align_val_t(puVar21,*puVar22 & 0xfffffffffffffffe);
    }
    puVar22[2] = uStack_88;
    *(undefined4 *)puVar22 = (undefined4)uStack_98;
    *(undefined4 *)((long)puVar22 + 4) = uStack_98._4_4_;
    *(undefined4 *)(puVar22 + 1) = uStack_90;
    *(undefined4 *)((long)puVar22 + 0xc) = uStack_8c;
    puVar19 = (ulong *)0x0;
  }
code_r0x003d4a7d:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return puVar19;
  }
  apuStack_b8[0] = &UNK_003d4aa9;
  func_0x0099bd00();
  lStack_e8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_140 = &UNK_003d4add;
  puStack_e0 = puVar16;
  puStack_d8 = puVar18;
  puStack_d0 = puVar22;
  puStack_c8 = puVar24;
  puStack_c0 = puVar26;
  apuStack_b8[0] = (undefined *)&puStack_50;
  puVar16 = (ulong *)func_0x0099be70(&UNK_0017ed53);
  if (puVar16 == (ulong *)0x0) {
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    lStack_120 = 0;
    puVar19 = (ulong *)0x46;
    puStack_140 = &UNK_003d4b32;
    iVar7 = func_0x0099c2d0();
    puVar18 = (ulong *)0x4000;
    if (iVar7 != -1) {
      puVar18 = (ulong *)(long)iVar7;
    }
    if (puVar18 == (ulong *)0x0) {
      pbVar20 = (byte *)0x0;
      puVar24 = (ulong *)0x0;
    }
    else {
      if ((long)puVar18 < 0) goto code_r0x003d4d44;
      puStack_140 = &UNK_003d4b54;
      puVar24 = (ulong *)_Znwm(puVar18);
      pbVar20 = (byte *)((long)puVar24 + (long)puVar18);
      puStack_140 = &UNK_003d4b68;
      func_0x0099bdb0(puVar24,0,puVar18);
    }
    puStack_140 = &UNK_003d4bbf;
    uVar8 = func_0x0099c2e0();
    puVar16 = (ulong *)(pbVar20 + -(long)puVar24);
    puStack_140 = &UNK_003d4bd7;
    iVar7 = func_0x0099c2f0(uVar8,&uStack_118,puVar24,puVar16,&lStack_120);
    if (lStack_120 == 0 || iVar7 != 0) {
      puVar19 = (ulong *)0x6;
      puStack_140 = &UNK_003d4c2d;
      cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
      if (cVar5 != '\0') {
        puStack_140 = &UNK_003d4cd6;
        puVar18 = (ulong *)func_0x0099bce0();
        puStack_130 = (ulong *)CONCAT44(puStack_130._4_4_,(int)*puVar18);
        puVar19 = &uStack_128;
        puStack_140 = &UNK_003d4d07;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar19,&UNK_001895e3,0x130,6,0,0xffffffff);
        puStack_140 = &UNK_003d4d0f;
        uVar9 = _ZN7android4base10LogMessage6streamEv(puVar19);
        puStack_140 = &UNK_003d4d23;
        func_0x0032eb30(uVar9,&UNK_0018342f,0x21);
        puStack_140 = &UNK_003d4d2e;
        _ZN7android4base10LogMessageD2Ev();
        *(undefined4 *)puVar18 = puStack_130._0_4_;
        puVar22 = puVar16;
      }
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
    }
    else {
      puVar18 = *(ulong **)(lStack_120 + 0x20);
      puStack_140 = &UNK_003d4bf9;
      puVar19 = puVar18;
      puVar12 = (ulong *)func_0x0099bcf0();
      puVar26 = puVar24;
      if ((ulong *)0xfffffffffffffff6 < puVar12) goto code_r0x003d4d3f;
      puStack_130 = puVar18;
      if (puVar12 < (ulong *)0x17) {
        *(char *)puVar21 = (char)puVar12 * '\x02';
        puVar18 = (ulong *)((long)puVar21 + 1);
      }
      else {
        lVar11 = 0x1a;
        if (((ulong)puVar12 | 7) != 0x17) {
          lVar11 = ((ulong)puVar12 | 7) + 1;
        }
        puStack_140 = &UNK_003d4c9d;
        puStack_138 = puVar16;
        puVar18 = (ulong *)_Znwm(lVar11);
        *puVar21 = lVar11 + 1;
        puVar21[1] = (ulong)puVar12;
        puVar21[2] = (ulong)puVar18;
        puVar16 = puStack_138;
      }
      puStack_140 = &UNK_003d4cc1;
      puVar19 = puVar18;
      func_0x0099bd90(puVar18,puStack_130,puVar12);
      *(byte *)((long)puVar18 + (long)puVar12) = 0;
      puVar22 = puVar12;
    }
    if (puVar24 != (ulong *)0x0) {
      puStack_140 = &UNK_003d4c53;
      puVar19 = puVar24;
      _ZdaPvSt11align_val_t(puVar24,puVar16);
    }
code_r0x003d4c53:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_e8) {
      return puVar21;
    }
    puStack_140 = &UNK_003d4d3f;
    func_0x0099bd00();
    puVar26 = puVar24;
  }
  else {
    puStack_140 = &UNK_003d4aed;
    puVar19 = puVar16;
    puVar24 = (ulong *)func_0x0099bcf0();
    if (puVar24 < (ulong *)0xfffffffffffffff7) {
      if (puVar24 < (ulong *)0x17) {
        *(char *)puVar21 = (char)puVar24 * '\x02';
        puVar18 = (ulong *)((long)puVar21 + 1);
      }
      else {
        lVar11 = 0x1a;
        if (((ulong)puVar24 | 7) != 0x17) {
          lVar11 = ((ulong)puVar24 | 7) + 1;
        }
        puStack_140 = &UNK_003d4b8b;
        puVar18 = (ulong *)_Znwm(lVar11);
        puVar22 = (ulong *)(lVar11 + 1);
        *puVar21 = (ulong)puVar22;
        puVar21[1] = (ulong)puVar24;
        puVar21[2] = (ulong)puVar18;
      }
      puStack_140 = &UNK_003d4baa;
      puVar19 = puVar18;
      func_0x0099bd90(puVar18,puVar16,puVar24);
      *(byte *)((long)puVar18 + (long)puVar24) = 0;
      goto code_r0x003d4c53;
    }
  }
code_r0x003d4d3f:
  puStack_140 = &UNK_003d4d44;
  func_0x0032e8f0();
  puVar24 = puVar16;
code_r0x003d4d44:
  puStack_140 = &UNK_003d4d49;
  func_0x00330ca0();
  lStack_170 = *(long *)(in_FS_OFFSET + 0x28);
  auStack_220 = (undefined1  [8])0x0;
  uStack_218 = 0;
  puStack_210 = (ulong *)0x0;
  puVar16 = (ulong *)auStack_220;
  puStack_168 = puVar21;
  puStack_160 = puVar18;
  puStack_158 = puVar22;
  puStack_150 = puVar24;
  puStack_148 = puVar26;
  puStack_140 = (undefined *)apuStack_b8;
  _Z20adb_get_homedir_pathv();
  puVar26 = puStack_210;
  auVar4 = auStack_220;
  uVar14 = uStack_218;
  if (((ulong)auStack_220 & 1) == 0) {
    uVar14 = (ulong)auStack_220 >> 1 & 0x7f;
  }
  uVar1 = uVar14 + 1;
  if (uVar1 < 0xfffffffffffffff7) {
    uStack_200 = 0;
    uStack_1f8 = 0;
    lStack_1f0 = 0;
    if (uVar1 < 0x17) {
      uVar25 = 0;
      uStack_200 = (ulong)(byte)((char)uVar1 * '\x02');
    }
    else {
      lVar11 = 0x1a;
      if ((uVar1 | 7) != 0x17) {
        lVar11 = (uVar1 | 7) + 1;
      }
      lStack_1f0 = _Znwm(lVar11);
      uStack_200 = lVar11 + 1;
      uVar25 = uStack_200 & 0xffffffff;
      uStack_1f8 = uVar1;
    }
    puVar18 = (ulong *)(auStack_220 + 1);
    if (((ulong)auVar4 & 1) != 0) {
      puVar18 = puVar26;
    }
    lVar11 = (long)&uStack_200 + 1;
    if ((uVar25 & 1) != 0) {
      lVar11 = lStack_1f0;
    }
    func_0x0099bda0(lVar11,puVar18,uVar14);
    *(undefined2 *)(lVar11 + uVar14) = 0x2f;
    puVar18 = (ulong *)_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                 (&uStack_200,&UNK_00165f17);
    puVar19[2] = puVar18[2];
    uVar14 = puVar18[1];
    *puVar19 = *puVar18;
    puVar19[1] = uVar14;
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18[2] = 0;
    if ((uStack_200 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_1f0,uStack_200 & 0xfffffffffffffffe);
    }
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    lStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    puVar18 = (ulong *)((long)puVar19 + 1);
    puVar24 = puVar18;
    if ((*puVar19 & 1) != 0) {
      puVar24 = (ulong *)puVar19[2];
    }
    puVar16 = (ulong *)0x1;
    iVar7 = func_0x0099bf30(1,puVar24,&uStack_200);
    if (iVar7 == -1) {
      if ((*puVar19 & 1) != 0) {
        puVar18 = (ulong *)puVar19[2];
      }
      iVar7 = func_0x0099c2c0(puVar18,0x1e8);
      puVar16 = puVar18;
      if ((iVar7 == -1) && (piVar13 = (int *)func_0x0099bce0(), puVar16 = puVar18, *piVar13 != 0x11)
         ) {
        puVar16 = (ulong *)0x6;
        cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
        if (cVar5 != '\0') {
          iVar7 = *piVar13;
          puVar16 = &uStack_228;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (puVar16,&UNK_001895e3,0x13b,6,0,iVar7);
          uVar9 = _ZN7android4base10LogMessage6streamEv(puVar16);
          uVar9 = func_0x0032eb30(uVar9,&UNK_0017d5fe,0xe);
          uVar9 = func_0x0032e5a0(uVar9,puVar19);
          func_0x0032eb30(uVar9,&UNK_00162c6d,1);
          _ZN7android4base10LogMessageD2Ev();
          *piVar13 = iVar7;
        }
      }
    }
    if (((ulong)auVar4 & 1) != 0) {
      _ZdaPvSt11align_val_t(puVar26,(ulong)auStack_220 & 0xfffffffffffffffe);
      puVar16 = puVar26;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_170) {
      return puVar19;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  lVar11 = func_0x0099be70(&UNK_001705ed);
  if (lVar11 == 0) {
    puVar15 = (undefined *)func_0x0099be70(&UNK_00170602);
    puVar17 = &UNK_0016136b;
    if (puVar15 != (undefined *)0x0) {
      puVar17 = puVar15;
    }
    uVar8 = func_0x0099c2e0();
    _ZN7android4base12StringPrintfEPKcz(puVar16,&UNK_001755cc,puVar17,uVar8);
  }
  else {
    uVar14 = func_0x0099bcf0(lVar11);
    if (0xfffffffffffffff6 < uVar14) {
      func_0x0032e8f0();
      pcVar3 = (code *)swi(3);
      puVar26 = (ulong *)(*pcVar3)();
      return puVar26;
    }
    if (uVar14 < 0x17) {
      *(char *)puVar16 = (char)uVar14 * '\x02';
      pbVar20 = (byte *)((long)puVar16 + 1);
    }
    else {
      lVar23 = 0x1a;
      if ((uVar14 | 7) != 0x17) {
        lVar23 = (uVar14 | 7) + 1;
      }
      pbVar20 = (byte *)_Znwm(lVar23);
      *puVar16 = lVar23 + 1;
      puVar16[1] = uVar14;
      puVar16[2] = (ulong)pbVar20;
    }
    func_0x0099bd90(pbVar20,lVar11,uVar14);
    pbVar20[uVar14] = 0;
  }
  return puVar16;
}


