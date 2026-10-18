// Function: _ZN4absl12lts_2026052613time_internal4cctz9time_zone4ImplC2ERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
// Address: 004c3e50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052613time_internal4cctz9time_zone4ImplC2ERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
               (undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  else {
    func_0x00330340(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  }
  _ZN4absl12lts_2026052613time_internal4cctz10TimeZoneIf4MakeERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
            (param_1 + 6,param_1);
  return;
}


