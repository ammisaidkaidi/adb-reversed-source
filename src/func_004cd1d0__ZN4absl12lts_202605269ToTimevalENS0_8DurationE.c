// Function: _ZN4absl12lts_202605269ToTimevalENS0_8DurationE
// Address: 004cd1d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZN4absl12lts_202605269ToTimevalENS0_8DurationE(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  if (param_2 == 0xffffffff) {
    bVar3 = -1 < param_1;
    uVar1 = 999;
    if (bVar3) {
      uVar1 = 999999999;
    }
    param_1 = -0x8000000000000000;
    if (bVar3) {
      param_1 = 0x7fffffffffffffff;
    }
  }
  else if (param_1 < 0) {
    uVar1 = param_2 + 3;
    if (uVar1 < 4000000000) {
      if (uVar1 < 0xee6b1864) {
        uVar1 = (uVar1 >> 2) + 999;
      }
      else {
        param_1 = param_1 + 1;
        uVar1 = (uVar1 >> 2) + 0xc46539e7;
      }
    }
    else {
      uVar2 = param_2 + 0x1194d803 >> 2;
      param_1 = param_1 + 1;
      uVar1 = uVar2 + 999;
      if (param_1 == 0) {
        uVar1 = uVar2;
      }
    }
  }
  else {
    uVar1 = param_2 >> 2;
  }
  auVar4._8_8_ = (ulong)uVar1 / 1000;
  auVar4._0_8_ = param_1;
  return auVar4;
}


