// Function: _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfoD2Ev
// Address: 004c9cf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfoD2Ev(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  
  *param_1 = 0x99fd50;
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  else {
    _ZdaPvSt11align_val_t(param_1[0x10],param_1[0xe] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    _ZdaPvSt11align_val_t(param_1[0xd],param_1[0xb] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    _ZdaPvSt11align_val_t(param_1[10],param_1[8] & 0xfffffffffffffffe);
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    param_1[5] = lVar2;
    _ZdaPvSt11align_val_t(lVar2,param_1[6] - lVar2);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    param_1[2] = lVar2;
    _ZdaPvSt11align_val_t(lVar2,param_1[3] - lVar2);
  }
  return;
}


