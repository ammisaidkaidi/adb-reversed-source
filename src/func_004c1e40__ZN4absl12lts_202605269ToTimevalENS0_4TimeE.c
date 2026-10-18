// Function: _ZN4absl12lts_202605269ToTimevalENS0_4TimeE
// Address: 004c1e40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZN4absl12lts_202605269ToTimevalENS0_4TimeE(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = -0x8000000000000000;
  if (-1 < param_1) {
    lVar1 = 0x7fffffffffffffff;
  }
  uVar2 = 0x3b9ac9f8;
  if (-1 >= param_1) {
    uVar2 = 0;
  }
  if (param_2 != 0xffffffff) {
    uVar2 = param_2 >> 2;
    lVar1 = param_1;
  }
  auVar3._8_8_ = (ulong)uVar2 / 1000;
  auVar3._0_8_ = lVar1;
  return auVar3;
}


