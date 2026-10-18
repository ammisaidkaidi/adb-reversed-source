// Function: _ZN4absl12lts_2026052612log_internal10LogMessage10AtLocationENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEi
// Address: 004bb850
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052612log_internal10LogMessage10AtLocationENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEi
               (long param_1,long param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar3 = *(long **)(param_1 + 8);
  *plVar3 = param_2;
  plVar3[1] = param_3;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    lVar4 = 0;
    lVar6 = param_2;
    do {
      lVar5 = lVar4;
      if (param_3 == lVar5) goto code_r0x004bb8a0;
      lVar1 = lVar6 + -1;
      lVar2 = lVar6 + -1;
      lVar4 = lVar5 + 1;
      lVar6 = lVar1;
    } while (*(char *)(lVar2 + param_3) != '/');
    if (param_3 + 1 != lVar5 + 1) {
      param_2 = lVar1 + param_3 + 1;
      param_3 = lVar5;
    }
  }
code_r0x004bb8a0:
  lVar4 = *(long *)(param_1 + 8);
  *(long *)(lVar4 + 0x10) = param_2;
  *(long *)(lVar4 + 0x18) = param_3;
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x20) = param_4;
  _ZN4absl12lts_2026052612log_internal10LogMessage20LogBacktraceIfNeededEv(param_1);
  return param_1;
}


