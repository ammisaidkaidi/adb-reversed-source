// Function: _ZN4absl12lts_2026052613time_internal4cctz15fixed_time_zoneERKNSt3__16chrono8durationIlNS3_5ratioILl1ELl1EEEEE
// Address: 004c36b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052613time_internal4cctz15fixed_time_zoneERKNSt3__16chrono8durationIlNS3_5ratioILl1ELl1EEEEE
          (undefined8 param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  long lStack_68;
  byte *pbStack_60;
  byte bStack_38;
  undefined7 uStack_37;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_20 = 0;
  _ZN4absl12lts_2026052613time_internal4cctz17FixedOffsetToNameERKNSt3__16chrono8durationIlNS3_5ratioILl1ELl1EEEEE
            (&bStack_38,param_1);
  _ZN4absl12lts_2026052613time_internal4cctz9time_zone4Impl12LoadTimeZoneERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPS3_
            (&bStack_38,&uStack_20);
  if ((bStack_38 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_28,CONCAT71(uStack_37,bStack_38) & 0xfffffffffffffffe);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return uStack_20;
  }
  func_0x0099bd00();
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack_60 = &bStack_38;
  pcVar4 = (char *)func_0x0099be70(&UNK_0015b5bc);
  pcVar8 = ":localtime";
  if (pcVar4 != (char *)0x0) {
    pcVar8 = pcVar4;
  }
  cVar1 = *pcVar8;
  iVar3 = func_0x0099bdd0(pcVar8 + (cVar1 == ':'),&UNK_001882f6);
  pcVar8 = pcVar8 + (cVar1 == ':');
  if (iVar3 == 0) {
    pcVar4 = (char *)func_0x0099be70(&UNK_0016f068);
    pcVar8 = "/etc/localtime";
    if (pcVar4 != (char *)0x0) {
      pcVar8 = pcVar4;
    }
  }
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  uVar5 = func_0x0099bcf0(pcVar8);
  if (uVar5 < 0xfffffffffffffff7) {
    if (uVar5 < 0x17) {
      uStack_90 = CONCAT71(uStack_90._1_7_,(char)uVar5 * '\x02');
      lVar6 = (long)&uStack_90 + 1;
    }
    else {
      lVar9 = 0x1a;
      if ((uVar5 | 7) != 0x17) {
        lVar9 = (uVar5 | 7) + 1;
      }
      lVar6 = _Znwm(lVar9);
      uStack_90 = lVar9 + 1;
      uStack_88 = uVar5;
      lStack_80 = lVar6;
    }
    func_0x0099bd90(lVar6,pcVar8,uVar5);
    *(undefined1 *)(lVar6 + uVar5) = 0;
    uStack_70 = 0;
    _ZN4absl12lts_2026052613time_internal4cctz9time_zone4Impl12LoadTimeZoneERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPS3_
              (&uStack_90,&uStack_70);
    if ((uStack_90 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_80,uStack_90 & 0xfffffffffffffffe);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_68) {
      return uStack_70;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar7 = (*pcVar2)();
  return uVar7;
}


