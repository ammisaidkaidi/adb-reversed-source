// Function: LZ4_initStream
// Address: 004942e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 LZ4_initStream(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((param_1 & 7) == 0 && (0x401f < param_2 && param_1 != 0)) {
    uVar1 = memset((char)param_1,0,0x4020);
    return uVar1;
  }
  return 0;
}


