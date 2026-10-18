// Function: _ZN10atransport6AttachEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 003ea820
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN10atransport6AttachEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
          (long param_1,ulong *param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long unaff_R12;
  long in_FS_OFFSET;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulong uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uStack_5c = *puVar5;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0017a1e0,0x474,1,0,0xffffffff);
      unaff_R12 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) goto code_r0x003eaafa;
      lVar3 = *(long *)(param_1 + 0x38);
      goto code_r0x003eaafe;
    }
  }
  do {
    lVar3 = _Z19fdevent_get_ambientv();
    if (*(char *)(lVar3 + 0x10) == '\x01') {
      lVar3 = _Z19fdevent_get_ambientv();
      lVar4 = _ZN7android4base11GetThreadIdEv();
      unaff_R12 = *(long *)(lVar3 + 8);
      if (unaff_R12 != lVar4) {
        do {
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_58,&UNK_0017a1e0,0x475,6,0,0xffffffff);
          uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_58);
          uVar6 = func_0x0032eb30(uVar6,&UNK_00165d45,0xe);
          uVar6 = func_0x0032eb30(uVar6,&UNK_00162e7f,0x29);
          uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
          uVar6 = func_0x0032eb30(uVar6,&UNK_0015aef8,2);
          uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
          uVar6 = func_0x0032eb30(uVar6,&UNK_00183451,0x1c);
          uVar6 = func_0x0032eb30(uVar6,&UNK_0017ed76,0x2c);
          uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,unaff_R12);
          uVar6 = func_0x0032eb30(uVar6,&UNK_00165f20,0x1f);
          uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,lVar4);
          func_0x0032eb30(uVar6,&UNK_0017b788,2);
          _ZN7android4base10LogMessageD2Ev(&uStack_58);
        } while( true );
      }
    }
    puVar5 = (undefined4 *)(param_1 + 0x1a0);
    _ZNSt3__15mutex4lockEv(puVar5);
    cVar1 = (**(code **)(**(long **)(param_1 + 0x158) + 0x38))();
    if (cVar1 == '\0') {
      func_0x0032ea60(param_2,&UNK_0015c8cf);
      _ZNSt3__115recursive_mutex6unlockEv(puVar5);
code_r0x003ea958:
      uVar6 = 0;
    }
    else {
      _ZNSt3__115recursive_mutex6unlockEv(puVar5);
      if (*(int *)(param_1 + 0x110) != 4) {
        if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
          param_1 = param_1 + 0x29;
        }
        else {
          param_1 = *(long *)(param_1 + 0x38);
        }
        _ZN7android4base12StringPrintfEPKcz(&uStack_58,&UNK_00164462,param_1);
        if ((*param_2 & 1) != 0) {
          _ZdaPvSt11align_val_t(param_2[2],*param_2 & 0xfffffffffffffffe);
        }
        param_2[2] = uStack_48;
        *(uint *)param_2 = uStack_58;
        *(undefined4 *)((long)param_2 + 4) = uStack_54;
        *(undefined4 *)(param_2 + 1) = uStack_50;
        *(undefined4 *)((long)param_2 + 0xc) = uStack_4c;
        goto code_r0x003ea958;
      }
      _ZN10atransport9ResetKeysEv(param_1);
      _ZNSt3__15mutex4lockEv(puVar5);
      uVar2 = (**(code **)(**(long **)(param_1 + 0x158) + 0x40))
                        (*(long **)(param_1 + 0x158),param_2);
      param_2 = (ulong *)(ulong)uVar2;
      _ZNSt3__115recursive_mutex6unlockEv(puVar5);
      if ((char)uVar2 == '\0') goto code_r0x003ea958;
      _Z12send_connectP10atransport(param_1);
      uVar6 = 1;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return uVar6;
    }
    func_0x0099bd00();
code_r0x003eaafa:
    lVar3 = param_1 + 0x29;
code_r0x003eaafe:
    _ZN7android4base12StringPrintfEPKcz(&uStack_58,&UNK_00166001,lVar3);
    func_0x0032e5a0(unaff_R12,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_40);
    *puVar5 = uStack_5c;
  } while( true );
}


