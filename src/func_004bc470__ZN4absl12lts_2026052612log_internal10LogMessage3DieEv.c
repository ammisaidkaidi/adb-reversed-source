// Function: _ZN4absl12lts_2026052612log_internal10LogMessage3DieEv
// Address: 004bc470
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN4absl12lts_2026052612log_internal10LogMessage3DieEv(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lVar8 = param_1;
  _ZN4absl12lts_2026052612log_internal13FlushLogSinksEv();
  if (*(char *)(*(long *)(param_1 + 8) + 0x81) == '\x01') {
    _ZN4absl12lts_2026052612log_internal10LogMessage11FailQuietlyEv();
  }
  _ZN4absl12lts_2026052612log_internal10LogMessage21FailWithoutStackTraceEv();
  lVar9 = func_0x0099bcf0();
  lStack_50 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_48 = param_1;
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_(&uStack_70,param_2);
  if ((char)uStack_70 == '\x01') {
    lVar2 = *(long *)(*param_2 + -0x18);
    lVar1 = (long)param_2 + lVar2;
    uVar3 = *(undefined8 *)((long)param_2 + lVar2 + 0x28);
    lVar10 = lVar8;
    if ((*(uint *)((long)param_2 + lVar2 + 8) & 0xb0) == 0x20) {
      lVar10 = lVar9 + lVar8;
    }
    iVar6 = *(int *)((long)param_2 + lVar2 + 0x90);
    if (iVar6 == -1) {
      _ZNKSt3__18ios_base6getlocEv(auStack_58,lVar1);
      plVar7 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(auStack_58,_ZNSt3__15ctypeIcE2idE);
      cVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,0x20);
      _ZNSt3__16localeD2Ev(auStack_58);
      iVar6 = (int)cVar5;
      *(int *)(lVar1 + 0x90) = iVar6;
    }
    lVar8 = func_0x0032ec60(uVar3,lVar8,lVar10,lVar9 + lVar8,lVar1,(int)(char)iVar6);
    if (lVar8 == 0) {
      _ZNSt3__18ios_base5clearEj
                ((long)param_2 + *(long *)(*param_2 + -0x18),
                 *(uint *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x20) | 5);
    }
  }
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev(&uStack_70);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_50) {
    return param_2;
  }
  func_0x0099bd00();
  pcVar4 = (code *)swi(3);
  plVar7 = (long *)(*pcVar4)();
  return plVar7;
}


