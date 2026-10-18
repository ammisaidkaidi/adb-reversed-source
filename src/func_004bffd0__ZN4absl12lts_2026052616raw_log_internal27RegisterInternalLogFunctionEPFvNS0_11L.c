// Function: _ZN4absl12lts_2026052616raw_log_internal27RegisterInternalLogFunctionEPFvNS0_11LogSeverityEPKciRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEE
// Address: 004bffd0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052616raw_log_internal27RegisterInternalLogFunctionEPFvNS0_11LogSeverityEPKciRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEE
          (undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  LOCK();
  uVar2 = _ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE._8_8_;
  uVar1 = param_1;
  if (_ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE._8_8_ !=
      _ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE._0_8_) {
    uVar2 = _ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE._0_8_;
    uVar1 = _ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE._0_8_;
  }
  _ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE._0_8_ = uVar1;
  UNLOCK();
  return uVar2;
}


