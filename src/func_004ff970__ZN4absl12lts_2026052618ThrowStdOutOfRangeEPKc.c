// Function: _ZN4absl12lts_2026052618ThrowStdOutOfRangeEPKc
// Address: 004ff970
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052618ThrowStdOutOfRangeEPKc(undefined8 param_1)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 in_R9;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  undefined *puStack_10;
  
  pbVar2 = (byte *)0x3;
  puStack_10 = &UNK_004ff996;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x6b,&UNK_0016c5ec,param_1);
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  uVar3 = 3;
  puStack_18 = &UNK_004ff9d4;
  puStack_10 = &stack0xfffffffffffffff8;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x74,&UNK_0016c5ec,pbVar2);
  pbVar2 = (byte *)0x3;
  puStack_20 = &UNK_004ffa06;
  puStack_18 = (undefined *)&puStack_10;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x7c,&UNK_0016c5ec,uVar3);
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  uVar3 = 3;
  puStack_28 = &UNK_004ffa44;
  puStack_20 = (undefined *)&puStack_18;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x85,&UNK_0016c5ec,pbVar2);
  pbVar2 = (byte *)0x3;
  puStack_30 = &UNK_004ffa76;
  puStack_28 = (undefined *)&puStack_20;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x8d,&UNK_0016c5ec,uVar3);
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  uVar3 = 3;
  puStack_38 = &UNK_004ffab4;
  puStack_30 = (undefined *)&puStack_28;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x96,&UNK_0016c5ec,pbVar2);
  pbVar2 = (byte *)0x3;
  puStack_40 = &UNK_004ffae6;
  puStack_38 = (undefined *)&puStack_30;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x9e,&UNK_0016c5ec,uVar3);
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  uVar3 = 3;
  puStack_40 = (undefined *)&puStack_38;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0xa7,&UNK_0016c5ec,pbVar2);
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0xaf,&UNK_0016c5ec,uVar3,in_R9,&puStack_40);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


