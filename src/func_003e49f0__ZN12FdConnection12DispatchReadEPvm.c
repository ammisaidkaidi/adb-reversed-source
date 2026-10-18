// Function: _ZN12FdConnection12DispatchReadEPvm
// Address: 003e49f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN12FdConnection12DispatchReadEPvm(long param_1,ulong param_2,uint *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  long in_FS_OFFSET;
  ulong uStack_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    if (param_3 == (uint *)0x0) {
      return 1;
    }
                    /* WARNING: Could not recover jumptable at 0x003e4a0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (**(code **)(**(long **)(param_1 + 0x10) + 0x50))();
    return uVar11;
  }
  uVar12 = *(uint *)(param_1 + 8);
  uVar10 = (ulong)uVar12;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = param_3;
  uVar3 = param_2;
  if (((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) &&
     (cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar4 != '\0')) {
    puVar9 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar9;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_40,&UNK_001770ec,0x4f,1,0,0xffffffff);
    uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_40);
    _ZN7android4base12StringPrintfEPKcz(&bStack_58,&UNK_00157810,uVar10,param_3);
    func_0x0032e5a0(uVar11,&bStack_58);
    if ((bStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_40);
    *puVar9 = uVar1;
  }
  do {
    uStack_60 = param_2;
    if (puVar2 == (uint *)0x0) {
      uVar11 = 1;
      if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar4 != '\0') goto code_r0x003d0dac;
        goto code_r0x003d0b49;
      }
code_r0x003d0b91:
      while (uVar12 = (uint)uVar10, *(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
        func_0x0099bd00();
code_r0x003d0dac:
        puVar9 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar9;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_001770ec,0x60,1,0,0xffffffff);
        uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        uVar11 = func_0x0032eb30(uVar11,&UNK_00178979,10);
        uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar11,uVar12);
        uVar11 = func_0x0032eb30(uVar11,&UNK_0016eb6c,8);
        uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar11,param_3);
        uVar11 = func_0x0032eb30(uVar11,&UNK_0015e00b,5);
        uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar11,param_3);
        uVar10 = func_0x0032eb30(uVar11,&UNK_0015ae05,1);
        _Z8dump_hexPKvm(&bStack_58,uStack_60,param_3);
        func_0x0032e5a0(uVar10,&bStack_58);
        if ((bStack_58 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_40);
        *puVar9 = uVar1;
code_r0x003d0b49:
        uVar11 = 1;
      }
      return uVar11;
    }
    while (lVar6 = func_0x0099be20(uVar10,uVar3,puVar2), lVar6 == -1) {
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
        param_3 = (uint *)func_0x0099bce0();
        uVar12 = *param_3;
        uStack_60 = (ulong)uVar12;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_001770ec,0x56,1,0,0xffffffff);
        uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        uVar5 = *param_3;
        uVar8 = func_0x0099bd20(uVar5);
        _ZN7android4base12StringPrintfEPKcz(&bStack_58,&UNK_0017895f,uVar10,uVar5,uVar8);
        func_0x0032e5a0(uVar11,&bStack_58);
        if ((bStack_58 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_40);
        *param_3 = uVar12;
      }
      else {
        if (((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) &&
           (cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar4 != '\0')) {
          param_3 = (uint *)func_0x0099bce0();
          uVar12 = *param_3;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_40,&UNK_001770ec,0x5a,1,0,0xffffffff);
          uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_40);
          _ZN7android4base12StringPrintfEPKcz(&bStack_58,&UNK_00167a19,uVar10);
          func_0x0032e5a0(uVar11,&bStack_58);
          if ((bStack_58 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(auStack_40);
          *param_3 = uVar12;
        }
        puVar9 = (undefined4 *)func_0x0099bce0();
        *puVar9 = 0;
      }
      uVar11 = 0;
      goto code_r0x003d0b91;
    }
    puVar2 = (uint *)((long)puVar2 - (ulong)(uVar5 & 0x7fffffff));
    uVar3 = uVar3 + (uVar5 & 0x7fffffff);
  } while( true );
}


