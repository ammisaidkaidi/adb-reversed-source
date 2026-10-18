// Function: _Z24adb_get_android_dir_pathv
// Address: 003d4d50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _Z24adb_get_android_dir_pathv(byte *param_1)

{
  ulong uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  byte abStack_f0 [8];
  undefined8 uStack_e8;
  ulong uStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
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
  uStack_e8 = 0;
  uStack_e0 = 0;
  pbStack_d8 = (byte *)0x0;
  pbVar13 = (byte *)&uStack_e8;
  _Z20adb_get_homedir_pathv();
  pbVar15 = pbStack_d8;
  uVar10 = uStack_e8;
  uVar19 = uStack_e0;
  if ((uStack_e8 & 1) == 0) {
    uVar19 = uStack_e8 >> 1 & 0x7f;
  }
  uVar1 = uVar19 + 1;
  if (uVar1 < 0xfffffffffffffff7) {
    uStack_c8 = 0;
    uStack_c0 = 0;
    lStack_b8 = 0;
    if (uVar1 < 0x17) {
      uVar17 = 0;
      uStack_c8 = (ulong)(byte)((char)uVar1 * '\x02');
    }
    else {
      lVar9 = 0x1a;
      if ((uVar1 | 7) != 0x17) {
        lVar9 = (uVar1 | 7) + 1;
      }
      lStack_b8 = _Znwm(lVar9);
      uStack_c8 = lVar9 + 1;
      uVar17 = uStack_c8 & 0xffffffff;
      uStack_c0 = uVar1;
    }
    pbVar13 = (byte *)((long)&uStack_e8 + 1);
    if ((uVar10 & 1) != 0) {
      pbVar13 = pbVar15;
    }
    lVar9 = (long)&uStack_c8 + 1;
    if ((uVar17 & 1) != 0) {
      lVar9 = lStack_b8;
    }
    func_0x0099bda0(lVar9,pbVar13,uVar19);
    *(undefined2 *)(lVar9 + uVar19) = 0x2f;
    puVar6 = (undefined8 *)
             _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                       (&uStack_c8,&UNK_00165f17);
    *(undefined8 *)(param_1 + 0x10) = puVar6[2];
    uVar8 = puVar6[1];
    *(undefined8 *)param_1 = *puVar6;
    *(undefined8 *)(param_1 + 8) = uVar8;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    if ((uStack_c8 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_b8,uStack_c8 & 0xfffffffffffffffe);
    }
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
    lStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    pbVar14 = param_1 + 1;
    pbVar12 = pbVar14;
    if ((*param_1 & 1) != 0) {
      pbVar12 = *(byte **)(param_1 + 0x10);
    }
    pbVar13 = (byte *)0x1;
    iVar4 = func_0x0099bf30(1,pbVar12,&uStack_c8);
    if (iVar4 == -1) {
      if ((*param_1 & 1) != 0) {
        pbVar14 = *(byte **)(param_1 + 0x10);
      }
      iVar4 = func_0x0099c2c0(pbVar14,0x1e8);
      pbVar13 = pbVar14;
      if ((iVar4 == -1) && (piVar7 = (int *)func_0x0099bce0(), pbVar13 = pbVar14, *piVar7 != 0x11))
      {
        pbVar13 = (byte *)0x6;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
        if (cVar3 != '\0') {
          iVar4 = *piVar7;
          pbVar13 = abStack_f0;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (pbVar13,&UNK_001895e3,0x13b,6,0,iVar4);
          uVar8 = _ZN7android4base10LogMessage6streamEv(pbVar13);
          uVar8 = func_0x0032eb30(uVar8,&UNK_0017d5fe,0xe);
          uVar8 = func_0x0032e5a0(uVar8,param_1);
          func_0x0032eb30(uVar8,&UNK_00162c6d,1);
          _ZN7android4base10LogMessageD2Ev();
          *piVar7 = iVar4;
        }
      }
    }
    if ((uVar10 & 1) != 0) {
      _ZdaPvSt11align_val_t(pbVar15,uStack_e8 & 0xfffffffffffffffe);
      pbVar13 = pbVar15;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  lVar9 = func_0x0099be70(&UNK_001705ed);
  if (lVar9 == 0) {
    puVar11 = (undefined *)func_0x0099be70(&UNK_00170602);
    puVar18 = &UNK_0016136b;
    if (puVar11 != (undefined *)0x0) {
      puVar18 = puVar11;
    }
    uVar5 = func_0x0099c2e0();
    _ZN7android4base12StringPrintfEPKcz(pbVar13,&UNK_001755cc,puVar18,uVar5);
  }
  else {
    uVar10 = func_0x0099bcf0(lVar9);
    if (0xfffffffffffffff6 < uVar10) {
      func_0x0032e8f0();
      pcVar2 = (code *)swi(3);
      pbVar13 = (byte *)(*pcVar2)();
      return pbVar13;
    }
    if (uVar10 < 0x17) {
      *pbVar13 = (char)uVar10 * '\x02';
      pbVar15 = pbVar13 + 1;
    }
    else {
      lVar16 = 0x1a;
      if ((uVar10 | 7) != 0x17) {
        lVar16 = (uVar10 | 7) + 1;
      }
      pbVar15 = (byte *)_Znwm(lVar16);
      *(long *)pbVar13 = lVar16 + 1;
      *(ulong *)(pbVar13 + 8) = uVar10;
      *(byte **)(pbVar13 + 0x10) = pbVar15;
    }
    func_0x0099bd90(pbVar15,lVar9,uVar10);
    pbVar15[uVar10] = 0;
  }
  return pbVar13;
}


