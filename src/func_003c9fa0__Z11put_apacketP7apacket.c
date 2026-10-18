// Function: _Z11put_apacketP7apacket
// Address: 003c9fa0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z11put_apacketP7apacket(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar1 != 0) {
      _ZdaPvSt11align_val_t(lVar1);
    }
    free(param_1,0x38);
    return;
  }
  return;
}


