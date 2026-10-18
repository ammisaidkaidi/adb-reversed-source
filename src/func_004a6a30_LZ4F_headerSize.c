// Function: LZ4F_headerSize
// Address: 004a6a30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4F_headerSize(uint *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = 0xfffffffffffffff4;
    if (4 < param_2) {
      uVar1 = 8;
      if (((*param_1 & 0xfffffff0) != 0x184d2a50) &&
         (uVar1 = 0xfffffffffffffff3, *param_1 == 0x184d2204)) {
        uVar1 = (ulong)(((byte)param_1[1] & 8) + ((byte)param_1[1] & 1) * 4 + 7);
      }
    }
    return uVar1;
  }
  return 0xfffffffffffffff1;
}


