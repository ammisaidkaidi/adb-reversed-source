// Function: _ZN4absl12lts_2026052621ThrowStdOverflowErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// Address: 004ffa80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052621ThrowStdOverflowErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
               (byte *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 in_R9;
  undefined *puStack_18;
  undefined *puStack_10;
  
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  uVar2 = 3;
  puStack_10 = &UNK_004ffab4;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x96,&UNK_0016c5ec,param_1);
  pbVar3 = (byte *)0x3;
  puStack_18 = &UNK_004ffae6;
  puStack_10 = &stack0xfffffffffffffff8;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x9e,&UNK_0016c5ec,uVar2);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  uVar2 = 3;
  puStack_18 = (undefined *)&puStack_10;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0xa7,&UNK_0016c5ec,pbVar3);
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0xaf,&UNK_0016c5ec,uVar2,in_R9,&puStack_18);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


