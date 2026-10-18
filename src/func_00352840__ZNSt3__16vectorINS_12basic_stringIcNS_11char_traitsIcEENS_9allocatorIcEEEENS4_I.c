// Function: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE16__init_with_sizeB8nn220000IPPKcSC_EEvT_T0_m
// Address: 00352840
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE16__init_with_sizeB8nn220000IPPKcSC_EEvT_T0_m
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  
  if (param_4 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_4) {
code_r0x00352956:
      func_0x00330ca0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar3 = (long *)_Znwm(param_4 * 0x18);
    *param_1 = plVar3;
    param_1[1] = plVar3;
    param_1[2] = plVar3 + param_4 * 3;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      uVar1 = *param_2;
      uVar4 = func_0x0099bcf0(uVar1);
      if (0xfffffffffffffff6 < uVar4) {
        func_0x0032e8f0();
        goto code_r0x00352956;
      }
      if (uVar4 < 0x17) {
        *(char *)plVar3 = (char)uVar4 * '\x02';
        pcVar5 = (char *)((long)plVar3 + 1);
      }
      else {
        lVar6 = (uVar4 | 7) + 1;
        if ((uVar4 | 7) == 0x17) {
          lVar6 = 0x1a;
        }
        pcVar5 = (char *)_Znwm(lVar6);
        *plVar3 = lVar6 + 1;
        plVar3[1] = uVar4;
        plVar3[2] = (long)pcVar5;
      }
      func_0x0099bd90(pcVar5,uVar1,uVar4);
      pcVar5[uVar4] = '\0';
      plVar3 = plVar3 + 3;
    }
    param_1[1] = plVar3;
  }
  return;
}


