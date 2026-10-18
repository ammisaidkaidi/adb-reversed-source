// Function: _Z23network_loopback_serveriiPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEb
// Address: 0041ba40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0041ba62: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0041ba67) */
/* WARNING: Removing unreachable block (ram,0x0041ba77) */
/* WARNING: Removing unreachable block (ram,0x0041baa0) */
/* WARNING: Removing unreachable block (ram,0x0041ba6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * _Z23network_loopback_serveriiPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEb
                 (uint param_1,uint param_2,byte *param_3,int param_4,byte *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  code *pcVar11;
  ushort extraout_DX;
  byte *unaff_RBX;
  undefined1 *puVar12;
  undefined1 *unaff_RBP;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 uVar16;
  undefined8 unaff_R12;
  ulong uVar17;
  undefined8 unaff_R13;
  ulong unaff_R14;
  byte *pbVar18;
  ulong unaff_R15;
  ulong uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  undefined *apuStack_30 [2];
  
  puVar12 = &stack0xfffffffffffffff8;
  bVar20 = param_4 == 0;
  if (!bVar20) {
    register0x00000020 = (BADSPACEBASE *)apuStack_30;
    apuStack_30[0] = &UNK_0041ba67;
    unaff_RBX = param_3;
    unaff_RBP = puVar12;
    unaff_R14 = (ulong)param_2;
    unaff_R15 = (ulong)param_1;
  }
  *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
  *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(byte **)((long)register0x00000020 + -0x30) = unaff_RBX;
  uVar17 = (ulong)param_2;
  *(uint *)((long)register0x00000020 + -0xc4) = param_1;
  *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pbVar14 = (byte *)(ulong)((uint)bVar20 * 8 + 2);
  *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0041baf1;
  uVar6 = param_2;
  uVar4 = func_0x0099c340(pbVar14,param_2,0);
  pbVar18 = (byte *)(ulong)uVar4;
  *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0041baf9;
  puVar7 = (uint *)func_0x0099bce0();
  if (uVar4 == 0xffffffff) {
    if (param_3 != (byte *)0x0) {
      uVar6 = *puVar7;
      *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0041bbdb;
      uVar6 = func_0x0099bd20(uVar6);
      *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0041bbe6;
      pbVar14 = param_3;
      func_0x0032ea60();
    }
    uVar19 = (ulong)*puVar7;
    pbVar18 = (byte *)0xffffffff;
  }
  else {
    *(undefined4 *)((long)register0x00000020 + -0xbc) = 1;
    param_5 = (byte *)0x4;
    *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0041bb2f;
    func_0x0099bf50(uVar4,1,2,(undefined1 *)((long)register0x00000020 + -0xbc));
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
    *(undefined4 *)((long)register0x00000020 + -0xc0) = 0x80;
    pcVar11 = (code *)&UNK_0041be30;
    if (bVar20) {
      pcVar11 = (code *)&UNK_0041be00;
    }
    *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0041bb90;
    uVar8 = (*pcVar11)((undefined1 *)((long)register0x00000020 + -0xb8),
                       (undefined1 *)((long)register0x00000020 + -0xc0),
                       *(undefined4 *)((long)register0x00000020 + -0xc4));
    *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0041bba1;
    pbVar14 = pbVar18;
    iVar5 = func_0x0099c370(pbVar18,uVar8,*(undefined4 *)((long)register0x00000020 + -0xc0));
    uVar6 = (uint)uVar8;
    if (iVar5 == 0) {
      uVar17 = (ulong)(param_2 & 0xfffffffb);
      if ((param_2 & 0xfffffffb) == 1) {
        pbVar14 = (byte *)(ulong)uVar4;
        uVar6 = 0x80;
        *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0041bc08;
        iVar5 = func_0x0099c380();
        if (iVar5 != 0) goto code_r0x0041bba5;
      }
      uVar19 = (ulong)*puVar7;
    }
    else {
code_r0x0041bba5:
      if (param_3 != (byte *)0x0) {
        uVar6 = *puVar7;
        *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0041bbb1;
        uVar6 = func_0x0099bd20(uVar6);
        *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0041bbbc;
        func_0x0032ea60(param_3);
      }
      uVar19 = (ulong)*puVar7;
      pbVar14 = (byte *)(ulong)uVar4;
      *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0041bbc7;
      func_0x0099bd10();
      pbVar18 = (byte *)0xffffffff;
    }
  }
  *puVar7 = (uint)uVar19;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)register0x00000020 + -0x38)) {
    return pbVar18;
  }
  *(undefined **)((long)register0x00000020 + -0xd0) = &UNK_0041bc3b;
  func_0x0099bd00();
  *(undefined1 **)((long)register0x00000020 + -0xd0) = (undefined1 *)((long)register0x00000020 + -8)
  ;
  *(ulong *)((long)register0x00000020 + -0xd8) = uVar19;
  *(byte **)((long)register0x00000020 + -0xe0) = pbVar18;
  *(byte **)((long)register0x00000020 + -0xe8) = param_3;
  *(ulong *)((long)register0x00000020 + -0xf0) = uVar17;
  *(uint **)((long)register0x00000020 + -0xf8) = puVar7;
  pbVar13 = (byte *)(ulong)uVar6;
  *(undefined8 *)((long)register0x00000020 + -0x100) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)((long)register0x00000020 + -0x104) = 0;
  pbVar18 = pbVar14 + 1;
  pbVar15 = pbVar18;
  if ((*pbVar14 & 1) != 0) {
    pbVar15 = *(byte **)(pbVar14 + 0x10);
  }
  *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bc8a;
  pbVar9 = (byte *)socket_network_client_timeout();
  if ((int)pbVar9 == -1) {
    pbVar9 = (byte *)((ulong)pbVar9 & 0xffffffff);
    if (*(int *)((long)register0x00000020 + -0x104) == 0) {
      if ((*pbVar14 & 1) != 0) {
        pbVar18 = *(byte **)(pbVar14 + 0x10);
      }
      *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bd35;
      puVar10 = (undefined4 *)func_0x0099bce0();
      uVar16 = *puVar10;
      *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bd3f;
      uVar8 = func_0x0099bd20(uVar16);
      *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bd5a;
      _ZN7android4base12StringPrintfEPKcz
                ((undefined1 *)((long)register0x00000020 + -0x120),&UNK_001661cd,pbVar18,uVar6,uVar8
                );
      if ((*param_5 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_5 + 0x10);
        *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bd6f;
        _ZdaPvSt11align_val_t(uVar8);
      }
      *(undefined8 *)(param_5 + 0x10) = *(undefined8 *)((long)register0x00000020 + -0x110);
      uVar16 = *(undefined4 *)((long)register0x00000020 + -0x11c);
      uVar1 = *(undefined4 *)((long)register0x00000020 + -0x118);
      uVar2 = *(undefined4 *)((long)register0x00000020 + -0x114);
      *(undefined4 *)param_5 = *(undefined4 *)((long)register0x00000020 + -0x120);
      *(undefined4 *)(param_5 + 4) = uVar16;
      *(undefined4 *)(param_5 + 8) = uVar1;
      *(undefined4 *)(param_5 + 0xc) = uVar2;
      pbVar15 = (byte *)0x3;
      pbVar13 = (byte *)0x0;
      *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bd8a;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar3 == '\0') goto code_r0x0041bd91;
      uVar16 = *puVar10;
      uVar8 = 0x95;
    }
    else {
      if ((*pbVar14 & 1) != 0) {
        pbVar18 = *(byte **)(pbVar14 + 0x10);
      }
      *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bcb0;
      uVar8 = func_0x0099c470();
      *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bcc8;
      _ZN7android4base12StringPrintfEPKcz
                ((undefined1 *)((long)register0x00000020 + -0x120),&UNK_00183729,pbVar18,uVar8);
      if ((*param_5 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_5 + 0x10);
        *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bcdd;
        _ZdaPvSt11align_val_t(uVar8);
      }
      *(undefined8 *)(param_5 + 0x10) = *(undefined8 *)((long)register0x00000020 + -0x110);
      uVar16 = *(undefined4 *)((long)register0x00000020 + -0x11c);
      uVar1 = *(undefined4 *)((long)register0x00000020 + -0x118);
      uVar2 = *(undefined4 *)((long)register0x00000020 + -0x114);
      *(undefined4 *)param_5 = *(undefined4 *)((long)register0x00000020 + -0x120);
      *(undefined4 *)(param_5 + 4) = uVar16;
      *(undefined4 *)(param_5 + 8) = uVar1;
      *(undefined4 *)(param_5 + 0xc) = uVar2;
      pbVar15 = (byte *)0x3;
      pbVar13 = (byte *)0x0;
      *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bcf8;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar3 == '\0') goto code_r0x0041bd91;
      *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bd08;
      puVar10 = (undefined4 *)func_0x0099bce0();
      uVar16 = *puVar10;
      uVar8 = 0x91;
    }
    pbVar15 = (byte *)((long)register0x00000020 + -0x120);
    *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bdd8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              ((undefined1 *)((long)register0x00000020 + -0x120),&UNK_001868f4,uVar8,3,0,0xffffffff)
    ;
    *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bde0;
    uVar8 = _ZN7android4base10LogMessage6streamEv(pbVar15);
    *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bdeb;
    func_0x0032e5a0(uVar8);
    *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041bdf3;
    _ZN7android4base10LogMessageD2Ev();
    *puVar10 = uVar16;
    pbVar13 = param_5;
  }
code_r0x0041bd91:
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)((long)register0x00000020 + -0x100)) {
    *(undefined **)((long)register0x00000020 + -0x128) = &UNK_0041be00;
    func_0x0099bd00();
    *(undefined1 **)((long)register0x00000020 + -0x128) =
         (undefined1 *)((long)register0x00000020 + -0xd0);
    pbVar13[0] = 0x1c;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    pbVar15[0] = 10;
    pbVar15[1] = 0;
    *(undefined8 *)(pbVar15 + 8) = _in6addr_loopback;
    *(undefined8 *)(pbVar15 + 0x10) = _fdopen;
    *(ushort *)(pbVar15 + 2) = extraout_DX >> 8 | extraout_DX << 8;
    return pbVar15;
  }
  return pbVar9;
}


