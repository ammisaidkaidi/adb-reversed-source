// Function: _Z18ReadProtocolStringN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES9_
// Address: 003d09a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_Z18ReadProtocolStringN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES9_
          (ulong param_1,byte *param_2,ulong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint *extraout_RDX;
  undefined4 uVar13;
  undefined8 unaff_R12;
  uint *puVar14;
  long in_FS_OFFSET;
  byte *pbStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  ulong *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulong uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  long lStack_30;
  
  puVar10 = (undefined4 *)(param_1 & 0xffffffff);
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_34 = 0;
  uStack_38 = 0;
  cVar4 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(param_1,&uStack_38,4);
  if (cVar4 == '\0') {
    pbStack_b8 = &UNK_0017ed1e;
  }
  else {
    uStack_34 = 0;
    unaff_R12 = func_0x0099c260(&uStack_38,0,0x10);
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_2,unaff_R12,0);
    if ((*param_2 & 1) == 0) {
      pbStack_b8 = param_2 + 1;
    }
    else {
      pbStack_b8 = *(byte **)(param_2 + 0x10);
    }
    cVar4 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(puVar10,pbStack_b8,unaff_R12);
    uVar11 = 1;
    if (cVar4 != '\0') goto code_r0x003d0a6a;
    pbStack_b8 = &UNK_0015b073;
  }
  puVar10 = &uStack_50;
  _Z10perror_strPKc(puVar10);
  if ((*param_3 & 1) != 0) {
    puVar10 = (undefined4 *)param_3[2];
    pbStack_b8 = (byte *)(*param_3 & 0xfffffffffffffffe);
    _ZdaPvSt11align_val_t(puVar10);
  }
  param_3[2] = uStack_40;
  *(undefined4 *)param_3 = uStack_50;
  *(undefined4 *)((long)param_3 + 4) = uStack_4c;
  *(undefined4 *)(param_3 + 1) = uStack_48;
  *(undefined4 *)((long)param_3 + 0xc) = uStack_44;
  uVar11 = 0;
code_r0x003d0a6a:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return uVar11;
  }
  func_0x0099bd00();
  uVar12 = (ulong)puVar10 & 0xffffffff;
  uVar13 = SUB84(puVar10,0);
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  puVar14 = extraout_RDX;
  pbVar3 = pbStack_b8;
  puStack_88 = param_3;
  uStack_80 = unaff_R12;
  if (((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) &&
     (cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar4 != '\0')) {
    puVar10 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar10;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_98,&UNK_001770ec,0x4f,1,0,0xffffffff);
    uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_98);
    _ZN7android4base12StringPrintfEPKcz(&bStack_b0,&UNK_00157810,uVar12,extraout_RDX);
    func_0x0032e5a0(uVar11,&bStack_b0);
    if ((bStack_b0 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_98);
    *puVar10 = uVar2;
  }
  do {
    puVar8 = extraout_RDX;
    if (puVar14 == (uint *)0x0) {
      uVar11 = 1;
      if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar4 != '\0') goto code_r0x003d0dac;
        goto code_r0x003d0b49;
      }
code_r0x003d0b91:
      while (uVar13 = (undefined4)uVar12, *(long *)(in_FS_OFFSET + 0x28) != lStack_90) {
        func_0x0099bd00();
code_r0x003d0dac:
        puVar10 = (undefined4 *)func_0x0099bce0();
        uVar2 = *puVar10;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_98,&UNK_001770ec,0x60,1,0,0xffffffff);
        uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_98);
        uVar11 = func_0x0032eb30(uVar11,&UNK_00178979,10);
        uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar11,uVar13);
        uVar11 = func_0x0032eb30(uVar11,&UNK_0016eb6c,8);
        uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar11,puVar8);
        uVar11 = func_0x0032eb30(uVar11,&UNK_0015e00b,5);
        uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar11,puVar8);
        uVar12 = func_0x0032eb30(uVar11,&UNK_0015ae05,1);
        _Z8dump_hexPKvm(&bStack_b0,pbStack_b8,puVar8);
        func_0x0032e5a0(uVar12,&bStack_b0);
        if ((bStack_b0 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_98);
        *puVar10 = uVar2;
code_r0x003d0b49:
        uVar11 = 1;
      }
      return uVar11;
    }
    while (lVar6 = func_0x0099be20(uVar12,pbVar3,puVar14), lVar6 == -1) {
      piVar7 = (int *)func_0x0099bce0();
      if (*piVar7 != 4) goto code_r0x003d0b78;
    }
    uVar5 = (uint)lVar6;
    if ((int)uVar5 < 1) {
      if (uVar5 == 0xffffffff) {
code_r0x003d0b78:
        uVar11 = 0;
        if ((((byte)adb_trace_mask & 0x10) == 0) || (1 < (int)adb_trace_severity._16_4_))
        goto code_r0x003d0b91;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        uVar11 = 0;
        if (cVar4 == '\0') goto code_r0x003d0b91;
        puVar8 = (uint *)func_0x0099bce0();
        uVar5 = *puVar8;
        pbStack_b8 = (byte *)(ulong)uVar5;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_98,&UNK_001770ec,0x56,1,0,0xffffffff);
        uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_98);
        uVar1 = *puVar8;
        uVar9 = func_0x0099bd20(uVar1);
        _ZN7android4base12StringPrintfEPKcz(&bStack_b0,&UNK_0017895f,uVar12,uVar1,uVar9);
        func_0x0032e5a0(uVar11,&bStack_b0);
        if ((bStack_b0 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_98);
        *puVar8 = uVar5;
      }
      else {
        if (((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) &&
           (cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar4 != '\0')) {
          puVar8 = (uint *)func_0x0099bce0();
          uVar5 = *puVar8;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_98,&UNK_001770ec,0x5a,1,0,0xffffffff);
          uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_98);
          _ZN7android4base12StringPrintfEPKcz(&bStack_b0,&UNK_00167a19,uVar12);
          func_0x0032e5a0(uVar11,&bStack_b0);
          if ((bStack_b0 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(auStack_98);
          *puVar8 = uVar5;
        }
        puVar10 = (undefined4 *)func_0x0099bce0();
        *puVar10 = 0;
      }
      uVar11 = 0;
      goto code_r0x003d0b91;
    }
    puVar14 = (uint *)((long)puVar14 - (ulong)(uVar5 & 0x7fffffff));
    pbVar3 = pbVar3 + (uVar5 & 0x7fffffff);
  } while( true );
}


