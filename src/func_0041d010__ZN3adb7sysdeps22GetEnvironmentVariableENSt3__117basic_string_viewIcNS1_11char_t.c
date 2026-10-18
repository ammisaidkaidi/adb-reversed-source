// Function: _ZN3adb7sysdeps22GetEnvironmentVariableENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
// Address: 0041d010
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN3adb7sysdeps22GetEnvironmentVariableENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                  (ulong *param_1,ulong *param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong *puVar11;
  char *pcVar12;
  ulong *unaff_R12;
  long lVar13;
  undefined *puVar14;
  ulong *unaff_R13;
  ulong *unaff_R14;
  undefined1 auVar15 [8];
  ulong *unaff_R15;
  long in_FS_OFFSET;
  ulong uStack_210;
  undefined8 uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  ulong *puStack_1e0;
  ulong *puStack_1d8;
  ulong *puStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  undefined *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  undefined1 auStack_190 [8];
  ulong uStack_188;
  ulong *puStack_180;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  undefined *apuStack_60 [2];
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined8 uStack_48;
  ulong *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar11 = param_1;
  if (param_3 == 0) {
code_r0x0041d070:
    *(char *)param_1 = '\0';
    *(char *)(param_1 + 3) = '\0';
    puVar3 = unaff_R14;
code_r0x0041d0d2:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
    apuStack_60[0] = &UNK_0041d0f8;
    func_0x0099bd00();
  }
  else {
    apuStack_60[0] = &UNK_0041d03e;
    puVar3 = (ulong *)func_0x0099be70();
    puVar11 = param_2;
    if (puVar3 == (ulong *)0x0) goto code_r0x0041d070;
    apuStack_60[0] = &UNK_0041d04e;
    puVar11 = puVar3;
    puVar4 = (ulong *)func_0x0099bcf0();
    if (puVar4 < (ulong *)0xfffffffffffffff7) {
      if (puVar4 < (ulong *)0x17) {
        _auStack_50 = (ulong *)CONCAT71(stack0xffffffffffffffb1,(char)puVar4 * '\x02');
        unaff_R12 = (ulong *)(auStack_50 + 1);
      }
      else {
        lVar7 = 0x1a;
        if (((ulong)puVar4 | 7) != 0x17) {
          lVar7 = ((ulong)puVar4 | 7) + 1;
        }
        apuStack_60[0] = &UNK_0041d09a;
        unaff_R12 = (ulong *)_Znwm(lVar7);
        unaff_R13 = (ulong *)(lVar7 + 1);
        _auStack_50 = unaff_R13;
        uStack_48 = puVar4;
        puStack_40 = unaff_R12;
      }
      apuStack_60[0] = &UNK_0041d0ba;
      puVar11 = unaff_R12;
      func_0x0099bd90(unaff_R12,puVar3,puVar4);
      *(char *)((long)unaff_R12 + (long)puVar4) = '\0';
      *(undefined1 (*) [4])param_1 = auStack_50;
      *(undefined4 *)((long)param_1 + 4) = uStack_4c;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_48;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_48._4_4_;
      param_1[2] = (ulong)puStack_40;
      *(char *)(param_1 + 3) = '\x01';
      unaff_R15 = puVar4;
      goto code_r0x0041d0d2;
    }
  }
  apuStack_60[0] = &UNK_0041d0fd;
  func_0x0032e8f0();
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_1b8 = &UNK_0041d130;
  puStack_88 = param_1;
  puStack_80 = unaff_R12;
  puStack_78 = unaff_R13;
  puStack_70 = puVar3;
  puStack_68 = unaff_R15;
  apuStack_60[0] = &stack0xfffffffffffffff8;
  puVar3 = (ulong *)func_0x0099be70(&UNK_001fe94d);
  if (puVar3 == (ulong *)0x0) {
    auVar15 = (undefined1  [8])0x0;
    puStack_1a0 = (ulong *)0x0;
    puStack_1a8 = (ulong *)0x0;
code_r0x0041d23f:
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
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
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    puStack_180 = (ulong *)0x0;
    uStack_178 = 0;
    auStack_190 = (undefined1  [8])0x0;
    uStack_188 = 0;
    unaff_R15 = (ulong *)auStack_190;
    puStack_1b8 = &UNK_0041d2b7;
    puStack_1b0 = puVar3;
    iVar2 = func_0x0099c4b0(unaff_R15,0x100);
    unaff_R12 = (ulong *)&UNK_00162ac9;
    if (iVar2 != -1) {
      unaff_R12 = unaff_R15;
    }
    puStack_1b8 = &UNK_0041d2cd;
    puVar4 = unaff_R12;
    puVar3 = (ulong *)func_0x0099bcf0();
    if (puVar3 < (ulong *)0xfffffffffffffff7) {
      if (puVar3 < (ulong *)0x17) {
        *(char *)puVar11 = (char)puVar3 * '\x02';
        puVar6 = (ulong *)((long)puVar11 + 1);
      }
      else {
        lVar7 = 0x1a;
        if (((ulong)puVar3 | 7) != 0x17) {
          lVar7 = ((ulong)puVar3 | 7) + 1;
        }
        puStack_1b8 = &UNK_0041d315;
        puStack_198 = puVar11;
        puVar6 = (ulong *)_Znwm(lVar7);
        *puStack_198 = lVar7 + 1;
        puStack_198[1] = (ulong)puVar3;
        puStack_198[2] = (ulong)puVar6;
        puVar11 = puStack_198;
      }
      puStack_1b8 = &UNK_0041d342;
      puVar4 = puVar6;
      func_0x0099bda0(puVar6,unaff_R12,puVar3);
      *(char *)((long)puVar6 + (long)puVar3) = '\0';
      unaff_R12 = puStack_1a0;
      unaff_R15 = puStack_1a8;
      if ((puStack_1b0 != (ulong *)0x0) && (((ulong)auVar15 & 1) != 0)) {
code_r0x0041d373:
        puStack_1b8 = &UNK_0041d38a;
        puVar4 = unaff_R15;
        _ZdaPvSt11align_val_t(unaff_R15,(ulong)auVar15 & 0xfe | (ulong)((long)unaff_R12 << 8));
        unaff_R12 = (ulong *)((long)unaff_R12 << 8);
        auVar15 = (undefined1  [8])((ulong)auVar15 & 0xfffffffffffffffe);
      }
      goto code_r0x0041d38a;
    }
code_r0x0041d3ae:
    puVar3 = unaff_R13;
    puStack_1b8 = &UNK_0041d3b3;
    func_0x0032e8f0();
  }
  else {
    puStack_1b8 = &UNK_0041d140;
    puVar4 = puVar3;
    uVar5 = func_0x0099bcf0();
    auVar15 = (undefined1  [8])puVar3;
    if (0xfffffffffffffff6 < uVar5) goto code_r0x0041d3ae;
    if (uVar5 < 0x17) {
      auStack_190[0] = (char)uVar5 * '\x02';
      puVar6 = (ulong *)(auStack_190 + 1);
    }
    else {
      lVar7 = 0x1a;
      if ((uVar5 | 7) != 0x17) {
        lVar7 = (uVar5 | 7) + 1;
      }
      puStack_1b8 = &UNK_0041d1ae;
      puVar6 = (ulong *)_Znwm(lVar7);
      unaff_R13 = (ulong *)(lVar7 + 1);
      auStack_190 = (undefined1  [8])unaff_R13;
      uStack_188 = uVar5;
      puStack_180 = puVar6;
    }
    puStack_1b8 = &UNK_0041d1d7;
    puVar4 = puVar6;
    func_0x0099bd90(puVar6,puVar3,uVar5);
    auVar15 = auStack_190;
    *(char *)((long)puVar6 + uVar5) = '\0';
    unaff_R15 = puStack_180;
    unaff_R12 = (ulong *)((ulong)auStack_190 >> 8);
    uVar5 = (ulong)((uint)((ulong)auStack_190 >> 1) & 0x7f);
    if (((ulong)auStack_190 & 1) != 0) {
      uVar5 = uStack_188;
    }
    if (uVar5 == 0) {
      puStack_1a8 = puStack_180;
      puStack_1a0 = unaff_R12;
      goto code_r0x0041d23f;
    }
    puVar3 = unaff_R13;
    if (((ulong)auStack_190 & 1) != 0) {
      puStack_1b8 = &UNK_0041d373;
      func_0x00330340(puVar11,puStack_180);
      goto code_r0x0041d373;
    }
    *puVar11 = (ulong)auStack_190;
    puVar11[1] = uStack_188;
    puVar11[2] = (ulong)puStack_180;
code_r0x0041d38a:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
      return puVar11;
    }
  }
  puStack_1b8 = &UNK_0041d3b8;
  func_0x0099bd00();
  lStack_1e8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_1e0 = puVar11;
  puStack_1d8 = unaff_R12;
  puStack_1d0 = puVar3;
  puStack_1c8 = (ulong *)auVar15;
  puStack_1c0 = unaff_R15;
  puStack_1b8 = (undefined *)apuStack_60;
  lVar7 = func_0x0099be70(&UNK_001fe956);
  if (lVar7 == 0) {
    uStack_210 = 0;
    uVar8 = 0;
    uVar5 = 0;
code_r0x0041d4d1:
    puVar9 = (undefined *)func_0x0099c4c0();
    puVar14 = &UNK_00162ac9;
    if (puVar9 != (undefined *)0x0) {
      puVar14 = puVar9;
    }
    uVar10 = func_0x0099bcf0(puVar14);
    if (0xfffffffffffffff6 < uVar10) {
code_r0x0041d5cf:
      func_0x0032e8f0();
      goto code_r0x0041d5d4;
    }
    if (uVar10 < 0x17) {
      *(char *)puVar4 = (char)uVar10 * '\x02';
      pcVar12 = (char *)((long)puVar4 + 1);
    }
    else {
      lVar13 = 0x1a;
      if ((uVar10 | 7) != 0x17) {
        lVar13 = (uVar10 | 7) + 1;
      }
      pcVar12 = (char *)_Znwm(lVar13);
      *puVar4 = lVar13 + 1;
      puVar4[1] = uVar10;
      puVar4[2] = (ulong)pcVar12;
    }
    func_0x0099bd90(pcVar12,puVar14,uVar10);
    pcVar12[uVar10] = '\0';
    if ((lVar7 != 0) && ((uVar5 & 1) != 0)) {
code_r0x0041d597:
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1e8) {
        _ZdaPvSt11align_val_t(uVar8,(ulong)((byte)uVar5 & 0xfe) | uStack_210 << 8);
        return puVar4;
      }
      goto code_r0x0041d5d4;
    }
  }
  else {
    uVar8 = func_0x0099bcf0(lVar7);
    if (0xfffffffffffffff6 < uVar8) goto code_r0x0041d5cf;
    if (uVar8 < 0x17) {
      uStack_200 = CONCAT71(uStack_200._1_7_,(char)uVar8 * '\x02');
      uVar10 = (long)&uStack_200 + 1;
    }
    else {
      lVar13 = 0x1a;
      if ((uVar8 | 7) != 0x17) {
        lVar13 = (uVar8 | 7) + 1;
      }
      uVar10 = _Znwm(lVar13);
      uStack_200 = lVar13 + 1;
      uStack_1f8 = uVar8;
      uStack_1f0 = uVar10;
    }
    func_0x0099bd90(uVar10,lVar7,uVar8);
    uVar5 = uStack_200;
    *(undefined1 *)(uVar10 + uVar8) = 0;
    uVar8 = uStack_1f0;
    uStack_210 = uStack_200 >> 8;
    uVar10 = (ulong)((uint)(uStack_200 >> 1) & 0x7f);
    if ((uStack_200 & 1) != 0) {
      uVar10 = uStack_1f8;
    }
    if (uVar10 == 0) goto code_r0x0041d4d1;
    if ((uStack_200 & 1) != 0) {
      func_0x00330340(puVar4,uStack_1f0);
      goto code_r0x0041d597;
    }
    *puVar4 = uStack_200;
    puVar4[1] = uStack_1f8;
    puVar4[2] = uStack_1f0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1e8) {
    return puVar4;
  }
code_r0x0041d5d4:
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  puVar11 = (ulong *)(*pcVar1)();
  return puVar11;
}


