// Function: _ZN4absl12lts_2026052612log_internal10LogMessage10ToSinkAlsoEPNS0_7LogSinkE
// Address: 004bb9d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052612log_internal10LogMessage10ToSinkAlsoEPNS0_7LogSinkE
               (long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined1 *puStack_78;
  code *pcStack_70;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_28 = param_2;
  if (param_2 != 0) {
    lVar6 = *(long *)(param_1 + 8);
    uVar2 = *(ulong *)(lVar6 + 0x88);
    uVar7 = 0x10;
    if ((uVar2 & 1) != 0) {
      uVar7 = *(ulong *)(lVar6 + 0x98);
    }
    if (uVar2 >> 1 == uVar7) {
      pcStack_70 = (code *)&UNK_004bba6e;
      _ZN4absl12lts_2026052623inlined_vector_internal7StorageIPNS0_7LogSinkELm16ENSt3__19allocatorIS4_EEE15EmplaceBackSlowIJRKS4_EEERS4_DpOT_
                (lVar6 + 0x88,&lStack_28);
    }
    else {
      if ((uVar2 & 1) == 0) {
        lVar3 = lVar6 + 0x90;
      }
      else {
        lVar3 = *(long *)(lVar6 + 0x90);
      }
      *(long *)(lVar3 + (uVar2 >> 1) * 8) = param_2;
      *(long *)(lVar6 + 0x88) = *(long *)(lVar6 + 0x88) + 2;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
      return param_1;
    }
    pcStack_70 = (code *)&UNK_004bba78;
    func_0x0099bd00();
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  pcStack_70 = (code *)&UNK_004bba9a;
  _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
            (&uStack_48,&UNK_001727c9);
  pcStack_70 = (code *)&UNK_004bbaad;
  _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
            (auStack_60,&UNK_0017430f);
  pcStack_70 = (code *)&UNK_004bbab8;
  func_0x004bdd40(&uStack_48,auStack_60);
  pcStack_70 = (code *)&UNK_004bbac0;
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_60);
  puVar5 = &UNK_0017a4ff;
  lVar6 = 3;
  pcStack_70 = _ZN4absl12lts_2026052612log_internal10LogMessage10ToSinkOnlyEPNS0_7LogSinkE;
  (*(code *)_ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE._0_8_)
            (3,&UNK_0017a4ff,0x162,&uStack_48);
  lStack_88 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_90 = puVar5;
  puStack_80 = &uStack_48;
  puStack_78 = auStack_60;
  pcStack_70 = (code *)&stack0xfffffffffffffff8;
  if (puVar5 != (undefined *)0x0) {
    puVar1 = (ulong *)(*(long *)(lVar6 + 8) + 0x88);
    *puVar1 = *puVar1 & 1;
    lVar3 = *(long *)(lVar6 + 8);
    uVar2 = *(ulong *)(lVar3 + 0x88);
    uVar7 = 0x10;
    if ((uVar2 & 1) != 0) {
      uVar7 = *(ulong *)(lVar3 + 0x98);
    }
    if (uVar2 >> 1 == uVar7) {
      pcStack_70 = (code *)&stack0xfffffffffffffff8;
      _ZN4absl12lts_2026052623inlined_vector_internal7StorageIPNS0_7LogSinkELm16ENSt3__19allocatorIS4_EEE15EmplaceBackSlowIJRKS4_EEERS4_DpOT_
                (lVar3 + 0x88,&puStack_90);
    }
    else {
      if ((uVar2 & 1) == 0) {
        lVar4 = lVar3 + 0x90;
      }
      else {
        lVar4 = *(long *)(lVar3 + 0x90);
      }
      *(undefined **)(lVar4 + (uVar2 >> 1) * 8) = puVar5;
      *(long *)(lVar3 + 0x88) = *(long *)(lVar3 + 0x88) + 2;
      pcStack_70 = (code *)&stack0xfffffffffffffff8;
    }
    *(undefined1 *)(*(long *)(lVar6 + 8) + 0x110) = 1;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_88) {
      return lVar6;
    }
    func_0x0099bd00();
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
            (&uStack_b0,&UNK_001727c9);
  _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
            (auStack_c8,&UNK_0017430f);
  func_0x004bdd40(&uStack_b0,auStack_c8);
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_c8);
  (*(code *)_ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE._0_8_)
            (3,&UNK_0017a4ff,0x168,&uStack_b0);
  lVar6 = 1;
  func_0x0099bfd0(1);
  _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
            ();
  return lVar6;
}


