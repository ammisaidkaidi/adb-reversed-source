// Function: _ZN4absl12lts_2026052610ToTimespecENS0_4TimeE
// Address: 004c1d20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZN4absl12lts_2026052610ToTimespecENS0_4TimeE(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = -0x8000000000000000;
  uVar2 = 0;
  if (-1 < param_1) {
    lVar1 = 0x7fffffffffffffff;
    uVar2 = 999999999;
  }
  if (param_2 != 0xffffffff) {
    lVar1 = param_1;
    uVar2 = (ulong)(param_2 >> 2);
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}


