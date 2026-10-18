// Function: _Z25forward_targets_are_validRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_PS5_
// Address: 003d4810
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _Z25forward_targets_are_validRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_PS5_
                  (ulong *param_1,byte *param_2,ulong *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 auVar3 [8];
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong *puVar17;
  byte *pbVar18;
  ulong *puVar19;
  long lVar20;
  ulong *unaff_R14;
  ulong uVar21;
  ulong *puVar22;
  long in_FS_OFFSET;
  bool bVar23;
  ulong uStack_1e0;
  undefined1 auStack_1d8 [8];
  ulong uStack_1d0;
  ulong *puStack_1c8;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  undefined *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  byte *pbStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  undefined *apuStack_70 [2];
  ulong *puStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar22 = (ulong *)((long)param_1 + 1);
  bVar23 = ((byte)*param_1 & 1) == 0;
  puVar19 = (ulong *)param_1[2];
  if (bVar23) {
    puVar19 = puVar22;
  }
  uVar14 = (ulong)(byte)((byte)*param_1 >> 1);
  if (!bVar23) {
    uVar14 = param_1[1];
  }
  apuStack_70[0] = &UNK_003d4867;
  cVar4 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                    (puVar19,uVar14,&UNK_00162e1d,4);
  if (cVar4 == '\0') {
code_r0x003d4947:
    puVar22 = (ulong *)(param_2 + 1);
    bVar23 = (*param_2 & 1) == 0;
    puVar19 = *(ulong **)(param_2 + 0x10);
    if (bVar23) {
      puVar19 = puVar22;
    }
    uVar14 = (ulong)(*param_2 >> 1);
    if (!bVar23) {
      uVar14 = *(ulong *)(param_2 + 8);
    }
    apuStack_70[0] = &UNK_003d4972;
    cVar4 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (puVar19,uVar14,&UNK_00162e1d,4);
    puVar9 = (ulong *)0x1;
    if (cVar4 != '\0') {
      puVar19 = puVar22;
      if ((*param_2 & 1) != 0) {
        puVar19 = *(ulong **)(param_2 + 0x10);
      }
      apuStack_70[0] = &UNK_003d498f;
      plVar7 = (long *)func_0x0099be00();
      param_1 = (ulong *)((long)puVar19 + 3);
      do {
        puVar19 = param_1;
        param_1 = (ulong *)((long)puVar19 + 1);
      } while ((*(byte *)(*plVar7 + 1 + (long)(char)*(byte *)((long)puVar19 + 1) * 2) & 0x20) != 0);
      unaff_R14 = (ulong *)0xa;
      if (*(byte *)((long)puVar19 + 1) == 0x30) {
        unaff_R14 = (ulong *)0x10;
        if ((*(byte *)((long)puVar19 + 2) != 0x78) &&
           (unaff_R14 = (ulong *)0xa, *(byte *)((long)puVar19 + 2) == 0x58)) {
          unaff_R14 = (ulong *)0x10;
        }
      }
      apuStack_70[0] = &UNK_003d49e5;
      pbStack_58 = param_2;
      param_2 = (byte *)func_0x0099bce0();
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      uStack_50 = (ulong *)0x0;
      apuStack_70[0] = &UNK_003d4a05;
      puVar19 = param_1;
      lVar8 = func_0x0099beb0(param_1,&uStack_50,unaff_R14);
      if (*(int *)param_2 == 0) {
        uVar6 = 0x16;
        if (((param_1 == uStack_50) || ((byte)*uStack_50 != 0)) ||
           (uVar6 = 0x22, (int)lVar8 != lVar8)) {
          *(undefined4 *)param_2 = uVar6;
        }
        else {
          puVar9 = (ulong *)0x1;
          if (0 < lVar8) goto code_r0x003d4a7d;
        }
      }
      if ((*pbStack_58 & 1) != 0) {
        puVar22 = *(ulong **)(pbStack_58 + 0x10);
      }
      puVar16 = &UNK_00183410;
      goto code_r0x003d4a44;
    }
  }
  else {
    puVar19 = puVar22;
    if ((*param_1 & 1) != 0) {
      puVar19 = (ulong *)param_1[2];
    }
    apuStack_70[0] = &UNK_003d4887;
    puStack_60 = param_3;
    plVar7 = (long *)func_0x0099be00();
    puVar19 = (ulong *)((long)puVar19 + 3);
    do {
      puVar9 = puVar19;
      puVar19 = (ulong *)((long)puVar9 + 1);
    } while ((*(byte *)(*plVar7 + 1 + (long)(char)*(byte *)((long)puVar9 + 1) * 2) & 0x20) != 0);
    unaff_R14 = (ulong *)0xa;
    if (*(byte *)((long)puVar9 + 1) == 0x30) {
      unaff_R14 = (ulong *)0x10;
      if ((*(byte *)((long)puVar9 + 2) != 0x78) &&
         (unaff_R14 = (ulong *)0xa, *(byte *)((long)puVar9 + 2) == 0x58)) {
        unaff_R14 = (ulong *)0x10;
      }
    }
    apuStack_70[0] = &UNK_003d48d3;
    pbStack_58 = param_2;
    param_2 = (byte *)func_0x0099bce0();
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    uStack_50 = (ulong *)0x0;
    apuStack_70[0] = &UNK_003d48f3;
    lVar8 = func_0x0099beb0(puVar19,&uStack_50,unaff_R14);
    param_3 = puStack_60;
    if (*(int *)param_2 == 0) {
      uVar6 = 0x16;
      if (((puVar19 == uStack_50) || ((byte)*uStack_50 != 0)) || (uVar6 = 0x22, (int)lVar8 != lVar8)
         ) {
        *(undefined4 *)param_2 = uVar6;
      }
      else {
        param_2 = pbStack_58;
        if (-1 < lVar8) goto code_r0x003d4947;
      }
    }
    if ((*param_1 & 1) != 0) {
      puVar22 = (ulong *)param_1[2];
    }
    puVar16 = &UNK_0015e037;
code_r0x003d4a44:
    puVar22 = (ulong *)((long)puVar22 + 4);
    puVar19 = &uStack_50;
    apuStack_70[0] = &UNK_003d4a52;
    _ZN7android4base12StringPrintfEPKcz(puVar19,puVar16,puVar22);
    if ((*param_3 & 1) != 0) {
      puVar19 = (ulong *)param_3[2];
      apuStack_70[0] = &UNK_003d4a6a;
      _ZdaPvSt11align_val_t(puVar19,*param_3 & 0xfffffffffffffffe);
    }
    param_3[2] = uStack_40;
    *(undefined4 *)param_3 = (undefined4)uStack_50;
    *(undefined4 *)((long)param_3 + 4) = uStack_50._4_4_;
    *(undefined4 *)(param_3 + 1) = uStack_48;
    *(undefined4 *)((long)param_3 + 0xc) = uStack_44;
    puVar9 = (ulong *)0x0;
  }
code_r0x003d4a7d:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar9;
  }
  apuStack_70[0] = &UNK_003d4aa9;
  func_0x0099bd00();
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_f8 = &UNK_003d4add;
  pbStack_98 = param_2;
  puStack_90 = param_1;
  puStack_88 = param_3;
  puStack_80 = unaff_R14;
  puStack_78 = puVar22;
  apuStack_70[0] = &stack0xfffffffffffffff8;
  puVar9 = (ulong *)func_0x0099be70(&UNK_0017ed53);
  if (puVar9 == (ulong *)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    lStack_d8 = 0;
    puVar17 = (ulong *)0x46;
    puStack_f8 = &UNK_003d4b32;
    iVar5 = func_0x0099c2d0();
    param_1 = (ulong *)0x4000;
    if (iVar5 != -1) {
      param_1 = (ulong *)(long)iVar5;
    }
    if (param_1 == (ulong *)0x0) {
      pbVar18 = (byte *)0x0;
      puVar10 = (ulong *)0x0;
    }
    else {
      if ((long)param_1 < 0) goto code_r0x003d4d44;
      puStack_f8 = &UNK_003d4b54;
      puVar10 = (ulong *)_Znwm(param_1);
      pbVar18 = (byte *)((long)puVar10 + (long)param_1);
      puStack_f8 = &UNK_003d4b68;
      func_0x0099bdb0(puVar10,0,param_1);
    }
    puStack_f8 = &UNK_003d4bbf;
    uVar6 = func_0x0099c2e0();
    puVar9 = (ulong *)(pbVar18 + -(long)puVar10);
    puStack_f8 = &UNK_003d4bd7;
    iVar5 = func_0x0099c2f0(uVar6,&uStack_d0,puVar10,puVar9,&lStack_d8);
    if (lStack_d8 == 0 || iVar5 != 0) {
      puVar17 = (ulong *)0x6;
      puStack_f8 = &UNK_003d4c2d;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
      if (cVar4 != '\0') {
        puStack_f8 = &UNK_003d4cd6;
        param_1 = (ulong *)func_0x0099bce0();
        puStack_e8 = (ulong *)CONCAT44(puStack_e8._4_4_,(int)*param_1);
        puVar17 = &uStack_e0;
        puStack_f8 = &UNK_003d4d07;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar17,&UNK_001895e3,0x130,6,0,0xffffffff);
        puStack_f8 = &UNK_003d4d0f;
        uVar13 = _ZN7android4base10LogMessage6streamEv(puVar17);
        puStack_f8 = &UNK_003d4d23;
        func_0x0032eb30(uVar13,&UNK_0018342f,0x21);
        puStack_f8 = &UNK_003d4d2e;
        _ZN7android4base10LogMessageD2Ev();
        *(undefined4 *)param_1 = puStack_e8._0_4_;
        param_3 = puVar9;
      }
      *puVar19 = 0;
      puVar19[1] = 0;
      puVar19[2] = 0;
    }
    else {
      param_1 = *(ulong **)(lStack_d8 + 0x20);
      puStack_f8 = &UNK_003d4bf9;
      puVar17 = param_1;
      puVar11 = (ulong *)func_0x0099bcf0();
      puVar22 = puVar10;
      if ((ulong *)0xfffffffffffffff6 < puVar11) goto code_r0x003d4d3f;
      puStack_e8 = param_1;
      if (puVar11 < (ulong *)0x17) {
        *(char *)puVar19 = (char)puVar11 * '\x02';
        param_1 = (ulong *)((long)puVar19 + 1);
      }
      else {
        lVar8 = 0x1a;
        if (((ulong)puVar11 | 7) != 0x17) {
          lVar8 = ((ulong)puVar11 | 7) + 1;
        }
        puStack_f8 = &UNK_003d4c9d;
        puStack_f0 = puVar9;
        param_1 = (ulong *)_Znwm(lVar8);
        *puVar19 = lVar8 + 1;
        puVar19[1] = (ulong)puVar11;
        puVar19[2] = (ulong)param_1;
        puVar9 = puStack_f0;
      }
      puStack_f8 = &UNK_003d4cc1;
      puVar17 = param_1;
      func_0x0099bd90(param_1,puStack_e8,puVar11);
      *(byte *)((long)param_1 + (long)puVar11) = 0;
      param_3 = puVar11;
    }
    if (puVar10 != (ulong *)0x0) {
      puStack_f8 = &UNK_003d4c53;
      puVar17 = puVar10;
      _ZdaPvSt11align_val_t(puVar10,puVar9);
    }
code_r0x003d4c53:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
      return puVar19;
    }
    puStack_f8 = &UNK_003d4d3f;
    func_0x0099bd00();
    puVar22 = puVar10;
  }
  else {
    puStack_f8 = &UNK_003d4aed;
    puVar17 = puVar9;
    puVar10 = (ulong *)func_0x0099bcf0();
    if (puVar10 < (ulong *)0xfffffffffffffff7) {
      if (puVar10 < (ulong *)0x17) {
        *(char *)puVar19 = (char)puVar10 * '\x02';
        param_1 = (ulong *)((long)puVar19 + 1);
      }
      else {
        lVar8 = 0x1a;
        if (((ulong)puVar10 | 7) != 0x17) {
          lVar8 = ((ulong)puVar10 | 7) + 1;
        }
        puStack_f8 = &UNK_003d4b8b;
        param_1 = (ulong *)_Znwm(lVar8);
        param_3 = (ulong *)(lVar8 + 1);
        *puVar19 = (ulong)param_3;
        puVar19[1] = (ulong)puVar10;
        puVar19[2] = (ulong)param_1;
      }
      puStack_f8 = &UNK_003d4baa;
      puVar17 = param_1;
      func_0x0099bd90(param_1,puVar9,puVar10);
      *(byte *)((long)param_1 + (long)puVar10) = 0;
      goto code_r0x003d4c53;
    }
  }
code_r0x003d4d3f:
  puStack_f8 = &UNK_003d4d44;
  func_0x0032e8f0();
  unaff_R14 = puVar9;
code_r0x003d4d44:
  puStack_f8 = &UNK_003d4d49;
  func_0x00330ca0();
  lStack_128 = *(long *)(in_FS_OFFSET + 0x28);
  auStack_1d8 = (undefined1  [8])0x0;
  uStack_1d0 = 0;
  puStack_1c8 = (ulong *)0x0;
  puVar9 = (ulong *)auStack_1d8;
  puStack_120 = puVar19;
  puStack_118 = param_1;
  puStack_110 = param_3;
  puStack_108 = unaff_R14;
  puStack_100 = puVar22;
  puStack_f8 = (undefined *)apuStack_70;
  _Z20adb_get_homedir_pathv();
  puVar22 = puStack_1c8;
  auVar3 = auStack_1d8;
  uVar14 = uStack_1d0;
  if (((ulong)auStack_1d8 & 1) == 0) {
    uVar14 = (ulong)auStack_1d8 >> 1 & 0x7f;
  }
  uVar1 = uVar14 + 1;
  if (uVar1 < 0xfffffffffffffff7) {
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    lStack_1a8 = 0;
    if (uVar1 < 0x17) {
      uVar21 = 0;
      uStack_1b8 = (ulong)(byte)((char)uVar1 * '\x02');
    }
    else {
      lVar8 = 0x1a;
      if ((uVar1 | 7) != 0x17) {
        lVar8 = (uVar1 | 7) + 1;
      }
      lStack_1a8 = _Znwm(lVar8);
      uStack_1b8 = lVar8 + 1;
      uVar21 = uStack_1b8 & 0xffffffff;
      uStack_1b0 = uVar1;
    }
    puVar19 = (ulong *)(auStack_1d8 + 1);
    if (((ulong)auVar3 & 1) != 0) {
      puVar19 = puVar22;
    }
    lVar8 = (long)&uStack_1b8 + 1;
    if ((uVar21 & 1) != 0) {
      lVar8 = lStack_1a8;
    }
    func_0x0099bda0(lVar8,puVar19,uVar14);
    *(undefined2 *)(lVar8 + uVar14) = 0x2f;
    puVar19 = (ulong *)_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                 (&uStack_1b8,&UNK_00165f17);
    puVar17[2] = puVar19[2];
    uVar14 = puVar19[1];
    *puVar17 = *puVar19;
    puVar17[1] = uVar14;
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19[2] = 0;
    if ((uStack_1b8 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_1a8,uStack_1b8 & 0xfffffffffffffffe);
    }
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    lStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    puVar19 = (ulong *)((long)puVar17 + 1);
    puVar10 = puVar19;
    if ((*puVar17 & 1) != 0) {
      puVar10 = (ulong *)puVar17[2];
    }
    puVar9 = (ulong *)0x1;
    iVar5 = func_0x0099bf30(1,puVar10,&uStack_1b8);
    if (iVar5 == -1) {
      if ((*puVar17 & 1) != 0) {
        puVar19 = (ulong *)puVar17[2];
      }
      iVar5 = func_0x0099c2c0(puVar19,0x1e8);
      puVar9 = puVar19;
      if ((iVar5 == -1) && (piVar12 = (int *)func_0x0099bce0(), puVar9 = puVar19, *piVar12 != 0x11))
      {
        puVar9 = (ulong *)0x6;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
        if (cVar4 != '\0') {
          iVar5 = *piVar12;
          puVar9 = &uStack_1e0;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (puVar9,&UNK_001895e3,0x13b,6,0,iVar5);
          uVar13 = _ZN7android4base10LogMessage6streamEv(puVar9);
          uVar13 = func_0x0032eb30(uVar13,&UNK_0017d5fe,0xe);
          uVar13 = func_0x0032e5a0(uVar13,puVar17);
          func_0x0032eb30(uVar13,&UNK_00162c6d,1);
          _ZN7android4base10LogMessageD2Ev();
          *piVar12 = iVar5;
        }
      }
    }
    if (((ulong)auVar3 & 1) != 0) {
      _ZdaPvSt11align_val_t(puVar22,(ulong)auStack_1d8 & 0xfffffffffffffffe);
      puVar9 = puVar22;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_128) {
      return puVar17;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  lVar8 = func_0x0099be70(&UNK_001705ed);
  if (lVar8 == 0) {
    puVar15 = (undefined *)func_0x0099be70(&UNK_00170602);
    puVar16 = &UNK_0016136b;
    if (puVar15 != (undefined *)0x0) {
      puVar16 = puVar15;
    }
    uVar6 = func_0x0099c2e0();
    _ZN7android4base12StringPrintfEPKcz(puVar9,&UNK_001755cc,puVar16,uVar6);
  }
  else {
    uVar14 = func_0x0099bcf0(lVar8);
    if (0xfffffffffffffff6 < uVar14) {
      func_0x0032e8f0();
      pcVar2 = (code *)swi(3);
      puVar22 = (ulong *)(*pcVar2)();
      return puVar22;
    }
    if (uVar14 < 0x17) {
      *(char *)puVar9 = (char)uVar14 * '\x02';
      pbVar18 = (byte *)((long)puVar9 + 1);
    }
    else {
      lVar20 = 0x1a;
      if ((uVar14 | 7) != 0x17) {
        lVar20 = (uVar14 | 7) + 1;
      }
      pbVar18 = (byte *)_Znwm(lVar20);
      *puVar9 = lVar20 + 1;
      puVar9[1] = uVar14;
      puVar9[2] = (ulong)pbVar18;
    }
    func_0x0099bd90(pbVar18,lVar8,uVar14);
    pbVar18[uVar14] = 0;
  }
  return puVar9;
}


