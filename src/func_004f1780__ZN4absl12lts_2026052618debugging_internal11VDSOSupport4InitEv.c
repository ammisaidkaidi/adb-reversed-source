// Function: _ZN4absl12lts_2026052618debugging_internal11VDSOSupport4InitEv
// Address: 004f1780
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 * _ZN4absl12lts_2026052618debugging_internal11VDSOSupport4InitEv(long *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  if (_ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E ==
      &_ZN4absl12lts_2026052618debugging_internal11ElfMemImage20kInvalidBaseSentinelE) {
    puVar3 = (undefined4 *)func_0x0099bce0();
    *puVar3 = 0;
    param_1 = (long *)0x21;
    _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E =
         (undefined4 *)func_0x0099c800(0x21);
  }
  if (_ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E ==
      &_ZN4absl12lts_2026052618debugging_internal11ElfMemImage20kInvalidBaseSentinelE) {
    param_1 = (long *)&UNK_0016b451;
    uVar2 = func_0x0099bf40(&UNK_0016b451,0);
    if (uVar2 == 0xffffffff) {
      _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10getcpu_fn_E =
           _ZN4absl12lts_2026052618debugging_internal11VDSOSupport16GetCPUViaSyscallEPjPvS4_;
      _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E = (undefined4 *)0x0;
      goto code_r0x004f18ba;
    }
    lStack_78 = 0;
    puStack_70 = (undefined4 *)0x0;
    do {
      lVar4 = func_0x0099be20(uVar2,&lStack_78,0x10);
      if (lVar4 != 0x10) goto code_r0x004f1823;
    } while (lStack_78 != 0x21);
    _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E = puStack_70;
code_r0x004f1823:
    param_1 = (long *)(ulong)uVar2;
    func_0x0099bd10(param_1);
    if (_ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E ==
        &_ZN4absl12lts_2026052618debugging_internal11ElfMemImage20kInvalidBaseSentinelE) {
      _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E = (undefined4 *)0x0;
    }
  }
  if (_ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E != (undefined4 *)0x0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    lStack_78 = 0;
    puStack_70 = (undefined4 *)0x0;
    uStack_38 = 0;
    param_1 = &lStack_78;
    _ZN4absl12lts_2026052618debugging_internal11VDSOSupportC1Ev(param_1);
    pcStack_88 = (code *)0x0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    cVar1 = _ZNK4absl12lts_2026052618debugging_internal11ElfMemImage12LookupSymbolEPKcS4_iPNS2_10SymbolInfoE
                      (param_1,&UNK_0015b60d,&UNK_00189a8f,2,&uStack_98);
    _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10getcpu_fn_E = pcStack_88;
    if (cVar1 != '\0') goto code_r0x004f18ba;
  }
  _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10getcpu_fn_E =
       _ZN4absl12lts_2026052618debugging_internal11VDSOSupport16GetCPUViaSyscallEPjPvS4_;
code_r0x004f18ba:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_28) {
    func_0x0099bd00();
    puVar3 = (undefined4 *)syscall(0x135,param_1,0,0);
    return puVar3;
  }
  return _ZN4absl12lts_2026052618debugging_internal11VDSOSupport10vdso_base_E;
}


