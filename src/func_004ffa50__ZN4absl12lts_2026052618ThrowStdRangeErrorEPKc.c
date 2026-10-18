// Function: _ZN4absl12lts_2026052618ThrowStdRangeErrorEPKc
// Address: 004ffa50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052618ThrowStdRangeErrorEPKc(undefined8 param_1)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 in_R9;
  undefined *puStack_20;
  undefined *puStack_18;
  undefined *puStack_10;
  
  pbVar2 = (byte *)0x3;
  puStack_10 = &UNK_004ffa76;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x8d,&UNK_0016c5ec,param_1);
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  uVar3 = 3;
  puStack_18 = &UNK_004ffab4;
  puStack_10 = &stack0xfffffffffffffff8;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x96,&UNK_0016c5ec,pbVar2);
  pbVar2 = (byte *)0x3;
  puStack_20 = &UNK_004ffae6;
  puStack_18 = (undefined *)&puStack_10;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x9e,&UNK_0016c5ec,uVar3);
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  uVar3 = 3;
  puStack_20 = (undefined *)&puStack_18;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0xa7,&UNK_0016c5ec,pbVar2);
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0xaf,&UNK_0016c5ec,uVar3,in_R9,&puStack_20);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


