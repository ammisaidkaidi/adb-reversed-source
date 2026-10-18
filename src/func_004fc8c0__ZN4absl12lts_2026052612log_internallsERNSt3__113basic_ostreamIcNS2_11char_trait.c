// Function: _ZN4absl12lts_2026052612log_internallsERNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEENS1_18UnprintableWrapperE
// Address: 004fc8c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN4absl12lts_2026052612log_internallsERNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEENS1_18UnprintableWrapperE
                 (long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  long in_FS_OFFSET;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_58 = 0;
  uStack_50 = 0;
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_(&uStack_58,param_1);
  if ((char)uStack_58 == '\x01') {
    lVar1 = *(long *)(*param_1 + -0x18);
    lVar7 = (long)param_1 + lVar1;
    uVar2 = *(undefined8 *)((long)param_1 + lVar1 + 0x28);
    puVar8 = &UNK_0016f20f;
    if ((*(uint *)((long)param_1 + lVar1 + 8) & 0xb0) == 0x20) {
      puVar8 = &UNK_0016f21a;
    }
    iVar5 = *(int *)((long)param_1 + lVar1 + 0x90);
    if (iVar5 == -1) {
      _ZNKSt3__18ios_base6getlocEv(auStack_40,lVar7);
      plVar6 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(auStack_40,_ZNSt3__15ctypeIcE2idE);
      cVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
      _ZNSt3__16localeD2Ev(auStack_40);
      iVar5 = (int)cVar4;
      *(int *)(lVar7 + 0x90) = iVar5;
    }
    lVar7 = func_0x0032ec60(uVar2,&UNK_0016f20f,puVar8,&UNK_0016f21a,lVar7,(int)(char)iVar5);
    if (lVar7 == 0) {
      _ZNSt3__18ios_base5clearEj
                ((long)param_1 + *(long *)(*param_1 + -0x18),
                 *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) | 5);
    }
  }
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev(&uStack_58);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  plVar6 = (long *)(*pcVar3)();
  return plVar6;
}


