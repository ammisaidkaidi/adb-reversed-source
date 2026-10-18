// Function: _ZN4absl12lts_2026052619SetAndroidNativeTagEPKc
// Address: 004bf8f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052619SetAndroidNativeTagEPKc(long param_1)

{
  undefined1 auVar1 [16];
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  uint extraout_EDX;
  undefined *puVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pbVar2 = (byte *)_Znwm(0x18);
    uVar3 = func_0x0099bcf0(param_1);
    if (uVar3 < 0xfffffffffffffff7) {
      if (uVar3 < 0x17) {
        *pbVar2 = (char)uVar3 * '\x02';
        pbVar4 = pbVar2 + 1;
      }
      else {
        lVar6 = 0x1a;
        if ((uVar3 | 7) != 0x17) {
          lVar6 = (uVar3 | 7) + 1;
        }
        pbVar4 = (byte *)_Znwm(lVar6);
        *(long *)pbVar2 = lVar6 + 1;
        *(ulong *)(pbVar2 + 8) = uVar3;
        *(byte **)(pbVar2 + 0x10) = pbVar4;
      }
      func_0x0099bda0(pbVar4,param_1,uVar3);
      pbVar4[uVar3] = 0;
      pbVar4 = pbRam00000000009fb7b8;
      if ((*pbVar2 & 1) == 0) {
        pbRam00000000009fb7b8 = pbVar2 + 1;
      }
      else {
        pbRam00000000009fb7b8 = *(byte **)(pbVar2 + 0x10);
      }
      LOCK();
      UNLOCK();
      if (pbVar4 != &UNK_001ff2c0) goto code_r0x004bfa54;
      pbRam0000000000a009a0 = pbVar2;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        return *(long *)(in_FS_OFFSET + 0x28);
      }
    }
    else {
      func_0x0032e8f0();
    }
    func_0x0099bd00();
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
            (&uStack_58,&UNK_00159a60);
  _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
            (auStack_70,&UNK_0017a534);
  func_0x004bdd40(&uStack_58,auStack_70);
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_70);
  (*(code *)_ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE._0_8_)
            (3,&UNK_0018829c,0x8a,&uStack_58);
code_r0x004bfa54:
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
            (&uStack_58,&UNK_0017a54a);
  _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
            (auStack_70,&UNK_00161818);
  func_0x004bdd40(&uStack_58,auStack_70);
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_70);
  puVar7 = &UNK_0018829c;
  uVar8 = 3;
  (*(code *)_ZN4absl12lts_2026052616raw_log_internal21internal_log_functionE._0_8_)
            (3,&UNK_0018829c,0x90,&uStack_58);
  uVar3 = uRam0000000000a009b0;
  if (uRam0000000000a009b0 == 0) {
    lVar6 = 0;
  }
  else {
    uVar5 = _ZN4absl12lts_2026052613hash_internal15MixingHashState18combine_contiguousES2_PKhm
                      (strcmp,uVar8,puVar7);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar5 ^ extraout_EDX;
    auVar1 = auVar1 * ZEXT816(0x79d5f9e0de1e8cf5);
    lVar6 = CONCAT71(auVar1._1_7_,uVar3 == (auVar1._8_8_ ^ auVar1._0_8_));
  }
  return lVar6;
}


