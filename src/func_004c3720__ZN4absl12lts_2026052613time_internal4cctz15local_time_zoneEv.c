// Function: _ZN4absl12lts_2026052613time_internal4cctz15local_time_zoneEv
// Address: 004c3720
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN4absl12lts_2026052613time_internal4cctz15local_time_zoneEv(void)

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
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined8 uStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
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
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  uVar5 = func_0x0099bcf0(pcVar8);
  if (uVar5 < 0xfffffffffffffff7) {
    if (uVar5 < 0x17) {
      uStack_58 = CONCAT71(uStack_58._1_7_,(char)uVar5 * '\x02');
      lVar6 = (long)&uStack_58 + 1;
    }
    else {
      lVar9 = 0x1a;
      if ((uVar5 | 7) != 0x17) {
        lVar9 = (uVar5 | 7) + 1;
      }
      lVar6 = _Znwm(lVar9);
      uStack_58 = lVar9 + 1;
      uStack_50 = uVar5;
      lStack_48 = lVar6;
    }
    func_0x0099bd90(lVar6,pcVar8,uVar5);
    *(undefined1 *)(lVar6 + uVar5) = 0;
    uStack_38 = 0;
    _ZN4absl12lts_2026052613time_internal4cctz9time_zone4Impl12LoadTimeZoneERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPS3_
              (&uStack_58,&uStack_38);
    if ((uStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
      return uStack_38;
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


