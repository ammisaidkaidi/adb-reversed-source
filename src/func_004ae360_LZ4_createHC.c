// Function: LZ4_createHC
// Address: 004ae360
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void LZ4_createHC(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = func_0x0099c4d0(1,0x40038);
  if (lVar1 != 0) {
    *(undefined2 *)(lVar1 + 0x40024) = 9;
    *(undefined4 *)(lVar1 + 0x40020) = 0x10000;
    *(undefined8 *)(lVar1 + 0x40008) = param_1;
    *(undefined8 *)(lVar1 + 0x40000) = param_1;
    *(undefined8 *)(lVar1 + 0x40010) = param_1;
    *(undefined8 *)(lVar1 + 0x40018) = 0x1000000010000;
  }
  return;
}


