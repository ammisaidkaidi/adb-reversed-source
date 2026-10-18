// Function: _Z20adb_get_homedir_pathv
// Address: 003d4ab0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _Z20adb_get_homedir_pathv(byte *param_1)

{
  ulong uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  byte *unaff_R12;
  byte *pbVar16;
  byte *unaff_R13;
  long lVar17;
  byte *unaff_R14;
  ulong uVar18;
  undefined *puVar19;
  byte *unaff_R15;
  ulong uVar20;
  long in_FS_OFFSET;
  byte abStack_178 [8];
  undefined8 uStack_170;
  ulong uStack_168;
  byte *pbStack_160;
  undefined8 uStack_150;
  ulong uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined *puStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  byte abStack_78 [8];
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_90 = &UNK_003d4add;
  pbVar6 = (byte *)func_0x0099be70(&UNK_0017ed53);
  if (pbVar6 == (byte *)0x0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    lStack_70 = 0;
    pbVar16 = (byte *)0x46;
    puStack_90 = &UNK_003d4b32;
    iVar4 = func_0x0099c2d0();
    unaff_R12 = (byte *)0x4000;
    if (iVar4 != -1) {
      unaff_R12 = (byte *)(long)iVar4;
    }
    if (unaff_R12 == (byte *)0x0) {
      pbVar6 = (byte *)0x0;
      pbVar7 = (byte *)0x0;
    }
    else {
      if ((long)unaff_R12 < 0) goto code_r0x003d4d44;
      puStack_90 = &UNK_003d4b54;
      pbVar7 = (byte *)_Znwm(unaff_R12);
      pbVar6 = pbVar7 + (long)unaff_R12;
      puStack_90 = &UNK_003d4b68;
      func_0x0099bdb0(pbVar7,0,unaff_R12);
    }
    puStack_90 = &UNK_003d4bbf;
    uVar5 = func_0x0099c2e0();
    pbVar6 = pbVar6 + -(long)pbVar7;
    puStack_90 = &UNK_003d4bd7;
    iVar4 = func_0x0099c2f0(uVar5,&uStack_68,pbVar7,pbVar6,&lStack_70);
    if (lStack_70 == 0 || iVar4 != 0) {
      pbVar16 = (byte *)0x6;
      puStack_90 = &UNK_003d4c2d;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
      if (cVar3 != '\0') {
        puStack_90 = &UNK_003d4cd6;
        unaff_R12 = (byte *)func_0x0099bce0();
        pbStack_80 = (byte *)CONCAT44(pbStack_80._4_4_,*(undefined4 *)unaff_R12);
        pbVar16 = abStack_78;
        puStack_90 = &UNK_003d4d07;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pbVar16,&UNK_001895e3,0x130,6,0,0xffffffff);
        puStack_90 = &UNK_003d4d0f;
        uVar12 = _ZN7android4base10LogMessage6streamEv(pbVar16);
        puStack_90 = &UNK_003d4d23;
        func_0x0032eb30(uVar12,&UNK_0018342f,0x21);
        puStack_90 = &UNK_003d4d2e;
        _ZN7android4base10LogMessageD2Ev();
        *(undefined4 *)unaff_R12 = pbStack_80._0_4_;
        unaff_R13 = pbVar6;
      }
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
    }
    else {
      unaff_R12 = *(byte **)(lStack_70 + 0x20);
      puStack_90 = &UNK_003d4bf9;
      pbVar16 = unaff_R12;
      pbVar8 = (byte *)func_0x0099bcf0();
      unaff_R15 = pbVar7;
      if ((byte *)0xfffffffffffffff6 < pbVar8) goto code_r0x003d4d3f;
      pbStack_80 = unaff_R12;
      if (pbVar8 < (byte *)0x17) {
        *param_1 = (char)pbVar8 * '\x02';
        pbVar9 = param_1 + 1;
      }
      else {
        lVar13 = 0x1a;
        if (((ulong)pbVar8 | 7) != 0x17) {
          lVar13 = ((ulong)pbVar8 | 7) + 1;
        }
        puStack_90 = &UNK_003d4c9d;
        pbStack_88 = pbVar6;
        pbVar9 = (byte *)_Znwm(lVar13);
        *(long *)param_1 = lVar13 + 1;
        *(byte **)(param_1 + 8) = pbVar8;
        *(byte **)(param_1 + 0x10) = pbVar9;
        pbVar6 = pbStack_88;
      }
      puStack_90 = &UNK_003d4cc1;
      pbVar16 = pbVar9;
      func_0x0099bd90(pbVar9,pbStack_80,pbVar8);
      pbVar9[(long)pbVar8] = 0;
      unaff_R12 = pbVar9;
      unaff_R13 = pbVar8;
    }
    if (pbVar7 != (byte *)0x0) {
      puStack_90 = &UNK_003d4c53;
      pbVar16 = pbVar7;
      _ZdaPvSt11align_val_t(pbVar7,pbVar6);
    }
code_r0x003d4c53:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
    puStack_90 = &UNK_003d4d3f;
    func_0x0099bd00();
    unaff_R15 = pbVar7;
  }
  else {
    puStack_90 = &UNK_003d4aed;
    pbVar16 = pbVar6;
    pbVar7 = (byte *)func_0x0099bcf0();
    if (pbVar7 < (byte *)0xfffffffffffffff7) {
      if (pbVar7 < (byte *)0x17) {
        *param_1 = (char)pbVar7 * '\x02';
        unaff_R12 = param_1 + 1;
      }
      else {
        lVar13 = 0x1a;
        if (((ulong)pbVar7 | 7) != 0x17) {
          lVar13 = ((ulong)pbVar7 | 7) + 1;
        }
        puStack_90 = &UNK_003d4b8b;
        unaff_R12 = (byte *)_Znwm(lVar13);
        unaff_R13 = (byte *)(lVar13 + 1);
        *(byte **)param_1 = unaff_R13;
        *(byte **)(param_1 + 8) = pbVar7;
        *(byte **)(param_1 + 0x10) = unaff_R12;
      }
      puStack_90 = &UNK_003d4baa;
      pbVar16 = unaff_R12;
      func_0x0099bd90(unaff_R12,pbVar6,pbVar7);
      unaff_R12[(long)pbVar7] = 0;
      goto code_r0x003d4c53;
    }
  }
code_r0x003d4d3f:
  puStack_90 = &UNK_003d4d44;
  func_0x0032e8f0();
  unaff_R14 = pbVar6;
code_r0x003d4d44:
  puStack_90 = &UNK_003d4d49;
  func_0x00330ca0();
  lStack_c0 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_170 = 0;
  uStack_168 = 0;
  pbStack_160 = (byte *)0x0;
  pbVar6 = (byte *)&uStack_170;
  pbStack_b8 = param_1;
  pbStack_b0 = unaff_R12;
  pbStack_a8 = unaff_R13;
  pbStack_a0 = unaff_R14;
  pbStack_98 = unaff_R15;
  puStack_90 = &stack0xfffffffffffffff8;
  _Z20adb_get_homedir_pathv();
  pbVar7 = pbStack_160;
  uVar14 = uStack_170;
  uVar20 = uStack_168;
  if ((uStack_170 & 1) == 0) {
    uVar20 = uStack_170 >> 1 & 0x7f;
  }
  uVar1 = uVar20 + 1;
  if (uVar1 < 0xfffffffffffffff7) {
    uStack_150 = 0;
    uStack_148 = 0;
    lStack_140 = 0;
    if (uVar1 < 0x17) {
      uVar18 = 0;
      uStack_150 = (ulong)(byte)((char)uVar1 * '\x02');
    }
    else {
      lVar13 = 0x1a;
      if ((uVar1 | 7) != 0x17) {
        lVar13 = (uVar1 | 7) + 1;
      }
      lStack_140 = _Znwm(lVar13);
      uStack_150 = lVar13 + 1;
      uVar18 = uStack_150 & 0xffffffff;
      uStack_148 = uVar1;
    }
    pbVar6 = (byte *)((long)&uStack_170 + 1);
    if ((uVar14 & 1) != 0) {
      pbVar6 = pbVar7;
    }
    lVar13 = (long)&uStack_150 + 1;
    if ((uVar18 & 1) != 0) {
      lVar13 = lStack_140;
    }
    func_0x0099bda0(lVar13,pbVar6,uVar20);
    *(undefined2 *)(lVar13 + uVar20) = 0x2f;
    puVar10 = (undefined8 *)
              _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                        (&uStack_150,&UNK_00165f17);
    *(undefined8 *)(pbVar16 + 0x10) = puVar10[2];
    uVar12 = puVar10[1];
    *(undefined8 *)pbVar16 = *puVar10;
    *(undefined8 *)(pbVar16 + 8) = uVar12;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    if ((uStack_150 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_140,uStack_150 & 0xfffffffffffffffe);
    }
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    lStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    pbVar8 = pbVar16 + 1;
    pbVar9 = pbVar8;
    if ((*pbVar16 & 1) != 0) {
      pbVar9 = *(byte **)(pbVar16 + 0x10);
    }
    pbVar6 = (byte *)0x1;
    iVar4 = func_0x0099bf30(1,pbVar9,&uStack_150);
    if (iVar4 == -1) {
      if ((*pbVar16 & 1) != 0) {
        pbVar8 = *(byte **)(pbVar16 + 0x10);
      }
      iVar4 = func_0x0099c2c0(pbVar8,0x1e8);
      pbVar6 = pbVar8;
      if ((iVar4 == -1) && (piVar11 = (int *)func_0x0099bce0(), pbVar6 = pbVar8, *piVar11 != 0x11))
      {
        pbVar6 = (byte *)0x6;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
        if (cVar3 != '\0') {
          iVar4 = *piVar11;
          pbVar6 = abStack_178;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (pbVar6,&UNK_001895e3,0x13b,6,0,iVar4);
          uVar12 = _ZN7android4base10LogMessage6streamEv(pbVar6);
          uVar12 = func_0x0032eb30(uVar12,&UNK_0017d5fe,0xe);
          uVar12 = func_0x0032e5a0(uVar12,pbVar16);
          func_0x0032eb30(uVar12,&UNK_00162c6d,1);
          _ZN7android4base10LogMessageD2Ev();
          *piVar11 = iVar4;
        }
      }
    }
    if ((uVar14 & 1) != 0) {
      _ZdaPvSt11align_val_t(pbVar7,uStack_170 & 0xfffffffffffffffe);
      pbVar6 = pbVar7;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c0) {
      return pbVar16;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  lVar13 = func_0x0099be70(&UNK_001705ed);
  if (lVar13 == 0) {
    puVar15 = (undefined *)func_0x0099be70(&UNK_00170602);
    puVar19 = &UNK_0016136b;
    if (puVar15 != (undefined *)0x0) {
      puVar19 = puVar15;
    }
    uVar5 = func_0x0099c2e0();
    _ZN7android4base12StringPrintfEPKcz(pbVar6,&UNK_001755cc,puVar19,uVar5);
  }
  else {
    uVar14 = func_0x0099bcf0(lVar13);
    if (0xfffffffffffffff6 < uVar14) {
      func_0x0032e8f0();
      pcVar2 = (code *)swi(3);
      pbVar6 = (byte *)(*pcVar2)();
      return pbVar6;
    }
    if (uVar14 < 0x17) {
      *pbVar6 = (char)uVar14 * '\x02';
      pbVar16 = pbVar6 + 1;
    }
    else {
      lVar17 = 0x1a;
      if ((uVar14 | 7) != 0x17) {
        lVar17 = (uVar14 | 7) + 1;
      }
      pbVar16 = (byte *)_Znwm(lVar17);
      *(long *)pbVar6 = lVar17 + 1;
      *(ulong *)(pbVar6 + 8) = uVar14;
      *(byte **)(pbVar6 + 0x10) = pbVar16;
    }
    func_0x0099bd90(pbVar16,lVar13,uVar14);
    pbVar16[uVar14] = 0;
  }
  return pbVar6;
}


