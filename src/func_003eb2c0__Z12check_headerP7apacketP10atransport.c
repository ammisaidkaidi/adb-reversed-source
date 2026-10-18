// Function: _Z12check_headerP7apacketP10atransport
// Address: 003eb2c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined * _Z12check_headerP7apacketP10atransport(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined *extraout_RDX;
  uint *unaff_RBX;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined **ppuVar12;
  uint *unaff_R12;
  uint *unaff_R13;
  uint *unaff_R14;
  ulong unaff_R15;
  long in_FS_OFFSET;
  byte bStack_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  uint *puStack_a8;
  undefined **ppuStack_90;
  undefined *puStack_80;
  uint *puStack_78;
  uint *puStack_70;
  uint *puStack_68;
  uint *puStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  uint auStack_40 [2];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = param_2;
  puVar11 = param_1;
  puStack_70 = unaff_R12;
  puStack_68 = unaff_R13;
  if ((*param_1 ^ param_1[5]) == 0xffffffff) {
    puVar8 = (undefined *)0xffffff01;
    if (((*(ulong *)(param_2 + 0x3c) < (ulong)param_1[3]) &&
        (puVar8 = (undefined *)0x0, ((byte)adb_trace_mask & 0x10) != 0)) &&
       ((int)adb_trace_severity._16_4_ < 2)) {
      puVar11 = (uint *)0x1;
      puVar10 = (uint *)0x0;
      puStack_50 = &UNK_003eb41b;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      puVar8 = (undefined *)0x0;
      puStack_70 = param_2;
      puStack_68 = param_1;
      if (cVar2 != '\0') {
        puStack_50 = &UNK_003eb428;
        unaff_RBX = (uint *)func_0x0099bce0();
        uVar3 = *unaff_RBX;
        puStack_50 = &UNK_003eb454;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_0017a1e0,0x6f0,1,0,0xffffffff);
        puStack_50 = &UNK_003eb45c;
        uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        puStack_50 = &UNK_003eb470;
        uVar4 = func_0x0032eb30(uVar4,&UNK_00178a88,0x10);
        puStack_50 = &UNK_003eb47c;
        uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar4,param_1[3]);
        puStack_50 = &UNK_003eb490;
        uVar4 = func_0x0032eb30(uVar4,&UNK_001866a5,0x1b);
        puVar10 = *(uint **)(param_2 + 0x3c);
        puStack_50 = &UNK_003eb4a0;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4);
        goto code_r0x003eb4a0;
      }
    }
  }
  else {
    puVar8 = (undefined *)0x0;
    if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
      puVar11 = (uint *)0x1;
      puVar10 = (uint *)0x0;
      puStack_50 = &UNK_003eb31e;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      puVar8 = (undefined *)0x0;
      puStack_70 = param_1;
      if (cVar2 != '\0') {
        puStack_50 = &UNK_003eb32f;
        unaff_RBX = (uint *)func_0x0099bce0();
        uVar3 = *unaff_RBX;
        puStack_50 = &UNK_003eb35b;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_0017a1e0,0x6ea,1,0,0xffffffff);
        puStack_50 = &UNK_003eb363;
        uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        puStack_50 = &UNK_003eb377;
        plVar5 = (long *)func_0x0032eb30(uVar4,&UNK_00189635,0x28);
        *(uint *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 8) =
             *(uint *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 8) & 0xffffffb5 | 8;
        puStack_50 = &UNK_003eb398;
        uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(plVar5,*param_1);
        puStack_50 = &UNK_003eb3ac;
        uVar4 = func_0x0032eb30(uVar4,&UNK_00187dc5,10);
        puVar10 = (uint *)(ulong)param_1[5];
        puStack_50 = &UNK_003eb3b9;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar4);
        param_2 = param_1;
        param_1 = unaff_R13;
code_r0x003eb4a0:
        unaff_R15 = (ulong)uVar3;
        unaff_R14 = auStack_40;
        puStack_50 = &UNK_003eb4a8;
        puVar11 = unaff_R14;
        _ZN7android4base10LogMessageD2Ev();
        puVar8 = (undefined *)0x0;
        *unaff_RBX = uVar3;
        puStack_70 = param_2;
        puStack_68 = param_1;
      }
    }
  }
  uVar3 = (uint)puVar10;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar8;
  }
  puStack_50 = &UNK_003eb4b7;
  func_0x0099bd00();
  puStack_80 = *(undefined **)(in_FS_OFFSET + 0x28);
  uVar9 = 0;
  puStack_78 = unaff_RBX;
  puStack_60 = unaff_R14;
  uStack_58 = unaff_R15;
  puStack_50 = &stack0xfffffffffffffff8;
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
  if (cVar2 != '\0') {
    puVar7 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar7;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_b8,&UNK_0017a1e0,0x4c6,2,0,0xffffffff);
    uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_b8);
    _ZNK10atransport11serial_nameEv(&bStack_d0,puVar11);
    uVar4 = func_0x0032e5a0(uVar4,&bStack_d0);
    uVar4 = func_0x0032eb30(uVar4,&UNK_00183510,0x19);
    uVar9 = uVar3;
    func_0x0032e5a0(uVar4);
    if ((bStack_d0 & 1) != 0) {
      uVar9 = (uint)CONCAT71(uStack_cf,bStack_d0) & 0xfffffffe;
      _ZdaPvSt11align_val_t(uStack_c0);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_b8);
    *puVar7 = uVar1;
  }
  puStack_b0 = &UNK_0099eec8;
  puStack_a8 = puVar11;
  ppuStack_90 = &puStack_b0;
  _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(&puStack_b0);
  ppuVar12 = ppuStack_90;
  if (ppuStack_90 == &puStack_b0) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (ppuStack_90 == (undefined **)0x0) goto code_r0x003eb533;
  }
  (**(code **)(*ppuStack_90 + lVar6))();
code_r0x003eb533:
  if (*(undefined **)(in_FS_OFFSET + 0x28) != puStack_80) {
    func_0x0099bd00();
    uVar3 = 0x1000001;
    if ((int)uVar9 < 0x1000001) {
      uVar3 = uVar9;
    }
    *(uint *)(ppuVar12 + 0x1d) = uVar3;
    puVar8 = (undefined *)0x100000;
    if (extraout_RDX < (undefined *)0x100000) {
      puVar8 = extraout_RDX;
    }
    ppuVar12[0x1e] = puVar8;
    return puVar8;
  }
  return *(undefined **)(in_FS_OFFSET + 0x28);
}


