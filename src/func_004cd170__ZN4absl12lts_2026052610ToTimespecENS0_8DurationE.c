// Function: _ZN4absl12lts_2026052610ToTimespecENS0_8DurationE
// Address: 004cd170
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZN4absl12lts_2026052610ToTimespecENS0_8DurationE(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 == 0xffffffff) {
    uVar3 = 999999999;
    if (param_1 < 0) {
      uVar3 = 0;
    }
    uVar1 = 0x8000000000000000;
    if (param_1 >= 0) {
      uVar1 = 0x7fffffffffffffff;
    }
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar1;
    return auVar4;
  }
  uVar2 = param_2;
  if ((param_1 < 0) && (uVar2 = param_2 + 3, 3999999999 < uVar2)) {
    param_1 = param_1 + 1;
    uVar2 = param_2 + 0x1194d803;
  }
  auVar5._8_4_ = uVar2 >> 2;
  auVar5._0_8_ = param_1;
  auVar5._12_4_ = 0;
  return auVar5;
}


