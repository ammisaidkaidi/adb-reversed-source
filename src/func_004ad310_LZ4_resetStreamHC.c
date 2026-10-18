// Function: LZ4_resetStreamHC
// Address: 004ad310
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void LZ4_resetStreamHC(ulong param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  
  if ((param_1 & 7) == 0 && param_1 != 0) {
    func_0x0099bdb0(param_1,0,0x40030);
  }
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


