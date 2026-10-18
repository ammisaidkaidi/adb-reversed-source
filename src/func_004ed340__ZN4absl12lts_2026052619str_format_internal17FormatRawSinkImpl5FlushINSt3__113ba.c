// Function: _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__113basic_ostreamIcNS4_11char_traitsIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
// Address: 004ed340
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__113basic_ostreamIcNS4_11char_traitsIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
                 (long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char acStack_28 [16];
  
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_(acStack_28,param_1);
  if ((param_3 != 0) && (acStack_28[0] != '\0')) {
    plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
    lVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_3);
    if (lVar2 != param_3) {
      _ZNSt3__18ios_base5clearEj
                ((long)param_1 + *(long *)(*param_1 + -0x18),
                 *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) | 1);
    }
  }
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev(acStack_28);
  return param_1;
}


