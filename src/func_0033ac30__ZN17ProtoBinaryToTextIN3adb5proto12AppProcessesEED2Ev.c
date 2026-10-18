// Function: _ZN17ProtoBinaryToTextIN3adb5proto12AppProcessesEED2Ev
// Address: 0033ac30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN17ProtoBinaryToTextIN3adb5proto12AppProcessesEED2Ev(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = 0x99e1d8;
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    _ZdaPvSt11align_val_t(param_1[9],param_1[7] & 0xfffffffffffffffe);
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    param_1[5] = lVar1;
    free(lVar1,param_1[6] - lVar1);
    return;
  }
  return;
}


