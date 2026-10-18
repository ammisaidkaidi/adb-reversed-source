// Function: _ZN7android10findParentEjPKc
// Address: 00440ae0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint _ZN7android10findParentEjPKc(uint param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((short)param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = _ZN7android25findParentLocalePackedKeyEPKcj(param_2,param_1);
    uVar1 = param_1 & 0xffff0000;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
  }
  return uVar1;
}


