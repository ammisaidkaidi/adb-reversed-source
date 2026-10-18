// Function: _ZN10ApkArchiveD1Ev
// Address: 003c7480
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10ApkArchiveD1Ev(ulong *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar2;
  if ((int)param_1[4] != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *puVar2 = uVar1;
  if ((*param_1 & 1) == 0) {
    return;
  }
  free(param_1[2],*param_1 & 0xfffffffffffffffe);
  return;
}


