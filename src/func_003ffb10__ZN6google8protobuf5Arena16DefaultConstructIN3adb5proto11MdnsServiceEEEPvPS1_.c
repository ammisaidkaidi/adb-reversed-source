// Function: _ZN6google8protobuf5Arena16DefaultConstructIN3adb5proto11MdnsServiceEEEPvPS1_
// Address: 003ffb10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN6google8protobuf5Arena16DefaultConstructIN3adb5proto11MdnsServiceEEEPvPS1_(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = _Znwm(0x88);
  }
  else {
    uVar1 = _ZN6google8protobuf5Arena8AllocateEm(param_1,0x88);
  }
  _ZN3adb5proto11MdnsServiceC2EPN6google8protobuf5ArenaE(uVar1,param_1);
  return uVar1;
}


