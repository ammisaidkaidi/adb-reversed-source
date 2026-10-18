// Function: LZ4F_getErrorName
// Address: 004a5040
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined * LZ4F_getErrorName(ulong param_1)

{
  if (param_1 < 0xffffffffffffffe9) {
    return &UNK_00161801;
  }
  return *(undefined **)(&UNK_0099fb80 + (-(param_1 << 0x20) >> 0x1d));
}


