// Function: _ZN11incremental23ISUnsignedDatabaseEntryD0Ev
// Address: 003634a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN11incremental23ISUnsignedDatabaseEntryD0Ev(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *param_1 = 0x99e4f8;
  puVar2 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar2;
  if (*(int *)((long)param_1 + 0x2c) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  *puVar2 = uVar1;
  *param_1 = 0x99e4c8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    _ZdaPvSt11align_val_t(param_1[3],param_1[1] & 0xfffffffffffffffe);
  }
  free(param_1,0x30);
  return;
}


