// Function: _ZN4absl12lts_2026052612log_internal10LogMessage16WithMetadataFromERKNS0_8LogEntryE
// Address: 004bb940
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052612log_internal10LogMessage16WithMetadataFromERKNS0_8LogEntryE
               (long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar3 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  lVar2 = *(long *)(param_1 + 8);
  uVar3 = param_2[3];
  *(undefined8 *)(lVar2 + 0x10) = param_2[2];
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x20) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x28) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(param_2 + 7);
  *(undefined8 *)(lVar2 + 0x30) = param_2[6];
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  return param_1;
}


