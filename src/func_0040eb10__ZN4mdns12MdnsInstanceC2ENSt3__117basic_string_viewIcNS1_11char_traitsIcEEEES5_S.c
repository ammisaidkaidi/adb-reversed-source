// Function: _ZN4mdns12MdnsInstanceC2ENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_S5_
// Address: 0040eb10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4mdns12MdnsInstanceC2ENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_S5_
               (long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
               undefined8 param_6,undefined8 param_7,ulong param_8)

{
  code *pcVar1;
  char *pcVar2;
  long lVar3;
  
  if (param_3 < 0xfffffffffffffff7) {
    if (param_3 < 0x17) {
      *(char *)param_1 = (char)param_3 * '\x02';
      pcVar2 = (char *)((long)param_1 + 1);
    }
    else {
      lVar3 = 0x1a;
      if ((param_3 | 7) != 0x17) {
        lVar3 = (param_3 | 7) + 1;
      }
      pcVar2 = (char *)_Znwm(lVar3);
      *param_1 = lVar3 + 1;
      param_1[1] = param_3;
      param_1[2] = (long)pcVar2;
    }
    func_0x0099bd90(pcVar2,param_2,param_3);
    pcVar2[param_3] = '\0';
    if (param_5 < 0xfffffffffffffff7) {
      if (param_5 < 0x17) {
        *(char *)(param_1 + 3) = (char)param_5 * '\x02';
        pcVar2 = (char *)((long)param_1 + 0x19);
      }
      else {
        lVar3 = 0x1a;
        if ((param_5 | 7) != 0x17) {
          lVar3 = (param_5 | 7) + 1;
        }
        pcVar2 = (char *)_Znwm(lVar3);
        param_1[3] = lVar3 + 1;
        param_1[4] = param_5;
        param_1[5] = (long)pcVar2;
      }
      func_0x0099bd90(pcVar2,param_4,param_5);
      pcVar2[param_5] = '\0';
      if (param_8 < 0xfffffffffffffff7) {
        if (param_8 < 0x17) {
          *(char *)(param_1 + 6) = (char)param_8 * '\x02';
          pcVar2 = (char *)((long)param_1 + 0x31);
        }
        else {
          lVar3 = 0x1a;
          if ((param_8 | 7) != 0x17) {
            lVar3 = (param_8 | 7) + 1;
          }
          pcVar2 = (char *)_Znwm(lVar3);
          param_1[6] = lVar3 + 1;
          param_1[7] = param_8;
          param_1[8] = (long)pcVar2;
        }
        func_0x0099bd90(pcVar2,param_7,param_8);
        pcVar2[param_8] = '\0';
        return;
      }
    }
  }
  func_0x0032e8f0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


