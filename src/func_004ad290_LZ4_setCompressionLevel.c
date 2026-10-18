// Function: LZ4_setCompressionLevel
// Address: 004ad290
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void LZ4_setCompressionLevel(long param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar1 = 0xc;
  if (param_2 < 0xc) {
    uVar1 = param_2;
  }
  uVar2 = 9;
  if (0 < (int)param_2) {
    uVar2 = (undefined2)uVar1;
  }
  *(undefined2 *)(param_1 + 0x40024) = uVar2;
  return;
}


