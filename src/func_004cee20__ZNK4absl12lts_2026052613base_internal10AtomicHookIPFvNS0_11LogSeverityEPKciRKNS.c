// Function: _ZNK4absl12lts_2026052613base_internal10AtomicHookIPFvNS0_11LogSeverityEPKciRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEEEclIJS3_RKS5_iRA34_S4_EEEvDpOT_
// Address: 004cee20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK4absl12lts_2026052613base_internal10AtomicHookIPFvNS0_11LogSeverityEPKciRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEEEclIJS3_RKS5_iRA34_S4_EEEvDpOT_
               (undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = (code *)*param_1;
  uVar1 = *param_2;
  uVar4 = *param_3;
  uVar2 = *param_4;
  uVar5 = func_0x0099bcf0(param_5);
  if (uVar5 < 0xfffffffffffffff7) {
    if (uVar5 < 0x17) {
      uStack_50 = CONCAT71(uStack_50._1_7_,(char)uVar5 * '\x02');
      lVar6 = (long)&uStack_50 + 1;
    }
    else {
      lVar7 = 0x1a;
      if ((uVar5 | 7) != 0x17) {
        lVar7 = (uVar5 | 7) + 1;
      }
      lVar6 = _Znwm(lVar7);
      uStack_50 = lVar7 + 1;
      uStack_48 = uVar5;
      lStack_40 = lVar6;
    }
    func_0x0099bda0(lVar6,param_5,uVar5);
    *(undefined1 *)(lVar6 + uVar5) = 0;
    (*pcVar3)(uVar1,uVar4,uVar2,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_40,uStack_50 & 0xfffffffffffffffe);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


