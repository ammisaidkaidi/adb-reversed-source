// Function: _ZN4absl12lts_2026052612log_internal22MakeCheckOpValueStringERNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEEPKv
// Address: 004fc6d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN4absl12lts_2026052612log_internal22MakeCheckOpValueStringERNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEEPKv
                 (long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  long in_FS_OFFSET;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  char acStack_40 [8];
  long lStack_38;
  
  if (param_2 != 0) {
    puStack_50 = &UNK_008bd061;
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_(acStack_40,param_1);
    if (acStack_40[0] == '\x01') {
      puStack_50 = &UNK_008bd07e;
      _ZNKSt3__18ios_base6getlocEv(auStack_48,*(long *)(*param_1 + -0x18) + (long)param_1);
      puStack_50 = &UNK_008bd08d;
      plVar6 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE
                                 (auStack_48,
                                  _ZNSt3__17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE
                                 );
      puStack_50 = &UNK_008bd098;
      _ZNSt3__16localeD2Ev(auStack_48);
      lVar1 = *(long *)(*param_1 + -0x18);
      lVar8 = (long)param_1 + lVar1;
      uVar2 = *(undefined8 *)((long)param_1 + lVar1 + 0x28);
      iVar5 = *(int *)((long)param_1 + lVar1 + 0x90);
      if (iVar5 == -1) {
        puStack_50 = &UNK_008bd0c2;
        _ZNKSt3__18ios_base6getlocEv(auStack_48,lVar8);
        puStack_50 = &UNK_008bd0d1;
        plVar7 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(auStack_48,_ZNSt3__15ctypeIcE2idE);
        puStack_50 = &UNK_008bd0df;
        cVar4 = (**(code **)(*plVar7 + 0x38))(plVar7,0x20);
        puStack_50 = &UNK_008bd0e9;
        _ZNSt3__16localeD2Ev(auStack_48);
        iVar5 = (int)cVar4;
        *(int *)(lVar8 + 0x90) = iVar5;
      }
      puStack_50 = &UNK_008bd10a;
      lVar8 = (**(code **)(*plVar6 + 0x50))(plVar6,uVar2,lVar8,(int)(char)iVar5,param_2);
      if (lVar8 == 0) {
        puStack_50 = &UNK_008bd126;
        _ZNSt3__18ios_base5clearEj
                  ((long)param_1 + *(long *)(*param_1 + -0x18),
                   *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) | 5);
      }
    }
    puStack_50 = &UNK_008bd130;
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev(acStack_40);
    return param_1;
  }
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_58 = 0;
  puStack_50 = (undefined *)0x0;
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_(&uStack_58,param_1);
  if ((char)uStack_58 == '\x01') {
    lVar1 = *(long *)(*param_1 + -0x18);
    lVar8 = (long)param_1 + lVar1;
    uVar2 = *(undefined8 *)((long)param_1 + lVar1 + 0x28);
    puVar9 = &UNK_0018b202;
    if ((*(uint *)((long)param_1 + lVar1 + 8) & 0xb0) == 0x20) {
      puVar9 = &UNK_0018b208;
    }
    iVar5 = *(int *)((long)param_1 + lVar1 + 0x90);
    if (iVar5 == -1) {
      _ZNKSt3__18ios_base6getlocEv(acStack_40,lVar8);
      plVar6 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(acStack_40,_ZNSt3__15ctypeIcE2idE);
      cVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
      _ZNSt3__16localeD2Ev(acStack_40);
      iVar5 = (int)cVar4;
      *(int *)(lVar8 + 0x90) = iVar5;
    }
    lVar8 = func_0x0032ec60(uVar2,&UNK_0018b202,puVar9,&UNK_0018b208,lVar8,(int)(char)iVar5);
    if (lVar8 == 0) {
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


