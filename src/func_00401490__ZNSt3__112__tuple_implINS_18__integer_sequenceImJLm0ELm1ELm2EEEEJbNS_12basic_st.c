// Function: _ZNSt3__112__tuple_implINS_18__integer_sequenceImJLm0ELm1ELm2EEEEJbNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES8_EEC2B8nn220000IJbRA1_KcSD_EEENS_14__forward_argsEDpOT_
// Address: 00401490
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__112__tuple_implINS_18__integer_sequenceImJLm0ELm1ELm2EEEEJbNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES8_EEC2B8nn220000IJbRA1_KcSD_EEENS_14__forward_argsEDpOT_
               (undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  
  *param_1 = *param_2;
  uVar2 = func_0x0099bcf0(param_3);
  if (uVar2 < 0xfffffffffffffff7) {
    if (uVar2 < 0x17) {
      param_1[8] = (char)uVar2 * '\x02';
      puVar3 = param_1 + 9;
    }
    else {
      lVar4 = 0x1a;
      if ((uVar2 | 7) != 0x17) {
        lVar4 = (uVar2 | 7) + 1;
      }
      puVar3 = (undefined1 *)_Znwm(lVar4);
      *(long *)(param_1 + 8) = lVar4 + 1;
      *(ulong *)(param_1 + 0x10) = uVar2;
      *(undefined1 **)(param_1 + 0x18) = puVar3;
    }
    func_0x0099bd90(puVar3,param_3,uVar2);
    puVar3[uVar2] = 0;
    uVar2 = func_0x0099bcf0(param_4);
    if (uVar2 < 0xfffffffffffffff7) {
      if (uVar2 < 0x17) {
        param_1[0x20] = (char)uVar2 * '\x02';
        puVar3 = param_1 + 0x21;
      }
      else {
        lVar4 = 0x1a;
        if ((uVar2 | 7) != 0x17) {
          lVar4 = (uVar2 | 7) + 1;
        }
        puVar3 = (undefined1 *)_Znwm(lVar4);
        *(long *)(param_1 + 0x20) = lVar4 + 1;
        *(ulong *)(param_1 + 0x28) = uVar2;
        *(undefined1 **)(param_1 + 0x30) = puVar3;
      }
      func_0x0099bd90(puVar3,param_4,uVar2);
      puVar3[uVar2] = 0;
      return;
    }
  }
  func_0x0032e8f0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


