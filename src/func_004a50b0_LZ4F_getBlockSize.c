// Function: LZ4F_getBlockSize
// Address: 004a50b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 LZ4F_getBlockSize(uint param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = 4;
  if (param_1 != 0) {
    uVar2 = param_1;
  }
  uVar1 = 0xfffffffffffffffe;
  if ((uVar2 & 0xfffffffc) == 4) {
    uVar1 = *(undefined8 *)(&UNK_001fe7d0 + (ulong)uVar2 * 8);
  }
  return uVar1;
}


