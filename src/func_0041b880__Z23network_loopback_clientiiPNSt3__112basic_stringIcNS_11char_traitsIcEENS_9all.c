// Function: _Z23network_loopback_clientiiPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 0041b880
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0041b89e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0041ba62: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0041b8a3) */
/* WARNING: Removing unreachable block (ram,0x0041b8b3) */
/* WARNING: Removing unreachable block (ram,0x0041b8a8) */
/* WARNING: Removing unreachable block (ram,0x0041ba67) */
/* WARNING: Removing unreachable block (ram,0x0041ba77) */
/* WARNING: Removing unreachable block (ram,0x0041baa0) */
/* WARNING: Removing unreachable block (ram,0x0041ba6c) */
/* WARNING: Removing unreachable block (ram,0x0041b96e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * _Z23network_loopback_clientiiPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                 (uint param_1,uint param_2,long param_3,undefined8 param_4,byte *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  long lVar13;
  code *pcVar14;
  ushort extraout_DX;
  uint *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  byte *pbVar18;
  undefined4 uVar19;
  undefined *puVar20;
  ulong uVar21;
  uint *puVar22;
  uint *puVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined *puStack_128;
  undefined8 uStack_120;
  uint *puStack_118;
  uint *puStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  uint uStack_f0;
  undefined4 uStack_ec;
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
  long lStack_68;
  long lStack_60;
  undefined1 *puStack_38;
  undefined *puStack_30;
  
  puStack_38 = &stack0xfffffffffffffff8;
  puVar20 = (undefined *)(ulong)param_1;
  puStack_30 = &UNK_0041b8a3;
  ppuVar17 = &puStack_38;
  ppuVar16 = (undefined **)auStack_f8;
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = 2;
  puStack_100 = &UNK_0041b90b;
  lVar13 = param_3;
  lStack_60 = param_3;
  uVar5 = func_0x0099c340(2,param_2,0);
  iVar7 = (int)lVar13;
  puVar22 = (uint *)(ulong)uVar5;
  puStack_100 = &UNK_0041b913;
  puVar9 = (uint *)func_0x0099bce0();
  if (uVar5 == 0xffffffff) {
    if (param_3 != 0) {
      puStack_100 = &UNK_0041b9f6;
      param_2 = func_0x0099bd20(*puVar9);
      puStack_100 = &UNK_0041ba01;
      func_0x0032ea60();
      uVar8 = (uint)param_3;
    }
    uVar1 = *puVar9;
code_r0x0041ba04:
    puVar22 = (uint *)0xffffffff;
  }
  else {
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
    uStack_ec = 0x80;
    puVar20 = &UNK_0041be30;
    puStack_100 = &UNK_0041b985;
    uStack_f0 = param_1;
    uVar10 = (*(code *)&UNK_0041be30)(&uStack_e8,&uStack_ec,0);
    puStack_100 = &UNK_0041b996;
    iVar6 = func_0x0099c370(uVar5,uVar10,uStack_ec);
    param_2 = (uint)uVar10;
    if (iVar6 != 0) {
code_r0x0041b9c6:
      if (param_3 != 0) {
        puStack_100 = &UNK_0041b9d2;
        param_2 = func_0x0099bd20(*puVar9);
        puStack_100 = &UNK_0041b9dd;
        func_0x0032ea60(param_3);
      }
      uVar1 = *puVar9;
      puStack_100 = &UNK_0041b9e8;
      uVar8 = uVar5;
      func_0x0099bd10();
      goto code_r0x0041ba04;
    }
    puStack_100 = &UNK_0041b9b1;
    uVar10 = (*(code *)&UNK_0041be30)(&uStack_e8,&uStack_ec,uStack_f0);
    puStack_100 = &UNK_0041b9c2;
    uVar8 = uVar5;
    iVar6 = func_0x0099c350(uVar5,uVar10,uStack_ec);
    param_2 = (uint)uVar10;
    if (iVar6 != 0) goto code_r0x0041b9c6;
    uVar1 = *puVar9;
  }
  *puVar9 = uVar1;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_68) {
    return puVar22;
  }
  puStack_100 = &UNK_0041ba3b;
  auVar26 = func_0x0099bd00();
  puVar15 = auVar26._8_8_;
  uStack_120 = auVar26._0_8_;
  bVar25 = iVar7 == 0;
  puVar23 = puVar9;
  puVar11 = puVar22;
  uVar21 = (ulong)uVar1;
  if (!bVar25) {
    ppuVar16 = &puStack_128;
    puStack_128 = &UNK_0041ba67;
    puVar23 = puVar15;
    ppuVar17 = &puStack_100;
    puVar11 = (uint *)(ulong)param_2;
    uVar21 = (ulong)uVar8;
  }
  puStack_118 = puVar9;
  puStack_110 = puVar22;
  uStack_108 = (ulong)uVar1;
  puStack_100 = (undefined *)&puStack_38;
  *(undefined ***)((long)ppuVar16 + -8) = ppuVar17;
  *(ulong *)((long)ppuVar16 + -0x10) = uVar21;
  *(uint **)((long)ppuVar16 + -0x18) = puVar11;
  *(undefined8 *)((long)ppuVar16 + -0x20) = 0;
  *(undefined **)((long)ppuVar16 + -0x28) = puVar20;
  *(uint **)((long)ppuVar16 + -0x30) = puVar23;
  uVar21 = (ulong)param_2;
  *(uint *)((long)ppuVar16 + -0xc4) = uVar8;
  *(undefined8 *)((long)ppuVar16 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar9 = (uint *)(ulong)((uint)bVar25 * 8 + 2);
  *(undefined **)((long)ppuVar16 + -0xd0) = &UNK_0041baf1;
  uVar8 = param_2;
  uVar5 = func_0x0099c340(puVar9,param_2,0);
  puVar23 = (uint *)(ulong)uVar5;
  *(undefined **)((long)ppuVar16 + -0xd0) = &UNK_0041baf9;
  puVar22 = (uint *)func_0x0099bce0();
  if (uVar5 == 0xffffffff) {
    if (puVar15 != (uint *)0x0) {
      uVar8 = *puVar22;
      *(undefined **)((long)ppuVar16 + -0xd0) = &UNK_0041bbdb;
      uVar8 = func_0x0099bd20(uVar8);
      *(undefined **)((long)ppuVar16 + -0xd0) = &UNK_0041bbe6;
      puVar9 = puVar15;
      func_0x0032ea60();
    }
    uVar24 = (ulong)*puVar22;
    puVar23 = (uint *)0xffffffff;
  }
  else {
    *(undefined4 *)((long)ppuVar16 + -0xbc) = 1;
    param_5 = (byte *)0x4;
    *(undefined **)((long)ppuVar16 + -0xd0) = &UNK_0041bb2f;
    func_0x0099bf50(uVar5,1,2,(undefined1 *)((long)ppuVar16 + -0xbc));
    *(undefined8 *)((long)ppuVar16 + -0x48) = 0;
    *(undefined8 *)((long)ppuVar16 + -0x40) = 0;
    *(undefined8 *)((long)ppuVar16 + -0x58) = 0;
    *(undefined8 *)((long)ppuVar16 + -0x50) = 0;
    *(undefined8 *)((long)ppuVar16 + -0x68) = 0;
    *(undefined8 *)((long)ppuVar16 + -0x60) = 0;
    *(undefined8 *)((long)ppuVar16 + -0x78) = 0;
    *(undefined8 *)((long)ppuVar16 + -0x70) = 0;
    *(undefined8 *)((long)ppuVar16 + -0x88) = 0;
    *(undefined8 *)((long)ppuVar16 + -0x80) = 0;
    *(undefined8 *)((long)ppuVar16 + -0x98) = 0;
    *(undefined8 *)((long)ppuVar16 + -0x90) = 0;
    *(undefined8 *)((long)ppuVar16 + -0xa8) = 0;
    *(undefined8 *)((long)ppuVar16 + -0xa0) = 0;
    *(undefined8 *)((long)ppuVar16 + -0xb8) = 0;
    *(undefined8 *)((long)ppuVar16 + -0xb0) = 0;
    *(undefined4 *)((long)ppuVar16 + -0xc0) = 0x80;
    pcVar14 = (code *)&UNK_0041be30;
    if (bVar25) {
      pcVar14 = (code *)&UNK_0041be00;
    }
    *(undefined **)((long)ppuVar16 + -0xd0) = &UNK_0041bb90;
    uVar10 = (*pcVar14)((undefined1 *)((long)ppuVar16 + -0xb8),
                        (undefined1 *)((long)ppuVar16 + -0xc0),
                        *(undefined4 *)((long)ppuVar16 + -0xc4));
    *(undefined **)((long)ppuVar16 + -0xd0) = &UNK_0041bba1;
    puVar9 = puVar23;
    iVar7 = func_0x0099c370(puVar23,uVar10,*(undefined4 *)((long)ppuVar16 + -0xc0));
    uVar8 = (uint)uVar10;
    if (iVar7 == 0) {
      uVar21 = (ulong)(param_2 & 0xfffffffb);
      if ((param_2 & 0xfffffffb) == 1) {
        puVar9 = (uint *)(ulong)uVar5;
        uVar8 = 0x80;
        *(undefined **)((long)ppuVar16 + -0xd0) = &UNK_0041bc08;
        iVar7 = func_0x0099c380();
        if (iVar7 != 0) goto code_r0x0041bba5;
      }
      uVar24 = (ulong)*puVar22;
    }
    else {
code_r0x0041bba5:
      if (puVar15 != (uint *)0x0) {
        uVar8 = *puVar22;
        *(undefined **)((long)ppuVar16 + -0xd0) = &UNK_0041bbb1;
        uVar8 = func_0x0099bd20(uVar8);
        *(undefined **)((long)ppuVar16 + -0xd0) = &UNK_0041bbbc;
        func_0x0032ea60(puVar15);
      }
      uVar24 = (ulong)*puVar22;
      puVar9 = (uint *)(ulong)uVar5;
      *(undefined **)((long)ppuVar16 + -0xd0) = &UNK_0041bbc7;
      func_0x0099bd10();
      puVar23 = (uint *)0xffffffff;
    }
  }
  *puVar22 = (uint)uVar24;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar16 + -0x38)) {
    return puVar23;
  }
  *(undefined **)((long)ppuVar16 + -0xd0) = &UNK_0041bc3b;
  func_0x0099bd00();
  *(undefined1 **)((long)ppuVar16 + -0xd0) = (undefined1 *)((long)ppuVar16 + -8);
  *(ulong *)((long)ppuVar16 + -0xd8) = uVar24;
  *(uint **)((long)ppuVar16 + -0xe0) = puVar23;
  *(uint **)((long)ppuVar16 + -0xe8) = puVar15;
  *(ulong *)((long)ppuVar16 + -0xf0) = uVar21;
  *(uint **)((long)ppuVar16 + -0xf8) = puVar22;
  pbVar18 = (byte *)(ulong)uVar8;
  *(undefined8 *)((long)ppuVar16 + -0x100) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)((long)ppuVar16 + -0x104) = 0;
  puVar22 = (uint *)((long)puVar9 + 1);
  puVar23 = puVar22;
  if ((*puVar9 & 1) != 0) {
    puVar23 = *(uint **)(puVar9 + 4);
  }
  *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bc8a;
  puVar11 = (uint *)socket_network_client_timeout();
  if ((int)puVar11 == -1) {
    puVar11 = (uint *)((ulong)puVar11 & 0xffffffff);
    if (*(int *)((long)ppuVar16 + -0x104) == 0) {
      if ((*puVar9 & 1) != 0) {
        puVar22 = *(uint **)(puVar9 + 4);
      }
      *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bd35;
      puVar12 = (undefined4 *)func_0x0099bce0();
      uVar19 = *puVar12;
      *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bd3f;
      uVar10 = func_0x0099bd20(uVar19);
      *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bd5a;
      _ZN7android4base12StringPrintfEPKcz
                ((undefined1 *)((long)ppuVar16 + -0x120),&UNK_001661cd,puVar22,uVar8,uVar10);
      if ((*param_5 & 1) != 0) {
        uVar10 = *(undefined8 *)(param_5 + 0x10);
        *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bd6f;
        _ZdaPvSt11align_val_t(uVar10);
      }
      *(undefined8 *)(param_5 + 0x10) = *(undefined8 *)((long)ppuVar16 + -0x110);
      uVar19 = *(undefined4 *)((long)ppuVar16 + -0x11c);
      uVar2 = *(undefined4 *)((long)ppuVar16 + -0x118);
      uVar3 = *(undefined4 *)((long)ppuVar16 + -0x114);
      *(undefined4 *)param_5 = *(undefined4 *)((long)ppuVar16 + -0x120);
      *(undefined4 *)(param_5 + 4) = uVar19;
      *(undefined4 *)(param_5 + 8) = uVar2;
      *(undefined4 *)(param_5 + 0xc) = uVar3;
      puVar23 = (uint *)0x3;
      pbVar18 = (byte *)0x0;
      *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bd8a;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar4 == '\0') goto code_r0x0041bd91;
      uVar19 = *puVar12;
      uVar10 = 0x95;
    }
    else {
      if ((*puVar9 & 1) != 0) {
        puVar22 = *(uint **)(puVar9 + 4);
      }
      *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bcb0;
      uVar10 = func_0x0099c470();
      *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bcc8;
      _ZN7android4base12StringPrintfEPKcz
                ((undefined1 *)((long)ppuVar16 + -0x120),&UNK_00183729,puVar22,uVar10);
      if ((*param_5 & 1) != 0) {
        uVar10 = *(undefined8 *)(param_5 + 0x10);
        *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bcdd;
        _ZdaPvSt11align_val_t(uVar10);
      }
      *(undefined8 *)(param_5 + 0x10) = *(undefined8 *)((long)ppuVar16 + -0x110);
      uVar19 = *(undefined4 *)((long)ppuVar16 + -0x11c);
      uVar2 = *(undefined4 *)((long)ppuVar16 + -0x118);
      uVar3 = *(undefined4 *)((long)ppuVar16 + -0x114);
      *(undefined4 *)param_5 = *(undefined4 *)((long)ppuVar16 + -0x120);
      *(undefined4 *)(param_5 + 4) = uVar19;
      *(undefined4 *)(param_5 + 8) = uVar2;
      *(undefined4 *)(param_5 + 0xc) = uVar3;
      puVar23 = (uint *)0x3;
      pbVar18 = (byte *)0x0;
      *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bcf8;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar4 == '\0') goto code_r0x0041bd91;
      *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bd08;
      puVar12 = (undefined4 *)func_0x0099bce0();
      uVar19 = *puVar12;
      uVar10 = 0x91;
    }
    puVar23 = (uint *)((long)ppuVar16 + -0x120);
    *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bdd8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              ((undefined1 *)((long)ppuVar16 + -0x120),&UNK_001868f4,uVar10,3,0,0xffffffff);
    *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bde0;
    uVar10 = _ZN7android4base10LogMessage6streamEv(puVar23);
    *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bdeb;
    func_0x0032e5a0(uVar10);
    *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041bdf3;
    _ZN7android4base10LogMessageD2Ev();
    *puVar12 = uVar19;
    pbVar18 = param_5;
  }
code_r0x0041bd91:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar16 + -0x100)) {
    return puVar11;
  }
  *(undefined **)((long)ppuVar16 + -0x128) = &UNK_0041be00;
  func_0x0099bd00();
  *(undefined1 **)((long)ppuVar16 + -0x128) = (undefined1 *)((long)ppuVar16 + -0xd0);
  pbVar18[0] = 0x1c;
  pbVar18[1] = 0;
  pbVar18[2] = 0;
  pbVar18[3] = 0;
  *(undefined2 *)puVar23 = 10;
  *(undefined8 *)(puVar23 + 2) = _in6addr_loopback;
  *(undefined8 *)(puVar23 + 4) = _fdopen;
  *(ushort *)((long)puVar23 + 2) = extraout_DX >> 8 | extraout_DX << 8;
  return puVar23;
}


