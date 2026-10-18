// Function: _ZN4absl12lts_2026052612log_internal20LogMessageDebugFatalD1Ev
// Address: 004bdbb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal20LogMessageDebugFatalD1Ev(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_R9;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  auVar2 = _ZN4absl12lts_2026052612log_internal10LogMessage21FailWithoutStackTraceEv();
  uVar3 = auVar2._0_8_;
  uVar1 = func_0x0099bcf0(param_2);
  _ZN4absl12lts_2026052612log_internal10LogMessageC1ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiNS0_11LogSeverityE
            (param_1,param_2,uVar1,auVar2._8_8_ & 0xffffffff,3,in_R9,uVar3);
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x81) = 1;
  return;
}


