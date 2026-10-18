// Function: _ZN6google8protobuf5Arena16DefaultConstructIN3adb5proto6DeviceEEEPvPS1_
// Address: 003f10f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN6google8protobuf5Arena16DefaultConstructIN3adb5proto6DeviceEEEPvPS1_(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = _Znwm(0x60);
  }
  else {
    uVar1 = _ZN6google8protobuf5Arena8AllocateEm(param_1,0x60);
  }
  _ZN3adb5proto6DeviceC2EPN6google8protobuf5ArenaE(uVar1,param_1);
  return uVar1;
}


