// Function: _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000IPKcTnNS_9enable_ifIXsr29__has_input_iterator_categoryIT_EE5valueEiE4typeELi0EEESA_SA_
// Address: 003de900
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000IPKcTnNS_9enable_ifIXsr29__has_input_iterator_categoryIT_EE5valueEiE4typeELi0EEESA_SA_
               (long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  
  uVar2 = param_3 - param_2;
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


