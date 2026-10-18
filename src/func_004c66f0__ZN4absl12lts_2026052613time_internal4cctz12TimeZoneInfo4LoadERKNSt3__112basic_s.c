// Function: _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo4LoadERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
// Address: 004c66f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined **
_ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo4LoadERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
          (undefined **param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long in_FS_OFFSET;
  undefined8 uStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined *apuStack_58 [4];
  undefined **ppuStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_60 = 0;
  puStack_70 = &UNK_004c6724;
  cVar1 = _ZN4absl12lts_2026052613time_internal4cctz19FixedOffsetFromNameERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS3_6chrono8durationIlNS3_5ratioILl1ELl1EEEEE
                    (param_2,&uStack_60);
  if (cVar1 != '\0') {
    puStack_70 = &UNK_004c6734;
    ppuVar6 = param_1;
    _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17ResetToBuiltinUTCERKNSt3__16chrono8durationIlNS4_5ratioILl1ELl1EEEEE
              (param_1,&uStack_60);
    ppuVar3 = (undefined **)0x1;
    goto code_r0x004c67bc;
  }
  ppuStack_68 = (undefined **)0x0;
  apuStack_58[0] = &UNK_0099fda0;
  puStack_70 = &UNK_004c676c;
  ppuStack_38 = apuStack_58;
  (*_ZN4absl12lts_2026052613time_internal14cctz_extension24zone_info_source_factoryE)
            (&ppuStack_68,param_2,apuStack_58);
  ppuVar6 = ppuStack_38;
  if (ppuStack_38 == apuStack_58) {
    lVar2 = 0x20;
code_r0x004c6786:
    puStack_70 = &UNK_004c678c;
    (**(code **)(*ppuStack_38 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (ppuStack_38 != (undefined **)0x0) goto code_r0x004c6786;
  }
  if (ppuStack_68 == (undefined **)0x0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    puStack_70 = &UNK_004c679d;
    ppuVar3 = (undefined **)
              _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo4LoadEPNS2_14ZoneInfoSourceE
                        (param_1);
    ppuVar6 = ppuStack_68;
    ppuStack_68 = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar3 = (undefined **)((ulong)ppuVar3 & 0xffffffff);
      puStack_70 = &UNK_004c67b6;
      (**(code **)(*ppuVar6 + 8))();
      param_1 = ppuVar3;
    }
  }
code_r0x004c67bc:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return ppuVar3;
  }
  puStack_70 = &UNK_004c67db;
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  ppuStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff8;
  ppuVar3 = (undefined **)_Znwm(0xa8);
  *ppuVar3 = (undefined *)0x99fd50;
  ppuVar3[1] = (undefined *)0x0;
  ppuVar3[2] = (undefined *)0x0;
  ppuVar3[3] = (undefined *)0x0;
  ppuVar3[4] = (undefined *)0x0;
  ppuVar3[5] = (undefined *)0x0;
  ppuVar3[6] = (undefined *)0x0;
  ppuVar3[8] = (undefined *)0x0;
  ppuVar3[9] = (undefined *)0x0;
  ppuVar3[10] = (undefined *)0x0;
  ppuVar3[0xb] = (undefined *)0x0;
  ppuVar3[0xc] = (undefined *)0x0;
  ppuVar3[0xd] = (undefined *)0x0;
  ppuVar3[0xe] = (undefined *)0x0;
  ppuVar3[0xf] = (undefined *)0x0;
  ppuVar3[0x10] = (undefined *)0x0;
  ppuVar3[0x13] = (undefined *)0x0;
  ppuVar3[0x14] = (undefined *)0x0;
  *ppuVar6 = (undefined *)ppuVar3;
  uStack_88 = 0;
  puVar5 = &uStack_88;
  _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17ResetToBuiltinUTCERKNSt3__16chrono8durationIlNS4_5ratioILl1ELl1EEEEE
            (ppuVar3,puVar5);
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_80) {
    func_0x0099bd00();
    plVar4 = (long *)_Znwm(0xa8);
    *plVar4 = 0x99fd50;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
    plVar4[0x10] = 0;
    plVar4[0x13] = 0;
    plVar4[0x14] = 0;
    *ppuVar3 = (undefined *)plVar4;
    cVar1 = _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo4LoadERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
                      (plVar4,puVar5);
    if (cVar1 == '\0') {
      *ppuVar3 = (undefined *)0x0;
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    return ppuVar3;
  }
  return ppuVar6;
}


