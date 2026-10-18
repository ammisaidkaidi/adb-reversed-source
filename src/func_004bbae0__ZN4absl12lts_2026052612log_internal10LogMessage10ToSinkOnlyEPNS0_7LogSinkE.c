// Function: _ZN4absl12lts_2026052612log_internal10LogMessage10ToSinkOnlyEPNS0_7LogSinkE
// Address: 004bbae0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052612log_internal10LogMessage10ToSinkOnlyEPNS0_7LogSinkE
               (long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_28 = param_2;
  if (param_2 != 0) {
    puVar1 = (ulong *)(*(long *)(param_1 + 8) + 0x88);
    *puVar1 = *puVar1 & 1;
    lVar4 = *(long *)(param_1 + 8);
    uVar2 = *(ulong *)(lVar4 + 0x88);
    uVar5 = 0x10;
    if ((uVar2 & 1) != 0) {
      uVar5 = *(ulong *)(lVar4 + 0x98);
    }
    if (uVar2 >> 1 == uVar5) {
      _ZN4absl12lts_2026052623inlined_vector_internal7StorageIPNS0_7LogSinkELm16ENSt3__19allocatorIS4_EEE15EmplaceBackSlowIJRKS4_EEERS4_DpOT_
                (lVar4 + 0x88,&lStack_28);
    }
    else {
      if ((uVar2 & 1) == 0) {
        lVar3 = lVar4 + 0x90;
      }
      else {
        lVar3 = *(long *)(lVar4 + 0x90);
      }
      *(long *)(lVar3 + (uVar2 >> 1) * 8) = param_2;
      *(long *)(lVar4 + 0x88) = *(long *)(lVar4 + 0x88) + 2;
    }
    *(undefined1 *)(*(long *)(param_1 + 8) + 0x110) = 1;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
      return param_1;
    }
    func_0x0099bd00();
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
            (&uStack_48,&UNK_001727c9);
  _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
            (auStack_60,&UNK_0017430f);
  func_0x004bdd40(&uStack_48,auStack_60);
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_60);
  (*(code *)_ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE._0_8_)
            (3,&UNK_0017a4ff,0x168,&uStack_48);
  lVar4 = 1;
  func_0x0099bfd0(1);
  _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
            ();
  return lVar4;
}


