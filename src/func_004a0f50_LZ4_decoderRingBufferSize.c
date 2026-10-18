// Function: LZ4_decoderRingBufferSize
// Address: 004a0f50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_decoderRingBufferSize(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x10;
  if (0x10 < param_1) {
    uVar2 = param_1;
  }
  iVar1 = 0;
  if (param_1 < 0x7e000001) {
    iVar1 = uVar2 + 0x1000e;
  }
  return iVar1;
}


