// Function: _ZN7android4base14unique_fd_implINS0_13DefaultCloserEED2Ev
// Address: 0033a640
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android4base14unique_fd_implINS0_13DefaultCloserEED2Ev(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar2;
  if (*param_1 != -1) {
    func_0x0099bd10();
  }
  *param_1 = -1;
  *puVar2 = uVar1;
  return;
}


