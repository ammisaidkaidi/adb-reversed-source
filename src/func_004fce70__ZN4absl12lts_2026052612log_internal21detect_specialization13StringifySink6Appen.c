// Function: _ZN4absl12lts_2026052612log_internal21detect_specialization13StringifySink6AppendENSt3__117basic_string_viewIcNS4_11char_traitsIcEEEE
// Address: 004fce70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN4absl12lts_2026052612log_internal21detect_specialization13StringifySink6AppendENSt3__117basic_string_viewIcNS4_11char_traitsIcEEEE
                 (undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  plVar8 = (long *)*param_1;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_58 = 0;
  uStack_50 = 0;
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_(&uStack_58,plVar8);
  if ((char)uStack_58 == '\x01') {
    lVar1 = *(long *)(*plVar8 + -0x18);
    lVar7 = (long)plVar8 + lVar1;
    uVar2 = *(undefined8 *)((long)plVar8 + lVar1 + 0x28);
    lVar9 = param_2;
    if ((*(uint *)((long)plVar8 + lVar1 + 8) & 0xb0) == 0x20) {
      lVar9 = param_3 + param_2;
    }
    iVar5 = *(int *)((long)plVar8 + lVar1 + 0x90);
    if (iVar5 == -1) {
      _ZNKSt3__18ios_base6getlocEv(auStack_40,lVar7);
      plVar6 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(auStack_40,_ZNSt3__15ctypeIcE2idE);
      cVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
      _ZNSt3__16localeD2Ev(auStack_40);
      iVar5 = (int)cVar4;
      *(int *)(lVar7 + 0x90) = iVar5;
    }
    lVar7 = func_0x0032ec60(uVar2,param_2,lVar9,param_3 + param_2,lVar7,(int)(char)iVar5);
    if (lVar7 == 0) {
      _ZNSt3__18ios_base5clearEj
                ((long)plVar8 + *(long *)(*plVar8 + -0x18),
                 *(uint *)((long)plVar8 + *(long *)(*plVar8 + -0x18) + 0x20) | 5);
    }
  }
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev(&uStack_58);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return plVar8;
  }
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  plVar8 = (long *)(*pcVar3)();
  return plVar8;
}


