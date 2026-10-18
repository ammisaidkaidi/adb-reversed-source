// Function: _ZN6google8protobuf5Arena16DefaultConstructIN3com7android10fastdeploy8APKEntryEEEPvPS1_
// Address: 003c7250
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN6google8protobuf5Arena16DefaultConstructIN3com7android10fastdeploy8APKEntryEEEPvPS1_
          (long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = _Znwm(0x30);
  }
  else {
    uVar1 = _ZN6google8protobuf5Arena8AllocateEm(param_1,0x30);
  }
  _ZN3com7android10fastdeploy8APKEntryC2EPN6google8protobuf5ArenaE(uVar1,param_1);
  return uVar1;
}


