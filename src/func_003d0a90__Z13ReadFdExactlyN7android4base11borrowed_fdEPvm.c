// Function: _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm
// Address: 003d0a90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(ulong param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  long in_FS_OFFSET;
  ulong uStack_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  uVar12 = param_1 & 0xffffffff;
  uVar13 = (undefined4)param_1;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = param_3;
  uVar4 = param_2;
  if (((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) &&
     (cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar5 != '\0')) {
    puVar10 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar10;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_40,&UNK_001770ec,0x4f,1,0,0xffffffff);
    uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_40);
    _ZN7android4base12StringPrintfEPKcz(&bStack_58,&UNK_00157810,uVar12,param_3);
    func_0x0032e5a0(uVar11,&bStack_58);
    if ((bStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_40);
    *puVar10 = uVar2;
  }
  do {
    uStack_60 = param_2;
    if (puVar3 == (uint *)0x0) {
      uVar11 = 1;
      if ((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) {
        cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar5 != '\0') goto code_r0x003d0dac;
        goto code_r0x003d0b49;
      }
code_r0x003d0b91:
      while (uVar13 = (undefined4)uVar12, *(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
        func_0x0099bd00();
code_r0x003d0dac:
        puVar10 = (undefined4 *)func_0x0099bce0();
        uVar2 = *puVar10;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_001770ec,0x60,1,0,0xffffffff);
        uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        uVar11 = func_0x0032eb30(uVar11,&UNK_00178979,10);
        uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar11,uVar13);
        uVar11 = func_0x0032eb30(uVar11,&UNK_0016eb6c,8);
        uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar11,param_3);
        uVar11 = func_0x0032eb30(uVar11,&UNK_0015e00b,5);
        uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar11,param_3);
        uVar12 = func_0x0032eb30(uVar11,&UNK_0015ae05,1);
        _Z8dump_hexPKvm(&bStack_58,uStack_60,param_3);
        func_0x0032e5a0(uVar12,&bStack_58);
        if ((bStack_58 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_40);
        *puVar10 = uVar2;
code_r0x003d0b49:
        uVar11 = 1;
      }
      return uVar11;
    }
    while (lVar7 = func_0x0099be20(uVar12,uVar4,puVar3), lVar7 == -1) {
      piVar8 = (int *)func_0x0099bce0();
      if (*piVar8 != 4) goto code_r0x003d0b78;
    }
    uVar6 = (uint)lVar7;
    if ((int)uVar6 < 1) {
      if (uVar6 == 0xffffffff) {
code_r0x003d0b78:
        uVar11 = 0;
        if ((((byte)adb_trace_mask & 0x10) == 0) || (1 < (int)adb_trace_severity._16_4_))
        goto code_r0x003d0b91;
        cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        uVar11 = 0;
        if (cVar5 == '\0') goto code_r0x003d0b91;
        param_3 = (uint *)func_0x0099bce0();
        uVar6 = *param_3;
        uStack_60 = (ulong)uVar6;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_001770ec,0x56,1,0,0xffffffff);
        uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        uVar1 = *param_3;
        uVar9 = func_0x0099bd20(uVar1);
        _ZN7android4base12StringPrintfEPKcz(&bStack_58,&UNK_0017895f,uVar12,uVar1,uVar9);
        func_0x0032e5a0(uVar11,&bStack_58);
        if ((bStack_58 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_40);
        *param_3 = uVar6;
      }
      else {
        if (((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) &&
           (cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar5 != '\0')) {
          param_3 = (uint *)func_0x0099bce0();
          uVar6 = *param_3;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_40,&UNK_001770ec,0x5a,1,0,0xffffffff);
          uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_40);
          _ZN7android4base12StringPrintfEPKcz(&bStack_58,&UNK_00167a19,uVar12);
          func_0x0032e5a0(uVar11,&bStack_58);
          if ((bStack_58 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(auStack_40);
          *param_3 = uVar6;
        }
        puVar10 = (undefined4 *)func_0x0099bce0();
        *puVar10 = 0;
      }
      uVar11 = 0;
      goto code_r0x003d0b91;
    }
    puVar3 = (uint *)((long)puVar3 - (ulong)(uVar6 & 0x7fffffff));
    uVar4 = uVar4 + (uVar6 & 0x7fffffff);
  } while( true );
}


