// Function: _ZN16AdbUsbConnection5WriteEP7apacket
// Address: 003f6eb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN16AdbUsbConnection5WriteEP7apacket(long param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 unaff_RBX;
  undefined *puVar10;
  undefined1 *puVar11;
  long in_FS_OFFSET;
  undefined1 auStack_68 [8];
  long lStack_60;
  ulong uStack_58;
  uint *puStack_50;
  ulong uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(param_2 + 0xc);
  puVar6 = (uint *)(ulong)uVar1;
  puStack_40 = &UNK_003f6ee5;
  iVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),param_2,0x18);
  if (iVar4 == 0x18) {
    uVar9 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (*(int *)(param_2 + 0xc) == 0) goto code_r0x003f6f6f;
    puStack_40 = &UNK_003f6f05;
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                      (*(long **)(param_1 + 8),*(undefined8 *)(param_2 + 0x18),puVar6);
    if (uVar5 == uVar1) goto code_r0x003f6f6f;
    uVar9 = 0;
    puStack_40 = &UNK_003f6f18;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 == '\0') goto code_r0x003f6f6f;
    puStack_40 = &UNK_003f6f21;
    puVar6 = (uint *)func_0x0099bce0();
    param_2 = (ulong)*puVar6;
    puStack_40 = &UNK_003f6f4c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_38,&UNK_00184aaa,0x49,4,0,param_2);
    puStack_40 = &UNK_003f6f54;
    uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_38);
    puVar10 = &UNK_00172374;
  }
  else {
    uVar9 = 0;
    puStack_40 = &UNK_003f6f6b;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 == '\0') goto code_r0x003f6f6f;
    puStack_40 = &UNK_003f6f92;
    puVar6 = (uint *)func_0x0099bce0();
    param_2 = (ulong)*puVar6;
    puStack_40 = &UNK_003f6fbd;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_38,&UNK_00184aaa,0x44,4,0,param_2);
    puStack_40 = &UNK_003f6fc5;
    uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_38);
    puVar10 = &UNK_00181bd9;
  }
  uVar9 = 0;
  puStack_40 = &UNK_003f6fd9;
  func_0x0032eb30(uVar7,puVar10,0x26);
  puStack_40 = &UNK_003f6fe1;
  _ZN7android4base10LogMessageD2Ev(auStack_38);
  *puVar6 = (uint)param_2;
code_r0x003f6f6f:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return uVar9 & 0xffffffff;
  }
  puStack_40 = &UNK_003f6feb;
  func_0x0099bd00();
  lStack_60 = *(long *)(in_FS_OFFSET + 0x28);
  puVar11 = (undefined1 *)0x6;
  uStack_58 = uVar9;
  puStack_50 = puVar6;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff8;
  cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar3 != '\0') {
    puVar8 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar8;
    puVar11 = auStack_68;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar11,&UNK_00184aaa,0x51,6,0,0xffffffff);
    uVar7 = _ZN7android4base10LogMessage6streamEv(puVar11);
    func_0x0032eb30(uVar7,&UNK_001706a6,0x1d);
    _ZN7android4base10LogMessageD2Ev();
    *puVar8 = uVar2;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_60) {
    return 0;
  }
  func_0x0099bd00();
                    /* WARNING: Could not recover jumptable at 0x003f70ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(**(long **)(puVar11 + 8) + 0x38))();
  return uVar9;
}


