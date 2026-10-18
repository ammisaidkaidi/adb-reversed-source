// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo7VersionEv
// Address: 004c7b10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo7VersionEv
          (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
    param_1[2] = *(undefined8 *)(param_2 + 0x68);
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    *param_1 = *(undefined8 *)(param_2 + 0x58);
    param_1[1] = uVar1;
    return param_1;
  }
  func_0x00330340(param_1,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x60));
  return param_1;
}


