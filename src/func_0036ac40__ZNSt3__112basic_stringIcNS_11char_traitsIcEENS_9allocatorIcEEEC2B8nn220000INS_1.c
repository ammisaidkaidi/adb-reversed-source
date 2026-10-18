// Function: _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
// Address: 0036ac40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
               (long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  long lVar5;
  
  uVar1 = param_2[1];
  if (uVar1 < 0xfffffffffffffff7) {
    uVar2 = *param_2;
    if (uVar1 < 0x17) {
      *(char *)param_1 = (char)uVar1 * '\x02';
      pcVar4 = (char *)((long)param_1 + 1);
    }
    else {
      lVar5 = 0x1a;
      if ((uVar1 | 7) != 0x17) {
        lVar5 = (uVar1 | 7) + 1;
      }
      pcVar4 = (char *)_Znwm(lVar5);
      *param_1 = lVar5 + 1;
      param_1[1] = uVar1;
      param_1[2] = (long)pcVar4;
    }
    func_0x0099bd90(pcVar4,uVar2,uVar1);
    pcVar4[uVar1] = '\0';
    return;
  }
  func_0x0032e8f0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


