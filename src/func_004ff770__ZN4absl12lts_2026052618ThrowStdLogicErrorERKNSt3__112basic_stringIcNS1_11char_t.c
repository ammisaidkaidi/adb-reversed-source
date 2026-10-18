// Function: _ZN4absl12lts_2026052618ThrowStdLogicErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// Address: 004ff770
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052618ThrowStdLogicErrorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
               (byte *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 in_R9;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  undefined *puStack_10;
  
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  uVar2 = 3;
  puStack_10 = &UNK_004ff7a4;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x20,&UNK_0016c5ec,param_1);
  pbVar3 = (byte *)0x3;
  puStack_18 = &UNK_004ff7d6;
  puStack_10 = &stack0xfffffffffffffff8;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x28,&UNK_0016c5ec,uVar2);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  uVar2 = 3;
  puStack_20 = &UNK_004ff814;
  puStack_18 = (undefined *)&puStack_10;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x30,&UNK_0016c5ec,pbVar3);
  pbVar3 = (byte *)0x3;
  puStack_28 = &UNK_004ff846;
  puStack_20 = (undefined *)&puStack_18;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x38,&UNK_0016c5ec,uVar2);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  uVar2 = 3;
  puStack_30 = &UNK_004ff884;
  puStack_28 = (undefined *)&puStack_20;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x41,&UNK_0016c5ec,pbVar3);
  pbVar3 = (byte *)0x3;
  puStack_38 = &UNK_004ff8b6;
  puStack_30 = (undefined *)&puStack_28;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x49,&UNK_0016c5ec,uVar2);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  uVar2 = 3;
  puStack_40 = &UNK_004ff8f4;
  puStack_38 = (undefined *)&puStack_30;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x52,&UNK_0016c5ec,pbVar3);
  pbVar3 = (byte *)0x3;
  puStack_48 = &UNK_004ff926;
  puStack_40 = (undefined *)&puStack_38;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x5a,&UNK_0016c5ec,uVar2);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  uVar2 = 3;
  puStack_50 = &UNK_004ff964;
  puStack_48 = (undefined *)&puStack_40;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,99,&UNK_0016c5ec,pbVar3);
  pbVar3 = (byte *)0x3;
  puStack_58 = &UNK_004ff996;
  puStack_50 = (undefined *)&puStack_48;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x6b,&UNK_0016c5ec,uVar2);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  uVar2 = 3;
  puStack_60 = &UNK_004ff9d4;
  puStack_58 = (undefined *)&puStack_50;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x74,&UNK_0016c5ec,pbVar3);
  pbVar3 = (byte *)0x3;
  puStack_68 = &UNK_004ffa06;
  puStack_60 = (undefined *)&puStack_58;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x7c,&UNK_0016c5ec,uVar2);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  uVar2 = 3;
  puStack_70 = &UNK_004ffa44;
  puStack_68 = (undefined *)&puStack_60;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x85,&UNK_0016c5ec,pbVar3);
  pbVar3 = (byte *)0x3;
  puStack_78 = &UNK_004ffa76;
  puStack_70 = (undefined *)&puStack_68;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x8d,&UNK_0016c5ec,uVar2);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  uVar2 = 3;
  puStack_80 = &UNK_004ffab4;
  puStack_78 = (undefined *)&puStack_70;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x96,&UNK_0016c5ec,pbVar3);
  pbVar3 = (byte *)0x3;
  puStack_88 = &UNK_004ffae6;
  puStack_80 = (undefined *)&puStack_78;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0x9e,&UNK_0016c5ec,uVar2);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  uVar2 = 3;
  puStack_88 = (undefined *)&puStack_80;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0xa7,&UNK_0016c5ec,pbVar3);
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_0017db9d,0xaf,&UNK_0016c5ec,uVar2,in_R9,&puStack_88);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


