// Function: _ZN3adb7sysdeps15GetHostNameUTF8Ev
// Address: 0041d100
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN3adb7sysdeps15GetHostNameUTF8Ev(ulong *param_1)

{
  code *pcVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  char *pcVar10;
  ulong *puVar11;
  ulong *unaff_R12;
  long lVar12;
  undefined *puVar13;
  ulong *unaff_R13;
  undefined1 auVar14 [8];
  ulong *unaff_R15;
  long in_FS_OFFSET;
  ulong uStack_1b8;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  ulong *puStack_188;
  ulong *puStack_180;
  ulong *puStack_178;
  ulong *puStack_170;
  ulong *puStack_168;
  undefined *puStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  ulong *puStack_140;
  undefined1 auStack_138 [8];
  ulong uStack_130;
  ulong *puStack_128;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_160 = &UNK_0041d130;
  puVar3 = (ulong *)func_0x0099be70(&UNK_001fe94d);
  if (puVar3 == (ulong *)0x0) {
    auVar14 = (undefined1  [8])0x0;
    puStack_148 = (ulong *)0x0;
    puStack_150 = (ulong *)0x0;
code_r0x0041d23f:
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
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    puStack_128 = (ulong *)0x0;
    uStack_120 = 0;
    auStack_138 = (undefined1  [8])0x0;
    uStack_130 = 0;
    unaff_R15 = (ulong *)auStack_138;
    puStack_160 = &UNK_0041d2b7;
    puStack_158 = puVar3;
    iVar2 = func_0x0099c4b0(unaff_R15,0x100);
    unaff_R12 = (ulong *)&UNK_00162ac9;
    if (iVar2 != -1) {
      unaff_R12 = unaff_R15;
    }
    puStack_160 = &UNK_0041d2cd;
    puVar11 = unaff_R12;
    puVar3 = (ulong *)func_0x0099bcf0();
    if (puVar3 < (ulong *)0xfffffffffffffff7) {
      if (puVar3 < (ulong *)0x17) {
        *(char *)param_1 = (char)puVar3 * '\x02';
        puVar5 = (ulong *)((long)param_1 + 1);
      }
      else {
        lVar6 = 0x1a;
        if (((ulong)puVar3 | 7) != 0x17) {
          lVar6 = ((ulong)puVar3 | 7) + 1;
        }
        puStack_160 = &UNK_0041d315;
        puStack_140 = param_1;
        puVar5 = (ulong *)_Znwm(lVar6);
        *puStack_140 = lVar6 + 1;
        puStack_140[1] = (ulong)puVar3;
        puStack_140[2] = (ulong)puVar5;
        param_1 = puStack_140;
      }
      puStack_160 = &UNK_0041d342;
      puVar11 = puVar5;
      func_0x0099bda0(puVar5,unaff_R12,puVar3);
      *(char *)((long)puVar5 + (long)puVar3) = '\0';
      unaff_R12 = puStack_148;
      unaff_R15 = puStack_150;
      if ((puStack_158 != (ulong *)0x0) && (((ulong)auVar14 & 1) != 0)) {
code_r0x0041d373:
        puStack_160 = &UNK_0041d38a;
        puVar11 = unaff_R15;
        _ZdaPvSt11align_val_t(unaff_R15,(ulong)auVar14 & 0xfe | (ulong)((long)unaff_R12 << 8));
        unaff_R12 = (ulong *)((long)unaff_R12 << 8);
        auVar14 = (undefined1  [8])((ulong)auVar14 & 0xfffffffffffffffe);
      }
      goto code_r0x0041d38a;
    }
code_r0x0041d3ae:
    puVar3 = unaff_R13;
    puStack_160 = &UNK_0041d3b3;
    func_0x0032e8f0();
  }
  else {
    puStack_160 = &UNK_0041d140;
    puVar11 = puVar3;
    uVar4 = func_0x0099bcf0();
    auVar14 = (undefined1  [8])puVar3;
    if (0xfffffffffffffff6 < uVar4) goto code_r0x0041d3ae;
    if (uVar4 < 0x17) {
      auStack_138[0] = (char)uVar4 * '\x02';
      puVar5 = (ulong *)(auStack_138 + 1);
    }
    else {
      lVar6 = 0x1a;
      if ((uVar4 | 7) != 0x17) {
        lVar6 = (uVar4 | 7) + 1;
      }
      puStack_160 = &UNK_0041d1ae;
      puVar5 = (ulong *)_Znwm(lVar6);
      unaff_R13 = (ulong *)(lVar6 + 1);
      auStack_138 = (undefined1  [8])unaff_R13;
      uStack_130 = uVar4;
      puStack_128 = puVar5;
    }
    puStack_160 = &UNK_0041d1d7;
    puVar11 = puVar5;
    func_0x0099bd90(puVar5,puVar3,uVar4);
    auVar14 = auStack_138;
    *(char *)((long)puVar5 + uVar4) = '\0';
    unaff_R15 = puStack_128;
    unaff_R12 = (ulong *)((ulong)auStack_138 >> 8);
    uVar4 = (ulong)((uint)((ulong)auStack_138 >> 1) & 0x7f);
    if (((ulong)auStack_138 & 1) != 0) {
      uVar4 = uStack_130;
    }
    if (uVar4 == 0) {
      puStack_150 = puStack_128;
      puStack_148 = unaff_R12;
      goto code_r0x0041d23f;
    }
    puVar3 = unaff_R13;
    if (((ulong)auStack_138 & 1) != 0) {
      puStack_160 = &UNK_0041d373;
      func_0x00330340(param_1,puStack_128);
      goto code_r0x0041d373;
    }
    *param_1 = (ulong)auStack_138;
    param_1[1] = uStack_130;
    param_1[2] = (ulong)puStack_128;
code_r0x0041d38a:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
  }
  puStack_160 = &UNK_0041d3b8;
  func_0x0099bd00();
  lStack_190 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_188 = param_1;
  puStack_180 = unaff_R12;
  puStack_178 = puVar3;
  puStack_170 = (ulong *)auVar14;
  puStack_168 = unaff_R15;
  puStack_160 = &stack0xfffffffffffffff8;
  lVar6 = func_0x0099be70(&UNK_001fe956);
  if (lVar6 == 0) {
    uStack_1b8 = 0;
    uVar7 = 0;
    uVar4 = 0;
code_r0x0041d4d1:
    puVar8 = (undefined *)func_0x0099c4c0();
    puVar13 = &UNK_00162ac9;
    if (puVar8 != (undefined *)0x0) {
      puVar13 = puVar8;
    }
    uVar9 = func_0x0099bcf0(puVar13);
    if (0xfffffffffffffff6 < uVar9) {
code_r0x0041d5cf:
      func_0x0032e8f0();
      goto code_r0x0041d5d4;
    }
    if (uVar9 < 0x17) {
      *(char *)puVar11 = (char)uVar9 * '\x02';
      pcVar10 = (char *)((long)puVar11 + 1);
    }
    else {
      lVar12 = 0x1a;
      if ((uVar9 | 7) != 0x17) {
        lVar12 = (uVar9 | 7) + 1;
      }
      pcVar10 = (char *)_Znwm(lVar12);
      *puVar11 = lVar12 + 1;
      puVar11[1] = uVar9;
      puVar11[2] = (ulong)pcVar10;
    }
    func_0x0099bd90(pcVar10,puVar13,uVar9);
    pcVar10[uVar9] = '\0';
    if ((lVar6 != 0) && ((uVar4 & 1) != 0)) {
code_r0x0041d597:
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_190) {
        _ZdaPvSt11align_val_t(uVar7,(ulong)((byte)uVar4 & 0xfe) | uStack_1b8 << 8);
        return puVar11;
      }
      goto code_r0x0041d5d4;
    }
  }
  else {
    uVar7 = func_0x0099bcf0(lVar6);
    if (0xfffffffffffffff6 < uVar7) goto code_r0x0041d5cf;
    if (uVar7 < 0x17) {
      uStack_1a8 = CONCAT71(uStack_1a8._1_7_,(char)uVar7 * '\x02');
      uVar9 = (long)&uStack_1a8 + 1;
    }
    else {
      lVar12 = 0x1a;
      if ((uVar7 | 7) != 0x17) {
        lVar12 = (uVar7 | 7) + 1;
      }
      uVar9 = _Znwm(lVar12);
      uStack_1a8 = lVar12 + 1;
      uStack_1a0 = uVar7;
      uStack_198 = uVar9;
    }
    func_0x0099bd90(uVar9,lVar6,uVar7);
    uVar4 = uStack_1a8;
    *(undefined1 *)(uVar9 + uVar7) = 0;
    uVar7 = uStack_198;
    uStack_1b8 = uStack_1a8 >> 8;
    uVar9 = (ulong)((uint)(uStack_1a8 >> 1) & 0x7f);
    if ((uStack_1a8 & 1) != 0) {
      uVar9 = uStack_1a0;
    }
    if (uVar9 == 0) goto code_r0x0041d4d1;
    if ((uStack_1a8 & 1) != 0) {
      func_0x00330340(puVar11,uStack_198);
      goto code_r0x0041d597;
    }
    *puVar11 = uStack_1a8;
    puVar11[1] = uStack_1a0;
    puVar11[2] = uStack_198;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_190) {
    return puVar11;
  }
code_r0x0041d5d4:
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  puVar3 = (ulong *)(*pcVar1)();
  return puVar3;
}


