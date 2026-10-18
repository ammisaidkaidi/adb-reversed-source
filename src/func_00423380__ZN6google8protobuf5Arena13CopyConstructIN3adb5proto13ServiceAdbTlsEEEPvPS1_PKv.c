// Function: _ZN6google8protobuf5Arena13CopyConstructIN3adb5proto13ServiceAdbTlsEEEPvPS1_PKv
// Address: 00423380
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN6google8protobuf5Arena13CopyConstructIN3adb5proto13ServiceAdbTlsEEEPvPS1_PKv
          (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = _Znwm(0x28);
  }
  else {
    uVar1 = _ZN6google8protobuf5Arena8AllocateEm(param_1,0x28);
  }
  _ZN3adb5proto13ServiceAdbTlsC1EPN6google8protobuf5ArenaERKS1_(uVar1,param_1,param_2);
  return uVar1;
}


