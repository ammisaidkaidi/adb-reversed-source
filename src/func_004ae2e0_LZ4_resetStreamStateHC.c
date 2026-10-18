// Function: LZ4_resetStreamStateHC
// Address: 004ae2e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool LZ4_resetStreamStateHC(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  
  bVar1 = (param_1 & 7) != 0;
  if (!bVar1 && param_1 != 0) {
    func_0x0099bdb0((char)param_1,0,0x40030);
    *(undefined2 *)(param_1 + 0x40024) = 9;
    *(undefined4 *)(param_1 + 0x40020) = 0x10000;
    *(undefined8 *)(param_1 + 0x40008) = param_2;
    *(undefined8 *)(param_1 + 0x40000) = param_2;
    *(undefined8 *)(param_1 + 0x40010) = param_2;
    *(undefined8 *)(param_1 + 0x40018) = 0x1000000010000;
  }
  return bVar1 || param_1 == 0;
}


