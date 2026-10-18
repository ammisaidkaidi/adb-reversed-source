// Function: _Z6mkdirsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 003d3f20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _Z6mkdirsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(byte *param_1)

{
  ulong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  long *plVar7;
  byte *pbVar8;
  ulong extraout_RDX;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  ulong unaff_R15;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined1 auStack_178 [8];
  ulong *puStack_170;
  ulong *puStack_168;
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
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  puVar1 = (ulong *)(param_1 + 1);
  puVar9 = puVar1;
  if ((*param_1 & 1) != 0) {
    puVar9 = *(ulong **)(param_1 + 0x10);
  }
  puVar10 = (ulong *)0x1;
  iVar5 = func_0x0099bf30(1,puVar9,&uStack_158);
  if (iVar5 == -1) {
code_r0x003d3fc5:
    auStack_178 = (undefined1  [8])0x0;
    puStack_170 = (ulong *)0x0;
    puStack_168 = (ulong *)0x0;
    bVar16 = (*param_1 & 1) == 0;
    puVar9 = *(ulong **)(param_1 + 0x10);
    if (bVar16) {
      puVar9 = puVar1;
    }
    uVar13 = (ulong)(*param_1 >> 1);
    if (!bVar16) {
      uVar13 = *(ulong *)(param_1 + 8);
    }
    _ZN7android4base7DirnameENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
              (auStack_178,puVar9,uVar13);
    puVar10 = puStack_170;
    if (((ulong)auStack_178 & 1) == 0) {
      puVar10 = (ulong *)((ulong)auStack_178 >> 1 & 0x7f);
    }
    bVar14 = *param_1;
    if ((bVar14 & 1) == 0) {
      puVar9 = (ulong *)(ulong)(bVar14 >> 1);
      if (puVar10 == puVar9) goto code_r0x003d4030;
code_r0x003d405d:
      puVar10 = (ulong *)auStack_178;
      cVar4 = _Z6mkdirsRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE();
      if (cVar4 == '\0') goto code_r0x003d4116;
      puVar10 = puVar1;
      if ((*param_1 & 1) != 0) {
        puVar10 = *(ulong **)(param_1 + 0x10);
      }
      puVar9 = (ulong *)0x1fd;
      iVar5 = func_0x0099c2c0();
      unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),1);
      if (iVar5 == -1) {
        puVar6 = (undefined4 *)func_0x0099bce0();
        uVar3 = *puVar6;
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
        puVar9 = puVar1;
        if ((*param_1 & 1) != 0) {
          puVar9 = *(ulong **)(param_1 + 0x10);
        }
        puVar10 = (ulong *)0x1;
        iVar5 = func_0x0099bf30(1,puVar9,&uStack_c8);
        if ((iVar5 == -1) || (((uint)uStack_b0 & 0xf000) != 0x4000)) {
          *puVar6 = uVar3;
          goto code_r0x003d4116;
        }
      }
    }
    else {
      puVar9 = *(ulong **)(param_1 + 8);
      if (puVar10 != puVar9) goto code_r0x003d405d;
code_r0x003d4030:
      puVar10 = puStack_168;
      if (((ulong)auStack_178 & 1) == 0) {
        puVar10 = (ulong *)(auStack_178 + 1);
      }
      puVar9 = puVar1;
      if ((bVar14 & 1) != 0) {
        puVar9 = *(ulong **)(param_1 + 0x10);
      }
      iVar5 = func_0x0099bf90();
      if (iVar5 != 0) goto code_r0x003d405d;
      puVar6 = (undefined4 *)func_0x0099bce0();
      *puVar6 = 2;
code_r0x003d4116:
      unaff_R15 = 0;
    }
    if (((ulong)auStack_178 & 1) != 0) {
      puVar9 = (ulong *)((ulong)auStack_178 & 0xfffffffffffffffe);
      puVar10 = puStack_168;
      _ZdaPvSt11align_val_t();
    }
  }
  else {
    unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),1);
    if (((uint)uStack_140 & 0xf000) != 0x4000) goto code_r0x003d3fc5;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (ulong *)(unaff_R15 & 0xffffffff);
  }
  func_0x0099bd00();
  uVar13 = 0x10;
  if (extraout_RDX < 0x10) {
    uVar13 = extraout_RDX;
  }
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  if (extraout_RDX == 0) {
    *(undefined2 *)puVar10 = 0x2002;
    return puVar10;
  }
  uVar15 = 0;
  do {
    _ZN7android4base13StringAppendFEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcz
              (puVar10,&UNK_00187cdd,*(byte *)((long)puVar9 + uVar15));
    uVar15 = uVar15 + 1;
  } while (uVar13 != uVar15);
  bVar14 = (byte)*puVar10;
  if ((bVar14 & 1) == 0) {
    uVar11 = 0x16;
    if (bVar14 != 0x2c) {
      *(byte *)puVar10 = bVar14 + 2;
      pbVar8 = (byte *)((long)puVar10 + (ulong)(bVar14 >> 1) + 1);
      *(byte *)((long)puVar10 + (ulong)(bVar14 >> 1) + 1) = 0x20;
      goto code_r0x003d425d;
    }
code_r0x003d4225:
    uVar15 = uVar11;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
              (puVar10,uVar15,1,uVar15,uVar15,0,0);
  }
  else {
    uVar15 = puVar10[1];
    uVar11 = (*puVar10 & 0xfffffffffffffffe) - 1;
    if (uVar15 == uVar11) goto code_r0x003d4225;
  }
  puVar10[1] = uVar15 + 1;
  pbVar8 = (byte *)(puVar10[2] + uVar15);
  *(undefined1 *)(puVar10[2] + uVar15) = 0x20;
code_r0x003d425d:
  pbVar8[1] = 0;
  plVar7 = (long *)func_0x0099be00();
  uVar15 = 0;
  do {
    bVar14 = *(byte *)((long)puVar9 + uVar15);
    if ((*(byte *)(*plVar7 + 1 + (ulong)bVar14 * 2) & 0x40) == 0) {
      bVar14 = 0x2e;
    }
    bVar2 = (byte)*puVar10;
    if ((bVar2 & 1) == 0) {
      uVar12 = 0x16;
      if (bVar2 == 0x2c) {
code_r0x003d4280:
        uVar11 = uVar12;
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (puVar10,uVar11,1,uVar11,uVar11,0,0);
        goto code_r0x003d42a9;
      }
      uVar11 = (ulong)(bVar2 >> 1);
      *(byte *)puVar10 = bVar2 + 2;
      pbVar8 = (byte *)((long)puVar10 + 1);
    }
    else {
      uVar11 = puVar10[1];
      uVar12 = (*puVar10 & 0xfffffffffffffffe) - 1;
      if (uVar11 == uVar12) goto code_r0x003d4280;
code_r0x003d42a9:
      pbVar8 = (byte *)puVar10[2];
      puVar10[1] = uVar11 + 1;
    }
    pbVar8[uVar11] = bVar14;
    pbVar8[uVar11 + 1] = 0;
    uVar15 = uVar15 + 1;
    if (uVar13 == uVar15) {
      if (0x10 < extraout_RDX) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (puVar10,&UNK_001705e0);
      }
      return puVar10;
    }
  } while( true );
}


