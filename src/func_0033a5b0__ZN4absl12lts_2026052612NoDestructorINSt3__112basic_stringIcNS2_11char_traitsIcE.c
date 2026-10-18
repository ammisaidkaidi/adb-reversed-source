// Function: _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
// Address: 0033a5b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
               (long *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  
  uVar2 = func_0x0099bcf0(param_2);
  if (uVar2 < 0xfffffffffffffff7) {
    if (uVar2 < 0x17) {
      *(char *)param_1 = (char)uVar2 * '\x02';
      pcVar3 = (char *)((long)param_1 + 1);
    }
    else {
      lVar4 = 0x1a;
      if ((uVar2 | 7) != 0x17) {
        lVar4 = (uVar2 | 7) + 1;
      }
      pcVar3 = (char *)_Znwm(lVar4);
      *param_1 = lVar4 + 1;
      param_1[1] = uVar2;
      param_1[2] = (long)pcVar3;
    }
    func_0x0099bd90(pcVar3,param_2,uVar2);
    pcVar3[uVar2] = '\0';
    return;
  }
  func_0x0032e8f0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


