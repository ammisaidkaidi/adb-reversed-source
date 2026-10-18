// Function: _ZNK4absl12lts_2026052613time_internal4cctz9time_zone4nameEv
// Address: 004c34c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNK4absl12lts_2026052613time_internal4cctz9time_zone4nameEv
          (undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_2;
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = (byte *)_ZN4absl12lts_2026052613time_internal4cctz9time_zone4Impl3UTCEv();
    bVar1 = *pbVar3;
  }
  else {
    bVar1 = *pbVar3;
  }
  if ((bVar1 & 1) == 0) {
    param_1[2] = *(undefined8 *)(pbVar3 + 0x10);
    uVar2 = *(undefined8 *)(pbVar3 + 8);
    *param_1 = *(undefined8 *)pbVar3;
    param_1[1] = uVar2;
  }
  else {
    func_0x00330340(param_1,*(undefined8 *)(pbVar3 + 0x10),*(undefined8 *)(pbVar3 + 8));
  }
  return param_1;
}


